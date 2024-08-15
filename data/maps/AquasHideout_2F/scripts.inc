AquasHideout_2F_MapScripts::
# 7 "data/maps/AquasHideout_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AquasHideout_2F_EventScript_OnLoad
	.byte 0


AquasHideout_2F_EventScript_OnLoad::
# 11 "data/maps/AquasHideout_2F/scripts.pory"
	goto_if_set FLAG_PLAYER_CAN_USE_DIVE, AquasHideout_2F_EventScript_OnLoad_1
	return

AquasHideout_2F_EventScript_OnLoad_1:
# 13 "data/maps/AquasHideout_2F/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


AquasHideout_2F_EventScript_DiveMachine::
# 18 "data/maps/AquasHideout_2F/scripts.pory"
	setflag FLAG_ITEM_DIVE_MACHINE
# 19 "data/maps/AquasHideout_2F/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_DIVE
# 20 "data/maps/AquasHideout_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 21 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_DiveMachine, MSGBOX_AUTOCLOSE
# 22 "data/maps/AquasHideout_2F/scripts.pory"
	waitfanfare
	return


AquasHideout_2F_EventScript_EnterLab_Up::
# 27 "data/maps/AquasHideout_2F/scripts.pory"
	lock
# 28 "data/maps/AquasHideout_2F/scripts.pory"
	call AquasHideout_2F_DiveGrunt_FaceDown
# 29 "data/maps/AquasHideout_2F/scripts.pory"
	call AquasHideout_2F_DiveGrunt_Cutscene
	return


AquasHideout_2F_EventScript_EnterLab_Down::
# 33 "data/maps/AquasHideout_2F/scripts.pory"
	lock
# 34 "data/maps/AquasHideout_2F/scripts.pory"
	setflag FLAG_TEMP_1
# 35 "data/maps/AquasHideout_2F/scripts.pory"
	call AquasHideout_2F_DiveGrunt_FaceDown
# 36 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 37 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 38 "data/maps/AquasHideout_2F/scripts.pory"
	call AquasHideout_2F_DiveGrunt_Cutscene
	return


AquasHideout_2F_DiveGrunt_Cutscene::
# 42 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, AquasHideout_2F_Movement_DiveGrunt_WalkOn
# 43 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 45 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_DiveGrunt_Cutscene_Text_0, MSGBOX_YESNO
# 47 "data/maps/AquasHideout_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AquasHideout_2F_DiveGrunt_Cutscene_2
# 53 "data/maps/AquasHideout_2F/scripts.pory"
	message AquasHideout_2F_DiveGrunt_Cutscene_Text_2
AquasHideout_2F_DiveGrunt_Cutscene_1:
# 56 "data/maps/AquasHideout_2F/scripts.pory"
	waitmessage
# 57 "data/maps/AquasHideout_2F/scripts.pory"
	message AquasHideout_2F_DiveGrunt_Cutscene_Text_3
# 58 "data/maps/AquasHideout_2F/scripts.pory"
	waitmessage
# 59 "data/maps/AquasHideout_2F/scripts.pory"
	closemessage
# 61 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkRight2
# 62 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 64 "data/maps/AquasHideout_2F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AquasHideout_2F_DiveGrunt_Cutscene_6
AquasHideout_2F_DiveGrunt_Cutscene_5:
# 70 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, AquasHideout_2F_Movement_DiveGrunt_WalkItem
# 71 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 73 "data/maps/AquasHideout_2F/scripts.pory"
	delay 30
# 74 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 1
# 75 "data/maps/AquasHideout_2F/scripts.pory"
	playse SE_BALL
# 76 "data/maps/AquasHideout_2F/scripts.pory"
	waitse
# 77 "data/maps/AquasHideout_2F/scripts.pory"
	delay 15
# 79 "data/maps/AquasHideout_2F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AquasHideout_2F_DiveGrunt_Cutscene_9
AquasHideout_2F_DiveGrunt_Cutscene_8:
# 85 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, AquasHideout_2F_Movement_DiveGrunt_WalkOn
# 86 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 88 "data/maps/AquasHideout_2F/scripts.pory"
	call AquasHideout_2F_EventScript_DiveMachine
# 90 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkRight7
# 91 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 93 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 3
# 95 "data/maps/AquasHideout_2F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 97 "data/maps/AquasHideout_2F/scripts.pory"
	release
	end

AquasHideout_2F_DiveGrunt_Cutscene_2:
# 49 "data/maps/AquasHideout_2F/scripts.pory"
	message AquasHideout_2F_DiveGrunt_Cutscene_Text_1
	goto AquasHideout_2F_DiveGrunt_Cutscene_1

AquasHideout_2F_DiveGrunt_Cutscene_6:
# 66 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkUp
# 67 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
	goto AquasHideout_2F_DiveGrunt_Cutscene_5

AquasHideout_2F_DiveGrunt_Cutscene_9:
# 81 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 82 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
	goto AquasHideout_2F_DiveGrunt_Cutscene_8


AquasHideout_2F_DiveGrunt_FaceDown::
# 102 "data/maps/AquasHideout_2F/scripts.pory"
	playse SE_PIN
# 103 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 104 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 105 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 106 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 107 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 108 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
	return


AquasHideout_2F_EventScript_Archie::
# 113 "data/maps/AquasHideout_2F/scripts.pory"
	lockall
# 114 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_Archie_PreBattel
# 115 "data/maps/AquasHideout_2F/scripts.pory"
	waitmessage
# 116 "data/maps/AquasHideout_2F/scripts.pory"
	closemessage
# 117 "data/maps/AquasHideout_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE_AQUA_HQ, AquasHideout_2F_Text_Archie_Defeat
# 118 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_Archie_PostBattel
# 119 "data/maps/AquasHideout_2F/scripts.pory"
	giveitem ITEM_BLUE_ORB_OFF
# 120 "data/maps/AquasHideout_2F/scripts.pory"
	waitse
# 121 "data/maps/AquasHideout_2F/scripts.pory"
	waitmessage
# 122 "data/maps/AquasHideout_2F/scripts.pory"
	closemessage
# 123 "data/maps/AquasHideout_2F/scripts.pory"
	setflag FLAG_AQUA_LEFT_HIDEOUT
# 124 "data/maps/AquasHideout_2F/scripts.pory"
	call AquasHideout_2F_RemoveAqua
# 125 "data/maps/AquasHideout_2F/scripts.pory"
	setvar VAR_LEVEL_CAP, 60
# 126 "data/maps/AquasHideout_2F/scripts.pory"
	releaseall
	end


AquasHideout_2F_RemoveAqua::
# 131 "data/maps/AquasHideout_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 132 "data/maps/AquasHideout_2F/scripts.pory"
	playse SE_EXIT
# 133 "data/maps/AquasHideout_2F/scripts.pory"
	waitse
# 135 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 2
# 137 "data/maps/AquasHideout_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


# 160 "data/maps/AquasHideout_2F/scripts.pory"
AquasHideout_2F_Movement_DiveGrunt_WalkOn:
# 161 "data/maps/AquasHideout_2F/scripts.pory"
	walk_down
# 161 "data/maps/AquasHideout_2F/scripts.pory"
	walk_down
# 161 "data/maps/AquasHideout_2F/scripts.pory"
	walk_down
# 162 "data/maps/AquasHideout_2F/scripts.pory"
	walk_left
# 162 "data/maps/AquasHideout_2F/scripts.pory"
	walk_left
	step_end

# 165 "data/maps/AquasHideout_2F/scripts.pory"
AquasHideout_2F_Movement_DiveGrunt_WalkItem:
# 166 "data/maps/AquasHideout_2F/scripts.pory"
	walk_up
# 166 "data/maps/AquasHideout_2F/scripts.pory"
	walk_up
# 166 "data/maps/AquasHideout_2F/scripts.pory"
	walk_up
# 167 "data/maps/AquasHideout_2F/scripts.pory"
	face_left
	step_end

AquasHideout_2F_DiveGrunt_Cutscene_Text_0:
# 45 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Are you the guy?$"

AquasHideout_2F_DiveGrunt_Cutscene_Text_1:
# 49 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Great! I was waiting for you.\p"
	.string "$"

AquasHideout_2F_DiveGrunt_Cutscene_Text_2:
# 53 "data/maps/AquasHideout_2F/scripts.pory"
	.string "No? Weird...\n"
	.string "Anyways I am looking for someone to\l"
	.string "test out my new DIVE MACHINE.\p"
	.string "$"

AquasHideout_2F_DiveGrunt_Cutscene_Text_3:
# 57 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Just a moment...\p"
	.string "$"

AquasHideout_2F_Text_DiveMachine::
# 141 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Obtained DIVE MACHINE!$"

AquasHideout_2F_Text_Archie_PreBattel::
# 146 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Lorem ipsum dolor sit amet, consectetur\n"
	.string "adipiscing elit, sed do eiusmod tempor\l"
	.string "incididunt ut labore et dolore magna\l"
	.string "aliqua.$"

AquasHideout_2F_Text_Archie_PostBattel::
# 151 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Lorem ipsum dolor sit amet, consectetur\n"
	.string "adipiscing elit, sed do eiusmod tempor\l"
	.string "incididunt ut labore et dolore magna\l"
	.string "aliqua.$"

AquasHideout_2F_Text_Archie_Defeat::
# 156 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Lorem ipsum dolor sit amet, consectetur\n"
	.string "adipiscing elit, sed do eiusmod tempor\l"
	.string "incididunt ut labore et dolore magna\l"
	.string "aliqua.$"
