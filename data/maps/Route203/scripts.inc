Route203_MapScripts::
	.byte 0


Route203_EventScript_Fisherman::
# 4 "data/maps/Route203/scripts.pory"
	lock
# 5 "data/maps/Route203/scripts.pory"
	faceplayer
# 6 "data/maps/Route203/scripts.pory"
	msgbox Route203_EventScript_Fisherman_Text_0, MSGBOX_NPC
# 7 "data/maps/Route203/scripts.pory"
	release
	end


Route203_EventScript_Tuber1::
# 12 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_TUBER_ROUTE_203_1, Route203_Text_Tuber1_Intro, Route203_Text_Tuber1_Defeat
# 13 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_Tuber1_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_Expert1::
# 17 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_EXPERT_ROUTE_203_1, Route203_Text_Expert1_Intro, Route203_Text_Expert1_Defeat
# 18 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_Expert1_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_HexManiac1::
# 22 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_HEX_MANIAC_ROUTE_203_1, Route203_Text_HexManiac1_Intro, Route203_Text_HexManiac1_Defeat
# 23 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_HexManiac1_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_BlackBelt1::
# 27 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_ROUTE_203_1, Route203_Text_BlackBelt1_Intro, Route203_Text_BlackBelt1_Defeat
# 28 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_BlackBelt1_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_Hiker1::
# 32 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_HIKER_ROUTE_203_1, Route203_Text_Hiker1_Intro, Route203_Text_Hiker1_Defeat
# 33 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_Hiker1_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_Swimmer1::
# 37 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_ROUTE_203_1, Route203_Text_Swimmer1_Intro, Route203_Text_Swimmer1_Defeat
# 38 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_Swimmer1_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_Swimmer2::
# 42 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_ROUTE_203_2, Route203_Text_Swimmer2_Intro, Route203_Text_Swimmer2_Defeat
# 43 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_Swimmer2_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_Swimmer3::
# 47 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_ROUTE_203_3, Route203_Text_Swimmer3_Intro, Route203_Text_Swimmer3_Defeat
# 48 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_Swimmer3_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_Fisherman_Text_0:
# 6 "data/maps/Route203/scripts.pory"
	.string "Since the rise of the water level the\n"
	.string "only way to the Sacred Island is\l"
	.string "accessible via diving. But since the ban\l"
	.string "of Pokémon using HM moves only pro\l"
	.string "dives can make the trip.$"

Route203_Text_Tuber1_Intro::
# 51 "data/maps/Route203/scripts.pory"
	.string "Intro$"

Route203_Text_Tuber1_Defeat::
# 55 "data/maps/Route203/scripts.pory"
	.string "Defeat$"

Route203_Text_Tuber1_PostBattle::
# 59 "data/maps/Route203/scripts.pory"
	.string "Post$"

Route203_Text_Expert1_Intro::
# 63 "data/maps/Route203/scripts.pory"
	.string "Intro$"

Route203_Text_Expert1_Defeat::
# 67 "data/maps/Route203/scripts.pory"
	.string "Defeat$"

Route203_Text_Expert1_PostBattle::
# 71 "data/maps/Route203/scripts.pory"
	.string "Post$"

Route203_Text_HexManiac1_Intro::
# 75 "data/maps/Route203/scripts.pory"
	.string "Intro$"

Route203_Text_HexManiac1_Defeat::
# 79 "data/maps/Route203/scripts.pory"
	.string "Defeat$"

Route203_Text_HexManiac1_PostBattle::
# 83 "data/maps/Route203/scripts.pory"
	.string "Post$"

Route203_Text_BlackBelt1_Intro::
# 87 "data/maps/Route203/scripts.pory"
	.string "Intro$"

Route203_Text_BlackBelt1_Defeat::
# 91 "data/maps/Route203/scripts.pory"
	.string "Defeat$"

Route203_Text_BlackBelt1_PostBattle::
# 95 "data/maps/Route203/scripts.pory"
	.string "Post$"

Route203_Text_Hiker1_Intro::
# 99 "data/maps/Route203/scripts.pory"
	.string "Intro$"

Route203_Text_Hiker1_Defeat::
# 103 "data/maps/Route203/scripts.pory"
	.string "Defeat$"

Route203_Text_Hiker1_PostBattle::
# 107 "data/maps/Route203/scripts.pory"
	.string "Post$"

Route203_Text_Swimmer1_Intro::
# 111 "data/maps/Route203/scripts.pory"
	.string "Intro$"

Route203_Text_Swimmer1_Defeat::
# 115 "data/maps/Route203/scripts.pory"
	.string "Defeat$"

Route203_Text_Swimmer1_PostBattle::
# 119 "data/maps/Route203/scripts.pory"
	.string "Post$"

Route203_Text_Swimmer2_Intro::
# 123 "data/maps/Route203/scripts.pory"
	.string "Intro$"

Route203_Text_Swimmer2_Defeat::
# 127 "data/maps/Route203/scripts.pory"
	.string "Defeat$"

Route203_Text_Swimmer2_PostBattle::
# 131 "data/maps/Route203/scripts.pory"
	.string "Post$"

Route203_Text_Swimmer3_Intro::
# 135 "data/maps/Route203/scripts.pory"
	.string "Intro$"

Route203_Text_Swimmer3_Defeat::
# 139 "data/maps/Route203/scripts.pory"
	.string "Defeat$"

Route203_Text_Swimmer3_PostBattle::
# 143 "data/maps/Route203/scripts.pory"
	.string "Post$"
