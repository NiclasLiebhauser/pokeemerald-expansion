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
	playfanfare MUS_OBTAIN_ITEM
# 23 "data/maps/AquasHideout_2F/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_DIVE
# 24 "data/maps/AquasHideout_2F/scripts.pory"
	giveitem ITEM_MACHINE_DIVE
# 25 "data/maps/AquasHideout_2F/scripts.pory"
	waitfanfare
# 26 "data/maps/AquasHideout_2F/scripts.pory"
	waitmessage
# 27 "data/maps/AquasHideout_2F/scripts.pory"
	closemessage
	return


AquasHideout_2F_EventScript_EnterLab_Up::
# 32 "data/maps/AquasHideout_2F/scripts.pory"
	lock
# 33 "data/maps/AquasHideout_2F/scripts.pory"
	call AquasHideout_2F_DiveGrunt_FaceDown
# 34 "data/maps/AquasHideout_2F/scripts.pory"
	call AquasHideout_2F_DiveGrunt_Cutscene
	return


AquasHideout_2F_EventScript_EnterLab_Down::
# 38 "data/maps/AquasHideout_2F/scripts.pory"
	lock
# 39 "data/maps/AquasHideout_2F/scripts.pory"
	setflag FLAG_TEMP_1
# 40 "data/maps/AquasHideout_2F/scripts.pory"
	call AquasHideout_2F_DiveGrunt_FaceDown
# 41 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 42 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 43 "data/maps/AquasHideout_2F/scripts.pory"
	call AquasHideout_2F_DiveGrunt_Cutscene
	return


AquasHideout_2F_DiveGrunt_Cutscene::
# 47 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, AquasHideout_2F_Movement_DiveGrunt_WalkOn
# 48 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 50 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_DiveGrunt_Cutscene_Text_0, MSGBOX_YESNO
# 52 "data/maps/AquasHideout_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AquasHideout_2F_DiveGrunt_Cutscene_2
# 58 "data/maps/AquasHideout_2F/scripts.pory"
	message AquasHideout_2F_DiveGrunt_Cutscene_Text_2
AquasHideout_2F_DiveGrunt_Cutscene_1:
# 61 "data/maps/AquasHideout_2F/scripts.pory"
	waitmessage
# 62 "data/maps/AquasHideout_2F/scripts.pory"
	message AquasHideout_2F_DiveGrunt_Cutscene_Text_3
# 63 "data/maps/AquasHideout_2F/scripts.pory"
	waitmessage
# 64 "data/maps/AquasHideout_2F/scripts.pory"
	closemessage
# 66 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkRight2
# 67 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 69 "data/maps/AquasHideout_2F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AquasHideout_2F_DiveGrunt_Cutscene_6
AquasHideout_2F_DiveGrunt_Cutscene_5:
# 75 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, AquasHideout_2F_Movement_DiveGrunt_WalkItem
# 76 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 78 "data/maps/AquasHideout_2F/scripts.pory"
	delay 30
# 79 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 1
# 80 "data/maps/AquasHideout_2F/scripts.pory"
	playse SE_BALL
# 81 "data/maps/AquasHideout_2F/scripts.pory"
	waitse
# 82 "data/maps/AquasHideout_2F/scripts.pory"
	delay 15
# 84 "data/maps/AquasHideout_2F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AquasHideout_2F_DiveGrunt_Cutscene_9
AquasHideout_2F_DiveGrunt_Cutscene_8:
# 90 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, AquasHideout_2F_Movement_DiveGrunt_WalkOn
# 91 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 93 "data/maps/AquasHideout_2F/scripts.pory"
	call AquasHideout_2F_EventScript_DiveMachine
# 95 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkRight7
# 96 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 98 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 3
# 100 "data/maps/AquasHideout_2F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 102 "data/maps/AquasHideout_2F/scripts.pory"
	release
	end

AquasHideout_2F_DiveGrunt_Cutscene_2:
# 54 "data/maps/AquasHideout_2F/scripts.pory"
	message AquasHideout_2F_DiveGrunt_Cutscene_Text_1
	goto AquasHideout_2F_DiveGrunt_Cutscene_1

AquasHideout_2F_DiveGrunt_Cutscene_6:
# 71 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkUp
# 72 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
	goto AquasHideout_2F_DiveGrunt_Cutscene_5

AquasHideout_2F_DiveGrunt_Cutscene_9:
# 86 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 87 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
	goto AquasHideout_2F_DiveGrunt_Cutscene_8


AquasHideout_2F_DiveGrunt_FaceDown::
# 107 "data/maps/AquasHideout_2F/scripts.pory"
	playse SE_PIN
# 108 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 109 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 110 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 111 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
# 112 "data/maps/AquasHideout_2F/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 113 "data/maps/AquasHideout_2F/scripts.pory"
	waitmovement 0
	return


AquasHideout_2F_EventScript_Archie::
# 118 "data/maps/AquasHideout_2F/scripts.pory"
	lockall
# 119 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_Archie_PreBattel
# 120 "data/maps/AquasHideout_2F/scripts.pory"
	waitmessage
# 121 "data/maps/AquasHideout_2F/scripts.pory"
	closemessage
# 122 "data/maps/AquasHideout_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE_AQUA_HQ, AquasHideout_2F_Text_Archie_Defeat
# 123 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_Archie_PostBattel
# 124 "data/maps/AquasHideout_2F/scripts.pory"
	giveitem ITEM_BLUE_ORB_OFF
# 125 "data/maps/AquasHideout_2F/scripts.pory"
	waitse
# 126 "data/maps/AquasHideout_2F/scripts.pory"
	waitmessage
# 127 "data/maps/AquasHideout_2F/scripts.pory"
	closemessage
# 128 "data/maps/AquasHideout_2F/scripts.pory"
	setflag FLAG_AQUA_LEFT_HIDEOUT
# 129 "data/maps/AquasHideout_2F/scripts.pory"
	call AquasHideout_2F_RemoveAqua
# 130 "data/maps/AquasHideout_2F/scripts.pory"
	setvar VAR_LEVEL_CAP, 60
# 131 "data/maps/AquasHideout_2F/scripts.pory"
	call EventScript_Increase_LevelCap
# 132 "data/maps/AquasHideout_2F/scripts.pory"
	releaseall
	end


AquasHideout_2F_RemoveAqua::
# 137 "data/maps/AquasHideout_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 138 "data/maps/AquasHideout_2F/scripts.pory"
	playse SE_EXIT
# 139 "data/maps/AquasHideout_2F/scripts.pory"
	waitse
# 141 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 2
# 142 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 11
# 143 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 10
# 144 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 9
# 145 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 8
# 147 "data/maps/AquasHideout_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


AquasHideout_2F_EventScript_Grunt1::
# 152 "data/maps/AquasHideout_2F/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_AQUAHQ_2F_1, AquasHideout_2F_Text_Grunt1_Intro, AquasHideout_2F_Text_Grunt1_Defeat
# 153 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_Grunt1_PostBattle, MSGBOX_AUTOCLOSE
	return


AquasHideout_2F_EventScript_Grunt2::
# 157 "data/maps/AquasHideout_2F/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_AQUAHQ_2F_2, AquasHideout_2F_Text_Grunt2_Intro, AquasHideout_2F_Text_Grunt2_Defeat
# 158 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_Grunt2_PostBattle, MSGBOX_AUTOCLOSE
	return


AquasHideout_2F_EventScript_Grunt3::
# 162 "data/maps/AquasHideout_2F/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_AQUAHQ_2F_3, AquasHideout_2F_Text_Grunt3_Intro, AquasHideout_2F_Text_Grunt3_Defeat
# 163 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_Grunt3_PostBattle, MSGBOX_AUTOCLOSE
	return


AquasHideout_2F_EventScript_Grunt4::
# 167 "data/maps/AquasHideout_2F/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_AQUAHQ_2F_4, AquasHideout_2F_Text_Grunt4_Intro, AquasHideout_2F_Text_Grunt4_Defeat
# 168 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_Grunt4_PostBattle, MSGBOX_AUTOCLOSE
	return


# 234 "data/maps/AquasHideout_2F/scripts.pory"
AquasHideout_2F_Movement_DiveGrunt_WalkOn:
# 235 "data/maps/AquasHideout_2F/scripts.pory"
	walk_down
# 235 "data/maps/AquasHideout_2F/scripts.pory"
	walk_down
# 235 "data/maps/AquasHideout_2F/scripts.pory"
	walk_down
# 236 "data/maps/AquasHideout_2F/scripts.pory"
	walk_left
# 236 "data/maps/AquasHideout_2F/scripts.pory"
	walk_left
	step_end

# 239 "data/maps/AquasHideout_2F/scripts.pory"
AquasHideout_2F_Movement_DiveGrunt_WalkItem:
# 240 "data/maps/AquasHideout_2F/scripts.pory"
	walk_up
# 240 "data/maps/AquasHideout_2F/scripts.pory"
	walk_up
# 240 "data/maps/AquasHideout_2F/scripts.pory"
	walk_up
# 241 "data/maps/AquasHideout_2F/scripts.pory"
	face_left
	step_end

AquasHideout_2F_DiveGrunt_Cutscene_Text_0:
# 50 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Are you the guy?$"

AquasHideout_2F_DiveGrunt_Cutscene_Text_1:
# 54 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Great! I was waiting for you.\p"
	.string "$"

AquasHideout_2F_DiveGrunt_Cutscene_Text_2:
# 58 "data/maps/AquasHideout_2F/scripts.pory"
	.string "No? Weird...\n"
	.string "Anyways I am looking for someone to\l"
	.string "test out my new DIVE MACHINE.\p"
	.string "$"

AquasHideout_2F_DiveGrunt_Cutscene_Text_3:
# 62 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Just a moment...\p"
	.string "$"

AquasHideout_2F_Text_Grunt1_Intro::
# 171 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Intro$"

AquasHideout_2F_Text_Grunt1_Defeat::
# 175 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Defeat$"

AquasHideout_2F_Text_Grunt1_PostBattle::
# 179 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Post$"

AquasHideout_2F_Text_Grunt2_Intro::
# 183 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Intro$"

AquasHideout_2F_Text_Grunt2_Defeat::
# 187 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Defeat$"

AquasHideout_2F_Text_Grunt2_PostBattle::
# 191 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Post$"

AquasHideout_2F_Text_Grunt3_Intro::
# 195 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Intro$"

AquasHideout_2F_Text_Grunt3_Defeat::
# 199 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Defeat$"

AquasHideout_2F_Text_Grunt3_PostBattle::
# 203 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Post$"

AquasHideout_2F_Text_Grunt4_Intro::
# 206 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Intro$"

AquasHideout_2F_Text_Grunt4_Defeat::
# 210 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Defeat$"

AquasHideout_2F_Text_Grunt4_PostBattle::
# 214 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Post$"

AquasHideout_2F_Text_DiveMachine::
# 218 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Obtained DIVE MACHINE!$"

AquasHideout_2F_Text_Archie_PreBattel::
# 222 "data/maps/AquasHideout_2F/scripts.pory"
	.string "It was all my fault. If he hadn't given\n"
	.string "me the BLUE ORB on that fate full day...\l"
	.string "then... maybe...\p"
	.string "But what am I crying to you about that?\n"
	.string "I am Archie, the leader of the\l"
	.string "strongest team in all of Hoen. We\l"
	.string "achieved our goal of raising the sea\l"
	.string "level to improve life on Earth.\p"
	.string "Except this whole situation makes me\n"
	.string "feel miserable.\p"
	.string "Please end my pain.$"

AquasHideout_2F_Text_Archie_PostBattel::
# 226 "data/maps/AquasHideout_2F/scripts.pory"
	.string "I think I will renounce my leadership.\n"
	.string "What good came of it?\p"
	.string "Maybe I will try and become a fisherman.\n"
	.string "I always loved the sea.$"

AquasHideout_2F_Text_Archie_Defeat::
# 230 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Serves me right...$"
