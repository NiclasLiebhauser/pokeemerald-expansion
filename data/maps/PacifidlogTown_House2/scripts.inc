PacifidlogTown_House2_MapScripts::
	.byte 0


EventScript_Fortune_Teller::
# 4 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 5 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 7 "data/maps/PacifidlogTown_House2/scripts.pory"
	showmoneybox 0, 0
# 8 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox EventScript_Fortune_Teller_Text_0, MSGBOX_YESNO
# 9 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmessage
# 10 "data/maps/PacifidlogTown_House2/scripts.pory"
	hidemoneybox
# 12 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Fortune_Teller_2
# 19 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox EventScript_Fortune_Teller_Text_1
EventScript_Fortune_Teller_1:
# 21 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end

EventScript_Fortune_Teller_2:
# 15 "data/maps/PacifidlogTown_House2/scripts.pory"
	call EventScript_Tell_Fortune
	goto EventScript_Fortune_Teller_1


EventScript_Tell_Fortune::
# 26 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_Text_0
# 28 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_ANABEL_HIDE_AND_SEEK, EventScript_Tell_Fortune_4
EventScript_Tell_Fortune_3:
# 34 "data/maps/PacifidlogTown_House2/scripts.pory"
	dynmultichoice 19, 6, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Tell_Fortune_Text_1, EventScript_Tell_Fortune_Text_2, EventScript_Tell_Fortune_Text_3, EventScript_Tell_Fortune_Text_4
EventScript_Tell_Fortune_1:
# 37 "data/maps/PacifidlogTown_House2/scripts.pory"
	switch VAR_RESULT
# 39 "data/maps/PacifidlogTown_House2/scripts.pory"
	case 0, EventScript_Tell_Fortune_13
# 41 "data/maps/PacifidlogTown_House2/scripts.pory"
	case 1, EventScript_Tell_Fortune_14
# 43 "data/maps/PacifidlogTown_House2/scripts.pory"
	case 2, EventScript_Tell_Fortune_15
# 45 "data/maps/PacifidlogTown_House2/scripts.pory"
	case 3, EventScript_Tell_Fortune_16
# 47 "data/maps/PacifidlogTown_House2/scripts.pory"
	case 4, EventScript_Tell_Fortune_17
EventScript_Tell_Fortune_11:
# 51 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end

EventScript_Tell_Fortune_2:
# 30 "data/maps/PacifidlogTown_House2/scripts.pory"
	dynmultichoice 18, 6, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Tell_Fortune_Text_1, EventScript_Tell_Fortune_Text_2, EventScript_Tell_Fortune_Text_3, EventScript_Tell_Fortune_Text_4, EventScript_Tell_Fortune_Text_5
	goto EventScript_Tell_Fortune_1

EventScript_Tell_Fortune_4:
# 28 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_MOLTRES_FOUND, EventScript_Tell_Fortune_2
# 28 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_ARTICUNO_FOUND, EventScript_Tell_Fortune_2
# 28 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_ZAPDOS_FOUND, EventScript_Tell_Fortune_2
	goto EventScript_Tell_Fortune_3

EventScript_Tell_Fortune_13:
# 40 "data/maps/PacifidlogTown_House2/scripts.pory"
	call EventScript_Tell_Fortune_WhereToGo
	goto EventScript_Tell_Fortune_11

EventScript_Tell_Fortune_14:
# 42 "data/maps/PacifidlogTown_House2/scripts.pory"
	call EventScript_Tell_Fortune_Money
	goto EventScript_Tell_Fortune_11

EventScript_Tell_Fortune_15:
# 44 "data/maps/PacifidlogTown_House2/scripts.pory"
	call EventScript_Tell_Fortune_Evolution
	goto EventScript_Tell_Fortune_11

EventScript_Tell_Fortune_16:
# 46 "data/maps/PacifidlogTown_House2/scripts.pory"
	call EventScript_Tell_Fortune_Training
	goto EventScript_Tell_Fortune_11

EventScript_Tell_Fortune_17:
# 48 "data/maps/PacifidlogTown_House2/scripts.pory"
	call EventScript_Tell_Fortune_HideAndSeek
	goto EventScript_Tell_Fortune_11


EventScript_Tell_Fortune_WhereToGo::
# 56 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_MOUNTAIN_PATH_FREE, EventScript_Tell_Fortune_WhereToGo_2
# 61 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_VISITED_SACRED_CITY, EventScript_Tell_Fortune_WhereToGo_3
# 85 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_AQUA_LEFT_HIDEOUT, EventScript_Tell_Fortune_WhereToGo_12
EventScript_Tell_Fortune_WhereToGo_11:
# 90 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_AQUA_LEFT_ROUTE_203_CAVE, EventScript_Tell_Fortune_WhereToGo_5
# 95 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_MAGMA_LEFT_HIDEOUT, EventScript_Tell_Fortune_WhereToGo_6
# 100 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_AQUA_LEFT_HIDEOUT, EventScript_Tell_Fortune_WhereToGo_7
EventScript_Tell_Fortune_WhereToGo_1:
# 110 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmessage
	return

EventScript_Tell_Fortune_WhereToGo_2:
# 59 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_WhereToGo_Text_0
	goto EventScript_Tell_Fortune_WhereToGo_1

EventScript_Tell_Fortune_WhereToGo_3:
# 64 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_WhereToGo_Text_1
# 65 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_AQUA_LEFT_HIDEOUT, EventScript_Tell_Fortune_WhereToGo_26
EventScript_Tell_Fortune_WhereToGo_24:
# 71 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_MAGMA_LEFT_HIDEOUT, EventScript_Tell_Fortune_WhereToGo_23
EventScript_Tell_Fortune_WhereToGo_21:
# 77 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_DEFEATED_KYOGRE, EventScript_Tell_Fortune_WhereToGo_20
	goto EventScript_Tell_Fortune_WhereToGo_1

EventScript_Tell_Fortune_WhereToGo_4:
# 88 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_WhereToGo_Text_4
	goto EventScript_Tell_Fortune_WhereToGo_1

EventScript_Tell_Fortune_WhereToGo_5:
# 93 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_WhereToGo_Text_5
	goto EventScript_Tell_Fortune_WhereToGo_1

EventScript_Tell_Fortune_WhereToGo_6:
# 98 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_WhereToGo_Text_6
	goto EventScript_Tell_Fortune_WhereToGo_1

EventScript_Tell_Fortune_WhereToGo_7:
# 103 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_WhereToGo_Text_7
	goto EventScript_Tell_Fortune_WhereToGo_1

EventScript_Tell_Fortune_WhereToGo_12:
# 85 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_MAGMA_LEFT_HIDEOUT, EventScript_Tell_Fortune_WhereToGo_4
	goto EventScript_Tell_Fortune_WhereToGo_11

EventScript_Tell_Fortune_WhereToGo_17:
# 68 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmessage
# 69 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_WhereToGo_Text_2
	goto EventScript_Tell_Fortune_WhereToGo_1

EventScript_Tell_Fortune_WhereToGo_18:
# 74 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmessage
# 75 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_WhereToGo_Text_3
	goto EventScript_Tell_Fortune_WhereToGo_1

EventScript_Tell_Fortune_WhereToGo_19:
# 80 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmessage
# 81 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_WhereToGo_Text_3
	goto EventScript_Tell_Fortune_WhereToGo_1

EventScript_Tell_Fortune_WhereToGo_20:
# 77 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_DEFEATED_GROUDON, EventScript_Tell_Fortune_WhereToGo_19
	goto EventScript_Tell_Fortune_WhereToGo_1

EventScript_Tell_Fortune_WhereToGo_23:
# 71 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_DEFEATED_GROUDON, EventScript_Tell_Fortune_WhereToGo_18
	goto EventScript_Tell_Fortune_WhereToGo_21

EventScript_Tell_Fortune_WhereToGo_26:
# 65 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_DEFEATED_KYOGRE, EventScript_Tell_Fortune_WhereToGo_17
	goto EventScript_Tell_Fortune_WhereToGo_24


EventScript_Tell_Fortune_Money::
# 115 "data/maps/PacifidlogTown_House2/scripts.pory"
	getmondexentry SPECIES_MAGIKARP, GET_SEEN
# 116 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, EventScript_Tell_Fortune_Money_2
# 120 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Tell_Fortune_Money_3
# 126 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_Money_Text_2
EventScript_Tell_Fortune_Money_1:
# 129 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmessage
	return

EventScript_Tell_Fortune_Money_2:
# 118 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_Money_Text_0
	goto EventScript_Tell_Fortune_Money_1

EventScript_Tell_Fortune_Money_3:
# 122 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_Money_Text_1
	goto EventScript_Tell_Fortune_Money_1


EventScript_Tell_Fortune_Evolution::
# 134 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_MAGMA_LEFT_HIDEOUT, EventScript_Tell_Fortune_Evolution_2
# 140 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_Evolution_Text_1
EventScript_Tell_Fortune_Evolution_1:
# 143 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmessage
	return

EventScript_Tell_Fortune_Evolution_2:
# 136 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_Evolution_Text_0
	goto EventScript_Tell_Fortune_Evolution_1


EventScript_Tell_Fortune_Training::
# 148 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_PLAYER_CAN_USE_CUT, EventScript_Tell_Fortune_Training_2
# 154 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_Training_Text_1
EventScript_Tell_Fortune_Training_1:
# 157 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmessage
	return

EventScript_Tell_Fortune_Training_2:
# 150 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_Training_Text_0
	goto EventScript_Tell_Fortune_Training_1


EventScript_Tell_Fortune_HideAndSeek::
# 162 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_MOLTRES_FOUND, EventScript_Tell_Fortune_HideAndSeek_2
# 166 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_ARTICUNO_FOUND, EventScript_Tell_Fortune_HideAndSeek_3
# 170 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_ZAPDOS_FOUND, EventScript_Tell_Fortune_HideAndSeek_4
EventScript_Tell_Fortune_HideAndSeek_1:
# 175 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmessage
	return

EventScript_Tell_Fortune_HideAndSeek_2:
# 164 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_HideAndSeek_Text_0
	goto EventScript_Tell_Fortune_HideAndSeek_1

EventScript_Tell_Fortune_HideAndSeek_3:
# 168 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_HideAndSeek_Text_1
	goto EventScript_Tell_Fortune_HideAndSeek_1

EventScript_Tell_Fortune_HideAndSeek_4:
# 172 "data/maps/PacifidlogTown_House2/scripts.pory"
	message EventScript_Tell_Fortune_HideAndSeek_Text_2
	goto EventScript_Tell_Fortune_HideAndSeek_1


EventScript_Fortune_Teller_Text_0:
# 8 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "I am the local fortune teller. Should I\n"
	.string "tell your fortune for ¥50?$"

EventScript_Fortune_Teller_Text_1:
# 19 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Oh well... Come back any time you want\n"
	.string "your fortune told.$"

EventScript_Tell_Fortune_Text_0:
# 26 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "What do you want to know from the\n"
	.string "spirits?$"

EventScript_Tell_Fortune_Text_1:
# 30 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Where to go$"

EventScript_Tell_Fortune_Text_2:
# 30 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Money$"

EventScript_Tell_Fortune_Text_3:
# 30 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Evolution$"

EventScript_Tell_Fortune_Text_4:
# 30 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Training$"

EventScript_Tell_Fortune_Text_5:
# 30 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Hide and seek$"

EventScript_Tell_Fortune_WhereToGo_Text_0:
# 59 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "The spirits want you to climb to the\n"
	.string "peak of the SACRED MOUNTAIN. You can\l"
	.string "find the entrance in the heart of\l"
	.string "SACRED CITY.\p"
	.string "You will find your destiny at the top.\p"
	.string "$"

EventScript_Tell_Fortune_WhereToGo_Text_1:
# 64 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Find the old guardian of SACRED\n"
	.string "MOUNTAIN in SACRED CITY the spirits\l"
	.string "know that he knows the way.\p"
	.string "$"

EventScript_Tell_Fortune_WhereToGo_Text_2:
# 69 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "The spirits are interested in something\n"
	.string "in your bag...\p"
	.string "You are carrying a BLUE ORB but it lacks\n"
	.string "power.\p"
	.string "The spirits whisper to me that you\n"
	.string "should seek ROUTE 206 to restore that\l"
	.string "orb to its former glory.\p"
	.string "$"

EventScript_Tell_Fortune_WhereToGo_Text_3:
# 75 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "The spirits are interested in something\n"
	.string "in your bag...\p"
	.string "You are carrying a RED ORB but it lacks\n"
	.string "power.\p"
	.string "The spirits whisper to me that you\n"
	.string "should seek the northern part of\l"
	.string "SACRED ISLAND to restore that orb to\l"
	.string "its former glory.\p"
	.string "$"

EventScript_Tell_Fortune_WhereToGo_Text_4:
# 88 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "You have driven some evil from these\n"
	.string "lands...Yet more remains to the east.\p"
	.string "Take the rapids of ROUTE 206 to get to\n"
	.string "SACRED ISLAND.\p"
	.string "$"

EventScript_Tell_Fortune_WhereToGo_Text_5:
# 93 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "The spirits are elated to see you for\n"
	.string "some reason...\p"
	.string "Seek a way eastward towards ROUTE 203\n"
	.string "there you will find a cave. Free it from\l"
	.string "the grip of malicious people.\p"
	.string "$"

EventScript_Tell_Fortune_WhereToGo_Text_6:
# 98 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "These lands need to be cleansed of evil\n"
	.string "doers. Find Team Magmas base of\l"
	.string "operation east of ROUTE 203 and take\l"
	.string "down their leader. That is what the\l"
	.string "spirits want.\p"
	.string "$"

EventScript_Tell_Fortune_WhereToGo_Text_7:
# 103 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "These lands need to be cleansed of evil\n"
	.string "doers. Find Team Aquas base of\l"
	.string "operation north of ROUTE 205 and take\l"
	.string "down their leader. That is what the\l"
	.string "spirits want.\p"
	.string "$"

EventScript_Tell_Fortune_Money_Text_0:
# 118 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "There is a fisherman in PACIFIDLOG TOWN\n"
	.string "the spirits want you to help him. For he\l"
	.string "will also help you.\p"
	.string "$"

EventScript_Tell_Fortune_Money_Text_1:
# 122 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "There is a common type of water\n"
	.string "POKéMON which the someone seeks. Learn\l"
	.string "of that species whereabouts.$"

EventScript_Tell_Fortune_Money_Text_2:
# 126 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "There is a certain boy in a floating\n"
	.string "town. The spirits adore him and want you\l"
	.string "to make a trade with him.\p"
	.string "$"

EventScript_Tell_Fortune_Evolution_Text_0:
# 136 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "The spirits whisper of a certain\n"
	.string "volcanic cave which contains untold\l"
	.string "treasure. But evil men control that\l"
	.string "place and want that treasure for\l"
	.string "themself.\p"
	.string "$"

EventScript_Tell_Fortune_Evolution_Text_1:
# 140 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Seek out an indivual by the name of\n"
	.string "VARION inside the volcanic cave. He can\l"
	.string "help you.\p"
	.string "$"

EventScript_Tell_Fortune_Training_Text_0:
# 150 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Seek out the north-western corner of\n"
	.string "the forest on SACRED ISLAND it will be\l"
	.string "the ideal spot for training.\p"
	.string "$"

EventScript_Tell_Fortune_Training_Text_1:
# 154 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "The spirits tell me that you should not\n"
	.string "burden your POKéMON with too much\l"
	.string "training. Check your ANCIENT PLATE if\l"
	.string "you are wondering why the growth of\l"
	.string "your friends has been stagnating.\p"
	.string "$"

EventScript_Tell_Fortune_HideAndSeek_Text_0:
# 164 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "The legendary bird of lava and fire is\n"
	.string "waiting for you - perched atop a\l"
	.string "volcano.\p"
	.string "$"

EventScript_Tell_Fortune_HideAndSeek_Text_1:
# 168 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "The legendary bird of ice and snow is\n"
	.string "wating for you atop the tallest\l"
	.string "mountain.\p"
	.string "$"

EventScript_Tell_Fortune_HideAndSeek_Text_2:
# 172 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "The legendary bird of lightning and\n"
	.string "thunder is waiting for you at your\l"
	.string "journey's beginning.\p"
	.string "$"
