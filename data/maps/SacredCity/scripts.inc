SacredCity_MapScripts::
# 4 "data/maps/SacredCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SacredCity_OnTransition
# 5 "data/maps/SacredCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SacredCity_OnResume
	.byte 0


SacredCity_OnTransition::
# 9 "data/maps/SacredCity/scripts.pory"
	setflag FLAG_VISITED_SACRED_CITY
	end


SacredCity_OnResume::
# 14 "data/maps/SacredCity/scripts.pory"
	setdivewarp MAP_UNDERWATER_SACRED_CITY, 9, 6
	end


SacredCity_EventScript_FlyMachine::
# 19 "data/maps/SacredCity/scripts.pory"
	removeobject 1
# 20 "data/maps/SacredCity/scripts.pory"
	setflag FLAG_ITEM_FLYING_MACHINE
# 21 "data/maps/SacredCity/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_FLY
# 22 "data/maps/SacredCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 23 "data/maps/SacredCity/scripts.pory"
	msgbox SacredCity_Text_FlyMachine
# 24 "data/maps/SacredCity/scripts.pory"
	waitfanfare
# 25 "data/maps/SacredCity/scripts.pory"
	waitbuttonpress
# 26 "data/maps/SacredCity/scripts.pory"
	closemessage
	return


SacredCity_Text_FlyMachine::
# 29 "data/maps/SacredCity/scripts.pory"
	.string "Obtained FLY MACHINE!$"
