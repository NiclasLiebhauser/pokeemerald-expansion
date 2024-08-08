PacifidlogTown_House5_MapScripts::
	.byte 0


PacifidlogTown_House5_EventScript_OldMan::
# 6 "data/maps/PacifidlogTown_House5/scripts.pory"
	lockall
# 7 "data/maps/PacifidlogTown_House5/scripts.pory"
	faceplayer
# 8 "data/maps/PacifidlogTown_House5/scripts.pory"
	checkitem ITEM_GOLD_TEETH
# 9 "data/maps/PacifidlogTown_House5/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PacifidlogTown_House5_EventScript_OldMan_2
# 13 "data/maps/PacifidlogTown_House5/scripts.pory"
	goto_if_set FLAG_PACIFIDLOG_PARCEL_RECEIVED, PacifidlogTown_House5_EventScript_OldMan_7
PacifidlogTown_House5_EventScript_OldMan_6:
# 17 "data/maps/PacifidlogTown_House5/scripts.pory"
	goto_if_set FLAG_PACIFIDLOG_PARCEL_DELIVERED, PacifidlogTown_House5_EventScript_OldMan_4
# 23 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_EventScript_OldMan_Text_2, MSGBOX_NPC
PacifidlogTown_House5_EventScript_OldMan_1:
# 26 "data/maps/PacifidlogTown_House5/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 27 "data/maps/PacifidlogTown_House5/scripts.pory"
	waitmovement 0
# 28 "data/maps/PacifidlogTown_House5/scripts.pory"
	releaseall
	end

PacifidlogTown_House5_EventScript_OldMan_2:
# 11 "data/maps/PacifidlogTown_House5/scripts.pory"
	call PacifidlogTown_House5_EventScript_OldMan_GiveTeeth
	goto PacifidlogTown_House5_EventScript_OldMan_1

PacifidlogTown_House5_EventScript_OldMan_3:
# 15 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_EventScript_OldMan_Text_0, MSGBOX_NPC
	goto PacifidlogTown_House5_EventScript_OldMan_1

PacifidlogTown_House5_EventScript_OldMan_4:
# 19 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_EventScript_OldMan_Text_1, MSGBOX_NPC
	goto PacifidlogTown_House5_EventScript_OldMan_1

PacifidlogTown_House5_EventScript_OldMan_7:
# 13 "data/maps/PacifidlogTown_House5/scripts.pory"
	goto_if_unset FLAG_PACIFIDLOG_PARCEL_DELIVERED, PacifidlogTown_House5_EventScript_OldMan_3
	goto PacifidlogTown_House5_EventScript_OldMan_6


PacifidlogTown_House5_EventScript_OldMan_GiveTeeth::
# 33 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_EventScript_OldMan_GiveTeeth_Text_0, MSGBOX_YESNO
# 34 "data/maps/PacifidlogTown_House5/scripts.pory"
	waitmessage
# 35 "data/maps/PacifidlogTown_House5/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PacifidlogTown_House5_EventScript_OldMan_GiveTeeth_2
# 45 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_EventScript_OldMan_GiveTeeth_Text_2, MSGBOX_NPC
PacifidlogTown_House5_EventScript_OldMan_GiveTeeth_1:
	return

PacifidlogTown_House5_EventScript_OldMan_GiveTeeth_2:
# 37 "data/maps/PacifidlogTown_House5/scripts.pory"
	setflag FLAG_PACIFIDLOG_PARCEL_RECEIVED
# 38 "data/maps/PacifidlogTown_House5/scripts.pory"
	removeitem ITEM_GOLD_TEETH
# 39 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_EventScript_OldMan_GiveTeeth_Text_1, MSGBOX_NPC
# 40 "data/maps/PacifidlogTown_House5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 41 "data/maps/PacifidlogTown_House5/scripts.pory"
	giveitem ITEM_PARCEL
	goto PacifidlogTown_House5_EventScript_OldMan_GiveTeeth_1


PacifidlogTown_House5_EventScript_OldMan_Text_0:
# 15 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Have you delivered my parcel to Anabel?\n"
	.string "She lives on SACRED ISLAND to the west.$"

PacifidlogTown_House5_EventScript_OldMan_Text_1:
# 19 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Thank you for delivering that parcel to\n"
	.string "Anabel for me.$"

PacifidlogTown_House5_EventScript_OldMan_Text_2:
# 23 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "If only I had dentures.\nI lost them at work.\pYou see I was a marine biologist.\pAnd during an evacuation I had forgotton my teeth on the sub.\pOh how I miss them.$"

PacifidlogTown_House5_EventScript_OldMan_GiveTeeth_Text_0:
# 33 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Oh?! You have found my teeth?\n"
	.string "Could I have them back?$"

PacifidlogTown_House5_EventScript_OldMan_GiveTeeth_Text_1:
# 39 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Thank you kindly stranger.\p"
	.string "It pains me to impose on you once again\n"
	.string "but could you deliver a parcel to my\l"
	.string "niece Anabel? She lives on Sacred\l"
	.string "Island.$"

PacifidlogTown_House5_EventScript_OldMan_GiveTeeth_Text_2:
# 45 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "How lamentable. Come back once you feel\n"
	.string "more generous.$"
