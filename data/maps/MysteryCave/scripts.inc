MysteryCave_MapScripts::
	.byte 0


MysteryCave_EventScript_ManiacTriggered1::
# 7 "data/maps/MysteryCave/scripts.pory"
	lockall
# 8 "data/maps/MysteryCave/scripts.pory"
	playse SE_PIN
# 9 "data/maps/MysteryCave/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 10 "data/maps/MysteryCave/scripts.pory"
	waitmovement 0
# 11 "data/maps/MysteryCave/scripts.pory"
	applymovement 7, Common_Movement_Delay48
# 12 "data/maps/MysteryCave/scripts.pory"
	waitmovement 0
# 13 "data/maps/MysteryCave/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 14 "data/maps/MysteryCave/scripts.pory"
	waitmovement 0
# 15 "data/maps/MysteryCave/scripts.pory"
	call MysteryCave_EventScript_StartAdventure
# 16 "data/maps/MysteryCave/scripts.pory"
	call MysteryCave_EventScript_SpenserWalkOff
# 17 "data/maps/MysteryCave/scripts.pory"
	releaseall
	end


MysteryCave_EventScript_ManiacTriggered2::
# 22 "data/maps/MysteryCave/scripts.pory"
	lockall
# 23 "data/maps/MysteryCave/scripts.pory"
	playse SE_PIN
# 24 "data/maps/MysteryCave/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 25 "data/maps/MysteryCave/scripts.pory"
	waitmovement 0
# 26 "data/maps/MysteryCave/scripts.pory"
	applymovement 7, Common_Movement_Delay48
# 27 "data/maps/MysteryCave/scripts.pory"
	waitmovement 0
# 28 "data/maps/MysteryCave/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 29 "data/maps/MysteryCave/scripts.pory"
	waitmovement 0
# 30 "data/maps/MysteryCave/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 31 "data/maps/MysteryCave/scripts.pory"
	waitmovement 0
# 32 "data/maps/MysteryCave/scripts.pory"
	call MysteryCave_EventScript_StartAdventure
# 33 "data/maps/MysteryCave/scripts.pory"
	call MysteryCave_EventScript_SpenserWalkOff
# 34 "data/maps/MysteryCave/scripts.pory"
	releaseall
	end


MysteryCave_EventScript_SpenserWalkOff::
# 39 "data/maps/MysteryCave/scripts.pory"
	applymovement 7, MysteryCave_Movement_SpenserWalkOff
# 40 "data/maps/MysteryCave/scripts.pory"
	waitmovement 0
# 41 "data/maps/MysteryCave/scripts.pory"
	removeobject 7
	return


MysteryCave_EventScript_StartAdventure::
# 46 "data/maps/MysteryCave/scripts.pory"
	msgbox ArceusServantTextStart, MSGBOX_DEFAULT
# 47 "data/maps/MysteryCave/scripts.pory"
	call ReceivePokedex
# 48 "data/maps/MysteryCave/scripts.pory"
	call ReceivePokenav
# 49 "data/maps/MysteryCave/scripts.pory"
	call ReceiveRunningShoes
# 50 "data/maps/MysteryCave/scripts.pory"
	call ReceiveBike
# 51 "data/maps/MysteryCave/scripts.pory"
	call ReceiveExpShare
# 52 "data/maps/MysteryCave/scripts.pory"
	call ReceiveInfiniteRepel
# 53 "data/maps/MysteryCave/scripts.pory"
	call ReceiveEscapeRope
# 54 "data/maps/MysteryCave/scripts.pory"
	call ReceiveAncientPlate
# 55 "data/maps/MysteryCave/scripts.pory"
	call ReceiveFlyMachine
# 56 "data/maps/MysteryCave/scripts.pory"
	call ReceiveItemFinder
# 57 "data/maps/MysteryCave/scripts.pory"
	call ReceiveBalls
# 58 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMon
# 59 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMon
# 60 "data/maps/MysteryCave/scripts.pory"
	call GiveThirdMon
# 61 "data/maps/MysteryCave/scripts.pory"
	setvar VAR_START_ADVENTURE_STATE, 1
# 62 "data/maps/MysteryCave/scripts.pory"
	setvar VAR_LEVEL_CAP, 30
# 63 "data/maps/MysteryCave/scripts.pory"
	waitmessage
# 65 "data/maps/MysteryCave/scripts.pory"
	message MysteryCave_EventScript_StartAdventure_Text_0
# 67 "data/maps/MysteryCave/scripts.pory"
	waitmessage
# 68 "data/maps/MysteryCave/scripts.pory"
	message MysteryCave_Text_ArceusServant_Goodbye
# 69 "data/maps/MysteryCave/scripts.pory"
	waitmessage
# 70 "data/maps/MysteryCave/scripts.pory"
	closemessage
	return


ReceivePokedex::
# 75 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 76 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedPokedexText, MSGBOX_DEFAULT
# 77 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 78 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 79 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 80 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 81 "data/maps/MysteryCave/scripts.pory"
	special SetUnlockedPokedexFlags
# 82 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 83 "data/maps/MysteryCave/scripts.pory"
	special EnableNationalPokedex
	return


ReceiveBike::
# 88 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 89 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 90 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveRunningShoes::
# 95 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 96 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedRunningShoesText, MSGBOX_DEFAULT
# 97 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 98 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


ReceivePokenav::
# 103 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 104 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedPokenavText, MSGBOX_DEFAULT
# 105 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 106 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
	return


ReceiveExpShare::
# 111 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_EXP_SHARE
# 112 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 113 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 114 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveInfiniteRepel::
# 119 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 120 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_INFINITE_REPEL
# 121 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveBalls::
# 126 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 127 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 128 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 129 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 130 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_GREAT_BALL, 5
# 131 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveEscapeRope::
# 135 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 136 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 137 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveAncientPlate::
# 142 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 143 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_ANCIENT_PLATE_1
# 144 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveItemFinder::
# 149 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 150 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 151 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveFlyMachine::
# 156 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 157 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_FLY
# 158 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_MACHINE_FLY
# 159 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


GiveFirstMon::
# 164 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 0
	goto_if_eq GiveFirstMon_2
# 168 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 1
	goto_if_eq GiveFirstMon_3
# 172 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 2
	goto_if_eq GiveFirstMon_4
GiveFirstMon_1:
# 177 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 178 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedMonText, MSGBOX_DEFAULT
# 179 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 180 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveFirstMon_2:
# 166 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonKanto
	goto GiveFirstMon_1

GiveFirstMon_3:
# 170 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonJohto
	goto GiveFirstMon_1

GiveFirstMon_4:
# 174 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonHoenn
	goto GiveFirstMon_1


GiveSecondMon::
# 185 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 0
	goto_if_eq GiveSecondMon_2
# 189 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 1
	goto_if_eq GiveSecondMon_3
# 193 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 2
	goto_if_eq GiveSecondMon_4
GiveSecondMon_1:
# 198 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 199 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedMonText, MSGBOX_DEFAULT
# 200 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 201 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveSecondMon_2:
# 187 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonKanto
	goto GiveSecondMon_1

GiveSecondMon_3:
# 191 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonJohto
	goto GiveSecondMon_1

GiveSecondMon_4:
# 195 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonHoenn
	goto GiveSecondMon_1


GiveThirdMon::
# 206 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 0
	goto_if_eq GiveThirdMon_2
# 211 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 1
	goto_if_eq GiveThirdMon_3
# 216 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 2
	goto_if_eq GiveThirdMon_4
GiveThirdMon_1:
# 222 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 223 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedMonText, MSGBOX_DEFAULT
# 224 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 225 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveThirdMon_2:
# 208 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BELLSPROUT
# 209 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_BELLSPROUT, 20
	goto GiveThirdMon_1

GiveThirdMon_3:
# 213 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HOPPIP
# 214 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_HOPPIP, 20
	goto GiveThirdMon_1

GiveThirdMon_4:
# 218 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SHROOMISH
# 219 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SHROOMISH, 20
	goto GiveThirdMon_1


GiveFirstMonKanto::
# 230 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveFirstMonKanto_2
# 235 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonKanto_3
# 240 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonKanto_4
GiveFirstMonKanto_1:
	return

GiveFirstMonKanto_2:
# 232 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_POLIWAG
# 233 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_POLIWAG, 20
	goto GiveFirstMonKanto_1

GiveFirstMonKanto_3:
# 237 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_VULPIX
# 238 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_VULPIX, 20
	goto GiveFirstMonKanto_1

GiveFirstMonKanto_4:
# 242 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ODDISH
# 243 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_ODDISH, 20
	goto GiveFirstMonKanto_1


GiveFirstMonJohto::
# 250 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveFirstMonJohto_2
# 255 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonJohto_3
# 260 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonJohto_4
GiveFirstMonJohto_1:
	return

GiveFirstMonJohto_2:
# 252 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_REMORAID
# 253 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_REMORAID, 20
	goto GiveFirstMonJohto_1

GiveFirstMonJohto_3:
# 257 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SLUGMA
# 258 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SLUGMA, 20
	goto GiveFirstMonJohto_1

GiveFirstMonJohto_4:
# 262 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SUNKERN
# 263 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SUNKERN, 20
	goto GiveFirstMonJohto_1


GiveFirstMonHoenn::
# 270 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveFirstMonHoenn_2
# 275 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonHoenn_3
# 280 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonHoenn_4
GiveFirstMonHoenn_1:
# 286 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveFirstMonHoenn_2:
# 272 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SPHEAL
# 273 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SPHEAL, 20
	goto GiveFirstMonHoenn_1

GiveFirstMonHoenn_3:
# 277 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NUMEL
# 278 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_NUMEL, 20
	goto GiveFirstMonHoenn_1

GiveFirstMonHoenn_4:
# 282 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SEEDOT
# 283 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SEEDOT, 20
	goto GiveFirstMonHoenn_1


GiveSecondMonKanto::
# 291 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveSecondMonKanto_2
# 296 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonKanto_3
# 301 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonKanto_4
GiveSecondMonKanto_1:
	return

GiveSecondMonKanto_2:
# 293 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GROWLITHE
# 294 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_GROWLITHE, 20
	goto GiveSecondMonKanto_1

GiveSecondMonKanto_3:
# 298 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SANDSHREW_ALOLAN
# 299 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SANDSHREW_ALOLAN, 20
	goto GiveSecondMonKanto_1

GiveSecondMonKanto_4:
# 303 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_JYNX
# 304 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_JYNX, 20
	goto GiveSecondMonKanto_1


GiveSecondMonJohto::
# 311 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveSecondMonJohto_2
# 316 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonJohto_3
# 321 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonJohto_4
GiveSecondMonJohto_1:
	return

GiveSecondMonJohto_2:
# 313 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LARVITAR
# 314 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_LARVITAR, 20
	goto GiveSecondMonJohto_1

GiveSecondMonJohto_3:
# 318 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_QWILFISH_HISUIAN
# 319 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_QWILFISH_HISUIAN, 20
	goto GiveSecondMonJohto_1

GiveSecondMonJohto_4:
# 323 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SUDOWOODO
# 324 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SUDOWOODO, 20
	goto GiveSecondMonJohto_1


GiveSecondMonHoenn::
# 331 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveSecondMonHoenn_2
# 336 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonHoenn_3
# 341 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonHoenn_4
GiveSecondMonHoenn_1:
	return

GiveSecondMonHoenn_2:
# 333 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BAGON
# 334 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_BAGON, 20
	goto GiveSecondMonHoenn_1

GiveSecondMonHoenn_3:
# 338 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ZIGZAGOON_GALARIAN
# 339 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_ZIGZAGOON_GALARIAN, 20
	goto GiveSecondMonHoenn_1

GiveSecondMonHoenn_4:
# 343 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SEVIPER
# 344 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SEVIPER, 20
	goto GiveSecondMonHoenn_1


GiveMonNick::
# 351 "data/maps/MysteryCave/scripts.pory"
	msgbox GiveMonNickText, MSGBOX_YESNO
# 352 "data/maps/MysteryCave/scripts.pory"
	hidemonpic
# 353 "data/maps/MysteryCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GiveMonNick_2
GiveMonNick_1:
	return

GiveMonNick_2:
# 355 "data/maps/MysteryCave/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 356 "data/maps/MysteryCave/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto GiveMonNick_1


# 389 "data/maps/MysteryCave/scripts.pory"
MysteryCave_Movement_SpenserWalkOff:
# 390 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 390 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 390 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 390 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 390 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 390 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 390 "data/maps/MysteryCave/scripts.pory"
	walk_right
	step_end

MysteryCave_EventScript_StartAdventure_Text_0:
# 65 "data/maps/MysteryCave/scripts.pory"
	.string "Your ANCIENT PLATE shines with power!\p"
	.string "$"

ArceusServantTextStart::
# 361 "data/maps/MysteryCave/scripts.pory"
	.string "???: Ah you must be {PLAYER}.\n"
	.string "My master had foretold your arrival.\l"
	.string "Let's see...\p"
	.string "He told me to prepare some things for\n"
	.string "you.$"

ReceivedPokedexText::
# 365 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the national\n"
	.string "POKéDEX!$"

ReceivedRunningShoesText::
# 369 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the RUNNING SHOES!$"

ReceivedPokenavText::
# 373 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the POKéNAV!$"

ReceivedMonText::
# 377 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received {STR_VAR_1}!$"

GiveMonNickText::
# 381 "data/maps/MysteryCave/scripts.pory"
	.string "Give {STR_VAR_1} a nickname?$"

MysteryCave_Text_ArceusServant_Goodbye::
# 385 "data/maps/MysteryCave/scripts.pory"
	.string "Now then. Fare thee well until our next\n"
	.string "meeting.\p"
	.string "I will be waiting for you at the top of\n"
	.string "the Sacred Mountain.\p"
	.string "$"
