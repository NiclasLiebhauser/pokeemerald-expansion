SacredMountain_3F_MapScripts::
	.byte 0


SacredMountain_3F_EventScript_Grunt1::
# 4 "data/maps/SacredMountain_3F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_SM_3F_1, SacredMountain_3F_Text_Grunt1_Intro, SacredMountain_3F_Text_Grunt1_Defeat
# 5 "data/maps/SacredMountain_3F/scripts.pory"
	msgbox SacredMountain_3F_Text_Grunt1_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredMountain_3F_EventScript_Grunt2::
# 9 "data/maps/SacredMountain_3F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_SM_3F_2, SacredMountain_3F_Text_Grunt2_Intro, SacredMountain_3F_Text_Grunt2_Defeat
# 10 "data/maps/SacredMountain_3F/scripts.pory"
	msgbox SacredMountain_3F_Text_Grunt2_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredMountain_3F_EventScript_Grunt3::
# 14 "data/maps/SacredMountain_3F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_SM_3F_3, SacredMountain_3F_Text_Grunt3_Intro, SacredMountain_3F_Text_Grunt3_Defeat
# 15 "data/maps/SacredMountain_3F/scripts.pory"
	msgbox SacredMountain_3F_Text_Grunt3_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredMountain_3F_EventScript_Grunt4::
# 19 "data/maps/SacredMountain_3F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_SM_3F_4, SacredMountain_3F_Text_Grunt4_Intro, SacredMountain_3F_Text_Grunt4_Defeat
# 20 "data/maps/SacredMountain_3F/scripts.pory"
	msgbox SacredMountain_3F_Text_Grunt4_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredMountain_3F_Text_Grunt1_Intro::
# 23 "data/maps/SacredMountain_3F/scripts.pory"
	.string "You’ve got some nerve making it this\n"
	.string "far! But this is where it ends, for Team\l"
	.string "Rocket’s sake!$"

SacredMountain_3F_Text_Grunt1_Defeat::
# 27 "data/maps/SacredMountain_3F/scripts.pory"
	.string "How could this happen...?$"

SacredMountain_3F_Text_Grunt1_PostBattle::
# 31 "data/maps/SacredMountain_3F/scripts.pory"
	.string "You may have won, but Team Rocket’s\n"
	.string "ambitions won’t be stopped by the likes\l"
	.string "of you!$"

SacredMountain_3F_Text_Grunt2_Intro::
# 35 "data/maps/SacredMountain_3F/scripts.pory"
	.string "You’re on the wrong side of Team Rocket!\n"
	.string "Prepare to face the consequences!$"

SacredMountain_3F_Text_Grunt2_Defeat::
# 39 "data/maps/SacredMountain_3F/scripts.pory"
	.string "No... I was supposed to stop you!$"

SacredMountain_3F_Text_Grunt2_PostBattle::
# 43 "data/maps/SacredMountain_3F/scripts.pory"
	.string "You might have gotten past me, but the\n"
	.string "boss won’t be so easy!$"

SacredMountain_3F_Text_Grunt3_Intro::
# 47 "data/maps/SacredMountain_3F/scripts.pory"
	.string "There’s no escaping Team Rocket! I’ll\n"
	.string "make sure you regret challenging us!$"

SacredMountain_3F_Text_Grunt3_Defeat::
# 51 "data/maps/SacredMountain_3F/scripts.pory"
	.string "I can’t believe I lost...$"

SacredMountain_3F_Text_Grunt3_PostBattle::
# 55 "data/maps/SacredMountain_3F/scripts.pory"
	.string "Enjoy this victory while it lasts. Team\n"
	.string "Rocket will have the last laugh!$"

SacredMountain_3F_Text_Grunt4_Intro::
# 59 "data/maps/SacredMountain_3F/scripts.pory"
	.string "You’re almost at the top, but this is as\n"
	.string "far as you’ll go! Team Rocket will crush\l"
	.string "you!$"

SacredMountain_3F_Text_Grunt4_Defeat::
# 63 "data/maps/SacredMountain_3F/scripts.pory"
	.string "Defeated... how could this be?$"

SacredMountain_3F_Text_Grunt4_PostBattle::
# 67 "data/maps/SacredMountain_3F/scripts.pory"
	.string "You might have won this battle, but\n"
	.string "you’ll never defeat Team Rocket!$"
