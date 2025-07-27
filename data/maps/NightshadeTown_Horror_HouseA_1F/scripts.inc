NightshadeTown_Horror_HouseA_1F_MapScripts::
	.byte 0


EventScript_Color_Puzzle_Add::
# 4 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	lock
# 5 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	call Common_EventScript_Puzzle_Add_01
# 7 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_Color_Puzzle_Add_2
# 11 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	message EventScript_Color_Puzzle_Add_Text_1
EventScript_Color_Puzzle_Add_1:
# 14 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	waitmessage
# 15 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	closemessage
# 17 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	release
	return

EventScript_Color_Puzzle_Add_2:
# 8 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	message EventScript_Color_Puzzle_Add_Text_0
	goto EventScript_Color_Puzzle_Add_1


EventScript_Color_Puzzle_Add_Text_0:
# 8 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	.string "Correct$"

EventScript_Color_Puzzle_Add_Text_1:
# 11 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	.string "False$"
