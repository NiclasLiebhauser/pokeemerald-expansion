MagmaCave_1F_MapScripts::
	.byte 0


MagmaCave_1F_EventScript_Grunt1::
# 4 "data/maps/MagmaCave_1F/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMACAVE_1F_1, MagmaCave_1F_Text_Grunt1_Intro, MagmaCave_1F_Text_Grunt1_Defeat
# 5 "data/maps/MagmaCave_1F/scripts.pory"
	msgbox MagmaCave_1F_Text_Grunt1_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmaCave_1F_EventScript_Grunt2::
# 9 "data/maps/MagmaCave_1F/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMACAVE_1F_2, MagmaCave_1F_Text_Grunt2_Intro, MagmaCave_1F_Text_Grunt2_Defeat
# 10 "data/maps/MagmaCave_1F/scripts.pory"
	msgbox MagmaCave_1F_Text_Grunt2_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmaCave_1F_EventScript_Grunt3::
# 14 "data/maps/MagmaCave_1F/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMACAVE_1F_3, MagmaCave_1F_Text_Grunt3_Intro, MagmaCave_1F_Text_Grunt3_Defeat
# 15 "data/maps/MagmaCave_1F/scripts.pory"
	msgbox MagmaCave_1F_Text_Grunt3_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmaCave_1F_EventScript_Grunt4::
# 19 "data/maps/MagmaCave_1F/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMACAVE_1F_4, MagmaCave_1F_Text_Grunt4_Intro, MagmaCave_1F_Text_Grunt4_Defeat
# 20 "data/maps/MagmaCave_1F/scripts.pory"
	msgbox MagmaCave_1F_Text_Grunt4_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmaCave_1F_EventScript_Grunt5::
# 24 "data/maps/MagmaCave_1F/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMACAVE_1F_5, MagmaCave_1F_Text_Grunt5_Intro, MagmaCave_1F_Text_Grunt5_Defeat
# 25 "data/maps/MagmaCave_1F/scripts.pory"
	msgbox MagmaCave_1F_Text_Grunt5_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmaCave_1F_Text_Grunt1_Intro::
# 28 "data/maps/MagmaCave_1F/scripts.pory"
	.string "You’ve got guts coming this far, but\n"
	.string "this is where it ends!$"

MagmaCave_1F_Text_Grunt1_Defeat::
# 32 "data/maps/MagmaCave_1F/scripts.pory"
	.string "I can't believe I lost...$"

MagmaCave_1F_Text_Grunt1_PostBattle::
# 36 "data/maps/MagmaCave_1F/scripts.pory"
	.string "Enjoy your victory while it lasts. We’re\n"
	.string "just getting started!$"

MagmaCave_1F_Text_Grunt2_Intro::
# 40 "data/maps/MagmaCave_1F/scripts.pory"
	.string "The heat in here is nothing compared to\n"
	.string "the fire of my Pokémon!$"

MagmaCave_1F_Text_Grunt2_Defeat::
# 44 "data/maps/MagmaCave_1F/scripts.pory"
	.string "No... extinguished...$"

MagmaCave_1F_Text_Grunt2_PostBattle::
# 48 "data/maps/MagmaCave_1F/scripts.pory"
	.string "Next time, I’ll make sure you feel the\n"
	.string "full burn of our power!$"

MagmaCave_1F_Text_Grunt3_Intro::
# 52 "data/maps/MagmaCave_1F/scripts.pory"
	.string "You think you can handle the heat?\n"
	.string "Let’s find out!$"

MagmaCave_1F_Text_Grunt3_Defeat::
# 56 "data/maps/MagmaCave_1F/scripts.pory"
	.string "Overpowered... in my own element...$"

MagmaCave_1F_Text_Grunt3_PostBattle::
# 60 "data/maps/MagmaCave_1F/scripts.pory"
	.string "I won’t go down so easily next time. The\n"
	.string "magma will rise again!$"

MagmaCave_1F_Text_Grunt4_Intro::
# 64 "data/maps/MagmaCave_1F/scripts.pory"
	.string "Only the strong survive in this cave.\n"
	.string "Let’s see if you’ve got what it takes!$"

MagmaCave_1F_Text_Grunt4_Defeat::
# 68 "data/maps/MagmaCave_1F/scripts.pory"
	.string "Defeated... in the heart of the volcano?$"

MagmaCave_1F_Text_Grunt4_PostBattle::
# 72 "data/maps/MagmaCave_1F/scripts.pory"
	.string "You may have won today, but the fire of\n"
	.string "Team Magma won’t be extinguished!$"

MagmaCave_1F_Text_Grunt5_Intro::
# 76 "data/maps/MagmaCave_1F/scripts.pory"
	.string "We’re here to harness the power of the\n"
	.string "volcano! You won’t stop us!$"

MagmaCave_1F_Text_Grunt5_Defeat::
# 80 "data/maps/MagmaCave_1F/scripts.pory"
	.string "How... how could I lose?$"

MagmaCave_1F_Text_Grunt5_PostBattle::
# 84 "data/maps/MagmaCave_1F/scripts.pory"
	.string "This isn’t the end! Team Magma will rise\n"
	.string "from the ashes!$"
