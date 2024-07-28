Underwater_SacredCity_MapScripts::
# 2 "data/maps/Underwater_SacredCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Underwater_SacredCity_OnResume
	.byte 0


Underwater_SacredCity_OnResume::
# 6 "data/maps/Underwater_SacredCity/scripts.pory"
	setdivewarp MAP_SACRED_CITY, 31, 51
	end

