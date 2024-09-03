SacredMountain_2F_MapScripts::
	.byte 0


SacredMountain_2F_EventScript_Grunt1::
# 4 "data/maps/SacredMountain_2F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_SM_2F_1, SacredMountain_2F_Text_Grunt1_Intro, SacredMountain_2F_Text_Grunt1_Defeat
# 5 "data/maps/SacredMountain_2F/scripts.pory"
	msgbox SacredMountain_2F_Text_Grunt1_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredMountain_2F_EventScript_Grunt2::
# 9 "data/maps/SacredMountain_2F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_SM_2F_2, SacredMountain_2F_Text_Grunt2_Intro, SacredMountain_2F_Text_Grunt2_Defeat
# 10 "data/maps/SacredMountain_2F/scripts.pory"
	msgbox SacredMountain_2F_Text_Grunt2_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredMountain_2F_EventScript_Grunt3::
# 14 "data/maps/SacredMountain_2F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_SM_2F_3, SacredMountain_2F_Text_Grunt3_Intro, SacredMountain_2F_Text_Grunt3_Defeat
# 15 "data/maps/SacredMountain_2F/scripts.pory"
	msgbox SacredMountain_2F_Text_Grunt3_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredMountain_2F_EventScript_Grunt4::
# 19 "data/maps/SacredMountain_2F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_SM_2F_4, SacredMountain_2F_Text_Grunt4_Intro, SacredMountain_2F_Text_Grunt4_Defeat
# 20 "data/maps/SacredMountain_2F/scripts.pory"
	msgbox SacredMountain_2F_Text_Grunt4_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredMountain_2F_Text_Grunt1_Intro::
# 23 "data/maps/SacredMountain_2F/scripts.pory"
	.string "You’ve made a big mistake coming up\n"
	.string "here! Team Rocket controls everything\l"
	.string "on this mountain!$"

SacredMountain_2F_Text_Grunt1_Defeat::
# 27 "data/maps/SacredMountain_2F/scripts.pory"
	.string "No... this wasn’t supposed to happen!$"

SacredMountain_2F_Text_Grunt1_PostBattle::
# 31 "data/maps/SacredMountain_2F/scripts.pory"
	.string "You may have beaten me, but Team\n"
	.string "Rocket’s plans won’t be stopped!$"

SacredMountain_2F_Text_Grunt2_Intro::
# 35 "data/maps/SacredMountain_2F/scripts.pory"
	.string "Think you can take on Team Rocket? I’ll\n"
	.string "show you the true power of the boss’s\l"
	.string "plans!$"

SacredMountain_2F_Text_Grunt2_Defeat::
# 39 "data/maps/SacredMountain_2F/scripts.pory"
	.string "I... I can’t believe it!$"

SacredMountain_2F_Text_Grunt2_PostBattle::
# 43 "data/maps/SacredMountain_2F/scripts.pory"
	.string "You got lucky this time, but don’t get\n"
	.string "too comfortable. We’re always watching!$"

SacredMountain_2F_Text_Grunt3_Intro::
# 47 "data/maps/SacredMountain_2F/scripts.pory"
	.string "You’ve come far, but this is where your\n"
	.string "journey ends! Team Rocket doesn’t\l"
	.string "forgive or forget!$"

SacredMountain_2F_Text_Grunt3_Defeat::
# 51 "data/maps/SacredMountain_2F/scripts.pory"
	.string "Beaten by some meddling trainer?\n"
	.string "Impossible!$"

SacredMountain_2F_Text_Grunt3_PostBattle::
# 55 "data/maps/SacredMountain_2F/scripts.pory"
	.string "You won this battle, but the war is far\n"
	.string "from over. Team Rocket will rise again!$"

SacredMountain_2F_Text_Grunt4_Intro::
# 59 "data/maps/SacredMountain_2F/scripts.pory"
	.string "You’re facing the elite of Team Rocket\n"
	.string "now! There’s no way you’ll make it past\l"
	.string "me!$"

SacredMountain_2F_Text_Grunt4_Defeat::
# 63 "data/maps/SacredMountain_2F/scripts.pory"
	.string "I’ve failed... but Team Rocket will never\n"
	.string "fall!$"

SacredMountain_2F_Text_Grunt4_PostBattle::
# 67 "data/maps/SacredMountain_2F/scripts.pory"
	.string "You got the best of me, but Team Rocket\n"
	.string "is unstoppable. We’ll meet again!$"
