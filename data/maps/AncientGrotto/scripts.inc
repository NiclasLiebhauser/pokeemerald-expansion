AncientGrotto_MapScripts::
# 4 "data/maps/AncientGrotto/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AncientGrotto_OnResume
# 5 "data/maps/AncientGrotto/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AncientGrotto_OnTransition
	.byte 0


AncientGrotto_OnResume::
# 9 "data/maps/AncientGrotto/scripts.pory"
	setdivewarp MAP_UNDERWATER_ANCIENT_GROTTO, 7, 6
# 10 "data/maps/AncientGrotto/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, AncientGrotto_EventScript_TryRemoveKyogre
	end


AncientGrotto_OnTransition::
# 15 "data/maps/AncientGrotto/scripts.pory"
	call_if_unset FLAG_DEFEATED_KYOGRE, AncientGrotto_EventScript_Enable_Kyogre_Battle
# 16 "data/maps/AncientGrotto/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, AncientGrotto_EventScript_Disable_Kyogre_Battle
	end


AncientGrotto_EventScript_Enable_Kyogre_Battle::
# 21 "data/maps/AncientGrotto/scripts.pory"
	setvar VAR_TEMP_1, 0
	return


AncientGrotto_EventScript_Disable_Kyogre_Battle::
# 26 "data/maps/AncientGrotto/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


AncientGrotto_EventScript_TryRemoveKyogre::
# 31 "data/maps/AncientGrotto/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 32 "data/maps/AncientGrotto/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, AncientGrotto_EventScript_RemoveKyogre
	return


AncientGrotto_EventScript_RemoveKyogre::
# 37 "data/maps/AncientGrotto/scripts.pory"
	removeobject 1
	return


AncientGrotto_EventScript_Kyogre::
# 42 "data/maps/AncientGrotto/scripts.pory"
	lockall
# 44 "data/maps/AncientGrotto/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 45 "data/maps/AncientGrotto/scripts.pory"
	waitmovement 0
# 46 "data/maps/AncientGrotto/scripts.pory"
	applymovement 1, AncientGrotto_Movement_KyogreApproach
# 47 "data/maps/AncientGrotto/scripts.pory"
	waitmovement 0
# 48 "data/maps/AncientGrotto/scripts.pory"
	waitse
# 49 "data/maps/AncientGrotto/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 50 "data/maps/AncientGrotto/scripts.pory"
	delay 40
# 51 "data/maps/AncientGrotto/scripts.pory"
	waitmoncry
# 52 "data/maps/AncientGrotto/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 53 "data/maps/AncientGrotto/scripts.pory"
	setwildbattle SPECIES_KYOGRE, 50, ITEM_BLUE_ORB
# 54 "data/maps/AncientGrotto/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 55 "data/maps/AncientGrotto/scripts.pory"
	setflag FLAG_NO_CATCHING
# 56 "data/maps/AncientGrotto/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 1
# 57 "data/maps/AncientGrotto/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 58 "data/maps/AncientGrotto/scripts.pory"
	waitstate
# 59 "data/maps/AncientGrotto/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 60 "data/maps/AncientGrotto/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 61 "data/maps/AncientGrotto/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 62 "data/maps/AncientGrotto/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_WON, AncientGrotto_EventScript_DefeatedKyogre
# 63 "data/maps/AncientGrotto/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_RAN, AncientGrotto_EventScript_RanKyogre
# 64 "data/maps/AncientGrotto/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AncientGrotto_EventScript_RanKyogre
# 65 "data/maps/AncientGrotto/scripts.pory"
	setvar VAR_TEMP_1, 1
# 66 "data/maps/AncientGrotto/scripts.pory"
	releaseall
	end


AncientGrotto_EventScript_DefeatedKyogre::
# 71 "data/maps/AncientGrotto/scripts.pory"
	setflag FLAG_DEFEATED_KYOGRE
# 72 "data/maps/AncientGrotto/scripts.pory"
	setvar VAR_TEMP_1, 1
# 73 "data/maps/AncientGrotto/scripts.pory"
	call Common_EventScript_RemoveStaticPokemon
	end


AncientGrotto_EventScript_RanKyogre::
# 78 "data/maps/AncientGrotto/scripts.pory"
	fadescreen FADE_TO_BLACK
# 79 "data/maps/AncientGrotto/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 80 "data/maps/AncientGrotto/scripts.pory"
	waitmovement 0
# 81 "data/maps/AncientGrotto/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 82 "data/maps/AncientGrotto/scripts.pory"
	waitmovement 0
# 83 "data/maps/AncientGrotto/scripts.pory"
	applymovement 1, AncientGrotto_Movement_KyogreReset
# 84 "data/maps/AncientGrotto/scripts.pory"
	waitmovement 0
# 85 "data/maps/AncientGrotto/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 86 "data/maps/AncientGrotto/scripts.pory"
	releaseall
	end


# 90 "data/maps/AncientGrotto/scripts.pory"
AncientGrotto_Movement_KyogreApproach:
# 91 "data/maps/AncientGrotto/scripts.pory"
	init_affine_anim
# 92 "data/maps/AncientGrotto/scripts.pory"
	walk_down_start_affine
# 93 "data/maps/AncientGrotto/scripts.pory"
	delay_16
# 94 "data/maps/AncientGrotto/scripts.pory"
	delay_16
# 95 "data/maps/AncientGrotto/scripts.pory"
	walk_down_affine
# 96 "data/maps/AncientGrotto/scripts.pory"
	delay_16
# 97 "data/maps/AncientGrotto/scripts.pory"
	delay_16
# 98 "data/maps/AncientGrotto/scripts.pory"
	walk_down_affine
# 99 "data/maps/AncientGrotto/scripts.pory"
	step_end

# 102 "data/maps/AncientGrotto/scripts.pory"
AncientGrotto_Movement_KyogreReset:
# 103 "data/maps/AncientGrotto/scripts.pory"
	walk_up
# 103 "data/maps/AncientGrotto/scripts.pory"
	walk_up
# 103 "data/maps/AncientGrotto/scripts.pory"
	walk_up
	step_end
