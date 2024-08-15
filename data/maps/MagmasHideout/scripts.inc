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
	delay 48
# 25 "data/maps/MagmasHideout/scripts.pory"
	waitse
# 27 "data/maps/MagmasHideout/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 28 "data/maps/MagmasHideout/scripts.pory"
	faceplayer
# 30 "data/maps/MagmasHideout/scripts.pory"
	message MagmasHideout_EventScript_StrengthGrunt_Text_0
# 31 "data/maps/MagmasHideout/scripts.pory"
	waitmessage
# 32 "data/maps/MagmasHideout/scripts.pory"
	closemessage
# 34 "data/maps/MagmasHideout/scripts.pory"
	trainerbattle_no_intro TRAINER_MAGMA_GRUNT_HQ_1, MagmasHideout_EventScript_StrengthGrunt_Text_1
# 35 "data/maps/MagmasHideout/scripts.pory"
	special GetBattleOutcome
# 37 "data/maps/MagmasHideout/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MagmasHideout_EventScript_StrengthGrunt_2
MagmasHideout_EventScript_StrengthGrunt_1:
# 53 "data/maps/MagmasHideout/scripts.pory"
	releaseall
	end

MagmasHideout_EventScript_StrengthGrunt_2:
# 39 "data/maps/MagmasHideout/scripts.pory"
	message MagmasHideout_EventScript_StrengthGrunt_Text_2
# 40 "data/maps/MagmasHideout/scripts.pory"
	waitmessage
# 41 "data/maps/MagmasHideout/scripts.pory"
	closemessage
# 43 "data/maps/MagmasHideout/scripts.pory"
	fadescreen FADE_TO_BLACK
# 44 "data/maps/MagmasHideout/scripts.pory"
	playse SE_EXIT
# 45 "data/maps/MagmasHideout/scripts.pory"
	waitse
# 47 "data/maps/MagmasHideout/scripts.pory"
	setflag FLAG_HIDE_STRENGTH_GRUNT
# 48 "data/maps/MagmasHideout/scripts.pory"
	removeobject 7
# 50 "data/maps/MagmasHideout/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto MagmasHideout_EventScript_StrengthGrunt_1


MagmasHideout_EventScript_StrengthGrunt_Text_0:
# 30 "data/maps/MagmasHideout/scripts.pory"
	.string "You can't have my STRENGTH MACHINE.\n"
	.string "You can't have it...\p"
	.string "It's mine.\p"
	.string "And I wont give it to you.\p"
	.string "You don't want it?\n"
	.string "Lies! I say lies.\p"
	.string "You can't trick me. Prepare yourself,\n"
	.string "you'll have pry that MACHINE from my\l"
	.string "cold dead hands.\p"
	.string "$"

MagmasHideout_EventScript_StrengthGrunt_Text_1:
# 34 "data/maps/MagmasHideout/scripts.pory"
	.string "No! Noone can have my MACHINE!$"

MagmasHideout_EventScript_StrengthGrunt_Text_2:
# 39 "data/maps/MagmasHideout/scripts.pory"
	.string "You beat me...\n"
	.string "Take it. I don't want it anymore.\p"
	.string "$"

MagmasHideout_Text_StrengthMachine::
# 17 "data/maps/MagmasHideout/scripts.pory"
	.string "Obtained STRENGTH MACHINE!$"
