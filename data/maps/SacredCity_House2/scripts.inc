SacredCity_House2_MapScripts::
	.byte 0


SacredCity_House2_EventScript_HeldItem_Shop::
# 4 "data/maps/SacredCity_House2/scripts.pory"
	lock
# 5 "data/maps/SacredCity_House2/scripts.pory"
	faceplayer
# 6 "data/maps/SacredCity_House2/scripts.pory"
	message SacredCity_House2_EventScript_HeldItem_Shop_Text_0
# 7 "data/maps/SacredCity_House2/scripts.pory"
	waitmessage
# 8 "data/maps/SacredCity_House2/scripts.pory"
	pokemart SacredCity_House2_Mart_HeldItem_Shop
# 9 "data/maps/SacredCity_House2/scripts.pory"
	msgbox SacredCity_House2_EventScript_HeldItem_Shop_Text_1
# 10 "data/maps/SacredCity_House2/scripts.pory"
	release
	end


	.align 2
# 14 "data/maps/SacredCity_House2/scripts.pory"
SacredCity_House2_Mart_HeldItem_Shop:
# 15 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 16 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 17 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 18 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 19 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 20 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 21 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 22 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 23 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 24 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 25 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 26 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 27 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 28 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 29 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 30 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 31 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 32 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 33 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 34 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 35 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 36 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 37 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 38 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 39 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_RED_CARD
# 40 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 41 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 42 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_METRONOME
# 43 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_IRON_BALL
# 44 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_POWER_HERB
# 45 "data/maps/SacredCity_House2/scripts.pory"
	.2byte ITEM_QUICK_POWDER
	.2byte ITEM_NONE

SacredCity_House2_EventScript_HeldItem_Shop_Text_0:
# 6 "data/maps/SacredCity_House2/scripts.pory"
	.string "I have some knicks and knacks. POKéMON\n"
	.string "usually like to wear these.$"

SacredCity_House2_EventScript_HeldItem_Shop_Text_1:
# 9 "data/maps/SacredCity_House2/scripts.pory"
	.string "Have a nice day.$"
