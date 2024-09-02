PacifidlogTown_House3_MapScripts::
	.byte 0


PacifidlogTown_House3_BerryShop::
# 4 "data/maps/PacifidlogTown_House3/scripts.pory"
	lock
# 5 "data/maps/PacifidlogTown_House3/scripts.pory"
	faceplayer
# 6 "data/maps/PacifidlogTown_House3/scripts.pory"
	message PacifidlogTown_House3_BerryShop_Text_0
# 7 "data/maps/PacifidlogTown_House3/scripts.pory"
	waitmessage
# 8 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_set FLAG_AQUA_LEFT_HIDEOUT, PacifidlogTown_House3_BerryShop_2
# 14 "data/maps/PacifidlogTown_House3/scripts.pory"
	pokemart PacifidlogTown_House3_Mart_BerryShop1
PacifidlogTown_House3_BerryShop_1:
# 16 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_BerryShop_Text_1
# 17 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
	end

PacifidlogTown_House3_BerryShop_2:
# 10 "data/maps/PacifidlogTown_House3/scripts.pory"
	pokemart PacifidlogTown_House3_Mart_BerryShop2
	goto PacifidlogTown_House3_BerryShop_1


	.align 2
# 21 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Mart_BerryShop1:
# 23 "data/maps/PacifidlogTown_House3/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 24 "data/maps/PacifidlogTown_House3/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 25 "data/maps/PacifidlogTown_House3/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 26 "data/maps/PacifidlogTown_House3/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 27 "data/maps/PacifidlogTown_House3/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 28 "data/maps/PacifidlogTown_House3/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 29 "data/maps/PacifidlogTown_House3/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 30 "data/maps/PacifidlogTown_House3/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 33 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Mart_BerryShop2:
# 35 "data/maps/PacifidlogTown_House3/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 36 "data/maps/PacifidlogTown_House3/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 37 "data/maps/PacifidlogTown_House3/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 38 "data/maps/PacifidlogTown_House3/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 39 "data/maps/PacifidlogTown_House3/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 40 "data/maps/PacifidlogTown_House3/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 41 "data/maps/PacifidlogTown_House3/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 42 "data/maps/PacifidlogTown_House3/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 43 "data/maps/PacifidlogTown_House3/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 44 "data/maps/PacifidlogTown_House3/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_NONE

PacifidlogTown_House3_BerryShop_Text_0:
# 6 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I have something fruity to offer.\n"
	.string "Wanna buy something?$"

PacifidlogTown_House3_BerryShop_Text_1:
# 16 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Come back any time.$"
