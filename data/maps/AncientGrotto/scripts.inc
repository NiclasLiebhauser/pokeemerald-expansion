AncientGrotto_MapScripts::
# 4 "data/maps/AncientGrotto/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AncientGrotto_OnResume
# 5 "data/maps/AncientGrotto/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AncientGrotto_OnTransition
# 6 "data/maps/AncientGrotto/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AncientGrotto_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AncientGrotto_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/AncientGrotto/scripts.pory"
	map_script_2 VAR_TEMP_2, 1, AncientGrotto_EventScript_InformPowerUp
	.2byte 0


AncientGrotto_OnResume::
# 12 "data/maps/AncientGrotto/scripts.pory"
	setdivewarp MAP_UNDERWATER_ANCIENT_GROTTO, 7, 6
# 13 "data/maps/AncientGrotto/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, AncientGrotto_EventScript_TryRemoveKyogre
	end


AncientGrotto_OnTransition::
# 18 "data/maps/AncientGrotto/scripts.pory"
	call_if_unset FLAG_DEFEATED_KYOGRE, AncientGrotto_EventScript_Enable_Kyogre_Battle
# 19 "data/maps/AncientGrotto/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, AncientGrotto_EventScript_Disable_Kyogre_Battle
	end


AncientGrotto_EventScript_InformPowerUp::
# 24 "data/maps/AncientGrotto/scripts.pory"
	lock
# 25 "data/maps/AncientGrotto/scripts.pory"
	msgbox AncientGrotto_EventScript_InformPowerUp_Text_0
# 26 "data/maps/AncientGrotto/scripts.pory"
	setvar VAR_TEMP_2, 0
# 27 "data/maps/AncientGrotto/scripts.pory"
	release
	end


AncientGrotto_EventScript_Enable_Kyogre_Battle::
# 32 "data/maps/AncientGrotto/scripts.pory"
	setvar VAR_TEMP_1, 0
	return


AncientGrotto_EventScript_Disable_Kyogre_Battle::
# 37 "data/maps/AncientGrotto/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


AncientGrotto_EventScript_TryRemoveKyogre::
# 42 "data/maps/AncientGrotto/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 43 "data/maps/AncientGrotto/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, AncientGrotto_EventScript_RemoveKyogre
	return


AncientGrotto_EventScript_RemoveKyogre::
# 48 "data/maps/AncientGrotto/scripts.pory"
	removeobject 1
	return


AncientGrotto_EventScript_Kyogre::
# 53 "data/maps/AncientGrotto/scripts.pory"
	lockall
# 54 "data/maps/AncientGrotto/scripts.pory"
	checkitem ITEM_BLUE_ORB_OFF
# 55 "data/maps/AncientGrotto/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AncientGrotto_EventScript_Kyogre_2
AncientGrotto_EventScript_Kyogre_1:
# 80 "data/maps/AncientGrotto/scripts.pory"
	releaseall
	end

AncientGrotto_EventScript_Kyogre_2:
# 57 "data/maps/AncientGrotto/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 58 "data/maps/AncientGrotto/scripts.pory"
	waitmovement 0
# 59 "data/maps/AncientGrotto/scripts.pory"
	applymovement 1, AncientGrotto_Movement_KyogreApproach
# 60 "data/maps/AncientGrotto/scripts.pory"
	waitmovement 0
# 61 "data/maps/AncientGrotto/scripts.pory"
	waitse
# 62 "data/maps/AncientGrotto/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 63 "data/maps/AncientGrotto/scripts.pory"
	delay 40
# 64 "data/maps/AncientGrotto/scripts.pory"
	waitmoncry
# 65 "data/maps/AncientGrotto/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 66 "data/maps/AncientGrotto/scripts.pory"
	setwildbattle SPECIES_KYOGRE_PRIMAL, 55
# 67 "data/maps/AncientGrotto/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 68 "data/maps/AncientGrotto/scripts.pory"
	setflag FLAG_NO_CATCHING
# 69 "data/maps/AncientGrotto/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 0, 3, 0, 0, 3, 1, 1
# 70 "data/maps/AncientGrotto/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 71 "data/maps/AncientGrotto/scripts.pory"
	waitstate
# 72 "data/maps/AncientGrotto/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 73 "data/maps/AncientGrotto/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 74 "data/maps/AncientGrotto/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 75 "data/maps/AncientGrotto/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_WON, AncientGrotto_EventScript_DefeatedKyogre
# 76 "data/maps/AncientGrotto/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_RAN, AncientGrotto_EventScript_RanKyogre
# 77 "data/maps/AncientGrotto/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AncientGrotto_EventScript_RanKyogre
# 78 "data/maps/AncientGrotto/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto AncientGrotto_EventScript_Kyogre_1


AncientGrotto_EventScript_DefeatedKyogre::
# 85 "data/maps/AncientGrotto/scripts.pory"
	setflag FLAG_DEFEATED_KYOGRE
# 86 "data/maps/AncientGrotto/scripts.pory"
	setvar VAR_TEMP_1, 1
# 87 "data/maps/AncientGrotto/scripts.pory"
	removeitem ITEM_BLUE_ORB_OFF
# 88 "data/maps/AncientGrotto/scripts.pory"
	additem ITEM_BLUE_ORB
# 89 "data/maps/AncientGrotto/scripts.pory"
	setvar VAR_TEMP_2, 1
# 90 "data/maps/AncientGrotto/scripts.pory"
	call Common_EventScript_RemoveStaticPokemon
	end


AncientGrotto_EventScript_RanKyogre::
# 95 "data/maps/AncientGrotto/scripts.pory"
	fadescreen FADE_TO_BLACK
# 96 "data/maps/AncientGrotto/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 97 "data/maps/AncientGrotto/scripts.pory"
	waitmovement 0
# 98 "data/maps/AncientGrotto/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 99 "data/maps/AncientGrotto/scripts.pory"
	waitmovement 0
# 100 "data/maps/AncientGrotto/scripts.pory"
	applymovement 1, AncientGrotto_Movement_KyogreReset
# 101 "data/maps/AncientGrotto/scripts.pory"
	waitmovement 0
# 102 "data/maps/AncientGrotto/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 103 "data/maps/AncientGrotto/scripts.pory"
	releaseall
	end


# 107 "data/maps/AncientGrotto/scripts.pory"
AncientGrotto_Movement_KyogreApproach:
# 108 "data/maps/AncientGrotto/scripts.pory"
	init_affine_anim
# 109 "data/maps/AncientGrotto/scripts.pory"
	walk_down_start_affine
# 110 "data/maps/AncientGrotto/scripts.pory"
	delay_16
# 111 "data/maps/AncientGrotto/scripts.pory"
	delay_16
# 112 "data/maps/AncientGrotto/scripts.pory"
	walk_down_affine
# 113 "data/maps/AncientGrotto/scripts.pory"
	delay_16
# 114 "data/maps/AncientGrotto/scripts.pory"
	delay_16
# 115 "data/maps/AncientGrotto/scripts.pory"
	walk_down_affine
# 116 "data/maps/AncientGrotto/scripts.pory"
	step_end

# 119 "data/maps/AncientGrotto/scripts.pory"
AncientGrotto_Movement_KyogreReset:
# 120 "data/maps/AncientGrotto/scripts.pory"
	walk_up
# 120 "data/maps/AncientGrotto/scripts.pory"
	walk_up
# 120 "data/maps/AncientGrotto/scripts.pory"
	walk_up
	step_end

AncientGrotto_EventScript_InformPowerUp_Text_0:
# 25 "data/maps/AncientGrotto/scripts.pory"
	.string "Your BLUE ORB starts shining with new\n"
	.string "power.$"
