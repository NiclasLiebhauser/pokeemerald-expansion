SacredMountain_3F_Outside_MapScripts::
# 4 "data/maps/SacredMountain_3F_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SacredMountain_3F_Outside_EventScript_OnTransition
	.byte 0


SacredMountain_3F_Outside_EventScript_OnTransition::
# 8 "data/maps/SacredMountain_3F_Outside/scripts.pory"
	goto_if_unset FLAG_ANABEL_HIDE_AND_SEEK, SacredMountain_3F_Outside_EventScript_OnTransition_2
# 8 "data/maps/SacredMountain_3F_Outside/scripts.pory"
	goto_if_set FLAG_ARTICUNO_FOUND, SacredMountain_3F_Outside_EventScript_OnTransition_2
SacredMountain_3F_Outside_EventScript_OnTransition_1:
	end

SacredMountain_3F_Outside_EventScript_OnTransition_2:
# 10 "data/maps/SacredMountain_3F_Outside/scripts.pory"
	call SacredMountain_3F_Outside_EventScript_HideArticuno
	goto SacredMountain_3F_Outside_EventScript_OnTransition_1


SacredMountain_3F_Outside_EventScript_HideArticuno::
# 16 "data/maps/SacredMountain_3F_Outside/scripts.pory"
	setflag FLAG_TEMP_1
# 17 "data/maps/SacredMountain_3F_Outside/scripts.pory"
	removeobject 1
	return


SacredMountain_3F_Outside_EventScript_Articuno::
# 22 "data/maps/SacredMountain_3F_Outside/scripts.pory"
	lock
# 23 "data/maps/SacredMountain_3F_Outside/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
# 24 "data/maps/SacredMountain_3F_Outside/scripts.pory"
	waitmoncry
# 25 "data/maps/SacredMountain_3F_Outside/scripts.pory"
	setfieldeffectargument 0, 1
# 26 "data/maps/SacredMountain_3F_Outside/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 27 "data/maps/SacredMountain_3F_Outside/scripts.pory"
	delay 15
# 28 "data/maps/SacredMountain_3F_Outside/scripts.pory"
	call SacredMountain_3F_Outside_EventScript_HideArticuno
# 29 "data/maps/SacredMountain_3F_Outside/scripts.pory"
	addvar VAR_HIDE_AND_SEEK, 1
# 30 "data/maps/SacredMountain_3F_Outside/scripts.pory"
	setflag FLAG_ARTICUNO_FOUND
# 31 "data/maps/SacredMountain_3F_Outside/scripts.pory"
	release
	end

