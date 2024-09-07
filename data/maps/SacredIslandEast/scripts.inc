SacredIslandEast_MapScripts::
	.byte 0


SacredIslandEast_EventScript_BattleGirl1::
# 4 "data/maps/SacredIslandEast/scripts.pory"
	trainerbattle_single TRAINER_BATTLE_GIRL_SI_EAST_1, SacredIslandEast_Text_BattleGirl1_Intro, SacredIslandEast_Text_BattleGirl1_Defeat
# 5 "data/maps/SacredIslandEast/scripts.pory"
	msgbox SacredIslandEast_Text_BattleGirl1_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredIslandEast_EventScript_Fisherman1::
# 9 "data/maps/SacredIslandEast/scripts.pory"
	trainerbattle_single TRAINER_FISHERMAN_SI_EAST_1, SacredIslandEast_Text_Fisherman1_Intro, SacredIslandEast_Text_Fisherman1_Defeat
# 10 "data/maps/SacredIslandEast/scripts.pory"
	msgbox SacredIslandEast_Text_Fisherman1_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredIslandEast_EventScript_Picnicker1::
# 14 "data/maps/SacredIslandEast/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_SI_EAST_1, SacredIslandEast_Text_Picnicker1_Intro, SacredIslandEast_Text_Picnicker1_Defeat
# 15 "data/maps/SacredIslandEast/scripts.pory"
	msgbox SacredIslandEast_Text_Picnicker1_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredIslandEast_EventScript_Birdkeeper1::
# 19 "data/maps/SacredIslandEast/scripts.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_SI_EAST_1, SacredIslandEast_Text_Birdkeeper1_Intro, SacredIslandEast_Text_Birdkeeper1_Defeat
# 20 "data/maps/SacredIslandEast/scripts.pory"
	msgbox SacredIslandEast_Text_Birdkeeper1_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredIslandEast_EventScript_Lady1::
# 24 "data/maps/SacredIslandEast/scripts.pory"
	trainerbattle_single TRAINER_LADY_SI_EAST_1, SacredIslandEast_Text_Lady1_Intro, SacredIslandEast_Text_Lady1_Defeat
# 25 "data/maps/SacredIslandEast/scripts.pory"
	msgbox SacredIslandEast_Text_Lady1_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredIslandEast_Text_BattleGirl1_Intro::
# 28 "data/maps/SacredIslandEast/scripts.pory"
	.string "My fighting spirit burns brighter than\n"
	.string "ever! Prepare yourself for a real\l"
	.string "challenge!$"

SacredIslandEast_Text_BattleGirl1_Defeat::
# 32 "data/maps/SacredIslandEast/scripts.pory"
	.string "No... I wasn’t strong enough...$"

SacredIslandEast_Text_BattleGirl1_PostBattle::
# 36 "data/maps/SacredIslandEast/scripts.pory"
	.string "I’ll keep training! Next time, you won’t\n"
	.string "stand a chance against my fighting\l"
	.string "spirit!$"

SacredIslandEast_Text_Fisherman1_Intro::
# 40 "data/maps/SacredIslandEast/scripts.pory"
	.string "The waters around this island are\n"
	.string "teeming with life! Let’s see if you can\l"
	.string "handle what I’ve caught!$"

SacredIslandEast_Text_Fisherman1_Defeat::
# 44 "data/maps/SacredIslandEast/scripts.pory"
	.string "I lost... reeled in too soon...$"

SacredIslandEast_Text_Fisherman1_PostBattle::
# 48 "data/maps/SacredIslandEast/scripts.pory"
	.string "Next time, I’ll have an even bigger\n"
	.string "catch! You won’t be so lucky!$"

SacredIslandEast_Text_Picnicker1_Intro::
# 52 "data/maps/SacredIslandEast/scripts.pory"
	.string "A picnic and a battle? This island is\n"
	.string "perfect for both! Let’s have some fun!$"

SacredIslandEast_Text_Picnicker1_Defeat::
# 56 "data/maps/SacredIslandEast/scripts.pory"
	.string "Oh no, I lost... so much for a perfect\n"
	.string "day.$"

SacredIslandEast_Text_Picnicker1_PostBattle::
# 60 "data/maps/SacredIslandEast/scripts.pory"
	.string "That was fun! But next time, I’ll make\n"
	.string "sure to win!$"

SacredIslandEast_Text_Birdkeeper1_Intro::
# 64 "data/maps/SacredIslandEast/scripts.pory"
	.string "The skies are my domain, and my birds\n"
	.string "rule it! Let’s see if you can reach my\l"
	.string "level!$"

SacredIslandEast_Text_Birdkeeper1_Defeat::
# 68 "data/maps/SacredIslandEast/scripts.pory"
	.string "Grounded... how could this happen?$"

SacredIslandEast_Text_Birdkeeper1_PostBattle::
# 72 "data/maps/SacredIslandEast/scripts.pory"
	.string "Next time, my birds will soar higher, and\n"
	.string "you won’t be able to stop us!$"

SacredIslandEast_Text_Lady1_Intro::
# 76 "data/maps/SacredIslandEast/scripts.pory"
	.string "This island is beautiful, but not as\n"
	.string "beautiful as my victory will be! Let’s\l"
	.string "battle!$"

SacredIslandEast_Text_Lady1_Defeat::
# 80 "data/maps/SacredIslandEast/scripts.pory"
	.string "How... could I lose?$"

SacredIslandEast_Text_Lady1_PostBattle::
# 84 "data/maps/SacredIslandEast/scripts.pory"
	.string "I may have lost this time, but next time,\n"
	.string "I’ll win with grace and elegance!$"
