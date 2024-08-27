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
	call ReceiveBalls
# 56 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMon
# 57 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMon
# 58 "data/maps/MysteryCave/scripts.pory"
	call GiveThirdMon
# 59 "data/maps/MysteryCave/scripts.pory"
	setvar VAR_START_ADVENTURE_STATE, 1
# 60 "data/maps/MysteryCave/scripts.pory"
	setvar VAR_LEVEL_CAP, 30
# 61 "data/maps/MysteryCave/scripts.pory"
	waitmessage
# 63 "data/maps/MysteryCave/scripts.pory"
	message MysteryCave_EventScript_StartAdventure_Text_0
# 65 "data/maps/MysteryCave/scripts.pory"
	waitmessage
# 66 "data/maps/MysteryCave/scripts.pory"
	message MysteryCave_Text_ArceusServant_Goodbye
# 67 "data/maps/MysteryCave/scripts.pory"
	waitmessage
# 68 "data/maps/MysteryCave/scripts.pory"
	closemessage
	return


ReceivePokedex::
# 73 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 74 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedPokedexText, MSGBOX_DEFAULT
# 75 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 76 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 77 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 78 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 79 "data/maps/MysteryCave/scripts.pory"
	special SetUnlockedPokedexFlags
# 80 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 81 "data/maps/MysteryCave/scripts.pory"
	special EnableNationalPokedex
	return


ReceiveBike::
# 86 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 87 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 88 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveRunningShoes::
# 93 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 94 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedRunningShoesText, MSGBOX_DEFAULT
# 95 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 96 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


ReceivePokenav::
# 101 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 102 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedPokenavText, MSGBOX_DEFAULT
# 103 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 104 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
	return


ReceiveExpShare::
# 109 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_EXP_SHARE
# 110 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 111 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 112 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveInfiniteRepel::
# 117 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 118 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_INFINITE_REPEL
# 119 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveBalls::
# 124 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 125 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 126 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 127 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 128 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_GREAT_BALL, 5
# 129 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveEscapeRope::
# 133 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 134 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 135 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveAncientPlate::
# 140 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 141 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_ANCIENT_PLATE_1
# 142 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


GiveFirstMon::
# 147 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 0
	goto_if_eq GiveFirstMon_2
# 151 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 1
	goto_if_eq GiveFirstMon_3
# 155 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 2
	goto_if_eq GiveFirstMon_4
GiveFirstMon_1:
# 160 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 161 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedMonText, MSGBOX_DEFAULT
# 162 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 163 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveFirstMon_2:
# 149 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonKanto
	goto GiveFirstMon_1

GiveFirstMon_3:
# 153 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonJohto
	goto GiveFirstMon_1

GiveFirstMon_4:
# 157 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonHoenn
	goto GiveFirstMon_1


GiveSecondMon::
# 168 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 0
	goto_if_eq GiveSecondMon_2
# 172 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 1
	goto_if_eq GiveSecondMon_3
# 176 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 2
	goto_if_eq GiveSecondMon_4
GiveSecondMon_1:
# 181 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 182 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedMonText, MSGBOX_DEFAULT
# 183 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 184 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveSecondMon_2:
# 170 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonKanto
	goto GiveSecondMon_1

GiveSecondMon_3:
# 174 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonJohto
	goto GiveSecondMon_1

GiveSecondMon_4:
# 178 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonHoenn
	goto GiveSecondMon_1


GiveThirdMon::
# 189 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 0
	goto_if_eq GiveThirdMon_2
# 194 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 1
	goto_if_eq GiveThirdMon_3
# 199 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 2
	goto_if_eq GiveThirdMon_4
GiveThirdMon_1:
# 205 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 206 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedMonText, MSGBOX_DEFAULT
# 207 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 208 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveThirdMon_2:
# 191 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BELLSPROUT
# 192 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_BELLSPROUT, 20
	goto GiveThirdMon_1

GiveThirdMon_3:
# 196 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HOPPIP
# 197 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_HOPPIP, 20
	goto GiveThirdMon_1

GiveThirdMon_4:
# 201 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SHROOMISH
# 202 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SHROOMISH, 20
	goto GiveThirdMon_1


GiveFirstMonKanto::
# 213 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveFirstMonKanto_2
# 218 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonKanto_3
# 223 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonKanto_4
GiveFirstMonKanto_1:
	return

GiveFirstMonKanto_2:
# 215 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_POLIWAG
# 216 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_POLIWAG, 20
	goto GiveFirstMonKanto_1

GiveFirstMonKanto_3:
# 220 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_VULPIX
# 221 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_VULPIX, 20
	goto GiveFirstMonKanto_1

GiveFirstMonKanto_4:
# 225 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ODDISH
# 226 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_ODDISH, 20
	goto GiveFirstMonKanto_1


GiveFirstMonJohto::
# 233 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveFirstMonJohto_2
# 238 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonJohto_3
# 243 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonJohto_4
GiveFirstMonJohto_1:
	return

GiveFirstMonJohto_2:
# 235 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_REMORAID
# 236 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_REMORAID, 20
	goto GiveFirstMonJohto_1

GiveFirstMonJohto_3:
# 240 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SLUGMA
# 241 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SLUGMA, 20
	goto GiveFirstMonJohto_1

GiveFirstMonJohto_4:
# 245 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SUNKERN
# 246 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SUNKERN, 20
	goto GiveFirstMonJohto_1


GiveFirstMonHoenn::
# 253 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveFirstMonHoenn_2
# 258 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonHoenn_3
# 263 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonHoenn_4
GiveFirstMonHoenn_1:
# 269 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveFirstMonHoenn_2:
# 255 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SPHEAL
# 256 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SPHEAL, 20
	goto GiveFirstMonHoenn_1

GiveFirstMonHoenn_3:
# 260 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NUMEL
# 261 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_NUMEL, 20
	goto GiveFirstMonHoenn_1

GiveFirstMonHoenn_4:
# 265 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SEEDOT
# 266 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SEEDOT, 20
	goto GiveFirstMonHoenn_1


GiveSecondMonKanto::
# 274 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveSecondMonKanto_2
# 279 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonKanto_3
# 284 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonKanto_4
GiveSecondMonKanto_1:
	return

GiveSecondMonKanto_2:
# 276 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GROWLITHE
# 277 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_GROWLITHE, 20
	goto GiveSecondMonKanto_1

GiveSecondMonKanto_3:
# 281 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SANDSHREW_ALOLAN
# 282 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SANDSHREW_ALOLAN, 20
	goto GiveSecondMonKanto_1

GiveSecondMonKanto_4:
# 286 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_JYNX
# 287 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_JYNX, 20
	goto GiveSecondMonKanto_1


GiveSecondMonJohto::
# 294 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveSecondMonJohto_2
# 299 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonJohto_3
# 304 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonJohto_4
GiveSecondMonJohto_1:
	return

GiveSecondMonJohto_2:
# 296 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LARVITAR
# 297 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_LARVITAR, 20
	goto GiveSecondMonJohto_1

GiveSecondMonJohto_3:
# 301 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_QWILFISH_HISUIAN
# 302 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_QWILFISH_HISUIAN, 20
	goto GiveSecondMonJohto_1

GiveSecondMonJohto_4:
# 306 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SUDOWOODO
# 307 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SUDOWOODO, 20
	goto GiveSecondMonJohto_1


GiveSecondMonHoenn::
# 314 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveSecondMonHoenn_2
# 319 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonHoenn_3
# 324 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonHoenn_4
GiveSecondMonHoenn_1:
	return

GiveSecondMonHoenn_2:
# 316 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BAGON
# 317 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_BAGON, 20
	goto GiveSecondMonHoenn_1

GiveSecondMonHoenn_3:
# 321 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ZIGZAGOON_GALARIAN
# 322 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_ZIGZAGOON_GALARIAN, 20
	goto GiveSecondMonHoenn_1

GiveSecondMonHoenn_4:
# 326 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SEVIPER
# 327 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SEVIPER, 20
	goto GiveSecondMonHoenn_1


GiveMonNick::
# 334 "data/maps/MysteryCave/scripts.pory"
	msgbox GiveMonNickText, MSGBOX_YESNO
# 335 "data/maps/MysteryCave/scripts.pory"
	hidemonpic
# 336 "data/maps/MysteryCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GiveMonNick_2
GiveMonNick_1:
	return

GiveMonNick_2:
# 338 "data/maps/MysteryCave/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 339 "data/maps/MysteryCave/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto GiveMonNick_1


# 372 "data/maps/MysteryCave/scripts.pory"
MysteryCave_Movement_SpenserWalkOff:
# 373 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 373 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 373 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 373 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 373 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 373 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 373 "data/maps/MysteryCave/scripts.pory"
	walk_right
	step_end

MysteryCave_EventScript_StartAdventure_Text_0:
# 63 "data/maps/MysteryCave/scripts.pory"
	.string "Your ANCIENT PLATE shines with power!\p"
	.string "$"

ArceusServantTextStart::
# 344 "data/maps/MysteryCave/scripts.pory"
	.string "???: Ah you must be {PLAYER}.\n"
	.string "My master had foretold your arrival.\l"
	.string "Let's see...\p"
	.string "He told me to prepare some things for\n"
	.string "you.$"

ReceivedPokedexText::
# 348 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the national\n"
	.string "POKéDEX!$"

ReceivedRunningShoesText::
# 352 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the RUNNING SHOES!$"

ReceivedPokenavText::
# 356 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the POKéNAV!$"

ReceivedMonText::
# 360 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received {STR_VAR_1}!$"

GiveMonNickText::
# 364 "data/maps/MysteryCave/scripts.pory"
	.string "Give {STR_VAR_1} a nickname?$"

MysteryCave_Text_ArceusServant_Goodbye::
# 368 "data/maps/MysteryCave/scripts.pory"
	.string "Now then. Fare thee well until our next\n"
	.string "meeting.\p"
	.string "I will be waiting for you at the top of\n"
	.string "the Sacred Mountain.\p"
	.string "$"
