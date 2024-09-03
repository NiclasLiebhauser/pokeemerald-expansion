SacredIslandNorth_MapScripts::
# 2 "data/maps/SacredIslandNorth/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SacredIslandNorth_EventScript_OnLoad
	.byte 0


SacredIslandNorth_EventScript_OnLoad::
# 6 "data/maps/SacredIslandNorth/scripts.pory"
	goto_if_unset FLAG_DEFEATED_GROUDON, SacredIslandNorth_EventScript_OnLoad_2
SacredIslandNorth_EventScript_OnLoad_1:
	end

SacredIslandNorth_EventScript_OnLoad_2:
# 8 "data/maps/SacredIslandNorth/scripts.pory"
	setweather WEATHER_DROUGHT
# 9 "data/maps/SacredIslandNorth/scripts.pory"
	doweather
	goto SacredIslandNorth_EventScript_OnLoad_1


SacredIslandNorth_EventScript_RichBoy1::
# 15 "data/maps/SacredIslandNorth/scripts.pory"
	trainerbattle_single TRAINER_RICH_BOY_SI_NORTH_1, SacredIslandNorth_Text_RichBoy1_Intro, SacredIslandNorth_Text_RichBoy1_Defeat
# 16 "data/maps/SacredIslandNorth/scripts.pory"
	msgbox SacredIslandNorth_Text_RichBoy1_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredIslandNorth_EventScript_Maniac1::
# 20 "data/maps/SacredIslandNorth/scripts.pory"
	trainerbattle_single TRAINER_MANIAC_SI_NORTH_1, SacredIslandNorth_Text_Maniac1_Intro, SacredIslandNorth_Text_Maniac1_Defeat
# 21 "data/maps/SacredIslandNorth/scripts.pory"
	msgbox SacredIslandNorth_Text_Maniac1_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredIslandNorth_EventScript_Hiker1::
# 25 "data/maps/SacredIslandNorth/scripts.pory"
	trainerbattle_single TRAINER_HIKER_SI_NORTH_1, SacredIslandNorth_Text_Hiker1_Intro, SacredIslandNorth_Text_Hiker1_Defeat
# 26 "data/maps/SacredIslandNorth/scripts.pory"
	msgbox SacredIslandNorth_Text_Hiker1_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredIslandNorth_EventScript_Camper1::
# 30 "data/maps/SacredIslandNorth/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_SI_NORTH_1, SacredIslandNorth_Text_Camper1_Intro, SacredIslandNorth_Text_Camper1_Defeat
# 31 "data/maps/SacredIslandNorth/scripts.pory"
	msgbox SacredIslandNorth_Text_Camper1_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredIslandNorth_Text_RichBoy1_Intro::
# 34 "data/maps/SacredIslandNorth/scripts.pory"
	.string "Money can't buy everything, but it can\n"
	.string "certainly give me an edge! Let's see if\l"
	.string "you can keep up!$"

SacredIslandNorth_Text_RichBoy1_Defeat::
# 38 "data/maps/SacredIslandNorth/scripts.pory"
	.string "This can't be happening... how could I\n"
	.string "lose?$"

SacredIslandNorth_Text_RichBoy1_PostBattle::
# 42 "data/maps/SacredIslandNorth/scripts.pory"
	.string "Maybe money isn't everything after all.\n"
	.string "I'll have to rethink my strategy.$"

SacredIslandNorth_Text_Maniac1_Intro::
# 46 "data/maps/SacredIslandNorth/scripts.pory"
	.string "I've spent years studying ancient\n"
	.string "Pokémon. Let me show you the power of\l"
	.string "the past!$"

SacredIslandNorth_Text_Maniac1_Defeat::
# 50 "data/maps/SacredIslandNorth/scripts.pory"
	.string "My knowledge wasn't enough...$"

SacredIslandNorth_Text_Maniac1_PostBattle::
# 54 "data/maps/SacredIslandNorth/scripts.pory"
	.string "It seems I need to learn even more.\n"
	.string "Next time, I'll be prepared for anything.$"

SacredIslandNorth_Text_Hiker1_Intro::
# 58 "data/maps/SacredIslandNorth/scripts.pory"
	.string "These mountains have made me strong!\n"
	.string "Can you handle the power of nature?$"

SacredIslandNorth_Text_Hiker1_Defeat::
# 62 "data/maps/SacredIslandNorth/scripts.pory"
	.string "Crushed like a falling rock...$"

SacredIslandNorth_Text_Hiker1_PostBattle::
# 66 "data/maps/SacredIslandNorth/scripts.pory"
	.string "Even the toughest rocks can break. But\n"
	.string "I'll be back, harder and tougher than\l"
	.string "ever!$"

SacredIslandNorth_Text_Camper1_Intro::
# 70 "data/maps/SacredIslandNorth/scripts.pory"
	.string "Camping out here has toughened me up!\n"
	.string "Let’s see if you can handle my\l"
	.string "wilderness skills!$"

SacredIslandNorth_Text_Camper1_Defeat::
# 74 "data/maps/SacredIslandNorth/scripts.pory"
	.string "Looks like I got lost in the battle...$"

SacredIslandNorth_Text_Camper1_PostBattle::
# 78 "data/maps/SacredIslandNorth/scripts.pory"
	.string "I’ll pitch my tent and try again. Next\n"
	.string "time, I won’t lose my way!$"
