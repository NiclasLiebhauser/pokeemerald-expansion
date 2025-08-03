# 1 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 2 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_MapScripts::
# 3 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.byte 0
# 4 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 5 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Event_Stone::
# 6 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	msgbox NightshadeTown_Inn_2F_Text_Stone, MSGBOX_SIGN
# 7 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	end
# 8 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 9 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Event_Jenny::
# 10 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	lock
# 11 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	faceplayer
# 12 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	msgbox NightshadeTown_Inn_2F_Text_Jenny, MSGBOX_DEFAULT
# 13 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	release
# 14 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	end
# 15 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 16 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Event_Greg::
# 17 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	goto_if_set FLAG_GREG_INTRODUCED, NightshadeTown_Inn_2F_Event_Greg_Nugget
# 18 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	msgbox NightshadeTown_Inn_2F_Text_Greg_0, MSGBOX_DEFAULT
# 19 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	closemessage
# 20 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	delay 10
# 21 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	faceplayer
# 22 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	checkitem ITEM_NUGGET
# 23 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, NightshadeTown_Inn_2F_Event_Greg_Got_Nugget_Intro
# 24 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	msgbox NightshadeTown_Inn_2F_Text_Greg_1, MSGBOX_DEFAULT
# 25 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	closemessage
# 26 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 27 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	waitmovement 0
# 28 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	setflag FLAG_GREG_INTRODUCED
# 29 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	end
# 30 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 31 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Event_Greg_Nugget::
# 32 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	faceplayer
# 33 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	checkitem ITEM_NUGGET
# 34 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, NightshadeTown_Inn_2F_Event_Greg_Got_Nugget
# 35 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	msgbox NightshadeTown_Inn_2F_Text_Greg_Nugget, MSGBOX_DEFAULT
# 36 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	closemessage
# 37 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 38 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	waitmovement 0
# 39 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	end
# 40 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 41 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Event_Greg_Got_Nugget_Intro::
# 42 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	applymovement LOCALID_GREG, Common_Movement_ExclamationMark
# 43 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	waitmovement 0
# 44 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	setflag FLAG_GREG_INTRODUCED
# 45 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	msgbox NightshadeTown_Inn_2F_Text_Greg_Nugget_Got_Nugget_Intro, MSGBOX_YESNO
# 46 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, NightshadeTown_Inn_2F_Give_Nugget
# 47 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	setflag FLAG_GREG_SAD
# 48 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	goto NightshadeTown_Inn_2F_Event_Greg_Is_Sad
# 49 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	end
# 50 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 51 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Event_Greg_Got_Nugget::
# 52 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	goto_if_set FLAG_GREG_SAD, NightshadeTown_Inn_2F_Event_Greg_Got_Nugget_Sad
# 53 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	applymovement LOCALID_GREG, Common_Movement_ExclamationMark
# 54 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	waitmovement 0
# 55 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	msgbox NightshadeTown_Inn_2F_Text_Greg_Nugget_Got_Nugget, MSGBOX_YESNO
# 56 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, NightshadeTown_Inn_2F_Give_Nugget
# 57 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	setflag FLAG_GREG_SAD
# 58 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	goto NightshadeTown_Inn_2F_Event_Greg_Is_Sad
# 59 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	end
# 60 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 61 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Event_Greg_Got_Nugget_Sad::
# 62 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	msgbox NightshadeTown_Inn_2F_Text_Greg_Nugget_Got_Nugget_Sad, MSGBOX_YESNO
# 63 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, NightshadeTown_Inn_2F_Give_Nugget
# 64 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	goto NightshadeTown_Inn_2F_Event_Greg_Is_Sad
# 65 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	end
# 66 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 67 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Event_Greg_Is_Sad::
# 68 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	closemessage
# 69 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 70 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	waitmovement 0
# 71 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	delay 40
# 72 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	msgbox NightshadeTown_Inn_2F_Text_Greg_Is_Sad, MSGBOX_DEFAULT
# 73 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	closemessage
# 74 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	end
# 75 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 76 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Give_Nugget::
# 77 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	closemessage
# 78 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	applymovement LOCALID_GREG, Common_Movement_Heart_Emote
# 79 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	waitmovement 0
# 80 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	delay 10
# 81 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	msgbox NightshadeTown_Inn_2F_Text_Give_Nugget, MSGBOX_DEFAULT
# 82 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	closemessage
# 83 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	applymovement LOCALID_PLAYER, NightshadeTown_Inn_2F_Player_Goodbye
# 84 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	waitmovement 0
# 85 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	applymovement LOCALID_GREG, NightshadeTown_Inn_2F_Greg_Goodbye
# 86 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	waitmovement 0
# 87 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	msgbox NightshadeTown_Inn_2F_Text_Greg_Ending, MSGBOX_DEFAULT
# 88 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	closemessage
# 89 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	applymovement LOCALID_GREG, NightshadeTown_Inn_2F_Greg_Run_Off
# 90 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	waitmovement 0
# 91 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	setflag FLAG_GREG_GOT_NUGGET
# 92 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 93 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	release
# 94 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	end
# 95 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 96 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Player_Goodbye:
# 97 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	walk_slow_down
# 98 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	walk_slow_right
# 99 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	walk_slow_right
# 100 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	face_left
# 101 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	step_end
# 102 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 103 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Greg_Goodbye:
# 104 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	walk_slow_down
# 105 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	walk_slow_down
# 106 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	walk_slow_right
# 107 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	step_end
# 108 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 109 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Greg_Run_Off:
# 110 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	walk_slow_down
# 111 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	walk_slow_down
# 112 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	walk_slow_down
# 113 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	walk_slow_down
# 114 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	walk_slow_right
# 115 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	walk_slow_right
# 116 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	walk_slow_right
# 117 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	walk_slow_right
# 118 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	walk_slow_up
# 119 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	step_end
# 120 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 121 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Text_Greg_0:
# 122 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "... ... ... ...\n"
# 123 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "... I wish.$"
# 124 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 125 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Text_Greg_1:
# 126 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "Greetings youngling. I am the ol'\n"
# 127 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "Greg. Back in the days...\p"
# 128 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "I lost something very valuable.\n"
# 129 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "Now I am forced to reside here because\l"
# 130 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "my company decided to shut down the\l"
# 131 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "mining operation.\p"
# 132 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "They flooded the area in the outskirts\n"
# 133 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "of Nightshade...\p"
# 134 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "Unfortunately they also flooded the\n"
# 135 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "grand cavern where I hid the nugget\l"
# 136 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "that would finance my retirement.\p"
# 137 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 138 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Text_Greg_Nugget:
# 139 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "What a grave mistake...\n"
# 140 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "I wish I could have saved everything...$"
# 141 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 142 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Text_Greg_Nugget_Got_Nugget_Intro:
# 143 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "I see you have a nugget and it looks\n"
# 144 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "just like the one I have lost so long\l"
# 145 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "ago...\p"
# 146 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "I beg you. Please give it to me and\n"
# 147 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "get me out of this inn that I have\l"
# 148 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "been stuck in for so long...$"
# 149 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 150 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Text_Greg_Nugget_Got_Nugget:
# 151 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "Oh you found my nugget! I am so glad\n"
# 152 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "that it exists.\p"
# 153 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "Please give it to me... I have been\n"
# 154 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "stuck in this inn for an eternity.$"
# 155 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 156 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Text_Greg_Nugget_Got_Nugget_Sad:
# 157 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "Have you changed your mind?$"
# 158 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 159 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Text_Greg_Is_Sad:
# 160 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "... ... I see.$"
# 161 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 162 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Text_Give_Nugget:
# 163 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "Thank you so much! Now I am free\n"
# 164 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "from the shackles of poverty!$"
# 165 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 166 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Text_Greg_Ending:
# 167 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "I am sure we will see each other\n"
# 168 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "in the future. Farewell!$"
# 169 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 170 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Text_Stone:
# 171 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "It looks like there is a fossil of\n"
# 172 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "an ancient egg in the showcase.\p"
# 173 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "Even though it is so old, it never\n"
# 174 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "lost its aquamarine appearance.$"
# 175 "data/maps/NightshadeTown_Inn_2F/scripts.pory"

# 176 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
NightshadeTown_Inn_2F_Text_Jenny:
# 177 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "Somehow I came to this city. This inn\n"
# 178 "data/maps/NightshadeTown_Inn_2F/scripts.pory"
	.string "is just the right place to stay.$"
