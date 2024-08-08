BlackVoid_MapScripts::
# 2 "data/maps/BlackVoid/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BlackVoid_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 3 "data/maps/BlackVoid/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BlackVoid_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BlackVoid_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 2 "data/maps/BlackVoid/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BlackVoid_EventScript_WarpIntoMap
	.2byte 0

BlackVoid_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/BlackVoid/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BlackVoid_EventScript_OnFrameTable0
# 6 "data/maps/BlackVoid/scripts.pory"
	map_script_2 VAR_TEMP_2, 1, BlackVoid_EventScript_OnFrameTable1
	.2byte 0


BlackVoid_EventScript_OnFrameTable0::
# 13 "data/maps/BlackVoid/scripts.pory"
	compare VAR_TEMP_1 == 0, 0
	goto_if_ne BlackVoid_EventScript_OnFrameTable0_2
BlackVoid_EventScript_OnFrameTable0_1:
# 18 "data/maps/BlackVoid/scripts.pory"
	compare VAR_TEMP_1, 60
	goto_if_ge BlackVoid_EventScript_OnFrameTable0_5
BlackVoid_EventScript_OnFrameTable0_4:
# 23 "data/maps/BlackVoid/scripts.pory"
	addvar VAR_TEMP_1, 1
	end

BlackVoid_EventScript_OnFrameTable0_2:
# 15 "data/maps/BlackVoid/scripts.pory"
	lock
# 16 "data/maps/BlackVoid/scripts.pory"
	playbgm MUS_ABANDONED_SHIP, FALSE
	goto BlackVoid_EventScript_OnFrameTable0_1

BlackVoid_EventScript_OnFrameTable0_5:
# 20 "data/maps/BlackVoid/scripts.pory"
	setvar VAR_TEMP_0, 1
# 21 "data/maps/BlackVoid/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto BlackVoid_EventScript_OnFrameTable0_4


BlackVoid_EventScript_OnFrameTable1::
# 28 "data/maps/BlackVoid/scripts.pory"
	setvar VAR_TEMP_2, 0
# 29 "data/maps/BlackVoid/scripts.pory"
	message BlackVoid_Text_Intro
# 30 "data/maps/BlackVoid/scripts.pory"
	waitmessage
# 32 "data/maps/BlackVoid/scripts.pory"
	message BlackVoid_Text_WhereAreYouFrom
# 33 "data/maps/BlackVoid/scripts.pory"
	waitmessage
# 34 "data/maps/BlackVoid/scripts.pory"
	multichoice 25, 5, MULTI_ORIGIN_REGION, TRUE
# 35 "data/maps/BlackVoid/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BlackVoid_EventScript_OnFrameTable1_2
# 40 "data/maps/BlackVoid/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BlackVoid_EventScript_OnFrameTable1_3
# 45 "data/maps/BlackVoid/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BlackVoid_EventScript_OnFrameTable1_4
BlackVoid_EventScript_OnFrameTable1_1:
# 50 "data/maps/BlackVoid/scripts.pory"
	waitmessage
# 53 "data/maps/BlackVoid/scripts.pory"
	message BlackVoid_Text_HowAreYouFeeling
# 54 "data/maps/BlackVoid/scripts.pory"
	waitmessage
# 55 "data/maps/BlackVoid/scripts.pory"
	multichoice 25, 5, MULTI_FEELING, TRUE
# 56 "data/maps/BlackVoid/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BlackVoid_EventScript_OnFrameTable1_9
# 61 "data/maps/BlackVoid/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BlackVoid_EventScript_OnFrameTable1_10
# 66 "data/maps/BlackVoid/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BlackVoid_EventScript_OnFrameTable1_11
BlackVoid_EventScript_OnFrameTable1_8:
# 71 "data/maps/BlackVoid/scripts.pory"
	waitmessage
# 74 "data/maps/BlackVoid/scripts.pory"
	message BlackVoid_Text_WhatIsMotivation
# 75 "data/maps/BlackVoid/scripts.pory"
	waitmessage
# 76 "data/maps/BlackVoid/scripts.pory"
	multichoice 25, 5, MULTI_MOTIVATION, TRUE
# 77 "data/maps/BlackVoid/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BlackVoid_EventScript_OnFrameTable1_16
# 82 "data/maps/BlackVoid/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BlackVoid_EventScript_OnFrameTable1_17
# 87 "data/maps/BlackVoid/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BlackVoid_EventScript_OnFrameTable1_18
BlackVoid_EventScript_OnFrameTable1_15:
# 92 "data/maps/BlackVoid/scripts.pory"
	waitmessage
# 94 "data/maps/BlackVoid/scripts.pory"
	message BlackVoid_Text_Outro
# 95 "data/maps/BlackVoid/scripts.pory"
	waitmessage
# 96 "data/maps/BlackVoid/scripts.pory"
	closemessage
# 98 "data/maps/BlackVoid/scripts.pory"
	fadescreen FADE_TO_BLACK
# 99 "data/maps/BlackVoid/scripts.pory"
	warpsilent MAP_MYSTERY_CAVE, 33, 5
# 100 "data/maps/BlackVoid/scripts.pory"
	delay 10
# 101 "data/maps/BlackVoid/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 102 "data/maps/BlackVoid/scripts.pory"
	setrespawn HEAL_LOCATION_MYSTERY_CAVE
# 104 "data/maps/BlackVoid/scripts.pory"
	release
	end

BlackVoid_EventScript_OnFrameTable1_2:
# 37 "data/maps/BlackVoid/scripts.pory"
	setvar VAR_START_QUESTION_1, 0
# 38 "data/maps/BlackVoid/scripts.pory"
	message BlackVoid_Text_Comment_Kanto
	goto BlackVoid_EventScript_OnFrameTable1_1

BlackVoid_EventScript_OnFrameTable1_3:
# 42 "data/maps/BlackVoid/scripts.pory"
	setvar VAR_START_QUESTION_1, 1
# 43 "data/maps/BlackVoid/scripts.pory"
	message BlackVoid_Text_Comment_Johto
	goto BlackVoid_EventScript_OnFrameTable1_1

BlackVoid_EventScript_OnFrameTable1_4:
# 47 "data/maps/BlackVoid/scripts.pory"
	setvar VAR_START_QUESTION_1, 2
# 48 "data/maps/BlackVoid/scripts.pory"
	message BlackVoid_Text_Comment_Hoenn
	goto BlackVoid_EventScript_OnFrameTable1_1

BlackVoid_EventScript_OnFrameTable1_9:
# 58 "data/maps/BlackVoid/scripts.pory"
	setvar VAR_START_QUESTION_2, 0
# 59 "data/maps/BlackVoid/scripts.pory"
	message BlackVoid_Text_Comment_Calm
	goto BlackVoid_EventScript_OnFrameTable1_8

BlackVoid_EventScript_OnFrameTable1_10:
# 63 "data/maps/BlackVoid/scripts.pory"
	setvar VAR_START_QUESTION_2, 1
# 64 "data/maps/BlackVoid/scripts.pory"
	message BlackVoid_Text_Comment_Excited
	goto BlackVoid_EventScript_OnFrameTable1_8

BlackVoid_EventScript_OnFrameTable1_11:
# 68 "data/maps/BlackVoid/scripts.pory"
	setvar VAR_START_QUESTION_2, 2
# 69 "data/maps/BlackVoid/scripts.pory"
	message BlackVoid_Text_Comment_Joyful
	goto BlackVoid_EventScript_OnFrameTable1_8

BlackVoid_EventScript_OnFrameTable1_16:
# 79 "data/maps/BlackVoid/scripts.pory"
	setvar VAR_START_QUESTION_3, 0
# 80 "data/maps/BlackVoid/scripts.pory"
	message BlackVoid_Text_Comment_Power
	goto BlackVoid_EventScript_OnFrameTable1_15

BlackVoid_EventScript_OnFrameTable1_17:
# 84 "data/maps/BlackVoid/scripts.pory"
	setvar VAR_START_QUESTION_3, 1
# 85 "data/maps/BlackVoid/scripts.pory"
	message BlackVoid_Text_Comment_Adventure
	goto BlackVoid_EventScript_OnFrameTable1_15

BlackVoid_EventScript_OnFrameTable1_18:
# 89 "data/maps/BlackVoid/scripts.pory"
	setvar VAR_START_QUESTION_3, 2
# 90 "data/maps/BlackVoid/scripts.pory"
	message BlackVoid_Text_Comment_Mysteries
	goto BlackVoid_EventScript_OnFrameTable1_15


BlackVoid_EventScript_WarpIntoMap::
# 110 "data/maps/BlackVoid/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_BLACK_VOID
	end


BlackVoid_Text_Intro::
# 114 "data/maps/BlackVoid/scripts.pory"
	.string "Intro\p"
	.string "$"

BlackVoid_Text_Outro::
# 118 "data/maps/BlackVoid/scripts.pory"
	.string "Outro\p"
	.string "$"

BlackVoid_Text_WhereAreYouFrom::
# 123 "data/maps/BlackVoid/scripts.pory"
	.string "Where are you from?$"

BlackVoid_Text_HowAreYouFeeling::
# 127 "data/maps/BlackVoid/scripts.pory"
	.string "How are you feeling right now?$"

BlackVoid_Text_WhatIsMotivation::
# 131 "data/maps/BlackVoid/scripts.pory"
	.string "What is your motivation?$"

BlackVoid_Text_Comment_Kanto::
# 135 "data/maps/BlackVoid/scripts.pory"
	.string "KANTO\p"
	.string "$"

BlackVoid_Text_Comment_Johto::
# 139 "data/maps/BlackVoid/scripts.pory"
	.string "JOHTO\p"
	.string "$"

BlackVoid_Text_Comment_Hoenn::
# 143 "data/maps/BlackVoid/scripts.pory"
	.string "HOENN\p"
	.string "$"

BlackVoid_Text_Comment_Calm::
# 147 "data/maps/BlackVoid/scripts.pory"
	.string "Calm\p"
	.string "$"

BlackVoid_Text_Comment_Excited::
# 151 "data/maps/BlackVoid/scripts.pory"
	.string "Excited\p"
	.string "$"

BlackVoid_Text_Comment_Joyful::
# 155 "data/maps/BlackVoid/scripts.pory"
	.string "Joyful\p"
	.string "$"

BlackVoid_Text_Comment_Power::
# 159 "data/maps/BlackVoid/scripts.pory"
	.string "Power\p"
	.string "$"

BlackVoid_Text_Comment_Adventure::
# 163 "data/maps/BlackVoid/scripts.pory"
	.string "Adventure\p"
	.string "$"

BlackVoid_Text_Comment_Mysteries::
# 167 "data/maps/BlackVoid/scripts.pory"
	.string "Mysteries\p"
	.string "$"
