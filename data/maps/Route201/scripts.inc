Route201_MapScripts::
	.byte 0


Route201_EventScript_Fisherman::
# 6 "data/maps/Route201/scripts.pory"
	lock
# 8 "data/maps/Route201/scripts.pory"
	call_if_unset FLAG_PLAYER_CAN_USE_SURF, FishermanGiveSharpedoMachine
# 9 "data/maps/Route201/scripts.pory"
	call_if_set FLAG_PLAYER_CAN_USE_SURF, FishermanGeneric
	end


FishermanGiveSharpedoMachine::
# 14 "data/maps/Route201/scripts.pory"
	applymovement 1, FishermanFacePlayerMovement
# 15 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 16 "data/maps/Route201/scripts.pory"
	msgbox FishermanText, MSGBOX_DEFAULT
# 18 "data/maps/Route201/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/Route201/scripts.pory"
	msgbox SharpedoMachineObtained, MSGBOX_DEFAULT
# 20 "data/maps/Route201/scripts.pory"
	waitfanfare
# 22 "data/maps/Route201/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_SURF
# 24 "data/maps/Route201/scripts.pory"
	applymovement 1, FishermanFaceWaterMovement
# 25 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route201/scripts.pory"
	release
	end


FishermanGeneric::
# 32 "data/maps/Route201/scripts.pory"
	msgbox FishermanGenericText, MSGBOX_DEFAULT
# 33 "data/maps/Route201/scripts.pory"
	release
	end


# 49 "data/maps/Route201/scripts.pory"
FishermanFacePlayerMovement:
# 50 "data/maps/Route201/scripts.pory"
	face_player
	step_end

# 53 "data/maps/Route201/scripts.pory"
FishermanFaceWaterMovement:
# 54 "data/maps/Route201/scripts.pory"
	face_right
	step_end

FishermanText::
# 37 "data/maps/Route201/scripts.pory"
	.string "You want to surf on your what?!\n"
	.string "That is cruelty!\l"
	.string "How barbaric.\p"
	.string "These days we use MACHINES.\l"
	.string "Here you can have my SHARPEDO MACHINE.$"

SharpedoMachineObtained::
# 41 "data/maps/Route201/scripts.pory"
	.string "SHARPEDO MACHINE obtained.$"

FishermanGenericText::
# 45 "data/maps/Route201/scripts.pory"
	.string "I am all out of SHARPEDO MACHINES.\n"
	.string "How am I gonna get home?$"
