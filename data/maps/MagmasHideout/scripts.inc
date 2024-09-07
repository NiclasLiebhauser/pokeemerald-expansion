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


MagmasHideout_EventScript_MagmaGruntBlock::
# 63 "data/maps/MagmasHideout/scripts.pory"
	lock
# 64 "data/maps/MagmasHideout/scripts.pory"
	faceplayer
# 66 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_EventScript_MagmaGruntBlock_Text_0, MSGBOX_NPC
# 68 "data/maps/MagmasHideout/scripts.pory"
	release
	end


MagmasHideout_EventScript_Crow::
# 73 "data/maps/MagmasHideout/scripts.pory"
	lock
# 74 "data/maps/MagmasHideout/scripts.pory"
	faceplayer
# 75 "data/maps/MagmasHideout/scripts.pory"
	message MagmasHideout_EventScript_Crow_Text_0
# 76 "data/maps/MagmasHideout/scripts.pory"
	waitmessage
# 77 "data/maps/MagmasHideout/scripts.pory"
	pokemart MagmasHideout_Crow
# 78 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_EventScript_Crow_Text_1
# 79 "data/maps/MagmasHideout/scripts.pory"
	release
	end


MagmasHideout_EventScript_Grunt1::
# 84 "data/maps/MagmasHideout/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMAHQ_1, MagmasHideout_Text_Grunt1_Intro, MagmasHideout_Text_Grunt1_Defeat
# 85 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_Text_Grunt1_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmasHideout_EventScript_Grunt2::
# 89 "data/maps/MagmasHideout/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMAHQ_2, MagmasHideout_Text_Grunt2_Intro, MagmasHideout_Text_Grunt2_Defeat
# 90 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_Text_Grunt2_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmasHideout_EventScript_Grunt3::
# 94 "data/maps/MagmasHideout/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMAHQ_3, MagmasHideout_Text_Grunt3_Intro, MagmasHideout_Text_Grunt3_Defeat
# 95 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_Text_Grunt3_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmasHideout_EventScript_Grunt4::
# 99 "data/maps/MagmasHideout/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMAHQ_4, MagmasHideout_Text_Grunt4_Intro, MagmasHideout_Text_Grunt4_Defeat
# 100 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_Text_Grunt4_PostBattle, MSGBOX_AUTOCLOSE
	return


	.align 2
# 151 "data/maps/MagmasHideout/scripts.pory"
MagmasHideout_Crow:
# 152 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 153 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 154 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_ICE_STONE
# 155 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_WATER_STONE
# 156 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 157 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_SUN_STONE
# 158 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 159 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 160 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 161 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 162 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 163 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 164 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 165 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 166 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 167 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 168 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 169 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_METAL_COAT
# 170 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_PROTECTOR
# 171 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 172 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 173 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 174 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_UPGRADE
# 175 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 176 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 177 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 178 "data/maps/MagmasHideout/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 179 "data/maps/MagmasHideout/scripts.pory"
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

MagmasHideout_EventScript_MagmaGruntBlock_Text_0:
# 66 "data/maps/MagmasHideout/scripts.pory"
	.string "You can't pass here. Order from the\n"
	.string "boss.\n"
	.string "Ask him if you wanna pass.$"

MagmasHideout_EventScript_Crow_Text_0:
# 75 "data/maps/MagmasHideout/scripts.pory"
	.string "Hey, they call me Crow because I like\n"
	.string "shiny stuff. Wanna buy something?$"

MagmasHideout_EventScript_Crow_Text_1:
# 78 "data/maps/MagmasHideout/scripts.pory"
	.string "Come by from time to time.$"

MagmasHideout_Text_StrengthMachine::
# 20 "data/maps/MagmasHideout/scripts.pory"
	.string "Obtained STRENGTH MACHINE!$"

MagmasHideout_Text_Grunt1_Intro::
# 103 "data/maps/MagmasHideout/scripts.pory"
	.string "You’ve got a lot of nerve coming into our\n"
	.string "hideout! Let’s see how far that gets\l"
	.string "you!$"

MagmasHideout_Text_Grunt1_Defeat::
# 107 "data/maps/MagmasHideout/scripts.pory"
	.string "Impossible... how could I lose in our own\n"
	.string "base?$"

MagmasHideout_Text_Grunt1_PostBattle::
# 111 "data/maps/MagmasHideout/scripts.pory"
	.string "Don’t get too comfortable. Team Magma\n"
	.string "will rise again!$"

MagmasHideout_Text_Grunt2_Intro::
# 115 "data/maps/MagmasHideout/scripts.pory"
	.string "Intruders aren’t welcome here! Prepare\n"
	.string "to be scorched!$"

MagmasHideout_Text_Grunt2_Defeat::
# 119 "data/maps/MagmasHideout/scripts.pory"
	.string "No way... I’m burning out...$"

MagmasHideout_Text_Grunt2_PostBattle::
# 123 "data/maps/MagmasHideout/scripts.pory"
	.string "I won’t let this defeat stand! Next time,\n"
	.string "you’ll feel the full heat!$"

MagmasHideout_Text_Grunt3_Intro::
# 127 "data/maps/MagmasHideout/scripts.pory"
	.string "You’re not going any further! I’ll make\n"
	.string "sure of it!$"

MagmasHideout_Text_Grunt3_Defeat::
# 131 "data/maps/MagmasHideout/scripts.pory"
	.string "Beaten... in our own stronghold?$"

MagmasHideout_Text_Grunt3_PostBattle::
# 135 "data/maps/MagmasHideout/scripts.pory"
	.string "This isn’t over! Team Magma’s power will\n"
	.string "engulf you next time!$"

MagmasHideout_Text_Grunt4_Intro::
# 139 "data/maps/MagmasHideout/scripts.pory"
	.string "You’re deep in our territory now! You\n"
	.string "won’t make it out unscathed!$"

MagmasHideout_Text_Grunt4_Defeat::
# 143 "data/maps/MagmasHideout/scripts.pory"
	.string "How... how could this happen?$"

MagmasHideout_Text_Grunt4_PostBattle::
# 147 "data/maps/MagmasHideout/scripts.pory"
	.string "We may have lost this battle, but the\n"
	.string "fire of Team Magma never dies!$"
