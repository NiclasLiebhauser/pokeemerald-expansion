#include "aqua_comp/hooks.h"
#include "constants/flags.h"
#include "constants/map_groups.h"
#include "constants/moves.h"
#include "constants/species.h"
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
	u8 machamp_nickname[POKEMON_NAME_LENGTH + 1] = _("Arnold");

	CreateMon(&starter, SPECIES_SNORLAX, 53, USE_RANDOM_IVS, FALSE, 0,
		  OT_ID_PLAYER_ID, 0);
	SetMonMoveSlot(&starter, MOVE_DREAM, 3);
	GiveMonToPlayer(&starter);

	CreateMon(&starter, SPECIES_BELLOSSOM, 44, USE_RANDOM_IVS, FALSE, 0,
		  OT_ID_PLAYER_ID, 0);
	SetMonMoveSlot(&starter, MOVE_PETAL_DANCE, 0);
	SetMonMoveSlot(&starter, MOVE_ACID, 1);
	SetMonMoveSlot(&starter, MOVE_SLEEP_POWDER, 2);
	SetMonMoveSlot(&starter, MOVE_PROTECT, 3);
	GiveMonToPlayer(&starter);

	CreateMon(&starter, SPECIES_MACHAMP, 46, USE_RANDOM_IVS, FALSE, 0,
		  OT_ID_PLAYER_ID, 0);
	SetMonData(&starter, MON_DATA_NICKNAME, machamp_nickname);
	SetMonMoveSlot(&starter, MOVE_THIEF, 0);
	SetMonMoveSlot(&starter, MOVE_VITAL_THROW, 1);
	SetMonMoveSlot(&starter, MOVE_BRICK_BREAK, 2);
	SetMonMoveSlot(&starter, MOVE_ROCK_TOMB, 3);
	GiveMonToPlayer(&starter);

	CreateMon(&starter, SPECIES_ZIGZAGOON, 37, USE_RANDOM_IVS, FALSE, 0,
		  OT_ID_PLAYER_ID, 0);
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
	for (u32 i = 0; i < ARRAY_COUNT(gBadgeFlags); i++)
		FlagSet(gBadgeFlags[i]);
}
