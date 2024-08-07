AquasHideout_1F_MapScripts::
# 4 "data/maps/AquasHideout_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AquasHideout_1F_OnResume
	.byte 0


AquasHideout_1F_OnResume::
# 8 "data/maps/AquasHideout_1F/scripts.pory"
	setdivewarp MAP_UNDERWATER_AQUAS_HIDEOUT_1F, 10, 11
	end


AquasHideout_1F_EventScript_Mart::
# 13 "data/maps/AquasHideout_1F/scripts.pory"
	lock
# 14 "data/maps/AquasHideout_1F/scripts.pory"
	faceplayer
# 15 "data/maps/AquasHideout_1F/scripts.pory"
	message AquasHideout_1F_EventScript_Mart_Text_0
# 16 "data/maps/AquasHideout_1F/scripts.pory"
	waitmessage
# 17 "data/maps/AquasHideout_1F/scripts.pory"
	pokemart AquasHideout_1F_Mart
# 18 "data/maps/AquasHideout_1F/scripts.pory"
	msgbox AquasHideout_1F_EventScript_Mart_Text_1
# 19 "data/maps/AquasHideout_1F/scripts.pory"
	release
	end


	.align 2
# 23 "data/maps/AquasHideout_1F/scripts.pory"
AquasHideout_1F_Mart:
# 24 "data/maps/AquasHideout_1F/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 25 "data/maps/AquasHideout_1F/scripts.pory"
	.2byte ITEM_SODA_POP
# 26 "data/maps/AquasHideout_1F/scripts.pory"
	.2byte ITEM_LEMONADE
# 27 "data/maps/AquasHideout_1F/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

AquasHideout_1F_EventScript_Mart_Text_0:
# 15 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Hey psst... Wanna buy something?\p"
	.string "$"

AquasHideout_1F_EventScript_Mart_Text_1:
# 18 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Please Come Again.$"
