# 1 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 2 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_MapScripts::
# 3 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.byte 0
# 4 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 5 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Event_Sign_Left::
# 6 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	msgbox NightshadeTown_Inn_1F_Text_Sign_Left, MSGBOX_SIGN
# 7 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	end
# 8 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 9 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_inn_1F_Event_Sign_Right::
# 10 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	msgbox NightshadeTown_Inn_1F_Text_Sign_Right, MSGBOX_SIGN
# 11 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	end
# 12 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 13 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Event_Melissa::
# 14 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	lock
# 15 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	faceplayer
# 16 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	goto_if_set FLAG_MELISSA_RANTED, NightshadeTown_Inn_1F_Event_Melissa_Init
# 17 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	goto_if_set FLAG_GREG_GOT_NUGGET, NightshadeTown_Inn_1F_Event_Melissa_Greg
# 18 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	goto_if_eq VAR_TEMP_1, 0, NightshadeTown_Inn_1F_Event_Melissa_1
# 19 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Event_Melissa_Ranted::
# 20 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, NightshadeTown_Inn_1F_Event_Melissa_2
# 21 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	goto_if_eq VAR_TEMP_1, 2, NightshadeTown_Inn_1F_Event_Melissa_3
# 22 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	end
# 23 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 24 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Event_Melissa_Init::
# 25 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, NightshadeTown_Inn_1F_Event_Melissa_4
# 26 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	goto_if_eq VAR_TEMP_1, 2, NightshadeTown_Inn_1F_Event_Melissa_3
# 27 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 28 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	goto NightshadeTown_Inn_1F_Event_Melissa_Init
# 29 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	end
# 30 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 31 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Event_Melissa_Greg::
# 32 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	goto_if_set FLAG_GREG_SAD, NightshadeTown_Inn_1F_Event_Melissa_Greg_Rant
# 33 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	msgbox NightshadeTown_Inn_1F_Text_Melissa_Greg_Gift, MSGBOX_DEFAULT
# 34 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 35 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	setflag FLAG_GREG_GIFT_RECEIVED
# 36 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Event_Melissa_Greg_Rant::
# 37 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	msgbox NightshadeTown_Inn_1F_Text_Melissa_Greg_Thanks, MSGBOX_DEFAULT
# 38 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	setflag FLAG_MELISSA_RANTED
# 39 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 40 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	waitmovement 0
# 41 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	release
# 42 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	end
# 43 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 44 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Event_Melissa_1::
# 45 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 46 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	msgbox NightshadeTown_Inn_1F_Text_Melissa_1, MSGBOX_DEFAULT
# 47 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	closemessage
# 48 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 49 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	waitmovement 0
# 50 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	release
# 51 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	end
# 52 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 53 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Event_Melissa_2::
# 54 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 55 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	msgbox NightshadeTown_Inn_1F_Text_Melissa_2, MSGBOX_DEFAULT
# 56 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	closemessage
# 57 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 58 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	waitmovement 0
# 59 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	release
# 60 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	end
# 61 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 62 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Event_Melissa_3::
# 63 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 64 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	msgbox NightshadeTown_Inn_1F_Text_Melissa_3, MSGBOX_DEFAULT
# 65 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	closemessage
# 66 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 67 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	waitmovement 0
# 68 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	release
# 69 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	end
# 70 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 71 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Event_Melissa_4::
# 72 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 73 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	msgbox NightshadeTown_Inn_1F_Text_Melissa_4, MSGBOX_DEFAULT
# 74 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	closemessage
# 75 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 76 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	waitmovement 0
# 77 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	release
# 78 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	end
# 79 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 80 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Event_Maxwell::
# 81 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	lock
# 82 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	goto_if_set FLAG_MAXWELL_CONFESSED, NightshadeTown_Inn_1F_Event_Maxwell_Someday
# 83 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	msgbox NightshadeTown_Inn_1F_Text_Maxwell, MSGBOX_DEFAULT
# 84 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	closemessage
# 85 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	delay 10
# 86 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	faceplayer
# 87 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	applymovement LOCALID_MAXWELL, Common_Movement_ExclamationMark
# 88 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	waitmovement 0
# 89 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	msgbox NightshadeTown_Inn_1F_Text_Maxwell_Ask, MSGBOX_YESNO
# 90 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, NightshadeTown_Inn_1F_Event_Maxwell_Yes
# 91 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	msgbox NightshadeTown_Inn_1F_Text_Maxwell_No, MSGBOX_DEFAULT
# 92 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	closemessage
# 93 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 94 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	waitmovement 0
# 95 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	release
# 96 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	end
# 97 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 98 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Event_Maxwell_Yes::
# 99 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	msgbox NightshadeTown_Inn_1F_Text_Maxwell_Yes, MSGBOX_DEFAULT
# 100 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	closemessage
# 101 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 102 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	waitmovement 0
# 103 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	setflag FLAG_MAXWELL_CONFESSED
# 104 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	release
# 105 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	end
# 106 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 107 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 108 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Event_Maxwell_Someday::
# 109 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	msgbox NightshadeTown_Inn_1F_Text_Maxwell_Someday, MSGBOX_DEFAULT
# 110 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	closemessage
# 111 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 112 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	waitmovement 0
# 113 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	release
# 114 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	end
# 115 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 116 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Event_Big_Chungus::
# 117 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	lock
# 118 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	faceplayer
# 119 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	msgbox NightshadeTown_Inn_1F_Text_Big_Chungus, MSGBOX_DEFAULT
# 120 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	closemessage
# 121 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 122 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	waitmovement 0
# 123 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	release
# 124 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	end
# 125 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 126 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Text_Melissa_Greg_Gift:
# 127 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "Hey Greg just passed by and gave me\n"
# 128 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "this. I am supposed to give it to you.$"
# 129 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 130 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Text_Melissa_Greg_Thanks:
# 131 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "Thank you so much for helping Greg.\n"
# 132 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "I always felt so sorry for him.\p"
# 133 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "That's why I let him live here for\n"
# 134 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "no money at all.\p"
# 135 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "Even though I like Greg, it was hard\n"
# 136 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "operating the inn with the missing\l"
# 137 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "revenue of his room.$"
# 138 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 139 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Text_Melissa_1:
# 140 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "Welcome to Nightshade's best Inn!\n"
# 141 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "I am Melissa, how can I help you?$"
# 142 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 143 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Text_Melissa_2:
# 144 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "Unfortunately we cannot offer you\n"
# 145 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "a stay for tonight.\p"
# 146 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "Ol' Greg always rents one of\n"
# 147 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "our rooms after all...\p"
# 148 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "I guess you could sleep on the Couch\n"
# 149 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "over there.$"
# 150 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 151 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Text_Melissa_3:
# 152 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "Would you like to dine here?\n"
# 153 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "We offer exquisite meals.\p"
# 154 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "At least that's what my patrons\n"
# 155 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "always express.$"
# 156 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 157 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Text_Melissa_4:
# 158 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "I think we have a room available.\n"
# 159 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "You helped out. I think you can stay\l"
# 160 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "in the room for free.$"
# 161 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 162 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Text_Maxwell:
# 163 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "Oh Melissa... ... ...$"
# 164 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 165 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Text_Maxwell_Ask:
# 166 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "Did you just hear me?$"
# 167 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 168 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Text_Maxwell_No:
# 169 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "Good. Better stay out of it.$"
# 170 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 171 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Text_Maxwell_Yes:
# 172 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "Well uhm...\n"
# 173 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "... ... ...\p"
# 174 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "I sort of like her. Maybe someday\n"
# 175 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "I'll ask her out.$"
# 176 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 177 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Text_Maxwell_Someday:
# 178 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "Someday it will happen.$"
# 179 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 180 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Text_Big_Chungus:
# 181 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "The food here is just brilliant. If\n"
# 182 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "I could, I would eat here every day.$"
# 183 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 184 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Text_Sign_Left:
# 185 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "An old poster advertising jewelery\n"
# 186 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "from Nightshade's mine.$"
# 187 "data/maps/NightshadeTown_Inn_1F/scripts.pory"

# 188 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
NightshadeTown_Inn_1F_Text_Sign_Right:
# 189 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "The painting displays a lushious\n"
# 190 "data/maps/NightshadeTown_Inn_1F/scripts.pory"
	.string "and vibrant depiction of nature.$"
