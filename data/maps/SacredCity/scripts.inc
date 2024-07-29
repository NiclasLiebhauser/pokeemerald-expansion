SacredCity_MapScripts::
# 4 "data/maps/SacredCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SacredCity_OnTransition
# 5 "data/maps/SacredCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SacredCity_OnResume
# 6 "data/maps/SacredCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SacredCity_OnLoad
	.byte 0


SacredCity_OnTransition::
# 10 "data/maps/SacredCity/scripts.pory"
	setflag FLAG_VISITED_SACRED_CITY
	end


SacredCity_OnResume::
# 15 "data/maps/SacredCity/scripts.pory"
	setdivewarp MAP_UNDERWATER_SACRED_CITY, 9, 6
	end


SacredCity_OnLoad::
# 20 "data/maps/SacredCity/scripts.pory"
	call_if_unset FLAG_MOUNTAIN_PATH_FREE, SacredCity_Hide_Cave_Entrance
	end


SacredCity_Hide_Cave_Entrance::
# 25 "data/maps/SacredCity/scripts.pory"
	setmetatile 25, 6, METATILE_Sootopolis_Sootopolis_RockWall, TRUE
# 26 "data/maps/SacredCity/scripts.pory"
	setmetatile 25, 7, METATILE_Sootopolis_Sootopolis_RockWall, TRUE
	end


SacredCity_EventScript_FlyMachine::
# 31 "data/maps/SacredCity/scripts.pory"
	removeobject 1
# 32 "data/maps/SacredCity/scripts.pory"
	setflag FLAG_ITEM_FLYING_MACHINE
# 33 "data/maps/SacredCity/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_FLY
# 34 "data/maps/SacredCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 35 "data/maps/SacredCity/scripts.pory"
	msgbox SacredCity_Text_FlyMachine
# 36 "data/maps/SacredCity/scripts.pory"
	waitfanfare
# 37 "data/maps/SacredCity/scripts.pory"
	waitbuttonpress
# 38 "data/maps/SacredCity/scripts.pory"
	closemessage
	return


SacredCity_Text_FlyMachine::
# 41 "data/maps/SacredCity/scripts.pory"
	.string "Obtained FLY MACHINE!$"
