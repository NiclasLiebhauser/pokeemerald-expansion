MagmasHideout_MapScripts::
	.byte 0


MagmasHideout_EventScript_StrengthMachine::
# 6 "data/maps/MagmasHideout/scripts.pory"
	removeobject 1
# 7 "data/maps/MagmasHideout/scripts.pory"
	setflag FLAG_ITEM_STRENGTH_MACHINE
# 8 "data/maps/MagmasHideout/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_STRENGTH
# 9 "data/maps/MagmasHideout/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 10 "data/maps/MagmasHideout/scripts.pory"
	msgbox MagmasHideout_Text_StrengthMachine
# 11 "data/maps/MagmasHideout/scripts.pory"
	waitfanfare
# 12 "data/maps/MagmasHideout/scripts.pory"
	waitbuttonpress
# 13 "data/maps/MagmasHideout/scripts.pory"
	closemessage
	return


MagmasHideout_Text_StrengthMachine::
# 16 "data/maps/MagmasHideout/scripts.pory"
	.string "Obtained STRENGTH MACHINE!$"
