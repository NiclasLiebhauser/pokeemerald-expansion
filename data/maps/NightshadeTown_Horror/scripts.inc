NightshadeTown_Horror_MapScripts::
# 2 "data/maps/NightshadeTown_Horror/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NightshadeTown_Horror_EventScript_SetWeatherFog
	.byte 0


NightshadeTown_Horror_EventScript_SetWeatherFog::
# 6 "data/maps/NightshadeTown_Horror/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 7 "data/maps/NightshadeTown_Horror/scripts.pory"
	doweather
	return

