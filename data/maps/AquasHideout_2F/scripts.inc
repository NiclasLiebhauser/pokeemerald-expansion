AquasHideout_2F_MapScripts::
	.byte 0


AquasHideout_2F_EventScript_DiveMachine::
# 6 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 1
# 7 "data/maps/AquasHideout_2F/scripts.pory"
	setflag FLAG_ITEM_DIVE_MACHINE
# 8 "data/maps/AquasHideout_2F/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_DIVE
# 9 "data/maps/AquasHideout_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 10 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_DiveMachine
# 11 "data/maps/AquasHideout_2F/scripts.pory"
	waitfanfare
# 12 "data/maps/AquasHideout_2F/scripts.pory"
	waitbuttonpress
# 13 "data/maps/AquasHideout_2F/scripts.pory"
	closemessage
	return


AquasHideout_2F_Text_DiveMachine::
# 16 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Obtained DIVE MACHINE!$"
