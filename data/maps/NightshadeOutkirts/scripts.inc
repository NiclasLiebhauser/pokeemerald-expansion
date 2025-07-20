# 1 "data/maps/NightshadeOutkirts/scripts.pory"

# 2 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutkirts_MapScripts::
# 3 "data/maps/NightshadeOutkirts/scripts.pory"
	.byte 0
# 4 "data/maps/NightshadeOutkirts/scripts.pory"

# 5 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_EventScript_Tim::
# 6 "data/maps/NightshadeOutkirts/scripts.pory"
	lock
# 7 "data/maps/NightshadeOutkirts/scripts.pory"
	faceplayer
# 8 "data/maps/NightshadeOutkirts/scripts.pory"
	goto_if_set FLAG_CUT_FOUND, NightshadeOutskirts_Text_Got_Cut
# 9 "data/maps/NightshadeOutkirts/scripts.pory"
	goto_if_set FLAG_TIM_INTRODUCED, NightshadeOutskirts_Text_Tim_Cut
# 10 "data/maps/NightshadeOutkirts/scripts.pory"
	msgbox NightshadeOutskirts_Text_Tim_Introduction, MSGBOX_DEFAULT
# 11 "data/maps/NightshadeOutkirts/scripts.pory"
	closemessage
# 12 "data/maps/NightshadeOutkirts/scripts.pory"
	turnobject LOCALID_TIM, DIR_NORTH
# 13 "data/maps/NightshadeOutkirts/scripts.pory"
	special SpawnCameraObject
# 14 "data/maps/NightshadeOutkirts/scripts.pory"
	applymovement LOCALID_CAMERA, NightshadeOutskirts_Pan_To_Cut
# 15 "data/maps/NightshadeOutkirts/scripts.pory"
	waitmovement 0
# 16 "data/maps/NightshadeOutkirts/scripts.pory"
	msgbox NightshadeOutskirts_Text_Tim_Over_There, MSGBOX_DEFAULT
# 17 "data/maps/NightshadeOutkirts/scripts.pory"
	closemessage
# 18 "data/maps/NightshadeOutkirts/scripts.pory"
	applymovement LOCALID_CAMERA, NightshadeOutskirts_Pan_From_Cut
# 19 "data/maps/NightshadeOutkirts/scripts.pory"
	waitmovement 0
# 20 "data/maps/NightshadeOutkirts/scripts.pory"
	special RemoveCameraObject
# 21 "data/maps/NightshadeOutkirts/scripts.pory"
	turnobject LOCALID_TIM, DIR_SOUTH
# 22 "data/maps/NightshadeOutkirts/scripts.pory"
	setflag FLAG_TIM_INTRODUCED
# 23 "data/maps/NightshadeOutkirts/scripts.pory"
	end
# 24 "data/maps/NightshadeOutkirts/scripts.pory"

# 25 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Text_Tim_Cut::
# 26 "data/maps/NightshadeOutkirts/scripts.pory"
	msgbox NightshadeOutskirts_Text_Tim_Needs_Cut, MSGBOX_DEFAULT
# 27 "data/maps/NightshadeOutkirts/scripts.pory"
	closemessage
# 28 "data/maps/NightshadeOutkirts/scripts.pory"
	end
# 29 "data/maps/NightshadeOutkirts/scripts.pory"

# 30 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Text_Got_Cut::
# 31 "data/maps/NightshadeOutkirts/scripts.pory"
	applymovement LOCALID_TIM, Common_Movement_Heart_Emote
# 32 "data/maps/NightshadeOutkirts/scripts.pory"
	waitmovement 0
# 33 "data/maps/NightshadeOutkirts/scripts.pory"
	goto_if_unset FLAG_TIM_INTRODUCED, NightshadeOutskirts_Text_Cut_Before_Introduction
# 34 "data/maps/NightshadeOutkirts/scripts.pory"
	msgbox NightshadeOutskirts_Text_Tim_Got_Cut, MSGBOX_DEFAULT
# 35 "data/maps/NightshadeOutkirts/scripts.pory"
	closemessage
# 36 "data/maps/NightshadeOutkirts/scripts.pory"
	delay 30
# 37 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_No_Text_Got_Cut::
# 38 "data/maps/NightshadeOutkirts/scripts.pory"
	goto_if_unset FLAG_CUT_BUSH1_PERM, NightshadeOutskirts_Text_Cut_And_Reward
# 39 "data/maps/NightshadeOutkirts/scripts.pory"
	goto_if_unset FLAG_CUT_BUSH2_PERM, NightshadeOutskirts_Text_Cut_And_Reward
# 40 "data/maps/NightshadeOutkirts/scripts.pory"
	goto NightshadeOutskirts_Text_Cut_Reward
# 41 "data/maps/NightshadeOutkirts/scripts.pory"
	end
# 42 "data/maps/NightshadeOutkirts/scripts.pory"

# 43 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Text_Cut_Before_Introduction::
# 44 "data/maps/NightshadeOutkirts/scripts.pory"
	msgbox NightshadeOutskirts_Text_Cut_Before_Intro, MSGBOX_DEFAULT
# 45 "data/maps/NightshadeOutkirts/scripts.pory"
	closemessage
# 46 "data/maps/NightshadeOutkirts/scripts.pory"
	delay 40
# 47 "data/maps/NightshadeOutkirts/scripts.pory"
	setflag FLAG_TIM_INTRODUCED
# 48 "data/maps/NightshadeOutkirts/scripts.pory"
	goto NightshadeOutskirts_No_Text_Got_Cut
# 49 "data/maps/NightshadeOutkirts/scripts.pory"
	end
# 50 "data/maps/NightshadeOutkirts/scripts.pory"

# 51 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Text_Cut_And_Reward::
# 52 "data/maps/NightshadeOutkirts/scripts.pory"
	msgbox NightshadeOutskirts_Text_Tim_Uses_Cut, MSGBOX_DEFAULT
# 53 "data/maps/NightshadeOutkirts/scripts.pory"
	closemessage
# 54 "data/maps/NightshadeOutkirts/scripts.pory"
	applymovement LOCALID_TIM, NightshadeOutskirts_Text_Cut_And_Reward_Init_Cut
# 55 "data/maps/NightshadeOutkirts/scripts.pory"
	delay 10
# 56 "data/maps/NightshadeOutkirts/scripts.pory"
	waitmovement 0
# 57 "data/maps/NightshadeOutkirts/scripts.pory"
	applymovement LOCALID_BUSH1, Movement_CutTreeDown
# 58 "data/maps/NightshadeOutkirts/scripts.pory"
	applymovement LOCALID_BUSH2, Movement_CutTreeDown
# 59 "data/maps/NightshadeOutkirts/scripts.pory"
	waitmovement 0
# 60 "data/maps/NightshadeOutkirts/scripts.pory"
	setflag FLAG_CUT_BUSH1_PERM
# 61 "data/maps/NightshadeOutkirts/scripts.pory"
	setflag FLAG_CUT_BUSH2_PERM
# 62 "data/maps/NightshadeOutkirts/scripts.pory"
	removeobject LOCALID_BUSH1
# 63 "data/maps/NightshadeOutkirts/scripts.pory"
	removeobject LOCALID_BUSH2
# 64 "data/maps/NightshadeOutkirts/scripts.pory"
	faceplayer
# 65 "data/maps/NightshadeOutkirts/scripts.pory"
	goto NightshadeOutskirts_Tim_Quest_Complete
# 66 "data/maps/NightshadeOutkirts/scripts.pory"
	end
# 67 "data/maps/NightshadeOutkirts/scripts.pory"

# 68 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Text_Cut_Reward::
# 69 "data/maps/NightshadeOutkirts/scripts.pory"
	msgbox NightshadeOutskirts_Text_Tim_Reward, MSGBOX_DEFAULT
# 70 "data/maps/NightshadeOutkirts/scripts.pory"
	closemessage
# 71 "data/maps/NightshadeOutkirts/scripts.pory"
	goto NightshadeOutskirts_Tim_Quest_Complete
# 72 "data/maps/NightshadeOutkirts/scripts.pory"
	end
# 73 "data/maps/NightshadeOutkirts/scripts.pory"

# 74 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Tim_Quest_Complete::
# 75 "data/maps/NightshadeOutkirts/scripts.pory"
	addmoney 500
# 76 "data/maps/NightshadeOutkirts/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, NightshadeOutskirts_Tim_Run_Off_Init1
# 77 "data/maps/NightshadeOutkirts/scripts.pory"
	goto NightshadeOutskirts_Tim_Run_Off
# 78 "data/maps/NightshadeOutkirts/scripts.pory"
	end
# 79 "data/maps/NightshadeOutkirts/scripts.pory"

# 80 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Tim_Run_Off_Init1::
# 81 "data/maps/NightshadeOutkirts/scripts.pory"
	applymovement LOCALID_TIM, NightshadeOutskirts_Run_Off_Dodge
# 82 "data/maps/NightshadeOutkirts/scripts.pory"
	waitmovement 0
# 83 "data/maps/NightshadeOutkirts/scripts.pory"
	goto NightshadeOutskirts_Tim_Run_Off
# 84 "data/maps/NightshadeOutkirts/scripts.pory"
	end
# 85 "data/maps/NightshadeOutkirts/scripts.pory"

# 86 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Tim_Run_Off::
# 87 "data/maps/NightshadeOutkirts/scripts.pory"
	applymovement LOCALID_TIM, NightshadeOutskirts_Run_off
# 88 "data/maps/NightshadeOutkirts/scripts.pory"
	waitmovement 0
# 89 "data/maps/NightshadeOutkirts/scripts.pory"
	setflag FLAG_HIDE_TIM_OUTSKIRTS
# 90 "data/maps/NightshadeOutkirts/scripts.pory"
	removeobject VAR_LAST_TALKED
# 91 "data/maps/NightshadeOutkirts/scripts.pory"
	end
# 92 "data/maps/NightshadeOutkirts/scripts.pory"

# 93 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Text_Cut_And_Reward_Init_Cut:
# 94 "data/maps/NightshadeOutkirts/scripts.pory"
	face_left
# 95 "data/maps/NightshadeOutkirts/scripts.pory"
	step_end
# 96 "data/maps/NightshadeOutkirts/scripts.pory"

# 97 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Pan_To_Cut:
# 98 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_slow_diag_northeast
# 99 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_slow_diag_northeast
# 100 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_slow_diag_northeast
# 101 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_slow_diag_northeast
# 102 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_slow_diag_northeast
# 103 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_slow_diag_northeast
# 104 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_slow_diag_northeast
# 105 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_slow_diag_northeast
# 106 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_slow_diag_northeast
# 107 "data/maps/NightshadeOutkirts/scripts.pory"
	step_end
# 108 "data/maps/NightshadeOutkirts/scripts.pory"

# 109 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Pan_From_Cut:
# 110 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_slow_diag_southwest
# 111 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_slow_diag_southwest
# 112 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_slow_diag_southwest
# 113 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_slow_diag_southwest
# 114 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_slow_diag_southwest
# 115 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_slow_diag_southwest
# 116 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_slow_diag_southwest
# 117 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_slow_diag_southwest
# 118 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_slow_diag_southwest
# 119 "data/maps/NightshadeOutkirts/scripts.pory"
	step_end
# 120 "data/maps/NightshadeOutkirts/scripts.pory"

# 121 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Run_Off_Dodge:
# 122 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_fast_right
# 123 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_fast_down
# 124 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_fast_down
# 125 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_fast_left
# 126 "data/maps/NightshadeOutkirts/scripts.pory"
	step_end
# 127 "data/maps/NightshadeOutkirts/scripts.pory"

# 128 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Run_off:
# 129 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_fast_down
# 130 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_fast_down
# 131 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_fast_down
# 132 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_fast_down
# 133 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_fast_down
# 134 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_fast_down
# 135 "data/maps/NightshadeOutkirts/scripts.pory"
	walk_fast_down
# 136 "data/maps/NightshadeOutkirts/scripts.pory"
	step_end
# 137 "data/maps/NightshadeOutkirts/scripts.pory"

# 138 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Text_Tim_Introduction::
# 139 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "Hey, I am Tim.\n"
# 140 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "Nice to meet you!\p"
# 141 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "I recently saw a mysterious creature\n"
# 142 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "but it fled into the woods.\p"
# 143 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "It reminded me of an ancient being that\n"
# 144 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "my grandparents always talked about.\p"
# 145 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "There are many bushes and trees in the\n"
# 146 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "way.\p"
# 147 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "But I lost something needed to get rid\n"
# 148 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "of all these obstacles...$"
# 149 "data/maps/NightshadeOutkirts/scripts.pory"

# 150 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Text_Tim_Over_There::
# 151 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "I must have lost it over there...$"
# 152 "data/maps/NightshadeOutkirts/scripts.pory"

# 153 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Text_Tim_Needs_Cut::
# 154 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "Please find it for me.\n"
# 155 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "We must hurry!\p"
# 156 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "I am too busy with preparations...$"
# 157 "data/maps/NightshadeOutkirts/scripts.pory"

# 158 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Text_Tim_Got_Cut::
# 159 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "Thanks for finding cut.\n"
# 160 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "Now I can get to work.$"
# 161 "data/maps/NightshadeOutkirts/scripts.pory"

# 162 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Text_Cut_Before_Intro::
# 163 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "Hey, I am Tim.\n"
# 164 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "Nice to meet you!\p"
# 165 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "It looks like you already found\n"
# 166 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "cut... This makes my life easier!\p"
# 167 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "I can go after the mysterious\n"
# 168 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "creature I recently saw.$"
# 169 "data/maps/NightshadeOutkirts/scripts.pory"

# 170 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Text_Tim_Uses_Cut::
# 171 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "However, let me free this way\n"
# 172 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "for you and I will give you some\p"
# 173 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "¥500 as a reward as well.$"
# 174 "data/maps/NightshadeOutkirts/scripts.pory"

# 175 "data/maps/NightshadeOutkirts/scripts.pory"
NightshadeOutskirts_Text_Tim_Reward::
# 176 "data/maps/NightshadeOutkirts/scripts.pory"
	.string "I will give you ¥500 as a reward.$"
