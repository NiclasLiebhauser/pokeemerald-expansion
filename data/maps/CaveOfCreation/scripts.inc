CaveOfCreation_MapScripts::
# 5 "data/maps/CaveOfCreation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveOfCreation_OnTransition
# 6 "data/maps/CaveOfCreation/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CaveOfCreation_OnResume
	.byte 0


CaveOfCreation_OnResume::
# 10 "data/maps/CaveOfCreation/scripts.pory"
	setdivewarp MAP_UNDERWATER_CAVE_OF_CREATION_ENTRANCE, 7, 5
	end


CaveOfCreation_OnTransition::
# 15 "data/maps/CaveOfCreation/scripts.pory"
	setflag FLAG_HIDE_NINJA_RED_ORB
# 16 "data/maps/CaveOfCreation/scripts.pory"
	setflag FLAG_HIDE_NINJA_BLUE_ORB
# 17 "data/maps/CaveOfCreation/scripts.pory"
	removeobject 1
# 18 "data/maps/CaveOfCreation/scripts.pory"
	removeobject 2
# 20 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_set FLAG_DEFEATED_GROUDON, CaveOfCreation_OnTransition_3
CaveOfCreation_OnTransition_1:
# 25 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_set FLAG_DEFEATED_KYOGRE, CaveOfCreation_OnTransition_8
CaveOfCreation_OnTransition_6:
	end

CaveOfCreation_OnTransition_2:
# 22 "data/maps/CaveOfCreation/scripts.pory"
	clearflag FLAG_HIDE_NINJA_RED_ORB
# 23 "data/maps/CaveOfCreation/scripts.pory"
	addobject 1
	goto CaveOfCreation_OnTransition_1

CaveOfCreation_OnTransition_3:
# 20 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_unset FLAG_RED_ORB_USED, CaveOfCreation_OnTransition_2
	goto CaveOfCreation_OnTransition_1

CaveOfCreation_OnTransition_7:
# 27 "data/maps/CaveOfCreation/scripts.pory"
	clearflag FLAG_HIDE_NINJA_BLUE_ORB
# 28 "data/maps/CaveOfCreation/scripts.pory"
	addobject 2
	goto CaveOfCreation_OnTransition_6

CaveOfCreation_OnTransition_8:
# 25 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_unset FLAG_BLUE_ORB_USED, CaveOfCreation_OnTransition_7
	goto CaveOfCreation_OnTransition_6


CaveOfCreation_Eventscript_ShowRedOrb::
# 34 "data/maps/CaveOfCreation/scripts.pory"
	lock
# 35 "data/maps/CaveOfCreation/scripts.pory"
	checkitem ITEM_RED_ORB
# 36 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_set FLAG_DEFEATED_GROUDON, CaveOfCreation_Eventscript_ShowRedOrb_4
CaveOfCreation_Eventscript_ShowRedOrb_1:
# 56 "data/maps/CaveOfCreation/scripts.pory"
	release
	end

CaveOfCreation_Eventscript_ShowRedOrb_2:
# 38 "data/maps/CaveOfCreation/scripts.pory"
	msgbox CaveOfCreation_Text_ShowRedOrb
# 39 "data/maps/CaveOfCreation/scripts.pory"
	waitmessage
# 40 "data/maps/CaveOfCreation/scripts.pory"
	closemessage
# 41 "data/maps/CaveOfCreation/scripts.pory"
	setvar VAR_RESULT, 2
# 42 "data/maps/CaveOfCreation/scripts.pory"
	special DoOrbEffect
# 43 "data/maps/CaveOfCreation/scripts.pory"
	playse SE_ORB
# 44 "data/maps/CaveOfCreation/scripts.pory"
	waitse
# 45 "data/maps/CaveOfCreation/scripts.pory"
	delay 150
# 46 "data/maps/CaveOfCreation/scripts.pory"
	special FadeOutOrbEffect
# 47 "data/maps/CaveOfCreation/scripts.pory"
	waitstate
# 48 "data/maps/CaveOfCreation/scripts.pory"
	setflag FLAG_RED_ORB_USED
# 49 "data/maps/CaveOfCreation/scripts.pory"
	removeobject 1
# 51 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_set FLAG_BLUE_ORB_USED, CaveOfCreation_Eventscript_ShowRedOrb_8
	goto CaveOfCreation_Eventscript_ShowRedOrb_1

CaveOfCreation_Eventscript_ShowRedOrb_3:
# 36 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_unset FLAG_RED_ORB_USED, CaveOfCreation_Eventscript_ShowRedOrb_2
	goto CaveOfCreation_Eventscript_ShowRedOrb_1

CaveOfCreation_Eventscript_ShowRedOrb_4:
# 36 "data/maps/CaveOfCreation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CaveOfCreation_Eventscript_ShowRedOrb_3
	goto CaveOfCreation_Eventscript_ShowRedOrb_1

CaveOfCreation_Eventscript_ShowRedOrb_8:
# 53 "data/maps/CaveOfCreation/scripts.pory"
	call CaveOfCreation_Eventscript_PathOpen
	goto CaveOfCreation_Eventscript_ShowRedOrb_1


CaveOfCreation_Eventscript_ShowBlueOrb::
# 61 "data/maps/CaveOfCreation/scripts.pory"
	lock
# 62 "data/maps/CaveOfCreation/scripts.pory"
	checkitem ITEM_BLUE_ORB
# 63 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_set FLAG_DEFEATED_KYOGRE, CaveOfCreation_Eventscript_ShowBlueOrb_4
CaveOfCreation_Eventscript_ShowBlueOrb_1:
# 83 "data/maps/CaveOfCreation/scripts.pory"
	release
	end

CaveOfCreation_Eventscript_ShowBlueOrb_2:
# 65 "data/maps/CaveOfCreation/scripts.pory"
	msgbox CaveOfCreation_Text_ShowBlueOrb
# 66 "data/maps/CaveOfCreation/scripts.pory"
	waitmessage
# 67 "data/maps/CaveOfCreation/scripts.pory"
	closemessage
# 68 "data/maps/CaveOfCreation/scripts.pory"
	setvar VAR_RESULT, 3
# 69 "data/maps/CaveOfCreation/scripts.pory"
	special DoOrbEffect
# 70 "data/maps/CaveOfCreation/scripts.pory"
	playse SE_ORB
# 71 "data/maps/CaveOfCreation/scripts.pory"
	waitse
# 72 "data/maps/CaveOfCreation/scripts.pory"
	delay 150
# 73 "data/maps/CaveOfCreation/scripts.pory"
	special FadeOutOrbEffect
# 74 "data/maps/CaveOfCreation/scripts.pory"
	waitstate
# 75 "data/maps/CaveOfCreation/scripts.pory"
	setflag FLAG_BLUE_ORB_USED
# 76 "data/maps/CaveOfCreation/scripts.pory"
	removeobject 2
# 78 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_set FLAG_RED_ORB_USED, CaveOfCreation_Eventscript_ShowBlueOrb_8
	goto CaveOfCreation_Eventscript_ShowBlueOrb_1

CaveOfCreation_Eventscript_ShowBlueOrb_3:
# 63 "data/maps/CaveOfCreation/scripts.pory"
	goto_if_unset FLAG_BLUE_ORB_USED, CaveOfCreation_Eventscript_ShowBlueOrb_2
	goto CaveOfCreation_Eventscript_ShowBlueOrb_1

CaveOfCreation_Eventscript_ShowBlueOrb_4:
# 63 "data/maps/CaveOfCreation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CaveOfCreation_Eventscript_ShowBlueOrb_3
	goto CaveOfCreation_Eventscript_ShowBlueOrb_1

CaveOfCreation_Eventscript_ShowBlueOrb_8:
# 80 "data/maps/CaveOfCreation/scripts.pory"
	call CaveOfCreation_Eventscript_PathOpen
	goto CaveOfCreation_Eventscript_ShowBlueOrb_1


CaveOfCreation_Eventscript_PathOpen::
# 88 "data/maps/CaveOfCreation/scripts.pory"
	playse SE_M_EARTHQUAKE
# 90 "data/maps/CaveOfCreation/scripts.pory"
	setvar VAR_0x8004, 4
# 91 "data/maps/CaveOfCreation/scripts.pory"
	setvar VAR_0x8005, 2
# 92 "data/maps/CaveOfCreation/scripts.pory"
	setvar VAR_0x8006, 8
# 93 "data/maps/CaveOfCreation/scripts.pory"
	setvar VAR_0x8007, 5
# 94 "data/maps/CaveOfCreation/scripts.pory"
	special ShakeCamera
# 95 "data/maps/CaveOfCreation/scripts.pory"
	waitstate
# 97 "data/maps/CaveOfCreation/scripts.pory"
	delay 60
# 98 "data/maps/CaveOfCreation/scripts.pory"
	waitse
# 100 "data/maps/CaveOfCreation/scripts.pory"
	msgbox CaveOfCreation_Text_PathOpen
# 101 "data/maps/CaveOfCreation/scripts.pory"
	waitmessage
# 102 "data/maps/CaveOfCreation/scripts.pory"
	closemessage
# 103 "data/maps/CaveOfCreation/scripts.pory"
	setflag FLAG_MOUNTAIN_PATH_FREE
# 104 "data/maps/CaveOfCreation/scripts.pory"
	setvar VAR_LEVEL_CAP, 80
# 105 "data/maps/CaveOfCreation/scripts.pory"
	call EventScript_Increase_LevelCap
# 106 "data/maps/CaveOfCreation/scripts.pory"
	release
	end


CaveOfCreation_Sign_RedOrb::
# 111 "data/maps/CaveOfCreation/scripts.pory"
	msgbox CaveOfCreation_Text_RedOrb, MSGBOX_SIGN
	return


CaveOfCreation_Sign_BlueOrb::
# 115 "data/maps/CaveOfCreation/scripts.pory"
	msgbox CaveOfCreation_Text_BlueOrb, MSGBOX_SIGN
	return


CaveOfCreation_Text_RedOrb::
# 118 "data/maps/CaveOfCreation/scripts.pory"
	.string "Hold the RED ORB high above your head.\n"
	.string "As proof that you have gained\l"
	.string "dominance over the element of fire.$"

CaveOfCreation_Text_BlueOrb::
# 122 "data/maps/CaveOfCreation/scripts.pory"
	.string "Hold the BLUE ORB high above your head.\n"
	.string "As proof that you have gained\l"
	.string "dominance over the element of water.$"

CaveOfCreation_Text_ShowRedOrb::
# 126 "data/maps/CaveOfCreation/scripts.pory"
	.string "You hold the RED ORB high above your\n"
	.string "head.\p"
	.string "It shimmers with a beatiful ruby light.$"

CaveOfCreation_Text_ShowBlueOrb::
# 130 "data/maps/CaveOfCreation/scripts.pory"
	.string "You hold the BLUE ORB high above your\n"
	.string "head.\p"
	.string "It shimmers with a beatiful sapphire\n"
	.string "light.$"

CaveOfCreation_Text_PathOpen::
# 134 "data/maps/CaveOfCreation/scripts.pory"
	.string "A path to the mountain has been\n"
	.string "revealed.$"
