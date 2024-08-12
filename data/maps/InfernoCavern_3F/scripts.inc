InfernoCavern_3F_MapScripts::
# 4 "data/maps/InfernoCavern_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, InfernoCavern_3F_OnResume
# 5 "data/maps/InfernoCavern_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, InfernoCavern_3F_OnTransition
# 6 "data/maps/InfernoCavern_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, InfernoCavern_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

InfernoCavern_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/InfernoCavern_3F/scripts.pory"
	map_script_2 VAR_TEMP_2, 1, InfernoCavern_3F_EventScript_InformPowerUp
	.2byte 0


InfernoCavern_3F_OnResume::
# 12 "data/maps/InfernoCavern_3F/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, InfernoCavern_3F_EventScript_TryRemoveGroudon
	end


InfernoCavern_3F_OnTransition::
# 17 "data/maps/InfernoCavern_3F/scripts.pory"
	call_if_unset FLAG_DEFEATED_GROUDON, InfernoCavern_3F_EventScript_Enable_Groudon_Battle
# 18 "data/maps/InfernoCavern_3F/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, InfernoCavern_3F_EventScript_Disable_Groudon_Battle
	end


InfernoCavern_3F_EventScript_InformPowerUp::
# 23 "data/maps/InfernoCavern_3F/scripts.pory"
	lock
# 24 "data/maps/InfernoCavern_3F/scripts.pory"
	msgbox InfernoCavern_3F_EventScript_InformPowerUp_Text_0
# 25 "data/maps/InfernoCavern_3F/scripts.pory"
	setvar VAR_TEMP_2, 0
# 26 "data/maps/InfernoCavern_3F/scripts.pory"
	release
	end


InfernoCavern_3F_EventScript_Enable_Groudon_Battle::
# 31 "data/maps/InfernoCavern_3F/scripts.pory"
	setvar VAR_TEMP_1, 0
	return


InfernoCavern_3F_EventScript_Disable_Groudon_Battle::
# 36 "data/maps/InfernoCavern_3F/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


InfernoCavern_3F_EventScript_TryRemoveGroudon::
# 41 "data/maps/InfernoCavern_3F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 42 "data/maps/InfernoCavern_3F/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, InfernoCavern_3F_EventScript_RemoveGroudon
	return


InfernoCavern_3F_EventScript_RemoveGroudon::
# 47 "data/maps/InfernoCavern_3F/scripts.pory"
	removeobject 1
	return


InfernoCavern_3F_EventScript_Groudon::
# 52 "data/maps/InfernoCavern_3F/scripts.pory"
	lockall
# 53 "data/maps/InfernoCavern_3F/scripts.pory"
	checkitem ITEM_RED_ORB_OFF
# 54 "data/maps/InfernoCavern_3F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq InfernoCavern_3F_EventScript_Groudon_2
InfernoCavern_3F_EventScript_Groudon_1:
# 79 "data/maps/InfernoCavern_3F/scripts.pory"
	releaseall
	end

InfernoCavern_3F_EventScript_Groudon_2:
# 56 "data/maps/InfernoCavern_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 57 "data/maps/InfernoCavern_3F/scripts.pory"
	waitmovement 0
# 58 "data/maps/InfernoCavern_3F/scripts.pory"
	applymovement 1, InfernoCavern_3F_Movement_GroudonApproach
# 59 "data/maps/InfernoCavern_3F/scripts.pory"
	waitmovement 0
# 60 "data/maps/InfernoCavern_3F/scripts.pory"
	waitse
# 61 "data/maps/InfernoCavern_3F/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 62 "data/maps/InfernoCavern_3F/scripts.pory"
	delay 40
# 63 "data/maps/InfernoCavern_3F/scripts.pory"
	waitmoncry
# 64 "data/maps/InfernoCavern_3F/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 65 "data/maps/InfernoCavern_3F/scripts.pory"
	setwildbattle SPECIES_GROUDON_PRIMAL, 50
# 66 "data/maps/InfernoCavern_3F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 67 "data/maps/InfernoCavern_3F/scripts.pory"
	setflag FLAG_NO_CATCHING
# 68 "data/maps/InfernoCavern_3F/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 1
# 69 "data/maps/InfernoCavern_3F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 70 "data/maps/InfernoCavern_3F/scripts.pory"
	waitstate
# 71 "data/maps/InfernoCavern_3F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 72 "data/maps/InfernoCavern_3F/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 73 "data/maps/InfernoCavern_3F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 74 "data/maps/InfernoCavern_3F/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_WON, InfernoCavern_3F_EventScript_DefeatedGroudon
# 75 "data/maps/InfernoCavern_3F/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_RAN, InfernoCavern_3F_EventScript_RanGroudon
# 76 "data/maps/InfernoCavern_3F/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, InfernoCavern_3F_EventScript_RanGroudon
# 77 "data/maps/InfernoCavern_3F/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto InfernoCavern_3F_EventScript_Groudon_1


InfernoCavern_3F_EventScript_DefeatedGroudon::
# 84 "data/maps/InfernoCavern_3F/scripts.pory"
	setflag FLAG_DEFEATED_GROUDON
# 85 "data/maps/InfernoCavern_3F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 86 "data/maps/InfernoCavern_3F/scripts.pory"
	removeitem ITEM_RED_ORB_OFF
# 87 "data/maps/InfernoCavern_3F/scripts.pory"
	additem ITEM_RED_ORB
# 88 "data/maps/InfernoCavern_3F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 89 "data/maps/InfernoCavern_3F/scripts.pory"
	call Common_EventScript_RemoveStaticPokemon
	end


InfernoCavern_3F_EventScript_RanGroudon::
# 94 "data/maps/InfernoCavern_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 95 "data/maps/InfernoCavern_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown2
# 96 "data/maps/InfernoCavern_3F/scripts.pory"
	waitmovement 0
# 97 "data/maps/InfernoCavern_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 98 "data/maps/InfernoCavern_3F/scripts.pory"
	waitmovement 0
# 99 "data/maps/InfernoCavern_3F/scripts.pory"
	applymovement 1, InfernoCavern_3F_Movement_GroudonReset
# 100 "data/maps/InfernoCavern_3F/scripts.pory"
	waitmovement 0
# 101 "data/maps/InfernoCavern_3F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 102 "data/maps/InfernoCavern_3F/scripts.pory"
	releaseall
	end


# 106 "data/maps/InfernoCavern_3F/scripts.pory"
InfernoCavern_3F_Movement_GroudonApproach:
# 107 "data/maps/InfernoCavern_3F/scripts.pory"
	init_affine_anim
# 108 "data/maps/InfernoCavern_3F/scripts.pory"
	walk_down_start_affine
# 109 "data/maps/InfernoCavern_3F/scripts.pory"
	delay_16
# 110 "data/maps/InfernoCavern_3F/scripts.pory"
	delay_16
# 111 "data/maps/InfernoCavern_3F/scripts.pory"
	walk_down_affine
# 112 "data/maps/InfernoCavern_3F/scripts.pory"
	delay_16
# 113 "data/maps/InfernoCavern_3F/scripts.pory"
	delay_16
# 114 "data/maps/InfernoCavern_3F/scripts.pory"
	walk_down_affine
# 115 "data/maps/InfernoCavern_3F/scripts.pory"
	step_end

# 118 "data/maps/InfernoCavern_3F/scripts.pory"
InfernoCavern_3F_Movement_GroudonReset:
# 119 "data/maps/InfernoCavern_3F/scripts.pory"
	walk_up
# 119 "data/maps/InfernoCavern_3F/scripts.pory"
	walk_up
# 119 "data/maps/InfernoCavern_3F/scripts.pory"
	walk_up
	step_end

InfernoCavern_3F_EventScript_InformPowerUp_Text_0:
# 24 "data/maps/InfernoCavern_3F/scripts.pory"
	.string "Your RED ORB starts shining with new\n"
	.string "power.$"
