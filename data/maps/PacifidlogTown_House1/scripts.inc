PacifidlogTown_House1_MapScripts::
	.byte 0


PacifidlogTown_House1_EventScript_Mom::
# 4 "data/maps/PacifidlogTown_House1/scripts.pory"
	lock
# 5 "data/maps/PacifidlogTown_House1/scripts.pory"
	faceplayer
# 7 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_EventScript_Mom_Text_0, MSGBOX_NPC
# 9 "data/maps/PacifidlogTown_House1/scripts.pory"
	release
	end


PacifidlogTown_House1_EventScript_Boy::
# 14 "data/maps/PacifidlogTown_House1/scripts.pory"
	lock
# 15 "data/maps/PacifidlogTown_House1/scripts.pory"
	faceplayer
# 17 "data/maps/PacifidlogTown_House1/scripts.pory"
	compare VAR_MAGIKARPS_TRADED, 0
	goto_if_gt PacifidlogTown_House1_EventScript_Boy_2
PacifidlogTown_House1_EventScript_Boy_1:
# 24 "data/maps/PacifidlogTown_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_EEVEE
# 25 "data/maps/PacifidlogTown_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 26 "data/maps/PacifidlogTown_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 28 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_EventScript_Boy_Text_1, MSGBOX_YESNO
# 30 "data/maps/PacifidlogTown_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_House1_EventScript_Boy_5
PacifidlogTown_House1_EventScript_Boy_4:
# 52 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_EventScript_Boy_Text_2
# 54 "data/maps/PacifidlogTown_House1/scripts.pory"
	release
	end

PacifidlogTown_House1_EventScript_Boy_2:
# 19 "data/maps/PacifidlogTown_House1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_MAGIKARPS_TRADED
# 20 "data/maps/PacifidlogTown_House1/scripts.pory"
	message PacifidlogTown_House1_EventScript_Boy_Text_0
# 21 "data/maps/PacifidlogTown_House1/scripts.pory"
	waitmessage
	goto PacifidlogTown_House1_EventScript_Boy_1

PacifidlogTown_House1_EventScript_Boy_5:
# 32 "data/maps/PacifidlogTown_House1/scripts.pory"
	special ChoosePartyMon
# 33 "data/maps/PacifidlogTown_House1/scripts.pory"
	waitstate
# 35 "data/maps/PacifidlogTown_House1/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne PacifidlogTown_House1_EventScript_Boy_7
	goto PacifidlogTown_House1_EventScript_Boy_4

PacifidlogTown_House1_EventScript_Boy_7:
# 37 "data/maps/PacifidlogTown_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 38 "data/maps/PacifidlogTown_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 40 "data/maps/PacifidlogTown_House1/scripts.pory"
	call_if_ne VAR_RESULT, VAR_0x8009, PacifidlogTown_House1_EventScript_Boy_NotRequestedMon
# 42 "data/maps/PacifidlogTown_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 43 "data/maps/PacifidlogTown_House1/scripts.pory"
	special CreateInGameTradePokemon
# 44 "data/maps/PacifidlogTown_House1/scripts.pory"
	special DoInGameTradeScene
# 45 "data/maps/PacifidlogTown_House1/scripts.pory"
	waitstate
# 47 "data/maps/PacifidlogTown_House1/scripts.pory"
	addvar VAR_MAGIKARPS_TRADED, 1
# 48 "data/maps/PacifidlogTown_House1/scripts.pory"
	call PacifidlogTown_House1_EventScript_Boy_ThankYou
	goto PacifidlogTown_House1_EventScript_Boy_4


PacifidlogTown_House1_EventScript_Boy_ThankYou::
# 59 "data/maps/PacifidlogTown_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_EEVEE
# 60 "data/maps/PacifidlogTown_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 61 "data/maps/PacifidlogTown_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 62 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_EventScript_Boy_ThankYou_Text_0
# 64 "data/maps/PacifidlogTown_House1/scripts.pory"
	calculateMagikarpReward
# 65 "data/maps/PacifidlogTown_House1/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq PacifidlogTown_House1_EventScript_Boy_ThankYou_2
PacifidlogTown_House1_EventScript_Boy_ThankYou_1:
# 74 "data/maps/PacifidlogTown_House1/scripts.pory"
	release
	end

PacifidlogTown_House1_EventScript_Boy_ThankYou_2:
# 67 "data/maps/PacifidlogTown_House1/scripts.pory"
	message PacifidlogTown_House1_EventScript_Boy_ThankYou_Text_1
# 68 "data/maps/PacifidlogTown_House1/scripts.pory"
	waitmessage
# 69 "data/maps/PacifidlogTown_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 70 "data/maps/PacifidlogTown_House1/scripts.pory"
	giveitem ITEM_PEARL_STRING
# 71 "data/maps/PacifidlogTown_House1/scripts.pory"
	waitfanfare
	goto PacifidlogTown_House1_EventScript_Boy_ThankYou_1


PacifidlogTown_House1_EventScript_Boy_NotRequestedMon::
# 79 "data/maps/PacifidlogTown_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_EEVEE
# 80 "data/maps/PacifidlogTown_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 81 "data/maps/PacifidlogTown_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 82 "data/maps/PacifidlogTown_House1/scripts.pory"
	msgbox PacifidlogTown_House1_EventScript_Boy_NotRequestedMon_Text_0
# 83 "data/maps/PacifidlogTown_House1/scripts.pory"
	release
	end


PacifidlogTown_House1_EventScript_Mom_Text_0:
# 7 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "My son always had an unsual interest in\n"
	.string "MAGIKARPs. He would surely trade you\l"
	.string "one of his EEVEEs for one.$"

PacifidlogTown_House1_EventScript_Boy_Text_0:
# 20 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Thank you for always trading with me.\n"
	.string "My collection has grown to\l"
	.string "{STR_VAR_1} thanks to you.\p"
	.string "$"

PacifidlogTown_House1_EventScript_Boy_Text_1:
# 28 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Do you want to trade a {STR_VAR_1}\n"
	.string "for my {STR_VAR_2}?$"

PacifidlogTown_House1_EventScript_Boy_Text_2:
# 52 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Come back once you are willing to trade.$"

PacifidlogTown_House1_EventScript_Boy_ThankYou_Text_0:
# 62 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Thank you for trading me a\n"
	.string "{STR_VAR_1}.$"

PacifidlogTown_House1_EventScript_Boy_ThankYou_Text_1:
# 67 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "Oh you have traded a good haul of\n"
	.string "{STR_VAR_1}. Here take this.\p"
	.string "$"

PacifidlogTown_House1_EventScript_Boy_NotRequestedMon_Text_0:
# 82 "data/maps/PacifidlogTown_House1/scripts.pory"
	.string "You know... That is not a\n"
	.string "{STR_VAR_1}.\p"
	.string "Come back once you are willing to trade\n"
	.string "for real.$"
