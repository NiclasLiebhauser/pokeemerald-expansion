Underwater_AncientGrotto_MapScripts::
# 2 "data/maps/Underwater_AncientGrotto/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Underwater_AncientGrotto_OnResume
	.byte 0


Underwater_AncientGrotto_OnResume::
# 6 "data/maps/Underwater_AncientGrotto/scripts.pory"
	setdivewarp MAP_ANCIENT_GROTTO, 13, 3
	end

