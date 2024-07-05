Route201_MapScripts::
# 2 "data/maps/Route201/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route201_OnResume
# 3 "data/maps/Route201/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route201_OnTransition
	.byte 0


Route201_OnResume::
	return


Route201_OnTransition::
# 11 "data/maps/Route201/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, StartAdventure
	end


StartAdventure::
# 18 "data/maps/Route201/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 19 "data/maps/Route201/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 20 "data/maps/Route201/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 21 "data/maps/Route201/scripts.pory"
	givemon SPECIES_MUDKIP, 50
# 22 "data/maps/Route201/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 25 "data/maps/Route201/scripts.pory"
	setflag FLAG_BADGE01_GET
# 26 "data/maps/Route201/scripts.pory"
	setflag FLAG_BADGE02_GET
# 27 "data/maps/Route201/scripts.pory"
	setflag FLAG_BADGE03_GET
# 28 "data/maps/Route201/scripts.pory"
	setflag FLAG_BADGE04_GET
# 29 "data/maps/Route201/scripts.pory"
	setflag FLAG_BADGE05_GET
# 30 "data/maps/Route201/scripts.pory"
	setflag FLAG_BADGE06_GET
# 31 "data/maps/Route201/scripts.pory"
	setflag FLAG_BADGE07_GET
# 32 "data/maps/Route201/scripts.pory"
	setflag FLAG_BADGE08_GET
	return

