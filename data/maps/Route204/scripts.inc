Route204_MapScripts::
	.byte 0


Route204_EventScript_Expert::
# 4 "data/maps/Route204/scripts.pory"
	lock
# 5 "data/maps/Route204/scripts.pory"
	faceplayer
# 6 "data/maps/Route204/scripts.pory"
	goto_if_unset FLAG_DEFEATED_KYOGRE, Route204_EventScript_Expert_2
# 12 "data/maps/Route204/scripts.pory"
	msgbox Route204_EventScript_Expert_Text_1
Route204_EventScript_Expert_1:
# 15 "data/maps/Route204/scripts.pory"
	release
	end

Route204_EventScript_Expert_2:
# 8 "data/maps/Route204/scripts.pory"
	msgbox Route204_EventScript_Expert_Text_0, MSGBOX_NPC
	goto Route204_EventScript_Expert_1


Route204_EventScript_Swimmer1::
# 20 "data/maps/Route204/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_ROUTE_204_1, Route204_Text_Swimmer1_Intro, Route204_Text_Swimmer1_Defeat
# 21 "data/maps/Route204/scripts.pory"
	msgbox Route204_Text_Swimmer1_PostBattle, MSGBOX_AUTOCLOSE
	return


Route204_EventScript_Expert_Text_0:
# 8 "data/maps/Route204/scripts.pory"
	.string "Rumors say, that the torrential\n"
	.string "downpour on Route 206 is because of a\l"
	.string "powerful water Pokémon hybernating\l"
	.string "there.\p"
	.string "But where would such a majestic beast\n"
	.string "be?$"

Route204_EventScript_Expert_Text_1:
# 12 "data/maps/Route204/scripts.pory"
	.string "They say the mysterious weather on\n"
	.string "Route 206 has stopped as suddenly as\l"
	.string "it had begun.$"

Route204_Text_Swimmer1_Intro::
# 24 "data/maps/Route204/scripts.pory"
	.string "The waves are perfect for a battle!\n"
	.string "Let’s see if you can keep up with me in\l"
	.string "the water!$"

Route204_Text_Swimmer1_Defeat::
# 28 "data/maps/Route204/scripts.pory"
	.string "No way... I got swept away!$"

Route204_Text_Swimmer1_PostBattle::
# 32 "data/maps/Route204/scripts.pory"
	.string "Looks like I need to train harder. Next\n"
	.string "time, I’ll ride the waves to victory!$"
