CaveOfCreation_MapScripts::
# 5 "data/maps/CaveOfCreation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveOfCreation_OnTransition
# 6 "data/maps/CaveOfCreation/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CaveOfCreation_OnResume
# 7 "data/maps/CaveOfCreation/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveOfCreation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CaveOfCreation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/CaveOfCreation/scripts.pory"
	map_script_2 VAR_TEMP_A, 1, CaveOfCreation_Eventscript_RedOrb_CutScene
# 9 "data/maps/CaveOfCreation/scripts.pory"
	map_script_2 VAR_TEMP_A, 2, CaveOfCreation_Eventscript_BlueOrb_CutScene
	.2byte 0


CaveOfCreation_OnResume::
# 14 "data/maps/CaveOfCreation/scripts.pory"
	setdivewarp MAP_UNDERWATER_CAVE_OF_CREATION_ENTRANCE, 7, 5
	end


CaveOfCreation_OnTransition::
# 19 "data/maps/CaveOfCreation/scripts.pory"
	setflag FLAG_HIDE_NINJA_RED_ORB
# 20 "data/maps/CaveOfCreation/scripts.pory"
	setflag FLAG_HIDE_NINJA_BLUE_ORB
# 21 "data/maps/CaveOfCreation/scripts.pory"
	removeobject 1
# 22 "data/maps/CaveOfCreation/scripts.pory"
	removeobject 2
# 24 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_set FLAG_DEFEATED_GROUDON, CaveOfCreation_OnTransition_3
CaveOfCreation_OnTransition_1:
# 29 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_set FLAG_DEFEATED_KYOGRE, CaveOfCreation_OnTransition_8
CaveOfCreation_OnTransition_6:
	end

CaveOfCreation_OnTransition_2:
# 26 "data/maps/CaveOfCreation/scripts.pory"
	clearflag FLAG_HIDE_NINJA_RED_ORB
# 27 "data/maps/CaveOfCreation/scripts.pory"
	addobject 1
	goto CaveOfCreation_OnTransition_1

CaveOfCreation_OnTransition_3:
# 24 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_unset FLAG_RED_ORB_USED, CaveOfCreation_OnTransition_2
	goto CaveOfCreation_OnTransition_1

CaveOfCreation_OnTransition_7:
# 31 "data/maps/CaveOfCreation/scripts.pory"
	clearflag FLAG_HIDE_NINJA_BLUE_ORB
# 32 "data/maps/CaveOfCreation/scripts.pory"
	addobject 2
	goto CaveOfCreation_OnTransition_6

CaveOfCreation_OnTransition_8:
# 29 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_unset FLAG_BLUE_ORB_USED, CaveOfCreation_OnTransition_7
	goto CaveOfCreation_OnTransition_6


CaveOfCreation_Eventscript_ShowRedOrb::
# 38 "data/maps/CaveOfCreation/scripts.pory"
	checkitem ITEM_BLUE_ORB
# 39 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_set FLAG_DEFEATED_KYOGRE, CaveOfCreation_Eventscript_ShowRedOrb_3
	return

CaveOfCreation_Eventscript_ShowRedOrb_1:
# 41 "data/maps/CaveOfCreation/scripts.pory"
	setvar VAR_TEMP_A, 1
	return

CaveOfCreation_Eventscript_ShowRedOrb_2:
# 39 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_unset FLAG_BLUE_ORB_USED, CaveOfCreation_Eventscript_ShowRedOrb_1
	return

CaveOfCreation_Eventscript_ShowRedOrb_3:
# 39 "data/maps/CaveOfCreation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CaveOfCreation_Eventscript_ShowRedOrb_2
	return


CaveOfCreation_Eventscript_ShowBlueOrb::
# 46 "data/maps/CaveOfCreation/scripts.pory"
	checkitem ITEM_BLUE_ORB
# 47 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_set FLAG_DEFEATED_KYOGRE, CaveOfCreation_Eventscript_ShowBlueOrb_3
	return

CaveOfCreation_Eventscript_ShowBlueOrb_1:
# 49 "data/maps/CaveOfCreation/scripts.pory"
	setvar VAR_TEMP_A, 2
	return

CaveOfCreation_Eventscript_ShowBlueOrb_2:
# 47 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_unset FLAG_BLUE_ORB_USED, CaveOfCreation_Eventscript_ShowBlueOrb_1
	return

CaveOfCreation_Eventscript_ShowBlueOrb_3:
# 47 "data/maps/CaveOfCreation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CaveOfCreation_Eventscript_ShowBlueOrb_2
	return


CaveOfCreation_Eventscript_RedOrb_CutScene::
# 54 "data/maps/CaveOfCreation/scripts.pory"
	lock
# 55 "data/maps/CaveOfCreation/scripts.pory"
	checkitem ITEM_RED_ORB
# 56 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_set FLAG_DEFEATED_GROUDON, CaveOfCreation_Eventscript_RedOrb_CutScene_4
CaveOfCreation_Eventscript_RedOrb_CutScene_1:
# 77 "data/maps/CaveOfCreation/scripts.pory"
	release
	end

CaveOfCreation_Eventscript_RedOrb_CutScene_2:
# 58 "data/maps/CaveOfCreation/scripts.pory"
	setvar VAR_TEMP_A, 0
# 59 "data/maps/CaveOfCreation/scripts.pory"
	msgbox CaveOfCreation_Text_ShowRedOrb
# 60 "data/maps/CaveOfCreation/scripts.pory"
	waitmessage
# 61 "data/maps/CaveOfCreation/scripts.pory"
	closemessage
# 62 "data/maps/CaveOfCreation/scripts.pory"
	setvar VAR_RESULT, 2
# 63 "data/maps/CaveOfCreation/scripts.pory"
	special DoOrbEffect
# 64 "data/maps/CaveOfCreation/scripts.pory"
	playse SE_ORB
# 65 "data/maps/CaveOfCreation/scripts.pory"
	waitse
# 66 "data/maps/CaveOfCreation/scripts.pory"
	delay 150
# 67 "data/maps/CaveOfCreation/scripts.pory"
	special FadeOutOrbEffect
# 68 "data/maps/CaveOfCreation/scripts.pory"
	waitstate
# 69 "data/maps/CaveOfCreation/scripts.pory"
	setflag FLAG_RED_ORB_USED
# 70 "data/maps/CaveOfCreation/scripts.pory"
	removeobject 1
# 72 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_set FLAG_BLUE_ORB_USED, CaveOfCreation_Eventscript_RedOrb_CutScene_8
	goto CaveOfCreation_Eventscript_RedOrb_CutScene_1

CaveOfCreation_Eventscript_RedOrb_CutScene_3:
# 56 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_unset FLAG_RED_ORB_USED, CaveOfCreation_Eventscript_RedOrb_CutScene_2
	goto CaveOfCreation_Eventscript_RedOrb_CutScene_1

CaveOfCreation_Eventscript_RedOrb_CutScene_4:
# 56 "data/maps/CaveOfCreation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CaveOfCreation_Eventscript_RedOrb_CutScene_3
	goto CaveOfCreation_Eventscript_RedOrb_CutScene_1

CaveOfCreation_Eventscript_RedOrb_CutScene_8:
# 74 "data/maps/CaveOfCreation/scripts.pory"
	call CaveOfCreation_Eventscript_PathOpen
	goto CaveOfCreation_Eventscript_RedOrb_CutScene_1


CaveOfCreation_Eventscript_BlueOrb_CutScene::
# 82 "data/maps/CaveOfCreation/scripts.pory"
	lock
# 83 "data/maps/CaveOfCreation/scripts.pory"
	setvar VAR_TEMP_A, 0
# 84 "data/maps/CaveOfCreation/scripts.pory"
	msgbox CaveOfCreation_Text_ShowBlueOrb
# 85 "data/maps/CaveOfCreation/scripts.pory"
	waitmessage
# 86 "data/maps/CaveOfCreation/scripts.pory"
	closemessage
# 87 "data/maps/CaveOfCreation/scripts.pory"
	setvar VAR_RESULT, 3
# 88 "data/maps/CaveOfCreation/scripts.pory"
	special DoOrbEffect
# 89 "data/maps/CaveOfCreation/scripts.pory"
	playse SE_ORB
# 90 "data/maps/CaveOfCreation/scripts.pory"
	waitse
# 91 "data/maps/CaveOfCreation/scripts.pory"
	delay 150
# 92 "data/maps/CaveOfCreation/scripts.pory"
	special FadeOutOrbEffect
# 93 "data/maps/CaveOfCreation/scripts.pory"
	waitstate
# 94 "data/maps/CaveOfCreation/scripts.pory"
	setflag FLAG_BLUE_ORB_USED
# 95 "data/maps/CaveOfCreation/scripts.pory"
	removeobject 2
# 97 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_set FLAG_RED_ORB_USED, CaveOfCreation_Eventscript_BlueOrb_CutScene_2
CaveOfCreation_Eventscript_BlueOrb_CutScene_1:
# 101 "data/maps/CaveOfCreation/scripts.pory"
	release
	end

CaveOfCreation_Eventscript_BlueOrb_CutScene_2:
# 99 "data/maps/CaveOfCreation/scripts.pory"
	call CaveOfCreation_Eventscript_PathOpen
	goto CaveOfCreation_Eventscript_BlueOrb_CutScene_1


CaveOfCreation_Eventscript_PathOpen::
# 106 "data/maps/CaveOfCreation/scripts.pory"
	playse SE_M_EARTHQUAKE
# 108 "data/maps/CaveOfCreation/scripts.pory"
	setvar VAR_0x8004, 4
# 109 "data/maps/CaveOfCreation/scripts.pory"
	setvar VAR_0x8005, 2
# 110 "data/maps/CaveOfCreation/scripts.pory"
	setvar VAR_0x8006, 8
# 111 "data/maps/CaveOfCreation/scripts.pory"
	setvar VAR_0x8007, 5
# 112 "data/maps/CaveOfCreation/scripts.pory"
	special ShakeCamera
# 113 "data/maps/CaveOfCreation/scripts.pory"
	waitstate
# 115 "data/maps/CaveOfCreation/scripts.pory"
	delay 60
# 116 "data/maps/CaveOfCreation/scripts.pory"
	waitse
# 118 "data/maps/CaveOfCreation/scripts.pory"
	msgbox CaveOfCreation_Text_PathOpen
# 119 "data/maps/CaveOfCreation/scripts.pory"
	waitmessage
# 120 "data/maps/CaveOfCreation/scripts.pory"
	closemessage
# 121 "data/maps/CaveOfCreation/scripts.pory"
	setflag FLAG_MOUNTAIN_PATH_FREE
# 122 "data/maps/CaveOfCreation/scripts.pory"
	setvar VAR_LEVEL_CAP, 80
# 123 "data/maps/CaveOfCreation/scripts.pory"
	call EventScript_Increase_LevelCap
# 124 "data/maps/CaveOfCreation/scripts.pory"
	release
	end


CaveOfCreation_Sign_RedOrb::
# 129 "data/maps/CaveOfCreation/scripts.pory"
	msgbox CaveOfCreation_Text_RedOrb, MSGBOX_SIGN
	return


CaveOfCreation_Sign_BlueOrb::
# 133 "data/maps/CaveOfCreation/scripts.pory"
	msgbox CaveOfCreation_Text_BlueOrb, MSGBOX_SIGN
	return


CaveOfCreation_Text_RedOrb::
# 136 "data/maps/CaveOfCreation/scripts.pory"
	.string "Hold the RED ORB high above your head.\n"
	.string "As proof that you have gained\l"
	.string "dominance over the element of fire.$"

CaveOfCreation_Text_BlueOrb::
# 140 "data/maps/CaveOfCreation/scripts.pory"
	.string "Hold the BLUE ORB high above your head.\n"
	.string "As proof that you have gained\l"
	.string "dominance over the element of water.$"

CaveOfCreation_Text_ShowRedOrb::
# 144 "data/maps/CaveOfCreation/scripts.pory"
	.string "You hold the RED ORB high above your\n"
	.string "head.\p"
	.string "It shimmers with a beatiful ruby light.$"

CaveOfCreation_Text_ShowBlueOrb::
# 148 "data/maps/CaveOfCreation/scripts.pory"
	.string "You hold the BLUE ORB high above your\n"
	.string "head.\p"
	.string "It shimmers with a beatiful sapphire\n"
	.string "light.$"

CaveOfCreation_Text_PathOpen::
# 152 "data/maps/CaveOfCreation/scripts.pory"
	.string "A path to the mountain has been\n"
	.string "revealed.$"
