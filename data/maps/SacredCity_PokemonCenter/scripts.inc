SacredCity_PokemonCenter_MapScripts::
# 4 "data/maps/SacredCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_PokemonCenter_1F_OnTransition
# 5 "data/maps/SacredCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


SacredCity_PokemonCenter_1F_OnTransition::
# 9 "data/maps/SacredCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SACRED_CITY
	end


SacredCity_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/SacredCity_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 15 "data/maps/SacredCity_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/SacredCity_PokemonCenter/scripts.pory"
	waitmessage
# 17 "data/maps/SacredCity_PokemonCenter/scripts.pory"
	waitbuttonpress
# 18 "data/maps/SacredCity_PokemonCenter/scripts.pory"
	release
	end

