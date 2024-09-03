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
# 91 "data/maps/AquasHideout_1F/scripts.pory"
AquasHideout_1F_Mart:
# 92 "data/maps/AquasHideout_1F/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 93 "data/maps/AquasHideout_1F/scripts.pory"
	.2byte ITEM_SODA_POP
# 94 "data/maps/AquasHideout_1F/scripts.pory"
	.2byte ITEM_LEMONADE
# 95 "data/maps/AquasHideout_1F/scripts.pory"
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
	.string "You think you can just waltz into our\n"
	.string "hideout? Think again!$"

AquasHideout_1F_Text_Grunt1_Defeat::
# 47 "data/maps/AquasHideout_1F/scripts.pory"
	.string "No way... how could I lose?$"

AquasHideout_1F_Text_Grunt1_PostBattle::
# 51 "data/maps/AquasHideout_1F/scripts.pory"
	.string "The boss isn't going to like this... but\n"
	.string "I'll get stronger and make up for it!$"

AquasHideout_1F_Text_Grunt2_Intro::
# 55 "data/maps/AquasHideout_1F/scripts.pory"
	.string "You're not getting past me! My Pokémon\n"
	.string "will sink you!$"

AquasHideout_1F_Text_Grunt2_Defeat::
# 59 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Ugh, how did you beat me?$"

AquasHideout_1F_Text_Grunt2_PostBattle::
# 63 "data/maps/AquasHideout_1F/scripts.pory"
	.string "I'll train harder! Next time, you won't\n"
	.string "be so lucky!$"

AquasHideout_1F_Text_Grunt3_Intro::
# 67 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Intruders aren't welcome here! Prepare\n"
	.string "to be crushed!$"

AquasHideout_1F_Text_Grunt3_Defeat::
# 71 "data/maps/AquasHideout_1F/scripts.pory"
	.string "I can't believe I lost...$"

AquasHideout_1F_Text_Grunt3_PostBattle::
# 75 "data/maps/AquasHideout_1F/scripts.pory"
	.string "This isn't the end! I'll come back\n"
	.string "stronger, just wait!$"

AquasHideout_1F_Text_Grunt4_Intro::
# 79 "data/maps/AquasHideout_1F/scripts.pory"
	.string "You're in way over your head! I'll show\n"
	.string "you what Team Aqua is made of!$"

AquasHideout_1F_Text_Grunt4_Defeat::
# 83 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Defeated... just like that?$"

AquasHideout_1F_Text_Grunt4_PostBattle::
# 87 "data/maps/AquasHideout_1F/scripts.pory"
	.string "You got lucky this time, but the tide\n"
	.string "will turn. I'll be ready!$"
