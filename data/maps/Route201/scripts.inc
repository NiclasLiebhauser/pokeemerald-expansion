Route201_MapScripts::
# 5 "data/maps/Route201/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route201_EventScript_OnTransition
	.byte 0


Route201_EventScript_OnTransition::
# 9 "data/maps/Route201/scripts.pory"
	goto_if_unset FLAG_ANABEL_HIDE_AND_SEEK, Route201_EventScript_OnTransition_2
# 9 "data/maps/Route201/scripts.pory"
	goto_if_set FLAG_ZAPDOS_FOUND, Route201_EventScript_OnTransition_2
Route201_EventScript_OnTransition_1:
	end

Route201_EventScript_OnTransition_2:
# 11 "data/maps/Route201/scripts.pory"
	call Route201_EventScript_HideZapdos
	goto Route201_EventScript_OnTransition_1


Route201_EventScript_Fisherman::
# 17 "data/maps/Route201/scripts.pory"
	lock
# 19 "data/maps/Route201/scripts.pory"
	call_if_unset FLAG_PLAYER_CAN_USE_SURF, FishermanGiveSharpedoMachine
# 20 "data/maps/Route201/scripts.pory"
	call_if_set FLAG_PLAYER_CAN_USE_SURF, FishermanGeneric
	end


FishermanGiveSharpedoMachine::
# 25 "data/maps/Route201/scripts.pory"
	applymovement 1, FishermanFacePlayerMovement
# 26 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route201/scripts.pory"
	msgbox FishermanText, MSGBOX_DEFAULT
# 29 "data/maps/Route201/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 30 "data/maps/Route201/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_SURF
# 31 "data/maps/Route201/scripts.pory"
	giveitem ITEM_MACHINE_SURF
# 32 "data/maps/Route201/scripts.pory"
	waitfanfare
# 33 "data/maps/Route201/scripts.pory"
	applymovement 1, FishermanFaceWaterMovement
# 34 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route201/scripts.pory"
	release
	end


FishermanGeneric::
# 41 "data/maps/Route201/scripts.pory"
	msgbox FishermanGenericText, MSGBOX_DEFAULT
# 42 "data/maps/Route201/scripts.pory"
	release
	end


Route201_EventScript_HideZapdos::
# 47 "data/maps/Route201/scripts.pory"
	setflag FLAG_TEMP_1
# 48 "data/maps/Route201/scripts.pory"
	removeobject 2
	return


Route201_EventScript_Zapdos::
# 53 "data/maps/Route201/scripts.pory"
	lock
# 54 "data/maps/Route201/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 55 "data/maps/Route201/scripts.pory"
	waitmoncry
# 56 "data/maps/Route201/scripts.pory"
	setfieldeffectargument 0, 2
# 57 "data/maps/Route201/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 58 "data/maps/Route201/scripts.pory"
	delay 15
# 59 "data/maps/Route201/scripts.pory"
	call Route201_EventScript_HideZapdos
# 60 "data/maps/Route201/scripts.pory"
	addvar VAR_HIDE_AND_SEEK, 1
# 61 "data/maps/Route201/scripts.pory"
	setflag FLAG_ZAPDOS_FOUND
# 62 "data/maps/Route201/scripts.pory"
	release
	end


# 78 "data/maps/Route201/scripts.pory"
FishermanFacePlayerMovement:
# 79 "data/maps/Route201/scripts.pory"
	face_player
	step_end

# 82 "data/maps/Route201/scripts.pory"
FishermanFaceWaterMovement:
# 83 "data/maps/Route201/scripts.pory"
	face_right
	step_end

FishermanText::
# 66 "data/maps/Route201/scripts.pory"
	.string "You want to surf on your what?!\n"
	.string "That is cruelty!\l"
	.string "How barbaric.\p"
	.string "These days we use MACHINES.\l"
	.string "Here you can have my SURF MACHINE.$"

SharpedoMachineObtained::
# 70 "data/maps/Route201/scripts.pory"
	.string "SHARPEDO MACHINE obtained.$"

FishermanGenericText::
# 74 "data/maps/Route201/scripts.pory"
	.string "I am all out of SURF MACHINES.\n"
	.string "How am I gonna get home?$"
