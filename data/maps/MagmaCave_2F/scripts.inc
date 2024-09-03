MagmaCave_2F_MapScripts::
	.byte 0


MagmaCave_2F_EventScript_Grunt1::
# 4 "data/maps/MagmaCave_2F/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMACAVE_2F_1, MagmaCave_2F_Text_Grunt1_Intro, MagmaCave_2F_Text_Grunt1_Defeat
# 5 "data/maps/MagmaCave_2F/scripts.pory"
	msgbox MagmaCave_2F_Text_Grunt1_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmaCave_2F_EventScript_Grunt2::
# 9 "data/maps/MagmaCave_2F/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMACAVE_2F_2, MagmaCave_2F_Text_Grunt2_Intro, MagmaCave_2F_Text_Grunt2_Defeat
# 10 "data/maps/MagmaCave_2F/scripts.pory"
	msgbox MagmaCave_2F_Text_Grunt2_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmaCave_2F_EventScript_Grunt3::
# 14 "data/maps/MagmaCave_2F/scripts.pory"
	trainerbattle_single TRAINER_MAGMA_GRUNT_MAGMACAVE_2F_3, MagmaCave_2F_Text_Grunt3_Intro, MagmaCave_2F_Text_Grunt3_Defeat
# 15 "data/maps/MagmaCave_2F/scripts.pory"
	msgbox MagmaCave_2F_Text_Grunt3_PostBattle, MSGBOX_AUTOCLOSE
	return


MagmaCave_2F_Text_Grunt1_Intro::
# 18 "data/maps/MagmaCave_2F/scripts.pory"
	.string "You’re deep in our territory now! There’s\n"
	.string "no turning back!$"

MagmaCave_2F_Text_Grunt1_Defeat::
# 22 "data/maps/MagmaCave_2F/scripts.pory"
	.string "No... I was supposed to stop you...$"

MagmaCave_2F_Text_Grunt1_PostBattle::
# 26 "data/maps/MagmaCave_2F/scripts.pory"
	.string "You may have beaten me, but the rest of\n"
	.string "Team Magma won’t be so easy!$"

MagmaCave_2F_Text_Grunt2_Intro::
# 30 "data/maps/MagmaCave_2F/scripts.pory"
	.string "The deeper you go, the hotter it gets!\n"
	.string "Let’s see if you can take the heat!$"

MagmaCave_2F_Text_Grunt2_Defeat::
# 34 "data/maps/MagmaCave_2F/scripts.pory"
	.string "Burned out... just like that...$"

MagmaCave_2F_Text_Grunt2_PostBattle::
# 38 "data/maps/MagmaCave_2F/scripts.pory"
	.string "Next time, the flames of Team Magma will\n"
	.string "scorch you for sure!$"

MagmaCave_2F_Text_Grunt3_Intro::
# 42 "data/maps/MagmaCave_2F/scripts.pory"
	.string "You won’t make it past me! I’ll turn up\n"
	.string "the heat and take you down!$"

MagmaCave_2F_Text_Grunt3_Defeat::
# 46 "data/maps/MagmaCave_2F/scripts.pory"
	.string "I can’t believe I’m melting down...$"

MagmaCave_2F_Text_Grunt3_PostBattle::
# 50 "data/maps/MagmaCave_2F/scripts.pory"
	.string "This is just a setback. Team Magma’s fire\n"
	.string "will burn brighter next time!$"
