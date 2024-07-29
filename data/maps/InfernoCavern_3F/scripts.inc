InfernoCavern_3F_MapScripts::
# 4 "data/maps/InfernoCavern_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, InfernoCavern_3F_OnResume
# 5 "data/maps/InfernoCavern_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, InfernoCavern_3F_OnTransition
	.byte 0


InfernoCavern_3F_OnResume::
# 9 "data/maps/InfernoCavern_3F/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, InfernoCavern_3F_EventScript_TryRemoveGroudon
	end


InfernoCavern_3F_OnTransition::
# 14 "data/maps/InfernoCavern_3F/scripts.pory"
	call_if_unset FLAG_DEFEATED_GROUDON, InfernoCavern_3F_EventScript_Enable_Groudon_Battle
# 15 "data/maps/InfernoCavern_3F/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, InfernoCavern_3F_EventScript_Disable_Groudon_Battle
	end


InfernoCavern_3F_EventScript_Enable_Groudon_Battle::
# 20 "data/maps/InfernoCavern_3F/scripts.pory"
	setvar VAR_TEMP_1, 0
	return


InfernoCavern_3F_EventScript_Disable_Groudon_Battle::
# 25 "data/maps/InfernoCavern_3F/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


InfernoCavern_3F_EventScript_TryRemoveGroudon::
# 30 "data/maps/InfernoCavern_3F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 31 "data/maps/InfernoCavern_3F/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, InfernoCavern_3F_EventScript_RemoveGroudon
	return


InfernoCavern_3F_EventScript_RemoveGroudon::
# 36 "data/maps/InfernoCavern_3F/scripts.pory"
	removeobject 1
	return


InfernoCavern_3F_EventScript_Groudon::
# 41 "data/maps/InfernoCavern_3F/scripts.pory"
	lockall
# 43 "data/maps/InfernoCavern_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 44 "data/maps/InfernoCavern_3F/scripts.pory"
	waitmovement 0
# 45 "data/maps/InfernoCavern_3F/scripts.pory"
	applymovement 1, InfernoCavern_3F_Movement_GroudonApproach
# 46 "data/maps/InfernoCavern_3F/scripts.pory"
	waitmovement 0
# 47 "data/maps/InfernoCavern_3F/scripts.pory"
	waitse
# 48 "data/maps/InfernoCavern_3F/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 49 "data/maps/InfernoCavern_3F/scripts.pory"
	delay 40
# 50 "data/maps/InfernoCavern_3F/scripts.pory"
	waitmoncry
# 51 "data/maps/InfernoCavern_3F/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 52 "data/maps/InfernoCavern_3F/scripts.pory"
	setwildbattle SPECIES_GROUDON_PRIMAL, 50
# 53 "data/maps/InfernoCavern_3F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 54 "data/maps/InfernoCavern_3F/scripts.pory"
	setflag FLAG_NO_CATCHING
# 55 "data/maps/InfernoCavern_3F/scripts.pory"
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 1, 1, 1, 1, 1, 1
# 56 "data/maps/InfernoCavern_3F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 57 "data/maps/InfernoCavern_3F/scripts.pory"
	waitstate
# 58 "data/maps/InfernoCavern_3F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 59 "data/maps/InfernoCavern_3F/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 60 "data/maps/InfernoCavern_3F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 61 "data/maps/InfernoCavern_3F/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_WON, InfernoCavern_3F_EventScript_DefeatedGroudon
# 62 "data/maps/InfernoCavern_3F/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_RAN, InfernoCavern_3F_EventScript_RanGroudon
# 63 "data/maps/InfernoCavern_3F/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, InfernoCavern_3F_EventScript_RanGroudon
# 64 "data/maps/InfernoCavern_3F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 65 "data/maps/InfernoCavern_3F/scripts.pory"
	releaseall
	end


InfernoCavern_3F_EventScript_DefeatedGroudon::
# 70 "data/maps/InfernoCavern_3F/scripts.pory"
	setflag FLAG_DEFEATED_GROUDON
# 71 "data/maps/InfernoCavern_3F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 72 "data/maps/InfernoCavern_3F/scripts.pory"
	call Common_EventScript_RemoveStaticPokemon
	end


InfernoCavern_3F_EventScript_RanGroudon::
# 77 "data/maps/InfernoCavern_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 78 "data/maps/InfernoCavern_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown2
# 79 "data/maps/InfernoCavern_3F/scripts.pory"
	waitmovement 0
# 80 "data/maps/InfernoCavern_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 81 "data/maps/InfernoCavern_3F/scripts.pory"
	waitmovement 0
# 82 "data/maps/InfernoCavern_3F/scripts.pory"
	applymovement 1, InfernoCavern_3F_Movement_GroudonReset
# 83 "data/maps/InfernoCavern_3F/scripts.pory"
	waitmovement 0
# 84 "data/maps/InfernoCavern_3F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 85 "data/maps/InfernoCavern_3F/scripts.pory"
	releaseall
	end


# 89 "data/maps/InfernoCavern_3F/scripts.pory"
InfernoCavern_3F_Movement_GroudonApproach:
# 90 "data/maps/InfernoCavern_3F/scripts.pory"
	init_affine_anim
# 91 "data/maps/InfernoCavern_3F/scripts.pory"
	walk_down_start_affine
# 92 "data/maps/InfernoCavern_3F/scripts.pory"
	delay_16
# 93 "data/maps/InfernoCavern_3F/scripts.pory"
	delay_16
# 94 "data/maps/InfernoCavern_3F/scripts.pory"
	walk_down_affine
# 95 "data/maps/InfernoCavern_3F/scripts.pory"
	delay_16
# 96 "data/maps/InfernoCavern_3F/scripts.pory"
	delay_16
# 97 "data/maps/InfernoCavern_3F/scripts.pory"
	walk_down_affine
# 98 "data/maps/InfernoCavern_3F/scripts.pory"
	step_end

# 101 "data/maps/InfernoCavern_3F/scripts.pory"
InfernoCavern_3F_Movement_GroudonReset:
# 102 "data/maps/InfernoCavern_3F/scripts.pory"
	walk_up
# 102 "data/maps/InfernoCavern_3F/scripts.pory"
	walk_up
# 102 "data/maps/InfernoCavern_3F/scripts.pory"
	walk_up
	step_end
