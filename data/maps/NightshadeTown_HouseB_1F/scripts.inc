# 1 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"

# 2 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
NightshadeTown_HouseB_1F_MapScripts::
# 3 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	.byte 0
# 4 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"

# 5 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
NightshadeTown_HouseB_1F_Event_Buff_Guy::
# 6 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	faceplayer
# 7 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	goto_if_set FLAG_PLAYER_IS_STRONG, NightshadeTown_HouseB_1F_Event_Buff_Guy_Quest_Done
# 8 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	msgbox NightshadeTown_HouseB_1F_Text_Buff_Guy, MSGBOX_DEFAULT
# 9 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	closemessage
# 10 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	special ChoosePartyMon
# 11 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	waitstate
# 12 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, NightshadeTown_HouseB_1F_Event_Buff_Guy_Bye
# 13 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 14 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	waitse
# 15 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	goto_if_eq VAR_0x8005, SPECIES_MACHAMP, NightshadeTown_HouseB_1F_Event_Buff_Guy_Strong
# 16 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	goto NightshadeTown_HouseB_1F_Event_Buff_Guy_Weak
# 17 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	end
# 18 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"

# 19 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
NightshadeTown_HouseB_1F_Event_Buff_Guy_Bye:
# 20 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	msgbox NightshadeTown_HouseB_1F_Text_Buff_Guy_Bye, MSGBOX_DEFAULT
# 21 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	closemessage
# 22 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 23 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	waitmovement 0
# 24 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	end
# 25 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"

# 26 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
NightshadeTown_HouseB_1F_Event_Buff_Guy_Weak::
# 27 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	msgbox NightshadeTown_HouseB_1F_Text_Buff_Guy_Weak, MSGBOX_DEFAULT
# 28 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	goto NightshadeTown_HouseB_1F_Event_Buff_Guy_Bye
# 29 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	end
# 30 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"

# 31 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
NightshadeTown_HouseB_1F_Event_Buff_Guy_Strong::
# 32 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	specialvar VAR_RESULT, SelectedMonHasMachoBrace
# 33 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, NightshadeTown_HouseB_1F_Event_Buff_Guy_Very_Strong
# 34 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	msgbox NightshadeTown_HouseB_1F_Text_Buff_Guy_Strong, MSGBOX_DEFAULT
# 35 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	goto NightshadeTown_HouseB_1F_Event_Buff_Guy_Bye
# 36 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	end
# 37 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"

# 38 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
NightshadeTown_HouseB_1F_Event_Buff_Guy_Very_Strong::
# 39 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	msgbox NightshadeTown_HouseB_1F_Text_Buff_Guy_Very_Strong
# 40 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 41 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	setflag FLAG_PLAYER_IS_STRONG
# 42 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
NightshadeTown_HouseB_1F_Event_Buff_Guy_Quest_Done::
# 43 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	msgbox NightshadeTown_HouseB_1F_Text_Buff_Guy_Quest_Done, MSGBOX_DEFAULT
# 44 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	closemessage
# 45 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 46 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	waitmovement 0
# 47 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	end
# 48 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"

# 49 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
NightshadeTown_HouseB_1F_Text_Buff_Guy:
# 50 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	.string "You look weak.\n"
# 51 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	.string "Show me something strong!$"
# 52 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"

# 53 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
NightshadeTown_HouseB_1F_Text_Buff_Guy_Bye:
# 54 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	.string "Come again when you can show\n"
# 55 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	.string "some more strength!$"
# 56 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"

# 57 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
NightshadeTown_HouseB_1F_Text_Buff_Guy_Weak:
# 58 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	.string "Pah! I do not sense even an ounce\n"
# 59 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	.string "of strength from {STR_VAR_1}!$"
# 60 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"

# 61 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
NightshadeTown_HouseB_1F_Text_Buff_Guy_Strong:
# 62 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	.string "Formidable, but not enough!\n"
# 63 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	.string "Take care of your {STR_VAR_1}.$"
# 64 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"

# 65 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
NightshadeTown_HouseB_1F_Text_Buff_Guy_Very_Strong:
# 66 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	.string "Yes! Your {STR_VAR_1} is strong!\n"
# 67 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	.string "Now you are strong as well!$"
# 68 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"

# 69 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
NightshadeTown_HouseB_1F_Text_Buff_Guy_Quest_Done:
# 70 "data/maps/NightshadeTown_HouseB_1F/scripts.pory"
	.string "Train hard my friend!$"
