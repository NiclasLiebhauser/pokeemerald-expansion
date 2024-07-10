PacifidlogTown_PokemonCenter_1F_MapScripts::
# 4 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_PokemonCenter_1F_OnTransition
# 5 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


PacifidlogTown_PokemonCenter_1F_OnTransition::
# 9 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PACIFIDLOG_TOWN
	end


PacifidlogTown_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 15 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	release
	end


PacifidlogTown_PokemonCenter_1F_EventScript_2F_Closed::
# 23 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_2F_Closed, MSGBOX_NPC
	end


PacifidlogTown_PokemonCenter_1F_Text_2F_Closed::
# 27 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "Due to apocalyptic circumstances,\n"
	.string "the second floor is currently\l"
	.string "unavailable.\l"
	.string "We apologize for the inconvenience.$"
