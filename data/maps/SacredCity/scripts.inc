SacredCity_MapScripts::
# 4 "data/maps/SacredCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SacredCity_OnTransition
	.byte 0


SacredCity_OnTransition::
# 8 "data/maps/SacredCity/scripts.pory"
	setflag FLAG_VISITED_SACRED_CITY
	end


SacredCity_EventScript_FlyMachine::
# 13 "data/maps/SacredCity/scripts.pory"
	removeobject 1
# 14 "data/maps/SacredCity/scripts.pory"
	setflag FLAG_ITEM_FLYING_MACHINE
# 15 "data/maps/SacredCity/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_FLY
# 16 "data/maps/SacredCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 17 "data/maps/SacredCity/scripts.pory"
	msgbox SacredCity_Text_FlyMachine
# 18 "data/maps/SacredCity/scripts.pory"
	waitfanfare
# 19 "data/maps/SacredCity/scripts.pory"
	waitbuttonpress
# 20 "data/maps/SacredCity/scripts.pory"
	closemessage
	return


SacredCity_Text_FlyMachine::
# 23 "data/maps/SacredCity/scripts.pory"
	.string "Obtained FLY MACHINE!$"
