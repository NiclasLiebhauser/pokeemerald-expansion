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
	msgbox SharpedoMachineObtained, MSGBOX_DEFAULT
# 31 "data/maps/Route201/scripts.pory"
	waitfanfare
# 33 "data/maps/Route201/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_SURF
# 35 "data/maps/Route201/scripts.pory"
	applymovement 1, FishermanFaceWaterMovement
# 36 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route201/scripts.pory"
	release
	end


FishermanGeneric::
# 43 "data/maps/Route201/scripts.pory"
	msgbox FishermanGenericText, MSGBOX_DEFAULT
# 44 "data/maps/Route201/scripts.pory"
	release
	end


Route201_EventScript_HideZapdos::
# 49 "data/maps/Route201/scripts.pory"
	setflag FLAG_TEMP_1
# 50 "data/maps/Route201/scripts.pory"
	removeobject 2
	return


Route201_EventScript_Zapdos::
# 55 "data/maps/Route201/scripts.pory"
	lock
# 56 "data/maps/Route201/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 57 "data/maps/Route201/scripts.pory"
	waitmoncry
# 58 "data/maps/Route201/scripts.pory"
	setfieldeffectargument 0, 2
# 59 "data/maps/Route201/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 60 "data/maps/Route201/scripts.pory"
	delay 15
# 61 "data/maps/Route201/scripts.pory"
	call Route201_EventScript_HideZapdos
# 62 "data/maps/Route201/scripts.pory"
	addvar VAR_HIDE_AND_SEEK, 1
# 63 "data/maps/Route201/scripts.pory"
	setflag FLAG_ZAPDOS_FOUND
# 64 "data/maps/Route201/scripts.pory"
	release
	end


# 80 "data/maps/Route201/scripts.pory"
FishermanFacePlayerMovement:
# 81 "data/maps/Route201/scripts.pory"
	face_player
	step_end

# 84 "data/maps/Route201/scripts.pory"
FishermanFaceWaterMovement:
# 85 "data/maps/Route201/scripts.pory"
	face_right
	step_end

FishermanText::
# 68 "data/maps/Route201/scripts.pory"
	.string "You want to surf on your what?!\n"
	.string "That is cruelty!\l"
	.string "How barbaric.\p"
	.string "These days we use MACHINES.\l"
	.string "Here you can have my SHARPEDO MACHINE.$"

SharpedoMachineObtained::
# 72 "data/maps/Route201/scripts.pory"
	.string "SHARPEDO MACHINE obtained.$"

FishermanGenericText::
# 76 "data/maps/Route201/scripts.pory"
	.string "I am all out of SHARPEDO MACHINES.\n"
	.string "How am I gonna get home?$"
