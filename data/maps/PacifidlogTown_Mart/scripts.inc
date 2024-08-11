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
	goto_if_set FLAG_AQUA_LEFT_HIDEOUT, PacifidlogTown_Mart_Clerk_2
# 12 "data/maps/PacifidlogTown_Mart/scripts.pory"
	goto_if_set FLAG_MAGMA_LEFT_HIDEOUT, PacifidlogTown_Mart_Clerk_3
# 18 "data/maps/PacifidlogTown_Mart/scripts.pory"
	pokemart PacifidlogTown_Mart1
PacifidlogTown_Mart_Clerk_1:
# 20 "data/maps/PacifidlogTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 21 "data/maps/PacifidlogTown_Mart/scripts.pory"
	release
	end

PacifidlogTown_Mart_Clerk_2:
# 10 "data/maps/PacifidlogTown_Mart/scripts.pory"
	pokemart PacifidlogTown_Mart3
	goto PacifidlogTown_Mart_Clerk_1

PacifidlogTown_Mart_Clerk_3:
# 14 "data/maps/PacifidlogTown_Mart/scripts.pory"
	pokemart PacifidlogTown_Mart2
	goto PacifidlogTown_Mart_Clerk_1


	.align 2
# 25 "data/maps/PacifidlogTown_Mart/scripts.pory"
PacifidlogTown_Mart1:
# 26 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 27 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 28 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 29 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 30 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 31 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 32 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 33 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 34 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE

	.align 2
# 37 "data/maps/PacifidlogTown_Mart/scripts.pory"
PacifidlogTown_Mart2:
# 38 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 39 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 40 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 41 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 42 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 43 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 44 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE

	.align 2
# 47 "data/maps/PacifidlogTown_Mart/scripts.pory"
PacifidlogTown_Mart3:
# 48 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 49 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_LURE_BALL
# 50 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 51 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 52 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 53 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 54 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 55 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 56 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 57 "data/maps/PacifidlogTown_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE
