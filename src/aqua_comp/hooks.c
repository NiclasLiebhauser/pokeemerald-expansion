#include "aqua_comp/hooks.h"

#include "constants/map_groups.h"
#include "global.h"
#include "money.h"
#include "overworld.h"

static void warp_to_game_start_location(void)
{
	const int nightshade_town_start_x = 11;
	const int nightshade_town_start_y = 13;

	SetWarpDestination(MAP_GROUP(MAP_NIGHTSHADE_TOWN),
			   MAP_NUM(MAP_NIGHTSHADE_TOWN), WARP_ID_NONE,
			   nightshade_town_start_x, nightshade_town_start_y);
	WarpIntoMap();
}

void aqua_comp_init_new_game(void)
{
	const int nightshade_initial_budget = 500;

	SetMoney(&gSaveBlock1Ptr->money, nightshade_initial_budget);
	warp_to_game_start_location();
}

