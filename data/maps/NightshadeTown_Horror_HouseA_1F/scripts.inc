NightshadeTown_Horror_HouseA_1F_MapScripts::
	.byte 0


EventScript_Color_Puzzle_Add::
# 17 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	lock
# 19 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	call Common_EventScript_Puzzle_Hint_Divide_01
# 21 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	random 4
# 33 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	release
	return


Common_EventScript_Puzzle_Setup::
# 37 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	copyvar VAR_COLOR_PUZZLE_1, VAR_TEMP_0
# 38 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	copyvar VAR_COLOR_PUZZLE_2, VAR_TEMP_1
# 39 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	copyvar VAR_COLOR_PUZZLE_3, VAR_TEMP_2
# 40 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	copyvar VAR_COLOR_PUZZLE_SOLUTION, VAR_TEMP_3
# 41 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_COLOR_PUZZLE_1
# 42 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_COLOR_PUZZLE_2
# 43 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	bufferspeciesname STR_VAR_3, VAR_COLOR_PUZZLE_3
# 44 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	bufferspeciesname STR_VAR_5, VAR_COLOR_PUZZLE_SOLUTION
	return


Common_EventScript_Puzzle_Hint_Add_01::
# 49 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 50 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 51 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	setvar VAR_TEMP_2, 0
# 52 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	setvar VAR_TEMP_3, 3
# 53 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	call Common_EventScript_Puzzle_Setup
# 54 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	msgbox Common_Text_Color_Puzzle_Hint_Add_01, MSGBOX_DEFAULT
	return


Common_EventScript_Puzzle_Hint_Subtract_01::
# 59 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	setvar VAR_TEMP_0, 8
# 60 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	setvar VAR_TEMP_1, 6
# 61 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	setvar VAR_TEMP_2, 0
# 62 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	setvar VAR_TEMP_3, 2
# 63 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	call Common_EventScript_Puzzle_Setup
# 64 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	msgbox Common_Text_Color_Puzzle_Hint_Subtract_01, MSGBOX_DEFAULT
	return


Common_EventScript_Puzzle_Hint_Multiply_01::
# 69 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	setvar VAR_TEMP_0, 10
# 70 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	setvar VAR_TEMP_1, 5
# 71 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	setvar VAR_TEMP_2, 0
# 72 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	setvar VAR_TEMP_3, 50
# 73 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	call Common_EventScript_Puzzle_Setup
# 74 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	msgbox Common_Text_Color_Puzzle_Hint_Multiply_01, MSGBOX_DEFAULT
	return


Common_EventScript_Puzzle_Hint_Divide_01::
# 79 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	setvar VAR_TEMP_0, 100
# 80 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	setvar VAR_TEMP_1, 4
# 81 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	setvar VAR_TEMP_2, 0
# 82 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	setvar VAR_TEMP_3, 25
# 83 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	call Common_EventScript_Puzzle_Setup
# 84 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	msgbox Common_Text_Color_Puzzle_Hint_Divide_01, MSGBOX_DEFAULT
	return


Common_Text_Color_Puzzle_Hint_Add_01::
# 88 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	.string "{COLOR BLUE}{STR_VAR_1} {COLOR BLUE}{STR_VAR_2} {COLOR DARK_GRAY} = {COLOR BLUE}{STR_VAR_5}$"

Common_Text_Color_Puzzle_Hint_Subtract_01::
# 92 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	.string "{COLOR BLUE}{STR_VAR_1} {COLOR GREEN}{STR_VAR_2} {COLOR DARK_GRAY} = {COLOR BLUE}{STR_VAR_5}$"

Common_Text_Color_Puzzle_Hint_Multiply_01::
# 96 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	.string "{COLOR BLUE}{STR_VAR_1} {COLOR RED}{STR_VAR_2} {COLOR DARK_GRAY} = {COLOR BLUE}{STR_VAR_5}$"

Common_Text_Color_Puzzle_Hint_Divide_01::
# 100 "data/maps/NightshadeTown_Horror_HouseA_1F/scripts.pory"
	.string "{COLOR BLUE}{STR_VAR_1} {COLOR LIGHT_BLUE}{STR_VAR_2} {COLOR DARK_GRAY} = {COLOR BLUE}{STR_VAR_5}$"
