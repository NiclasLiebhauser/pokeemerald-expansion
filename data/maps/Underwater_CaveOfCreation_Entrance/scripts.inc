Underwater_CaveOfCreation_Entrance_MapScripts::
# 2 "data/maps/Underwater_CaveOfCreation_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Underwater_CaveOfCreation_Entrance_OnResume
	.byte 0


Underwater_CaveOfCreation_Entrance_OnResume::
# 6 "data/maps/Underwater_CaveOfCreation_Entrance/scripts.pory"
	setdivewarp MAP_CAVE_OF_CREATION, 14, 24
	end

