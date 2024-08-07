Underwater_AquasHideout_1F_MapScripts::
# 2 "data/maps/Underwater_AquasHideout_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Underwater_AquasHideout_1F_OnResume
	.byte 0


Underwater_AquasHideout_1F_OnResume::
# 6 "data/maps/Underwater_AquasHideout_1F/scripts.pory"
	setdivewarp MAP_AQUAS_HIDEOUT_1F, 32, 15
	end

