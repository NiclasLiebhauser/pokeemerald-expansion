#include "aqua_comp/hooks.h"

#include "global.h"
#include "constants/flags.h"
#include "constants/map_groups.h"
#include "constants/moves.h"
#include "event_data.h"
#include "global.fieldmap.h"
#include "global.h"
#include "main.h"
#include "money.h"
#include "overworld.h"
#include "pokemon.h"

static void warp_to_game_start_location(void)
{
	const int nightshade_town_start_x = 11;
	const int nightshade_town_start_y = 13;

	SetWarpDestination(MAP_GROUP(MAP_NIGHTSHADE_TOWN),
			   MAP_NUM(MAP_NIGHTSHADE_TOWN), WARP_ID_NONE,
			   nightshade_town_start_x, nightshade_town_start_y);
	WarpIntoMap();
}

static void aqua_comp_prepare_startup_team(void) {
	struct Pokemon starter;

	CreateMon(&starter, 10, 10, 10, 10, 10, 10, 10);
	SetMonMoveSlot(&starter, MOVE_DREAM, 0);
	GiveMonToPlayer(&starter);
}

void aqua_comp_init_new_game(void)
{
	const int nightshade_initial_budget = 500;

	SetMoney(&gSaveBlock1Ptr->money, nightshade_initial_budget);
	warp_to_game_start_location();
	aqua_comp_prepare_startup_team();

	FlagSet(FLAG_SYS_POKEMON_GET);
	FlagSet(FLAG_SYS_B_DASH);
}

bool8 aqua_comp_set_up_dream_toggle(void)
{
	const struct MapHeader *map_header;
	const struct MapLayout *map_layout;
	u16 x;
	u16 y;
	u16 block;
	u8 collision;

	map_header = Overworld_GetMapHeaderByGroupAndId(
		MAP_GROUP(MAP_NIGHTSHADE_TOWN),
		MAP_NUM(MAP_NIGHTSHADE_TOWN));
	map_layout = GetMapLayout(map_header->mapLayoutId);
	if (!map_header || !map_layout)
		return FALSE;

	x = gSaveBlock1Ptr->pos.x;
	y = gSaveBlock1Ptr->pos.y + 2; // TEST

	if (x < 0 || x >= map_layout->width || y < 0 || y >= map_layout->height)
		return FALSE;

	block = map_layout->map[x + map_layout->width * y];
	if (block == MAPGRID_UNDEFINED)
		return FALSE;

	collision = (block & MAPGRID_COLLISION_MASK) >> MAPGRID_COLLISION_SHIFT;

	if (collision != COLLISION_NONE)
		return FALSE;

	SetWarpDestination(MAP_GROUP(MAP_NIGHTSHADE_TOWN),
			   MAP_NUM(MAP_NIGHTSHADE_TOWN),
			   WARP_ID_NONE, x, y);

	return TRUE;
}

void aqua_comp_toggle_dream_mode(u8 task_id)
{
	WarpIntoMap();
	Overworld_ResetStateAfterFly();
	SetMainCallback2(CB2_LoadMap);
	gFieldCallback = NULL;
}
