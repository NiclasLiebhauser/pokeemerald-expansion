Route202_MapScripts::
	.byte 0


Route202_EventScript_BlackBelt::
# 4 "data/maps/Route202/scripts.pory"
	lock
# 5 "data/maps/Route202/scripts.pory"
	faceplayer
# 6 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_BlackBelt_Text_0, MSGBOX_NPC
# 7 "data/maps/Route202/scripts.pory"
	release
	end


Route202_EventScript_Swimmer1::
# 12 "data/maps/Route202/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_ROUTE_202_1, Route202_Text_Swimmer1_Intro, Route202_Text_Swimmer1_Defeat
# 13 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_Swimmer1_PostBattle, MSGBOX_AUTOCLOSE
	return


Route202_EventScript_Swimmer2::
# 17 "data/maps/Route202/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_ROUTE_202_2, Route202_Text_Swimmer2_Intro, Route202_Text_Swimmer2_Defeat
# 18 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_Swimmer2_PostBattle, MSGBOX_AUTOCLOSE
	return


Route202_EventScript_BlackBelt_Text_0:
# 6 "data/maps/Route202/scripts.pory"
	.string "I have heard rumors that Team Aqua is\n"
	.string "developing a DIVE MACHINE. Even though\l"
	.string "their leader is the one responsible for\l"
	.string "this mess. I have to admit it would be\l"
	.string "pretty cool to be able to dive again.$"

Route202_Text_Swimmer1_Intro::
# 21 "data/maps/Route202/scripts.pory"
	.string "Intro$"

Route202_Text_Swimmer1_Defeat::
# 25 "data/maps/Route202/scripts.pory"
	.string "Defeat$"

Route202_Text_Swimmer1_PostBattle::
# 29 "data/maps/Route202/scripts.pory"
	.string "Post$"

Route202_Text_Swimmer2_Intro::
# 33 "data/maps/Route202/scripts.pory"
	.string "Intro$"

Route202_Text_Swimmer2_Defeat::
# 37 "data/maps/Route202/scripts.pory"
	.string "Defeat$"

Route202_Text_Swimmer2_PostBattle::
# 41 "data/maps/Route202/scripts.pory"
	.string "Post$"
