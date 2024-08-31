MagmasHideout_MapScripts::
	.byte 0


MagmasHideout_EventScript_StrengthMachine::
# 7 "data/maps/MagmasHideout/scripts.pory"
	lock
# 8 "data/maps/MagmasHideout/scripts.pory"
	removeobject 1
# 9 "data/maps/MagmasHideout/scripts.pory"
	setflag FLAG_ITEM_STRENGTH_MACHINE
# 10 "data/maps/MagmasHideout/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_STRENGTH
# 11 "data/maps/MagmasHideout/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 12 "data/maps/MagmasHideout/scripts.pory"
	giveitem ITEM_MACHINE_STRENGTH
# 13 "data/maps/MagmasHideout/scripts.pory"
	waitfanfare
# 14 "data/maps/MagmasHideout/scripts.pory"
	waitmessage
# 15 "data/maps/MagmasHideout/scripts.pory"
	closemessage
# 16 "data/maps/MagmasHideout/scripts.pory"
	release
	end


MagmasHideout_EventScript_StrengthGrunt::
# 25 "data/maps/MagmasHideout/scripts.pory"
	lockall
# 26 "data/maps/MagmasHideout/scripts.pory"
	playse SE_PIN
# 27 "data/maps/MagmasHideout/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 28 "data/maps/MagmasHideout/scripts.pory"
	waitmovement 0
# 29 "data/maps/MagmasHideout/scripts.pory"
	delay 48
# 30 "data/maps/MagmasHideout/scripts.pory"
	waitse
# 32 "data/maps/MagmasHideout/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 33 "data/maps/MagmasHideout/scripts.pory"
	faceplayer
# 35 "data/maps/MagmasHideout/scripts.pory"
	message MagmasHideout_EventScript_StrengthGrunt_Text_0
# 36 "data/maps/MagmasHideout/scripts.pory"
	waitmessage
# 37 "data/maps/MagmasHideout/scripts.pory"
	closemessage
# 39 "data/maps/MagmasHideout/scripts.pory"
	trainerbattle_no_intro TRAINER_MAGMA_GRUNT_HQ_1, MagmasHideout_EventScript_StrengthGrunt_Text_1
# 40 "data/maps/MagmasHideout/scripts.pory"
	special GetBattleOutcome
# 42 "data/maps/MagmasHideout/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MagmasHideout_EventScript_StrengthGrunt_2
MagmasHideout_EventScript_StrengthGrunt_1:
# 58 "data/maps/MagmasHideout/scripts.pory"
	releaseall
	end

MagmasHideout_EventScript_StrengthGrunt_2:
# 44 "data/maps/MagmasHideout/scripts.pory"
	message MagmasHideout_EventScript_StrengthGrunt_Text_2
# 45 "data/maps/MagmasHideout/scripts.pory"
	waitmessage
# 46 "data/maps/MagmasHideout/scripts.pory"
	closemessage
# 48 "data/maps/MagmasHideout/scripts.pory"
	fadescreen FADE_TO_BLACK
# 49 "data/maps/MagmasHideout/scripts.pory"
	playse SE_EXIT
# 50 "data/maps/MagmasHideout/scripts.pory"
	waitse
# 52 "data/maps/MagmasHideout/scripts.pory"
	setflag FLAG_HIDE_STRENGTH_GRUNT
# 53 "data/maps/MagmasHideout/scripts.pory"
	removeobject 7
# 55 "data/maps/MagmasHideout/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto MagmasHideout_EventScript_StrengthGrunt_1


MagmasHideout_EventScript_Grunt1::
# 63 "data/maps/MagmasHideout/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMAHQ_1, MagmasHideout_Text_Grunt1_Intro, MagmasHideout_Text_Grunt1_Defeat
# 64 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_Text_Grunt1_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmasHideout_EventScript_Grunt2::
# 68 "data/maps/MagmasHideout/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMAHQ_2, MagmasHideout_Text_Grunt2_Intro, MagmasHideout_Text_Grunt2_Defeat
# 69 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_Text_Grunt2_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmasHideout_EventScript_Grunt3::
# 73 "data/maps/MagmasHideout/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMAHQ_3, MagmasHideout_Text_Grunt3_Intro, MagmasHideout_Text_Grunt3_Defeat
# 74 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_Text_Grunt3_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmasHideout_EventScript_Grunt4::
# 78 "data/maps/MagmasHideout/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMAHQ_4, MagmasHideout_Text_Grunt4_Intro, MagmasHideout_Text_Grunt4_Defeat
# 79 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_Text_Grunt4_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmasHideout_EventScript_StrengthGrunt_Text_0:
# 35 "data/maps/MagmasHideout/scripts.pory"
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
# 39 "data/maps/MagmasHideout/scripts.pory"
	.string "No! Noone can have my MACHINE!$"

MagmasHideout_EventScript_StrengthGrunt_Text_2:
# 44 "data/maps/MagmasHideout/scripts.pory"
	.string "You beat me...\n"
	.string "Take it. I don't want it anymore.\p"
	.string "$"

MagmasHideout_Text_StrengthMachine::
# 20 "data/maps/MagmasHideout/scripts.pory"
	.string "Obtained STRENGTH MACHINE!$"

MagmasHideout_Text_Grunt1_Intro::
# 82 "data/maps/MagmasHideout/scripts.pory"
	.string "Intro$"

MagmasHideout_Text_Grunt1_Defeat::
# 86 "data/maps/MagmasHideout/scripts.pory"
	.string "Defeat$"

MagmasHideout_Text_Grunt1_PostBattle::
# 90 "data/maps/MagmasHideout/scripts.pory"
	.string "Post$"

MagmasHideout_Text_Grunt2_Intro::
# 94 "data/maps/MagmasHideout/scripts.pory"
	.string "Intro$"

MagmasHideout_Text_Grunt2_Defeat::
# 98 "data/maps/MagmasHideout/scripts.pory"
	.string "Defeat$"

MagmasHideout_Text_Grunt2_PostBattle::
# 102 "data/maps/MagmasHideout/scripts.pory"
	.string "Post$"

MagmasHideout_Text_Grunt3_Intro::
# 106 "data/maps/MagmasHideout/scripts.pory"
	.string "Intro$"

MagmasHideout_Text_Grunt3_Defeat::
# 110 "data/maps/MagmasHideout/scripts.pory"
	.string "Defeat$"

MagmasHideout_Text_Grunt3_PostBattle::
# 114 "data/maps/MagmasHideout/scripts.pory"
	.string "Post$"

MagmasHideout_Text_Grunt4_Intro::
# 118 "data/maps/MagmasHideout/scripts.pory"
	.string "Intro$"

MagmasHideout_Text_Grunt4_Defeat::
# 122 "data/maps/MagmasHideout/scripts.pory"
	.string "Defeat$"

MagmasHideout_Text_Grunt4_PostBattle::
# 126 "data/maps/MagmasHideout/scripts.pory"
	.string "Post$"
