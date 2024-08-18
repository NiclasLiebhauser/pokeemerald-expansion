AquasHideout_1F_MapScripts::
# 4 "data/maps/AquasHideout_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AquasHideout_1F_OnResume
	.byte 0


AquasHideout_1F_OnResume::
# 8 "data/maps/AquasHideout_1F/scripts.pory"
	setdivewarp MAP_UNDERWATER_AQUAS_HIDEOUT_1F, 10, 11
	end


AquasHideout_1F_EventScript_Mart::
# 13 "data/maps/AquasHideout_1F/scripts.pory"
	lock
# 14 "data/maps/AquasHideout_1F/scripts.pory"
	faceplayer
# 15 "data/maps/AquasHideout_1F/scripts.pory"
	message AquasHideout_1F_EventScript_Mart_Text_0
# 16 "data/maps/AquasHideout_1F/scripts.pory"
	waitmessage
# 17 "data/maps/AquasHideout_1F/scripts.pory"
	pokemart AquasHideout_1F_Mart
# 18 "data/maps/AquasHideout_1F/scripts.pory"
	msgbox AquasHideout_1F_EventScript_Mart_Text_1
# 19 "data/maps/AquasHideout_1F/scripts.pory"
	release
	end


AquasHideout_1F_EventScript_Grunt1::
# 24 "data/maps/AquasHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_AQUAHQ_1F_1, AquasHideout_1F_Text_Grunt1_Intro, AquasHideout_1F_Text_Grunt1_Defeat
# 25 "data/maps/AquasHideout_1F/scripts.pory"
	msgbox AquasHideout_1F_Text_Grunt1_PostBattle, MSGBOX_AUTOCLOSE
	return


AquasHideout_1F_EventScript_Grunt2::
# 29 "data/maps/AquasHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_AQUAHQ_1F_2, AquasHideout_1F_Text_Grunt2_Intro, AquasHideout_1F_Text_Grunt2_Defeat
# 30 "data/maps/AquasHideout_1F/scripts.pory"
	msgbox AquasHideout_1F_Text_Grunt2_PostBattle, MSGBOX_AUTOCLOSE
	return


AquasHideout_1F_EventScript_Grunt3::
# 34 "data/maps/AquasHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_AQUAHQ_1F_3, AquasHideout_1F_Text_Grunt3_Intro, AquasHideout_1F_Text_Grunt3_Defeat
# 35 "data/maps/AquasHideout_1F/scripts.pory"
	msgbox AquasHideout_1F_Text_Grunt3_PostBattle, MSGBOX_AUTOCLOSE
	return


AquasHideout_1F_EventScript_Grunt4::
# 39 "data/maps/AquasHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_AQUAHQ_1F_4, AquasHideout_1F_Text_Grunt4_Intro, AquasHideout_1F_Text_Grunt4_Defeat
# 40 "data/maps/AquasHideout_1F/scripts.pory"
	msgbox AquasHideout_1F_Text_Grunt4_PostBattle, MSGBOX_AUTOCLOSE
	return


	.align 2
# 90 "data/maps/AquasHideout_1F/scripts.pory"
AquasHideout_1F_Mart:
# 91 "data/maps/AquasHideout_1F/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 92 "data/maps/AquasHideout_1F/scripts.pory"
	.2byte ITEM_SODA_POP
# 93 "data/maps/AquasHideout_1F/scripts.pory"
	.2byte ITEM_LEMONADE
# 94 "data/maps/AquasHideout_1F/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

AquasHideout_1F_EventScript_Mart_Text_0:
# 15 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Hey psst... Wanna buy something?\p"
	.string "$"

AquasHideout_1F_EventScript_Mart_Text_1:
# 18 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Please Come Again.$"

AquasHideout_1F_Text_Grunt1_Intro::
# 43 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Intro$"

AquasHideout_1F_Text_Grunt1_Defeat::
# 47 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Defeat$"

AquasHideout_1F_Text_Grunt1_PostBattle::
# 51 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Post$"

AquasHideout_1F_Text_Grunt2_Intro::
# 55 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Intro$"

AquasHideout_1F_Text_Grunt2_Defeat::
# 59 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Defeat$"

AquasHideout_1F_Text_Grunt2_PostBattle::
# 63 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Post$"

AquasHideout_1F_Text_Grunt3_Intro::
# 67 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Intro$"

AquasHideout_1F_Text_Grunt3_Defeat::
# 71 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Defeat$"

AquasHideout_1F_Text_Grunt3_PostBattle::
# 75 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Post$"

AquasHideout_1F_Text_Grunt4_Intro::
# 78 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Intro$"

AquasHideout_1F_Text_Grunt4_Defeat::
# 82 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Defeat$"

AquasHideout_1F_Text_Grunt4_PostBattle::
# 86 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Post$"
