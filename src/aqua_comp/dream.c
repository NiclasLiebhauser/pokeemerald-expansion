#include "aqua_comp/hooks.h"
#include "constants/field_weather.h"
#include "constants/maps.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "field_screen_effect.h"
#include "field_weather.h"
#include "global.h"
#include "main.h"
#include "overworld.h"
#include "palette.h"
#include "script.h"
#include "task.h"

static void aqua_comp_dream_end_task(u8 task_id)
{
	if (gPaletteFade.active)
		return;

	UnfreezeObjectEvents();
	UnlockPlayerFieldControls();
	DestroyTask(task_id);
}

static void aqua_comp_dream_end_cb()
{
	FlagClear(FLAG_HIDE_MAP_NAME_POPUP);
	Overworld_PlaySpecialMapMusic();
	FadeScreen(FADE_FROM_WHITE, 5);
	UnlockPlayerFieldControls();
	UnfreezeObjectEvents();
	gFieldCallback = NULL;
}

static void aqua_comp_dream_task(u8 task_id)
{
	struct Task *t = &gTasks[task_id];
	s16 *state = &t->data[0];

	if (gPaletteFade.active)
		return;

	if (!(*state)) {
		FadeScreen(FADE_TO_WHITE, 0);
		(*state)++;
	} else {
		Overworld_ResetStateAfterFly();
		FlagSet(FLAG_HIDE_MAP_NAME_POPUP);
		WarpIntoMap();
		gFieldCallback = aqua_comp_dream_end_cb;
		SetMainCallback2(CB2_LoadMap);
		DestroyTask(task_id);
	}
}

static void aqua_comp_dream_cb(void)
{
	FadeInFromBlack();
	CreateTask(aqua_comp_dream_task, 0);
	LockPlayerFieldControls();
	FreezeObjectEvents();
	gFieldCallback = NULL;
}

static bool8 aqua_comp_valid_dream_loc(const struct MapLayout *map_layout,
				       const struct MapEvents *map_events,
				       u16 x, u16 y)
{
	u16 block;
	u8 collision;
	u16 i;

	if (x < 0 || x >= map_layout->width || y < 0 || y >= map_layout->height)
		return FALSE;

	block = map_layout->map[x + map_layout->width * y];
	if (block == MAPGRID_UNDEFINED)
		return FALSE;

	/* check for impassable terrain */
	collision = (block & MAPGRID_COLLISION_MASK) >> MAPGRID_COLLISION_SHIFT;
	if (collision != COLLISION_NONE)
		return FALSE;

	/* check for any object event collissions */
	for (i = 0; i < map_events->objectEventCount; i++) {
		const struct ObjectEventTemplate *t = &map_events->objectEvents[i];

		if (t->x == x && t->y == y)
			return FALSE;
	}

	return TRUE;
}

static bool8 aqua_comp_next_dream_loc(u16 *in_out_x, u16 *in_out_y, u16 *i,
				      u16 origin_x, u16 origin_y)
{
	static const struct Coords8 c[] = {
		{0, 0}, {-1, 0}, {1, 0}, {0, -1}, {0, 1},
		{-1, -1}, {1, -1}, {1, -1}, {1, 1},
	};

	if (*i > ARRAY_COUNT(c))
		return FALSE;

	*in_out_x = (s16)origin_x + c[*i].x;
	*in_out_y = (s16)origin_y + c[*i].y;

	(*i)++;

	return TRUE;
}

static bool8 aqua_comp_select_dream_loc(const struct MapLayout *map_layout,
					const struct MapEvents *map_events,
					u16 *in_out_x, u16 *in_out_y)
{
	u16 origin_x = *in_out_x;
	u16 origin_y = *in_out_y;
	u16 i = 0;

	while (aqua_comp_next_dream_loc(in_out_x, in_out_y, &i, origin_x, origin_y)) {
		if (aqua_comp_valid_dream_loc(map_layout, map_events, *in_out_x, *in_out_y))
			return TRUE;
	}

	return FALSE;
}

bool8 aqua_comp_set_up_dream_toggle(void)
{
	const struct MapHeader *map_header;
	const struct MapLayout *map_layout;
	const struct MapEvents *map_events;
	u8 target_map_group;
	u8 target_map_id;
	u16 x;
	u16 y;

	target_map_group = gMapHeader.DREAM_MAP_GROUP;
	target_map_id = gMapHeader.DREAM_MAP_ID;

	map_header = Overworld_GetMapHeaderByGroupAndId(
		target_map_group, target_map_id);
	map_events = map_header->events;
	map_layout = GetMapLayout(map_header->mapLayoutId);
	if (!map_header || !map_layout)
		return FALSE;

	x = gSaveBlock1Ptr->pos.x;
	y = gSaveBlock1Ptr->pos.y;

	if (!aqua_comp_select_dream_loc(map_layout, map_events, &x, &y))
		return FALSE;

	SetWarpDestination(target_map_group, target_map_id,
			   WARP_ID_NONE, x, y);

	return TRUE;
}

void aqua_comp_toggle_dream_mode(void)
{
	SetMainCallback2(CB2_ReturnToField);
	gFieldCallback = aqua_comp_dream_cb;
}
