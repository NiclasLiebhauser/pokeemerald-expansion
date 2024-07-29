AquasHideout_1F_MapScripts::
	.byte 0


AquasHideout_1F_EventScript_Mart::
# 4 "data/maps/AquasHideout_1F/scripts.pory"
	lock
# 5 "data/maps/AquasHideout_1F/scripts.pory"
	faceplayer
# 6 "data/maps/AquasHideout_1F/scripts.pory"
	message AquasHideout_1F_EventScript_Mart_Text_0
# 7 "data/maps/AquasHideout_1F/scripts.pory"
	waitmessage
# 8 "data/maps/AquasHideout_1F/scripts.pory"
	pokemart AquasHideout_1F_Mart
# 9 "data/maps/AquasHideout_1F/scripts.pory"
	msgbox AquasHideout_1F_EventScript_Mart_Text_1
# 10 "data/maps/AquasHideout_1F/scripts.pory"
	release
	end


	.align 2
# 14 "data/maps/AquasHideout_1F/scripts.pory"
AquasHideout_1F_Mart:
# 15 "data/maps/AquasHideout_1F/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 16 "data/maps/AquasHideout_1F/scripts.pory"
	.2byte ITEM_SODA_POP
# 17 "data/maps/AquasHideout_1F/scripts.pory"
	.2byte ITEM_LEMONADE
# 18 "data/maps/AquasHideout_1F/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

AquasHideout_1F_EventScript_Mart_Text_0:
# 6 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Hey psst... Wanna buy something?$"

AquasHideout_1F_EventScript_Mart_Text_1:
# 9 "data/maps/AquasHideout_1F/scripts.pory"
	.string "Please Come Again.$"
