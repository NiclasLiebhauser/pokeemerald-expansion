AquasHideout_2F_MapScripts::
# 10 "data/maps/AquasHideout_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AquasHideout_2F_EventScript_OnLoad
	.byte 0


AquasHideout_2F_EventScript_OnLoad::
# 14 "data/maps/AquasHideout_2F/scripts.pory"
	goto_if_set FLAG_PLAYER_CAN_USE_DIVE, AquasHideout_2F_EventScript_OnLoad_1
	return

AquasHideout_2F_EventScript_OnLoad_1:
# 16 "data/maps/AquasHideout_2F/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


AquasHideout_2F_EventScript_DiveMachine::
# 21 "data/maps/AquasHideout_2F/scripts.pory"
	setflag FLAG_ITEM_DIVE_MACHINE
# 22 "data/maps/AquasHideout_2F/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_DIVE
# 23 "data/maps/AquasHideout_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 24 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_DiveMachine, MSGBOX_AUTOCLOSE
# 25 "data/maps/AquasHideout_2F/scripts.pory"
	waitfanfare
	return


AquasHideout_2F_EventScript_EnterLab_Up::
# 30 "data/maps/AquasHideout_2F/scripts.pory"
	lock
# 31 "data/maps/AquasHideout_2F/scripts.pory"
	call AquasHideout_2F_DiveGrunt_FaceDown
# 32 "data/maps/AquasHideout_2F/scripts.pory"
	call AquasHideout_2F_DiveGrunt_Cutscene
	return


AquasHideout_2F_EventScript_EnterLab_Down::
# 36 "data/maps/AquasHideout_2F/scripts.pory"
	lock
# 37 "data/maps/AquasHideout_2F/scripts.pory"
	setflag FLAG_TEMP_1
# 38 "data/maps/AquasHideout_2F/scripts.pory"
	call AquasHideout_2F_DiveGrunt_FaceDown
# 39 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 40 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 41 "data/maps/AquasHideout_2F/scripts.pory"
	call AquasHideout_2F_DiveGrunt_Cutscene
	return


AquasHideout_2F_DiveGrunt_Cutscene::
# 45 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, AquasHideout_2F_Movement_DiveGrunt_WalkOn
# 46 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 48 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_DiveGrunt_Cutscene_Text_0, MSGBOX_YESNO
# 50 "data/maps/AquasHideout_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AquasHideout_2F_DiveGrunt_Cutscene_2
# 56 "data/maps/AquasHideout_2F/scripts.pory"
	message AquasHideout_2F_DiveGrunt_Cutscene_Text_2
AquasHideout_2F_DiveGrunt_Cutscene_1:
# 59 "data/maps/AquasHideout_2F/scripts.pory"
	waitmessage
# 60 "data/maps/AquasHideout_2F/scripts.pory"
	message AquasHideout_2F_DiveGrunt_Cutscene_Text_3
# 61 "data/maps/AquasHideout_2F/scripts.pory"
	waitmessage
# 62 "data/maps/AquasHideout_2F/scripts.pory"
	closemessage
# 64 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkRight2
# 65 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 67 "data/maps/AquasHideout_2F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AquasHideout_2F_DiveGrunt_Cutscene_6
AquasHideout_2F_DiveGrunt_Cutscene_5:
# 73 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, AquasHideout_2F_Movement_DiveGrunt_WalkItem
# 74 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 76 "data/maps/AquasHideout_2F/scripts.pory"
	delay 30
# 77 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 1
# 78 "data/maps/AquasHideout_2F/scripts.pory"
	playse SE_BALL
# 79 "data/maps/AquasHideout_2F/scripts.pory"
	waitse
# 80 "data/maps/AquasHideout_2F/scripts.pory"
	delay 15
# 82 "data/maps/AquasHideout_2F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AquasHideout_2F_DiveGrunt_Cutscene_9
AquasHideout_2F_DiveGrunt_Cutscene_8:
# 88 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, AquasHideout_2F_Movement_DiveGrunt_WalkOn
# 89 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 91 "data/maps/AquasHideout_2F/scripts.pory"
	call AquasHideout_2F_EventScript_DiveMachine
# 93 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkRight7
# 94 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 96 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 3
# 98 "data/maps/AquasHideout_2F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 100 "data/maps/AquasHideout_2F/scripts.pory"
	release
	end

AquasHideout_2F_DiveGrunt_Cutscene_2:
# 52 "data/maps/AquasHideout_2F/scripts.pory"
	message AquasHideout_2F_DiveGrunt_Cutscene_Text_1
	goto AquasHideout_2F_DiveGrunt_Cutscene_1

AquasHideout_2F_DiveGrunt_Cutscene_6:
# 69 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkUp
# 70 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
	goto AquasHideout_2F_DiveGrunt_Cutscene_5

AquasHideout_2F_DiveGrunt_Cutscene_9:
# 84 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 85 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
	goto AquasHideout_2F_DiveGrunt_Cutscene_8


AquasHideout_2F_DiveGrunt_FaceDown::
# 105 "data/maps/AquasHideout_2F/scripts.pory"
	playse SE_PIN
# 106 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 107 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 108 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 109 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 110 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 111 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
	return


AquasHideout_2F_EventScript_Archie::
# 116 "data/maps/AquasHideout_2F/scripts.pory"
	lockall
# 117 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_Archie_PreBattel
# 118 "data/maps/AquasHideout_2F/scripts.pory"
	waitmessage
# 119 "data/maps/AquasHideout_2F/scripts.pory"
	closemessage
# 120 "data/maps/AquasHideout_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE_AQUA_HQ, AquasHideout_2F_Text_Archie_Defeat
# 121 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_Archie_PostBattel
# 122 "data/maps/AquasHideout_2F/scripts.pory"
	giveitem ITEM_BLUE_ORB_OFF
# 123 "data/maps/AquasHideout_2F/scripts.pory"
	waitse
# 124 "data/maps/AquasHideout_2F/scripts.pory"
	waitmessage
# 125 "data/maps/AquasHideout_2F/scripts.pory"
	closemessage
# 126 "data/maps/AquasHideout_2F/scripts.pory"
	setflag FLAG_AQUA_LEFT_HIDEOUT
# 127 "data/maps/AquasHideout_2F/scripts.pory"
	call AquasHideout_2F_RemoveAqua
# 128 "data/maps/AquasHideout_2F/scripts.pory"
	setvar VAR_LEVEL_CAP, 60
# 129 "data/maps/AquasHideout_2F/scripts.pory"
	call EventScript_Increase_LevelCap
# 130 "data/maps/AquasHideout_2F/scripts.pory"
	releaseall
	end


AquasHideout_2F_RemoveAqua::
# 135 "data/maps/AquasHideout_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 136 "data/maps/AquasHideout_2F/scripts.pory"
	playse SE_EXIT
# 137 "data/maps/AquasHideout_2F/scripts.pory"
	waitse
# 139 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 2
# 140 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 11
# 141 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 10
# 142 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 9
# 143 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 8
# 145 "data/maps/AquasHideout_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


AquasHideout_2F_EventScript_Grunt1::
# 150 "data/maps/AquasHideout_2F/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_AQUAHQ_2F_1, AquasHideout_2F_Text_Grunt1_Intro, AquasHideout_2F_Text_Grunt1_Defeat
# 151 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_Grunt1_PostBattle, MSGBOX_AUTOCLOSE
	return


AquasHideout_2F_EventScript_Grunt2::
# 155 "data/maps/AquasHideout_2F/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_AQUAHQ_2F_2, AquasHideout_2F_Text_Grunt2_Intro, AquasHideout_2F_Text_Grunt2_Defeat
# 156 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_Grunt2_PostBattle, MSGBOX_AUTOCLOSE
	return


AquasHideout_2F_EventScript_Grunt3::
# 160 "data/maps/AquasHideout_2F/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_AQUAHQ_2F_3, AquasHideout_2F_Text_Grunt3_Intro, AquasHideout_2F_Text_Grunt3_Defeat
# 161 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_Grunt3_PostBattle, MSGBOX_AUTOCLOSE
	return


AquasHideout_2F_EventScript_Grunt4::
# 165 "data/maps/AquasHideout_2F/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_AQUAHQ_2F_4, AquasHideout_2F_Text_Grunt4_Intro, AquasHideout_2F_Text_Grunt4_Defeat
# 166 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_Grunt4_PostBattle, MSGBOX_AUTOCLOSE
	return


# 235 "data/maps/AquasHideout_2F/scripts.pory"
AquasHideout_2F_Movement_DiveGrunt_WalkOn:
# 236 "data/maps/AquasHideout_2F/scripts.pory"
	walk_down
# 236 "data/maps/AquasHideout_2F/scripts.pory"
	walk_down
# 236 "data/maps/AquasHideout_2F/scripts.pory"
	walk_down
# 237 "data/maps/AquasHideout_2F/scripts.pory"
	walk_left
# 237 "data/maps/AquasHideout_2F/scripts.pory"
	walk_left
	step_end

# 240 "data/maps/AquasHideout_2F/scripts.pory"
AquasHideout_2F_Movement_DiveGrunt_WalkItem:
# 241 "data/maps/AquasHideout_2F/scripts.pory"
	walk_up
# 241 "data/maps/AquasHideout_2F/scripts.pory"
	walk_up
# 241 "data/maps/AquasHideout_2F/scripts.pory"
	walk_up
# 242 "data/maps/AquasHideout_2F/scripts.pory"
	face_left
	step_end

AquasHideout_2F_DiveGrunt_Cutscene_Text_0:
# 48 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Are you the guy?$"

AquasHideout_2F_DiveGrunt_Cutscene_Text_1:
# 52 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Great! I was waiting for you.\p"
	.string "$"

AquasHideout_2F_DiveGrunt_Cutscene_Text_2:
# 56 "data/maps/AquasHideout_2F/scripts.pory"
	.string "No? Weird...\n"
	.string "Anyways I am looking for someone to\l"
	.string "test out my new DIVE MACHINE.\p"
	.string "$"

AquasHideout_2F_DiveGrunt_Cutscene_Text_3:
# 60 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Just a moment...\p"
	.string "$"

AquasHideout_2F_Text_Grunt1_Intro::
# 169 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Intro$"

AquasHideout_2F_Text_Grunt1_Defeat::
# 173 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Defeat$"

AquasHideout_2F_Text_Grunt1_PostBattle::
# 177 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Post$"

AquasHideout_2F_Text_Grunt2_Intro::
# 181 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Intro$"

AquasHideout_2F_Text_Grunt2_Defeat::
# 185 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Defeat$"

AquasHideout_2F_Text_Grunt2_PostBattle::
# 189 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Post$"

AquasHideout_2F_Text_Grunt3_Intro::
# 193 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Intro$"

AquasHideout_2F_Text_Grunt3_Defeat::
# 197 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Defeat$"

AquasHideout_2F_Text_Grunt3_PostBattle::
# 201 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Post$"

AquasHideout_2F_Text_Grunt4_Intro::
# 204 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Intro$"

AquasHideout_2F_Text_Grunt4_Defeat::
# 208 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Defeat$"

AquasHideout_2F_Text_Grunt4_PostBattle::
# 212 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Post$"

AquasHideout_2F_Text_DiveMachine::
# 216 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Obtained DIVE MACHINE!$"

AquasHideout_2F_Text_Archie_PreBattel::
# 221 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Lorem ipsum dolor sit amet, consectetur\n"
	.string "adipiscing elit, sed do eiusmod tempor\l"
	.string "incididunt ut labore et dolore magna\l"
	.string "aliqua.$"

AquasHideout_2F_Text_Archie_PostBattel::
# 226 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Lorem ipsum dolor sit amet, consectetur\n"
	.string "adipiscing elit, sed do eiusmod tempor\l"
	.string "incididunt ut labore et dolore magna\l"
	.string "aliqua.$"

AquasHideout_2F_Text_Archie_Defeat::
# 231 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Lorem ipsum dolor sit amet, consectetur\n"
	.string "adipiscing elit, sed do eiusmod tempor\l"
	.string "incididunt ut labore et dolore magna\l"
	.string "aliqua.$"
