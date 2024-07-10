PacifidlogTown_MapScripts::
# 4 "data/maps/PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
# 5 "data/maps/PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
	.byte 0


PacifidlogTown_OnTransition::
# 9 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	return


PacifidlogTown_OnResume::
# 13 "data/maps/PacifidlogTown/scripts.pory"
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
	return


PacifidlogTown_EventScript_Fisherman::
# 17 "data/maps/PacifidlogTown/scripts.pory"
	call_if_set FLAG_PACIFIDLOGTOWN_DELIVERED_MILK, PacifidlogTown_EventScript_Fisherman_Thank_You
# 18 "data/maps/PacifidlogTown/scripts.pory"
	call_if_unset FLAG_PACIFIDLOGTOWN_DELIVERED_MILK, PacifidlogTown_EventScript_Fisherman_Takes_Milk
# 19 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 20 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
	end


PacifidlogTown_EventScript_Fisherman_Takes_Milk::
# 25 "data/maps/PacifidlogTown/scripts.pory"
	checkitem ITEM_MOOMOO_MILK, 1
# 26 "data/maps/PacifidlogTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PacifidlogTown_EventScript_Fisherman_Takes_Milk_2
# 45 "data/maps/PacifidlogTown/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_MOOMOO_MILK
# 46 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_Fisherman_Wants_Milk, MSGBOX_NPC
PacifidlogTown_EventScript_Fisherman_Takes_Milk_1:
	return

PacifidlogTown_EventScript_Fisherman_Takes_Milk_2:
# 28 "data/maps/PacifidlogTown/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_MOOMOO_MILK
# 29 "data/maps/PacifidlogTown/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_OLD_ROD
# 30 "data/maps/PacifidlogTown/scripts.pory"
	playse SE_PIN
# 31 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 32 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 33 "data/maps/PacifidlogTown/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 34 "data/maps/PacifidlogTown/scripts.pory"
	waitmovement 0
# 35 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_Fisherman_Takes_Milk, MSGBOX_NPC
# 36 "data/maps/PacifidlogTown/scripts.pory"
	removeitem ITEM_MOOMOO_MILK, 1
# 38 "data/maps/PacifidlogTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 39 "data/maps/PacifidlogTown/scripts.pory"
	waitmessage
# 40 "data/maps/PacifidlogTown/scripts.pory"
	closemessage
# 41 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_PACIFIDLOGTOWN_DELIVERED_MILK
	goto PacifidlogTown_EventScript_Fisherman_Takes_Milk_1


PacifidlogTown_EventScript_Fisherman_Thank_You::
# 52 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_Fisherman_Thank_You_For_The_Milk, MSGBOX_NPC
	return


PacifidlogTown_EventScript_TownSign::
# 57 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
	return


PacifidlogTown_Text_TownSign::
# 60 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG TOWN\p"
	.string "“Where the morning sun smiles upon\n"
	.string "the waters.”\p"
	.string "Is what it used to read.\n"
	.string "The text has been modified to now read:\p"
	.string "“Where even people frown upon\n"
	.string "the waters.”$"

PacifidlogTown_Text_Fisherman_Wants_Milk::
# 64 "data/maps/PacifidlogTown/scripts.pory"
	.string "Fishing is all good and such.\p"
	.string "But nothing beets some cold\n"
	.string "{STR_VAR_1} to quensh your thirst.$"

PacifidlogTown_Text_Fisherman_Takes_Milk::
# 68 "data/maps/PacifidlogTown/scripts.pory"
	.string "What do I smell here.\n"
	.string "A fresh can of {STR_VAR_1}.\p"
	.string "Fisherman takes away your\n"
	.string "{STR_VAR_1}.\p"
	.string "Here you can have my {STR_VAR_2}\n"
	.string "for bringing this to me.$"

PacifidlogTown_Text_Fisherman_Thank_You_For_The_Milk::
# 72 "data/maps/PacifidlogTown/scripts.pory"
	.string "Thanks again for that delicous\n"
	.string "{STR_VAR_1}.$"
