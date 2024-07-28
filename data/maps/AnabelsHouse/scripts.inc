AnabelsHouse_MapScripts::
	.byte 0


AnabelsHouse_EventScript_CutMachine::
# 6 "data/maps/AnabelsHouse/scripts.pory"
	removeobject 2
# 7 "data/maps/AnabelsHouse/scripts.pory"
	setflag FLAG_ITEM_CUT_MACHINE
# 8 "data/maps/AnabelsHouse/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_CUT
# 9 "data/maps/AnabelsHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 10 "data/maps/AnabelsHouse/scripts.pory"
	msgbox AnabelsHouse_Text_CutMachine
# 11 "data/maps/AnabelsHouse/scripts.pory"
	waitfanfare
# 12 "data/maps/AnabelsHouse/scripts.pory"
	waitbuttonpress
# 13 "data/maps/AnabelsHouse/scripts.pory"
	closemessage
	return


AnabelsHouse_Text_CutMachine::
# 16 "data/maps/AnabelsHouse/scripts.pory"
	.string "Obtained CUT MACHINE!$"
