SacredCity_House3_MapScripts::
	.byte 0


SacredCity_House3_EventScript_TM_Shop::
# 4 "data/maps/SacredCity_House3/scripts.pory"
	lock
# 5 "data/maps/SacredCity_House3/scripts.pory"
	faceplayer
# 6 "data/maps/SacredCity_House3/scripts.pory"
	message SacredCity_House3_EventScript_TM_Shop_Text_0
# 7 "data/maps/SacredCity_House3/scripts.pory"
	waitmessage
# 8 "data/maps/SacredCity_House3/scripts.pory"
	pokemart SacredCity_House3_Mart_TM_Shop
# 9 "data/maps/SacredCity_House3/scripts.pory"
	msgbox SacredCity_House3_EventScript_TM_Shop_Text_1
# 10 "data/maps/SacredCity_House3/scripts.pory"
	release
	end


	.align 2
# 14 "data/maps/SacredCity_House3/scripts.pory"
SacredCity_House3_Mart_TM_Shop:
# 15 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM01
# 16 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM02
# 17 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM03
# 18 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM04
# 19 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM05
# 20 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM06
# 21 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM07
# 22 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM08
# 23 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM09
# 24 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM10
# 25 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM11
# 26 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM12
# 27 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM13
# 28 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM14
# 29 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM15
# 30 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM16
# 31 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM17
# 32 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM18
# 33 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM19
# 34 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM20
# 35 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM21
# 36 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM22
# 37 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM23
# 38 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM24
# 39 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM25
# 40 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM26
# 41 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM27
# 42 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM28
# 43 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM29
# 44 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM30
# 45 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM31
# 46 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM32
# 47 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM33
# 48 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM34
# 49 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM35
# 50 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM36
# 51 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM37
# 52 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM38
# 53 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM39
# 54 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM40
# 55 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM41
# 56 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM42
# 57 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM43
# 58 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM44
# 59 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM45
# 60 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM46
# 61 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM47
# 62 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM48
# 63 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM49
# 64 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM50
# 65 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM51
# 66 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM52
# 67 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM53
# 68 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM54
# 69 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM55
# 70 "data/maps/SacredCity_House3/scripts.pory"
	.2byte ITEM_TM56
	.2byte ITEM_NONE

SacredCity_House3_EventScript_TM_Shop_Text_0:
# 6 "data/maps/SacredCity_House3/scripts.pory"
	.string "I have a great collection of CDs from\n"
	.string "the olden days. Wanna buy?$"

SacredCity_House3_EventScript_TM_Shop_Text_1:
# 9 "data/maps/SacredCity_House3/scripts.pory"
	.string "Have a nice day.$"
