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


MagmaIsland_EventScript_Fisherman1::
# 37 "data/maps/MagmaIsland/scripts.pory"
	trainerbattle_single TRAINER_FISHERMAN_MAGMAISLAND_1, MagmaIsland_Text_Fisherman1_Intro, MagmaIsland_Text_Fisherman1_Defeat
# 38 "data/maps/MagmaIsland/scripts.pory"
	msgbox MagmaIsland_Text_Fisherman1_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmaIsland_EventScript_Tuber1::
# 42 "data/maps/MagmaIsland/scripts.pory"
	trainerbattle_single TRAINER_TUBER_MAGMAISLAND_1, MagmaIsland_Text_Tuber1_Intro, MagmaIsland_Text_Tuber1_Defeat
# 43 "data/maps/MagmaIsland/scripts.pory"
	msgbox MagmaIsland_Text_Tuber1_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmaIsland_EventScript_Tuber2::
# 47 "data/maps/MagmaIsland/scripts.pory"
	trainerbattle_single TRAINER_TUBER_MAGMAISLAND_2, MagmaIsland_Text_Tuber2_Intro, MagmaIsland_Text_Tuber2_Defeat
# 48 "data/maps/MagmaIsland/scripts.pory"
	msgbox MagmaIsland_Text_Tuber2_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmaIsland_EventScript_BugCatcher1::
# 52 "data/maps/MagmaIsland/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_MAGMAISLAND_1, MagmaIsland_Text_BugCatcher1_Intro, MagmaIsland_Text_BugCatcher1_Defeat
# 53 "data/maps/MagmaIsland/scripts.pory"
	msgbox MagmaIsland_Text_BugCatcher1_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmaIsland_EventScript_Hiker1::
# 57 "data/maps/MagmaIsland/scripts.pory"
	trainerbattle_single TRAINER_HIKER_MAGMAISLAND_1, MagmaIsland_Text_Hiker1_Intro, MagmaIsland_Text_Hiker1_Defeat
# 58 "data/maps/MagmaIsland/scripts.pory"
	msgbox MagmaIsland_Text_Hiker1_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmaIsland_EventScript_Lass1::
# 62 "data/maps/MagmaIsland/scripts.pory"
	trainerbattle_single TRAINER_LASS_MAGMAISLAND_1, MagmaIsland_Text_Lass1_Intro, MagmaIsland_Text_Lass1_Defeat
# 63 "data/maps/MagmaIsland/scripts.pory"
	msgbox MagmaIsland_Text_Lass1_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmaIsland_EventScript_Swimmer1::
# 67 "data/maps/MagmaIsland/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_MAGMAISLAND_1, MagmaIsland_Text_Swimmer1_Intro, MagmaIsland_Text_Swimmer1_Defeat
# 68 "data/maps/MagmaIsland/scripts.pory"
	msgbox MagmaIsland_Text_Swimmer1_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmaIsland_Text_Fisherman1_Intro::
# 71 "data/maps/MagmaIsland/scripts.pory"
	.string "Intro$"

MagmaIsland_Text_Fisherman1_Defeat::
# 75 "data/maps/MagmaIsland/scripts.pory"
	.string "Defeat$"

MagmaIsland_Text_Fisherman1_PostBattle::
# 79 "data/maps/MagmaIsland/scripts.pory"
	.string "Post$"

MagmaIsland_Text_Tuber1_Intro::
# 83 "data/maps/MagmaIsland/scripts.pory"
	.string "Intro$"

MagmaIsland_Text_Tuber1_Defeat::
# 87 "data/maps/MagmaIsland/scripts.pory"
	.string "Defeat$"

MagmaIsland_Text_Tuber1_PostBattle::
# 91 "data/maps/MagmaIsland/scripts.pory"
	.string "Post$"

MagmaIsland_Text_Tuber2_Intro::
# 95 "data/maps/MagmaIsland/scripts.pory"
	.string "Intro$"

MagmaIsland_Text_Tuber2_Defeat::
# 99 "data/maps/MagmaIsland/scripts.pory"
	.string "Defeat$"

MagmaIsland_Text_Tuber2_PostBattle::
# 103 "data/maps/MagmaIsland/scripts.pory"
	.string "Post$"

MagmaIsland_Text_BugCatcher1_Intro::
# 107 "data/maps/MagmaIsland/scripts.pory"
	.string "Intro$"

MagmaIsland_Text_BugCatcher1_Defeat::
# 111 "data/maps/MagmaIsland/scripts.pory"
	.string "Defeat$"

MagmaIsland_Text_BugCatcher1_PostBattle::
# 115 "data/maps/MagmaIsland/scripts.pory"
	.string "Post$"

MagmaIsland_Text_Hiker1_Intro::
# 119 "data/maps/MagmaIsland/scripts.pory"
	.string "Intro$"

MagmaIsland_Text_Hiker1_Defeat::
# 123 "data/maps/MagmaIsland/scripts.pory"
	.string "Defeat$"

MagmaIsland_Text_Hiker1_PostBattle::
# 127 "data/maps/MagmaIsland/scripts.pory"
	.string "Post$"

MagmaIsland_Text_Lass1_Intro::
# 131 "data/maps/MagmaIsland/scripts.pory"
	.string "Intro$"

MagmaIsland_Text_Lass1_Defeat::
# 135 "data/maps/MagmaIsland/scripts.pory"
	.string "Defeat$"

MagmaIsland_Text_Lass1_PostBattle::
# 139 "data/maps/MagmaIsland/scripts.pory"
	.string "Post$"

MagmaIsland_Text_Swimmer1_Intro::
# 143 "data/maps/MagmaIsland/scripts.pory"
	.string "Intro$"

MagmaIsland_Text_Swimmer1_Defeat::
# 147 "data/maps/MagmaIsland/scripts.pory"
	.string "Defeat$"

MagmaIsland_Text_Swimmer1_PostBattle::
# 151 "data/maps/MagmaIsland/scripts.pory"
	.string "Post$"
