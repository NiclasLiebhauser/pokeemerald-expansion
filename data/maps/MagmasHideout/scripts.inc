MagmasHideout_MapScripts::
	.byte 0


MagmasHideout_EventScript_StrengthMachine::
# 7 "data/maps/MagmasHideout/scripts.pory"
	removeobject 1
# 8 "data/maps/MagmasHideout/scripts.pory"
	setflag FLAG_ITEM_STRENGTH_MACHINE
# 9 "data/maps/MagmasHideout/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_STRENGTH
# 10 "data/maps/MagmasHideout/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 11 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_Text_StrengthMachine
# 12 "data/maps/MagmasHideout/scripts.pory"
	waitfanfare
# 13 "data/maps/MagmasHideout/scripts.pory"
	waitbuttonpress
# 14 "data/maps/MagmasHideout/scripts.pory"
	closemessage
	return


MagmasHideout_EventScript_StrengthGrunt::
# 22 "data/maps/MagmasHideout/scripts.pory"
	lockall
# 23 "data/maps/MagmasHideout/scripts.pory"
	playse SE_PIN
# 24 "data/maps/MagmasHideout/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 25 "data/maps/MagmasHideout/scripts.pory"
	waitmovement 0
# 26 "data/maps/MagmasHideout/scripts.pory"
	delay 48
# 27 "data/maps/MagmasHideout/scripts.pory"
	waitse
# 29 "data/maps/MagmasHideout/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 30 "data/maps/MagmasHideout/scripts.pory"
	faceplayer
# 32 "data/maps/MagmasHideout/scripts.pory"
	message MagmasHideout_EventScript_StrengthGrunt_Text_0
# 33 "data/maps/MagmasHideout/scripts.pory"
	waitmessage
# 34 "data/maps/MagmasHideout/scripts.pory"
	closemessage
# 36 "data/maps/MagmasHideout/scripts.pory"
	trainerbattle_no_intro TRAINER_MAGMA_GRUNT_HQ_1, MagmasHideout_EventScript_StrengthGrunt_Text_1
# 37 "data/maps/MagmasHideout/scripts.pory"
	special GetBattleOutcome
# 39 "data/maps/MagmasHideout/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MagmasHideout_EventScript_StrengthGrunt_2
MagmasHideout_EventScript_StrengthGrunt_1:
# 55 "data/maps/MagmasHideout/scripts.pory"
	releaseall
	end

MagmasHideout_EventScript_StrengthGrunt_2:
# 41 "data/maps/MagmasHideout/scripts.pory"
	message MagmasHideout_EventScript_StrengthGrunt_Text_2
# 42 "data/maps/MagmasHideout/scripts.pory"
	waitmessage
# 43 "data/maps/MagmasHideout/scripts.pory"
	closemessage
# 45 "data/maps/MagmasHideout/scripts.pory"
	fadescreen FADE_TO_BLACK
# 46 "data/maps/MagmasHideout/scripts.pory"
	playse SE_EXIT
# 47 "data/maps/MagmasHideout/scripts.pory"
	waitse
# 49 "data/maps/MagmasHideout/scripts.pory"
	setflag FLAG_HIDE_STRENGTH_GRUNT
# 50 "data/maps/MagmasHideout/scripts.pory"
	removeobject 7
# 52 "data/maps/MagmasHideout/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto MagmasHideout_EventScript_StrengthGrunt_1


MagmasHideout_EventScript_Grunt1::
# 60 "data/maps/MagmasHideout/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMAHQ_1, MagmasHideout_Text_Grunt1_Intro, MagmasHideout_Text_Grunt1_Defeat
# 61 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_Text_Grunt1_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmasHideout_EventScript_Grunt2::
# 65 "data/maps/MagmasHideout/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMAHQ_2, MagmasHideout_Text_Grunt2_Intro, MagmasHideout_Text_Grunt2_Defeat
# 66 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_Text_Grunt2_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmasHideout_EventScript_Grunt3::
# 70 "data/maps/MagmasHideout/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMAHQ_3, MagmasHideout_Text_Grunt3_Intro, MagmasHideout_Text_Grunt3_Defeat
# 71 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_Text_Grunt3_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmasHideout_EventScript_Grunt4::
# 75 "data/maps/MagmasHideout/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMAHQ_4, MagmasHideout_Text_Grunt4_Intro, MagmasHideout_Text_Grunt4_Defeat
# 76 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_Text_Grunt4_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmasHideout_EventScript_StrengthGrunt_Text_0:
# 32 "data/maps/MagmasHideout/scripts.pory"
	.string "You can't have my STRENGTH MACHINE.\n"
	.string "You can't have it...\p"
	.string "It's mine.\p"
	.string "And I wont give it to you.\p"
	.string "You don't want it?\n"
	.string "Lies! I say lies.\p"
	.string "You can't trick me. Prepare yourself,\n"
	.string "you'll have to pry that MACHINE from my\l"
	.string "cold dead hands.\p"
	.string "$"

MagmasHideout_EventScript_StrengthGrunt_Text_1:
# 36 "data/maps/MagmasHideout/scripts.pory"
	.string "No! Noone can have my MACHINE!$"

MagmasHideout_EventScript_StrengthGrunt_Text_2:
# 41 "data/maps/MagmasHideout/scripts.pory"
	.string "You beat me...\n"
	.string "Take it. I don't want it anymore.\p"
	.string "$"

MagmasHideout_Text_StrengthMachine::
# 17 "data/maps/MagmasHideout/scripts.pory"
	.string "Obtained STRENGTH MACHINE!$"

MagmasHideout_Text_Grunt1_Intro::
# 79 "data/maps/MagmasHideout/scripts.pory"
	.string "Intro$"

MagmasHideout_Text_Grunt1_Defeat::
# 83 "data/maps/MagmasHideout/scripts.pory"
	.string "Defeat$"

MagmasHideout_Text_Grunt1_PostBattle::
# 87 "data/maps/MagmasHideout/scripts.pory"
	.string "Post$"

MagmasHideout_Text_Grunt2_Intro::
# 91 "data/maps/MagmasHideout/scripts.pory"
	.string "Intro$"

MagmasHideout_Text_Grunt2_Defeat::
# 95 "data/maps/MagmasHideout/scripts.pory"
	.string "Defeat$"

MagmasHideout_Text_Grunt2_PostBattle::
# 99 "data/maps/MagmasHideout/scripts.pory"
	.string "Post$"

MagmasHideout_Text_Grunt3_Intro::
# 103 "data/maps/MagmasHideout/scripts.pory"
	.string "Intro$"

MagmasHideout_Text_Grunt3_Defeat::
# 107 "data/maps/MagmasHideout/scripts.pory"
	.string "Defeat$"

MagmasHideout_Text_Grunt3_PostBattle::
# 111 "data/maps/MagmasHideout/scripts.pory"
	.string "Post$"

MagmasHideout_Text_Grunt4_Intro::
# 115 "data/maps/MagmasHideout/scripts.pory"
	.string "Intro$"

MagmasHideout_Text_Grunt4_Defeat::
# 119 "data/maps/MagmasHideout/scripts.pory"
	.string "Defeat$"

MagmasHideout_Text_Grunt4_PostBattle::
# 123 "data/maps/MagmasHideout/scripts.pory"
	.string "Post$"
