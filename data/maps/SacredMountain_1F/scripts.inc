SacredMountain_1F_MapScripts::
	.byte 0


SacredMountain_1F_EventScript_Grunt1::
# 4 "data/maps/SacredMountain_1F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_SM_1F_1, SacredMountain_1F_Text_Grunt1_Intro, SacredMountain_1F_Text_Grunt1_Defeat
# 5 "data/maps/SacredMountain_1F/scripts.pory"
	msgbox SacredMountain_1F_Text_Grunt1_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredMountain_1F_EventScript_Grunt2::
# 9 "data/maps/SacredMountain_1F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_SM_1F_2, SacredMountain_1F_Text_Grunt2_Intro, SacredMountain_1F_Text_Grunt2_Defeat
# 10 "data/maps/SacredMountain_1F/scripts.pory"
	msgbox SacredMountain_1F_Text_Grunt2_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredMountain_1F_EventScript_Grunt3::
# 14 "data/maps/SacredMountain_1F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_SM_1F_3, SacredMountain_1F_Text_Grunt3_Intro, SacredMountain_1F_Text_Grunt3_Defeat
# 15 "data/maps/SacredMountain_1F/scripts.pory"
	msgbox SacredMountain_1F_Text_Grunt3_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredMountain_1F_EventScript_Grunt4::
# 19 "data/maps/SacredMountain_1F/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNT_SM_1F_4, SacredMountain_1F_Text_Grunt4_Intro, SacredMountain_1F_Text_Grunt4_Defeat
# 20 "data/maps/SacredMountain_1F/scripts.pory"
	msgbox SacredMountain_1F_Text_Grunt4_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredMountain_1F_Text_Grunt1_Intro::
# 23 "data/maps/SacredMountain_1F/scripts.pory"
	.string "You’ve got guts challenging Team Rocket\n"
	.string "at Sacred Mountain! But guts alone\l"
	.string "won’t save you!$"

SacredMountain_1F_Text_Grunt1_Defeat::
# 27 "data/maps/SacredMountain_1F/scripts.pory"
	.string "No way... how could I lose to a kid?$"

SacredMountain_1F_Text_Grunt1_PostBattle::
# 31 "data/maps/SacredMountain_1F/scripts.pory"
	.string "You may have won this time, but Team\n"
	.string "Rocket always comes back stronger!$"

SacredMountain_1F_Text_Grunt2_Intro::
# 35 "data/maps/SacredMountain_1F/scripts.pory"
	.string "Team Rocket runs this mountain!\n"
	.string "Prepare to get crushed!$"

SacredMountain_1F_Text_Grunt2_Defeat::
# 39 "data/maps/SacredMountain_1F/scripts.pory"
	.string "What... defeated by a mere trainer?$"

SacredMountain_1F_Text_Grunt2_PostBattle::
# 43 "data/maps/SacredMountain_1F/scripts.pory"
	.string "Don’t think you’ve won. We’ll be back, and\n"
	.string "you won’t be so lucky!$"

SacredMountain_1F_Text_Grunt3_Intro::
# 47 "data/maps/SacredMountain_1F/scripts.pory"
	.string "You’ve made it this far, but your journey\n"
	.string "ends here! Team Rocket rules all!$"

SacredMountain_1F_Text_Grunt3_Defeat::
# 51 "data/maps/SacredMountain_1F/scripts.pory"
	.string "This can’t be happening... I was\n"
	.string "supposed to stop you!$"

SacredMountain_1F_Text_Grunt3_PostBattle::
# 55 "data/maps/SacredMountain_1F/scripts.pory"
	.string "You may have slipped by this time, but\n"
	.string "you’ll never escape Team Rocket’s grasp!$"

SacredMountain_1F_Text_Grunt4_Intro::
# 59 "data/maps/SacredMountain_1F/scripts.pory"
	.string "You’re facing the might of Team Rocket\n"
	.string "now! Get ready to lose!$"

SacredMountain_1F_Text_Grunt4_Defeat::
# 63 "data/maps/SacredMountain_1F/scripts.pory"
	.string "How could a grunt like me lose?$"

SacredMountain_1F_Text_Grunt4_PostBattle::
# 67 "data/maps/SacredMountain_1F/scripts.pory"
	.string "You won this battle, but Team Rocket is\n"
	.string "far from done with you!$"
