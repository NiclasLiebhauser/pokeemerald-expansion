SacredCity_House1_MapScripts::
	.byte 0


SacredCity_House1_Angler::
# 6 "data/maps/SacredCity_House1/scripts.pory"
	lock
# 7 "data/maps/SacredCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/SacredCity_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUPER_ROD, SacredCity_House1_Angler_2
# 19 "data/maps/SacredCity_House1/scripts.pory"
	message SacredCity_House1_Angler_Text_1
# 20 "data/maps/SacredCity_House1/scripts.pory"
	waitmessage
SacredCity_House1_Angler_1:
# 22 "data/maps/SacredCity_House1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 23 "data/maps/SacredCity_House1/scripts.pory"
	release
	end

SacredCity_House1_Angler_2:
# 10 "data/maps/SacredCity_House1/scripts.pory"
	message SacredCity_House1_Angler_Text_0
# 11 "data/maps/SacredCity_House1/scripts.pory"
	waitmessage
# 12 "data/maps/SacredCity_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 13 "data/maps/SacredCity_House1/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 14 "data/maps/SacredCity_House1/scripts.pory"
	waitfanfare
# 15 "data/maps/SacredCity_House1/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_ROD
	goto SacredCity_House1_Angler_1


SacredCity_House1_Angler_Text_0:
# 10 "data/maps/SacredCity_House1/scripts.pory"
	.string "Oh a visitor. Whata rare event. You can\n"
	.string "have this, now that I'm retired I won't\l"
	.string "be needing it anymore.\p"
	.string "$"

SacredCity_House1_Angler_Text_1:
# 19 "data/maps/SacredCity_House1/scripts.pory"
	.string "Retirement on this secluded island\n"
	.string "really is something, right?\p"
	.string "$"
