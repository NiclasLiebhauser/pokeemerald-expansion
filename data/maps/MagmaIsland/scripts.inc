MagmaIsland_MapScripts::
# 4 "data/maps/MagmaIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaIsland_EventScript_OnTransition
	.byte 0


MagmaIsland_EventScript_OnTransition::
# 9 "data/maps/MagmaIsland/scripts.pory"
	goto_if_unset FLAG_ANABEL_HIDE_AND_SEEK, MagmaIsland_EventScript_OnTransition_2
# 9 "data/maps/MagmaIsland/scripts.pory"
	goto_if_set FLAG_MOLTRES_FOUND, MagmaIsland_EventScript_OnTransition_2
MagmaIsland_EventScript_OnTransition_1:
	end

MagmaIsland_EventScript_OnTransition_2:
# 11 "data/maps/MagmaIsland/scripts.pory"
	call MagmaIsland_EventScript_HideMoltres
	goto MagmaIsland_EventScript_OnTransition_1


MagmaIsland_EventScript_HideMoltres::
# 17 "data/maps/MagmaIsland/scripts.pory"
	setflag FLAG_TEMP_1
# 18 "data/maps/MagmaIsland/scripts.pory"
	removeobject 2
	return


MagmaIsland_EventScript_Moltres::
# 23 "data/maps/MagmaIsland/scripts.pory"
	lock
# 24 "data/maps/MagmaIsland/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
# 25 "data/maps/MagmaIsland/scripts.pory"
	waitmoncry
# 26 "data/maps/MagmaIsland/scripts.pory"
	setfieldeffectargument 0, 2
# 27 "data/maps/MagmaIsland/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 28 "data/maps/MagmaIsland/scripts.pory"
	delay 15
# 29 "data/maps/MagmaIsland/scripts.pory"
	call MagmaIsland_EventScript_HideMoltres
# 30 "data/maps/MagmaIsland/scripts.pory"
	addvar VAR_HIDE_AND_SEEK, 1
# 31 "data/maps/MagmaIsland/scripts.pory"
	setflag FLAG_MOLTRES_FOUND
# 32 "data/maps/MagmaIsland/scripts.pory"
	release
	end

