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
