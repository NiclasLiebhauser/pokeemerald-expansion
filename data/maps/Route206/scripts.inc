Route206_MapScripts::
# 2 "data/maps/Route206/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route206_EventScript_OnLoad
	.byte 0


Route206_EventScript_OnLoad::
# 6 "data/maps/Route206/scripts.pory"
	goto_if_unset FLAG_DEFEATED_KYOGRE, Route206_EventScript_OnLoad_2
Route206_EventScript_OnLoad_1:
	end

Route206_EventScript_OnLoad_2:
# 8 "data/maps/Route206/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 9 "data/maps/Route206/scripts.pory"
	doweather
	goto Route206_EventScript_OnLoad_1

