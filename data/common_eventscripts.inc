Common_EventScript_Puzzle_Setup::
# 19 "data/common_eventscripts.pory"
	copyvar VAR_COLOR_PUZZLE_1, VAR_TEMP_0
# 20 "data/common_eventscripts.pory"
	copyvar VAR_COLOR_PUZZLE_2, VAR_TEMP_1
# 21 "data/common_eventscripts.pory"
	copyvar VAR_COLOR_PUZZLE_3, VAR_TEMP_2
# 22 "data/common_eventscripts.pory"
	copyvar VAR_COLOR_PUZZLE_SOLUTION, VAR_TEMP_3
# 23 "data/common_eventscripts.pory"
	bufferspeciesname STR_VAR_1, VAR_COLOR_PUZZLE_1
# 24 "data/common_eventscripts.pory"
	bufferspeciesname STR_VAR_2, VAR_COLOR_PUZZLE_2
# 25 "data/common_eventscripts.pory"
	bufferspeciesname STR_VAR_3, VAR_COLOR_PUZZLE_3
# 26 "data/common_eventscripts.pory"
	bufferspeciesname STR_VAR_5, VAR_COLOR_PUZZLE_SOLUTION
	return


Common_EventScript_Puzzle_Add_01::
# 31 "data/common_eventscripts.pory"
	setvar VAR_TEMP_0, 1
# 32 "data/common_eventscripts.pory"
	setvar VAR_TEMP_1, 2
# 33 "data/common_eventscripts.pory"
	setvar VAR_TEMP_2, 0
# 34 "data/common_eventscripts.pory"
	setvar VAR_TEMP_3, 3
# 35 "data/common_eventscripts.pory"
	call Common_EventScript_Puzzle_Setup
# 36 "data/common_eventscripts.pory"
	msgbox Common_Text_Color_Puzzle_Add_01, MSGBOX_NUMBER
# 37 "data/common_eventscripts.pory"
	call Common_EventScript_Puzzle_Evaluate
	return


Common_EventScript_Puzzle_Evaluate::
# 43 "data/common_eventscripts.pory"
	compare VAR_TEMP_3, VAR_RESULT
	goto_if_eq Common_EventScript_Puzzle_Evaluate_2
# 47 "data/common_eventscripts.pory"
	setvar VAR_RESULT, 0
Common_EventScript_Puzzle_Evaluate_1:
	return

Common_EventScript_Puzzle_Evaluate_2:
# 44 "data/common_eventscripts.pory"
	setvar VAR_RESULT, 1
	goto Common_EventScript_Puzzle_Evaluate_1


Common_EventScript_Puzzle_Hint_Add_01::
# 54 "data/common_eventscripts.pory"
	setvar VAR_TEMP_0, 1
# 55 "data/common_eventscripts.pory"
	setvar VAR_TEMP_1, 2
# 56 "data/common_eventscripts.pory"
	setvar VAR_TEMP_2, 0
# 57 "data/common_eventscripts.pory"
	setvar VAR_TEMP_3, 3
# 58 "data/common_eventscripts.pory"
	call Common_EventScript_Puzzle_Setup
# 59 "data/common_eventscripts.pory"
	msgbox Common_Text_Color_Puzzle_Hint_Add_01, MSGBOX_DEFAULT
	return


Common_EventScript_Puzzle_Hint_Subtract_01::
# 64 "data/common_eventscripts.pory"
	setvar VAR_TEMP_0, 8
# 65 "data/common_eventscripts.pory"
	setvar VAR_TEMP_1, 6
# 66 "data/common_eventscripts.pory"
	setvar VAR_TEMP_2, 0
# 67 "data/common_eventscripts.pory"
	setvar VAR_TEMP_3, 2
# 68 "data/common_eventscripts.pory"
	call Common_EventScript_Puzzle_Setup
# 69 "data/common_eventscripts.pory"
	msgbox Common_Text_Color_Puzzle_Hint_Subtract_01, MSGBOX_DEFAULT
	return


Common_EventScript_Puzzle_Hint_Multiply_01::
# 74 "data/common_eventscripts.pory"
	setvar VAR_TEMP_0, 10
# 75 "data/common_eventscripts.pory"
	setvar VAR_TEMP_1, 5
# 76 "data/common_eventscripts.pory"
	setvar VAR_TEMP_2, 0
# 77 "data/common_eventscripts.pory"
	setvar VAR_TEMP_3, 50
# 78 "data/common_eventscripts.pory"
	call Common_EventScript_Puzzle_Setup
# 79 "data/common_eventscripts.pory"
	msgbox Common_Text_Color_Puzzle_Hint_Multiply_01, MSGBOX_DEFAULT
	return


Common_EventScript_Puzzle_Hint_Divide_01::
# 84 "data/common_eventscripts.pory"
	setvar VAR_TEMP_0, 100
# 85 "data/common_eventscripts.pory"
	setvar VAR_TEMP_1, 4
# 86 "data/common_eventscripts.pory"
	setvar VAR_TEMP_2, 0
# 87 "data/common_eventscripts.pory"
	setvar VAR_TEMP_3, 25
# 88 "data/common_eventscripts.pory"
	call Common_EventScript_Puzzle_Setup
# 89 "data/common_eventscripts.pory"
	msgbox Common_Text_Color_Puzzle_Hint_Divide_01, MSGBOX_DEFAULT
	return


Common_Text_Color_Puzzle_Add_01::
# 93 "data/common_eventscripts.pory"
	.string "{COLOR BLUE}{STR_VAR_1} {COLOR BLUE}{STR_VAR_2} {COLOR DARK_GRAY} = ???$"

Common_Text_Color_Puzzle_Hint_Add_01::
# 97 "data/common_eventscripts.pory"
	.string "{COLOR BLUE}{STR_VAR_1} {COLOR BLUE}{STR_VAR_2} {COLOR DARK_GRAY} = {COLOR BLUE}{STR_VAR_5}$"

Common_Text_Color_Puzzle_Hint_Subtract_01::
# 101 "data/common_eventscripts.pory"
	.string "{COLOR BLUE}{STR_VAR_1} {COLOR GREEN}{STR_VAR_2} {COLOR DARK_GRAY} = {COLOR BLUE}{STR_VAR_5}$"

Common_Text_Color_Puzzle_Hint_Multiply_01::
# 105 "data/common_eventscripts.pory"
	.string "{COLOR BLUE}{STR_VAR_1} {COLOR RED}{STR_VAR_2} {COLOR DARK_GRAY} = {COLOR BLUE}{STR_VAR_5}$"

Common_Text_Color_Puzzle_Hint_Divide_01::
# 109 "data/common_eventscripts.pory"
	.string "{COLOR BLUE}{STR_VAR_1} {COLOR LIGHT_RED}{STR_VAR_2} {COLOR DARK_GRAY} = {COLOR BLUE}{STR_VAR_5}$"
