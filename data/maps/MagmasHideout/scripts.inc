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


MagmasHideout_EventScript_Crow::
# 63 "data/maps/MagmasHideout/scripts.pory"
	lock
# 64 "data/maps/MagmasHideout/scripts.pory"
	faceplayer
# 65 "data/maps/MagmasHideout/scripts.pory"
	message MagmasHideout_EventScript_Crow_Text_0
# 66 "data/maps/MagmasHideout/scripts.pory"
	waitmessage
# 67 "data/maps/MagmasHideout/scripts.pory"
	pokemart MagmasHideout_Crow
# 68 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_EventScript_Crow_Text_1
# 69 "data/maps/MagmasHideout/scripts.pory"
	release
	end


MagmasHideout_EventScript_Grunt1::
# 74 "data/maps/MagmasHideout/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMAHQ_1, MagmasHideout_Text_Grunt1_Intro, MagmasHideout_Text_Grunt1_Defeat
# 75 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_Text_Grunt1_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmasHideout_EventScript_Grunt2::
# 79 "data/maps/MagmasHideout/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMAHQ_2, MagmasHideout_Text_Grunt2_Intro, MagmasHideout_Text_Grunt2_Defeat
# 80 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_Text_Grunt2_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmasHideout_EventScript_Grunt3::
# 84 "data/maps/MagmasHideout/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMAHQ_3, MagmasHideout_Text_Grunt3_Intro, MagmasHideout_Text_Grunt3_Defeat
# 85 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_Text_Grunt3_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmasHideout_EventScript_Grunt4::
# 89 "data/maps/MagmasHideout/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMAHQ_4, MagmasHideout_Text_Grunt4_Intro, MagmasHideout_Text_Grunt4_Defeat
# 90 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_Text_Grunt4_PostBattle, MSGBOX_AUTOCLOSE
	return


	.align 2
# 141 "data/maps/MagmasHideout/scripts.pory"
MagmasHideout_Crow:
# 142 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 143 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 144 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_ICE_STONE
# 145 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_WATER_STONE
# 146 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 147 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_SUN_STONE
# 148 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 149 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 150 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 151 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 152 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 153 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 154 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 155 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 156 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 157 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 158 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 159 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_METAL_COAT
# 160 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_PROTECTOR
# 161 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 162 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 163 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 164 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_UPGRADE
# 165 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 166 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 167 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 168 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 169 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
	.2byte ITEM_NONE

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

MagmasHideout_EventScript_Crow_Text_0:
# 65 "data/maps/MagmasHideout/scripts.pory"
	.string "Hey, they call me Crow because I like\n"
	.string "shiny stuff. Wanna buy something?$"

MagmasHideout_EventScript_Crow_Text_1:
# 68 "data/maps/MagmasHideout/scripts.pory"
	.string "Come by from time to time.$"

MagmasHideout_Text_StrengthMachine::
# 20 "data/maps/MagmasHideout/scripts.pory"
	.string "Obtained STRENGTH MACHINE!$"

MagmasHideout_Text_Grunt1_Intro::
# 93 "data/maps/MagmasHideout/scripts.pory"
	.string "Intro$"

MagmasHideout_Text_Grunt1_Defeat::
# 97 "data/maps/MagmasHideout/scripts.pory"
	.string "Defeat$"

MagmasHideout_Text_Grunt1_PostBattle::
# 101 "data/maps/MagmasHideout/scripts.pory"
	.string "Post$"

MagmasHideout_Text_Grunt2_Intro::
# 105 "data/maps/MagmasHideout/scripts.pory"
	.string "Intro$"

MagmasHideout_Text_Grunt2_Defeat::
# 109 "data/maps/MagmasHideout/scripts.pory"
	.string "Defeat$"

MagmasHideout_Text_Grunt2_PostBattle::
# 113 "data/maps/MagmasHideout/scripts.pory"
	.string "Post$"

MagmasHideout_Text_Grunt3_Intro::
# 117 "data/maps/MagmasHideout/scripts.pory"
	.string "Intro$"

MagmasHideout_Text_Grunt3_Defeat::
# 121 "data/maps/MagmasHideout/scripts.pory"
	.string "Defeat$"

MagmasHideout_Text_Grunt3_PostBattle::
# 125 "data/maps/MagmasHideout/scripts.pory"
	.string "Post$"

MagmasHideout_Text_Grunt4_Intro::
# 129 "data/maps/MagmasHideout/scripts.pory"
	.string "Intro$"

MagmasHideout_Text_Grunt4_Defeat::
# 133 "data/maps/MagmasHideout/scripts.pory"
	.string "Defeat$"

MagmasHideout_Text_Grunt4_PostBattle::
# 137 "data/maps/MagmasHideout/scripts.pory"
	.string "Post$"
