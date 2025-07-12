#include "aqua_comp/hooks.h"
#include "constants/flags.h"
#include "constants/map_groups.h"
#include "constants/moves.h"
#include "event_data.h"
#include "global.h"
#include "global.h"
#include "money.h"
#include "overworld.h"
#include "pokemon.h"

static void warp_to_game_start_location(void)
{
	const int nightshade_town_start_x = 10;
	const int nightshade_town_start_y = 16;

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
