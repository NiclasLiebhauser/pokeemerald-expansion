MagmaIsland_House2_MapScripts::
	.byte 0


MagmaIsland_House2_EventScript_Box::
# 4 "data/maps/MagmaIsland_House2/scripts.pory"
	lock
# 5 "data/maps/MagmaIsland_House2/scripts.pory"
	msgbox MagmaIsland_House2_EventScript_Box_Text_0, MSGBOX_YESNO
# 6 "data/maps/MagmaIsland_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MagmaIsland_House2_EventScript_Box_2
MagmaIsland_House2_EventScript_Box_1:
# 25 "data/maps/MagmaIsland_House2/scripts.pory"
	release
	end

MagmaIsland_House2_EventScript_Box_2:
# 8 "data/maps/MagmaIsland_House2/scripts.pory"
	msgbox MagmaIsland_House2_EventScript_Box_Text_1, MSGBOX_YESNO
# 9 "data/maps/MagmaIsland_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MagmaIsland_House2_EventScript_Box_4
	goto MagmaIsland_House2_EventScript_Box_1

MagmaIsland_House2_EventScript_Box_4:
# 11 "data/maps/MagmaIsland_House2/scripts.pory"
	message MagmaIsland_House2_EventScript_Box_Text_2
# 12 "data/maps/MagmaIsland_House2/scripts.pory"
	showmonpic SPECIES_WOOPER, 10, 3
# 13 "data/maps/MagmaIsland_House2/scripts.pory"
	waitbuttonpress
# 14 "data/maps/MagmaIsland_House2/scripts.pory"
	hidemonpic
# 15 "data/maps/MagmaIsland_House2/scripts.pory"
	getmondexentry SPECIES_WOOPER, GET_SEEN
# 16 "data/maps/MagmaIsland_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MagmaIsland_House2_EventScript_Box_7
MagmaIsland_House2_EventScript_Box_6:
# 22 "data/maps/MagmaIsland_House2/scripts.pory"
	closemessage
	goto MagmaIsland_House2_EventScript_Box_1

MagmaIsland_House2_EventScript_Box_7:
# 18 "data/maps/MagmaIsland_House2/scripts.pory"
	updatemondexentry SPECIES_WOOPER, SET_SEEN
# 19 "data/maps/MagmaIsland_House2/scripts.pory"
	message MagmaIsland_House2_EventScript_Box_Text_3
# 20 "data/maps/MagmaIsland_House2/scripts.pory"
	waitmessage
	goto MagmaIsland_House2_EventScript_Box_6


MagmaIsland_House2_EventScript_Camper::
# 30 "data/maps/MagmaIsland_House2/scripts.pory"
	lock
# 31 "data/maps/MagmaIsland_House2/scripts.pory"
	faceplayer
# 33 "data/maps/MagmaIsland_House2/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SWABLU
# 34 "data/maps/MagmaIsland_House2/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 35 "data/maps/MagmaIsland_House2/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 37 "data/maps/MagmaIsland_House2/scripts.pory"
	goto_if_set FLAG_MAGMAISLAND_IN_GAME_TRADE, MagmaIsland_House2_EventScript_Camper_2
# 43 "data/maps/MagmaIsland_House2/scripts.pory"
	msgbox MagmaIsland_House2_EventScript_Camper_Text_0, MSGBOX_YESNO
# 45 "data/maps/MagmaIsland_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MagmaIsland_House2_EventScript_Camper_6
MagmaIsland_House2_EventScript_Camper_5:
# 67 "data/maps/MagmaIsland_House2/scripts.pory"
	msgbox MagmaIsland_House2_EventScript_Camper_Text_1
MagmaIsland_House2_EventScript_Camper_1:
# 70 "data/maps/MagmaIsland_House2/scripts.pory"
	release
	end

MagmaIsland_House2_EventScript_Camper_2:
# 39 "data/maps/MagmaIsland_House2/scripts.pory"
	call MagmaIsland_House2_EventScript_Camper_ThankYou
	goto MagmaIsland_House2_EventScript_Camper_1

MagmaIsland_House2_EventScript_Camper_6:
# 47 "data/maps/MagmaIsland_House2/scripts.pory"
	special ChoosePartyMon
# 48 "data/maps/MagmaIsland_House2/scripts.pory"
	waitstate
# 50 "data/maps/MagmaIsland_House2/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne MagmaIsland_House2_EventScript_Camper_8
	goto MagmaIsland_House2_EventScript_Camper_5

MagmaIsland_House2_EventScript_Camper_8:
# 52 "data/maps/MagmaIsland_House2/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 53 "data/maps/MagmaIsland_House2/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 55 "data/maps/MagmaIsland_House2/scripts.pory"
	call_if_ne VAR_RESULT, VAR_0x8009, MagmaIsland_House2_EventScript_Camper_NotRequestedMon
# 57 "data/maps/MagmaIsland_House2/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 58 "data/maps/MagmaIsland_House2/scripts.pory"
	special CreateInGameTradePokemon
# 59 "data/maps/MagmaIsland_House2/scripts.pory"
	special DoInGameTradeScene
# 60 "data/maps/MagmaIsland_House2/scripts.pory"
	waitstate
# 62 "data/maps/MagmaIsland_House2/scripts.pory"
	setflag FLAG_MAGMAISLAND_IN_GAME_TRADE
# 63 "data/maps/MagmaIsland_House2/scripts.pory"
	call MagmaIsland_House2_EventScript_Camper_ThankYou
	goto MagmaIsland_House2_EventScript_Camper_5


MagmaIsland_House2_EventScript_Camper_ThankYou::
# 75 "data/maps/MagmaIsland_House2/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SWABLU
# 76 "data/maps/MagmaIsland_House2/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 77 "data/maps/MagmaIsland_House2/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 78 "data/maps/MagmaIsland_House2/scripts.pory"
	msgbox MagmaIsland_House2_EventScript_Camper_ThankYou_Text_0
# 79 "data/maps/MagmaIsland_House2/scripts.pory"
	release
	end


MagmaIsland_House2_EventScript_Camper_NotRequestedMon::
# 84 "data/maps/MagmaIsland_House2/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SWABLU
# 85 "data/maps/MagmaIsland_House2/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 86 "data/maps/MagmaIsland_House2/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 87 "data/maps/MagmaIsland_House2/scripts.pory"
	msgbox MagmaIsland_House2_EventScript_Camper_NotRequestedMon_Text_0
# 88 "data/maps/MagmaIsland_House2/scripts.pory"
	release
	end


MagmaIsland_House2_EventScript_Box_Text_0:
# 5 "data/maps/MagmaIsland_House2/scripts.pory"
	.string "A box. Look inside?$"

MagmaIsland_House2_EventScript_Box_Text_1:
# 8 "data/maps/MagmaIsland_House2/scripts.pory"
	.string "It is full of POKéMON trading cards.\n"
	.string "Inspect the cards?$"

MagmaIsland_House2_EventScript_Box_Text_2:
# 11 "data/maps/MagmaIsland_House2/scripts.pory"
	.string "The box is filled to the brim with\n"
	.string "WOOPER cards...$"

MagmaIsland_House2_EventScript_Box_Text_3:
# 19 "data/maps/MagmaIsland_House2/scripts.pory"
	.string "You jot down some information about\n"
	.string "WOOPER.\p"
	.string "$"

MagmaIsland_House2_EventScript_Camper_Text_0:
# 43 "data/maps/MagmaIsland_House2/scripts.pory"
	.string "Do you want to trade a {STR_VAR_1}\n"
	.string "for my {STR_VAR_2}?$"

MagmaIsland_House2_EventScript_Camper_Text_1:
# 67 "data/maps/MagmaIsland_House2/scripts.pory"
	.string "Come back once you are willing to trade.$"

MagmaIsland_House2_EventScript_Camper_ThankYou_Text_0:
# 78 "data/maps/MagmaIsland_House2/scripts.pory"
	.string "Thank you for trading me a\n"
	.string "{STR_VAR_1}.$"

MagmaIsland_House2_EventScript_Camper_NotRequestedMon_Text_0:
# 87 "data/maps/MagmaIsland_House2/scripts.pory"
	.string "You know... That is not a\n"
	.string "{STR_VAR_1}.\p"
	.string "Come back once you are willing to trade\n"
	.string "for real.$"
