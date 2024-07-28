CaveOfCreation_MapScripts::
# 2 "data/maps/CaveOfCreation/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CaveOfCreation_OnResume
	.byte 0


CaveOfCreation_OnResume::
# 6 "data/maps/CaveOfCreation/scripts.pory"
	setdivewarp MAP_UNDERWATER_CAVE_OF_CREATION_ENTRANCE, 7, 5
	end

