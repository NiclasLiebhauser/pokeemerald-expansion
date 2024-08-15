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


PacifidlogTown_EventScript_LittleGirl::
# 61 "data/maps/PacifidlogTown/scripts.pory"
	lock
# 62 "data/maps/PacifidlogTown/scripts.pory"
	faceplayer
# 63 "data/maps/PacifidlogTown/scripts.pory"
	goto_if_set FLAG_AQUA_LEFT_ROUTE_203_CAVE, PacifidlogTown_EventScript_LittleGirl_2
# 69 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_LittleGirl_Text_1, MSGBOX_NPC
PacifidlogTown_EventScript_LittleGirl_1:
# 71 "data/maps/PacifidlogTown/scripts.pory"
	release
	end

PacifidlogTown_EventScript_LittleGirl_2:
# 65 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_EventScript_LittleGirl_Text_0, MSGBOX_NPC
	goto PacifidlogTown_EventScript_LittleGirl_1


PacifidlogTown_EventScript_LittleGirl_Text_0:
# 65 "data/maps/PacifidlogTown/scripts.pory"
	.string "Thank you for bringing peace to that\n"
	.string "cave.\p"
	.string "Maybe now some wild Pokémon can reclaim\n"
	.string "it.$"

PacifidlogTown_EventScript_LittleGirl_Text_1:
# 69 "data/maps/PacifidlogTown/scripts.pory"
	.string "Team Aqua has taken over a local mine\n"
	.string "on Route 203. Please drive them away\l"
	.string "they are disrupting an important\l"
	.string "sanctuary to the local fauna.$"

PacifidlogTown_Text_TownSign::
# 75 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG TOWN\p"
	.string "“Where the morning sun smiles upon\n"
	.string "the waters.”\p"
	.string "Is what it used to read.\n"
	.string "The text has been modified to now read:\p"
	.string "“Where even people frown upon\n"
	.string "the waters.”$"

PacifidlogTown_Text_Fisherman_Wants_Milk::
# 79 "data/maps/PacifidlogTown/scripts.pory"
	.string "Fishing is all good and such.\p"
	.string "But nothing beets some cold\n"
	.string "{STR_VAR_1} to quensh your thirst.$"

PacifidlogTown_Text_Fisherman_Takes_Milk::
# 83 "data/maps/PacifidlogTown/scripts.pory"
	.string "What do I smell here.\n"
	.string "A fresh can of {STR_VAR_1}.\p"
	.string "Fisherman takes away your\n"
	.string "{STR_VAR_1}.\p"
	.string "Here you can have my {STR_VAR_2}\n"
	.string "for bringing this to me.$"

PacifidlogTown_Text_Fisherman_Thank_You_For_The_Milk::
# 87 "data/maps/PacifidlogTown/scripts.pory"
	.string "Thanks again for that delicous\n"
	.string "{STR_VAR_1}.$"
