SacredIslandNorth_MapScripts::
# 2 "data/maps/SacredIslandNorth/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SacredIslandNorth_EventScript_OnLoad
	.byte 0


SacredIslandNorth_EventScript_OnLoad::
# 6 "data/maps/SacredIslandNorth/scripts.pory"
	goto_if_unset FLAG_DEFEATED_GROUDON, SacredIslandNorth_EventScript_OnLoad_2
SacredIslandNorth_EventScript_OnLoad_1:
	end

SacredIslandNorth_EventScript_OnLoad_2:
# 8 "data/maps/SacredIslandNorth/scripts.pory"
	setweather WEATHER_DROUGHT
# 9 "data/maps/SacredIslandNorth/scripts.pory"
	doweather
	goto SacredIslandNorth_EventScript_OnLoad_1

