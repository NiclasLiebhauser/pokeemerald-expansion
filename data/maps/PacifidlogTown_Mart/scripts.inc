PacifidlogTown_Mart_MapScripts::
	.byte 0


PacifidlogTown_Mart_Clerk::
# 4 "data/maps/PacifidlogTown_Mart/scripts.pory"
	lock
# 5 "data/maps/PacifidlogTown_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/PacifidlogTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/PacifidlogTown_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/PacifidlogTown_Mart/scripts.pory"
	pokemart PacifidlogTown_Mart
# 9 "data/maps/PacifidlogTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 10 "data/maps/PacifidlogTown_Mart/scripts.pory"
	release
	end


	.align 2
# 14 "data/maps/PacifidlogTown_Mart/scripts.pory"
PacifidlogTown_Mart:
# 15 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 16 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 17 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 18 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_NONE
