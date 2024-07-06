AquaHideout_MapScripts::
# 2 "data/maps/AquaHideout/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_OnTransition
	.byte 0


AquaHideout_OnTransition::
# 6 "data/maps/AquaHideout/scripts.pory"
	setflag FLAG_VISITED_AQUA_HIDEOUT
	end

