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
	call ReceiveBalls
# 54 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMon
# 55 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMon
# 56 "data/maps/MysteryCave/scripts.pory"
	setvar VAR_START_ADVENTURE_STATE, 1
# 57 "data/maps/MysteryCave/scripts.pory"
	setvar VAR_LEVEL_CAP, 30
# 59 "data/maps/MysteryCave/scripts.pory"
	waitmessage
# 60 "data/maps/MysteryCave/scripts.pory"
	waitbuttonpress
# 61 "data/maps/MysteryCave/scripts.pory"
	message MysteryCave_Text_ArceusServant_Goodbye
# 62 "data/maps/MysteryCave/scripts.pory"
	waitmessage
# 63 "data/maps/MysteryCave/scripts.pory"
	closemessage
	return


ReceivePokedex::
# 68 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 69 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedPokedexText, MSGBOX_DEFAULT
# 70 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 71 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 72 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 73 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 74 "data/maps/MysteryCave/scripts.pory"
	special SetUnlockedPokedexFlags
# 75 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 76 "data/maps/MysteryCave/scripts.pory"
	special EnableNationalPokedex
	return


ReceiveBike::
# 81 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 82 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 83 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveRunningShoes::
# 88 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 89 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedRunningShoesText, MSGBOX_DEFAULT
# 90 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 91 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


ReceivePokenav::
# 96 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 97 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedPokenavText, MSGBOX_DEFAULT
# 98 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 99 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
	return


ReceiveExpShare::
# 104 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_EXP_SHARE
# 105 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 106 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 107 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveInfiniteRepel::
# 112 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 113 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_INFINITE_REPEL
# 114 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveBalls::
# 119 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 120 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 121 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 122 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 123 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_GREAT_BALL, 5
# 124 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


GiveFirstMon::
# 128 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 0
	goto_if_eq GiveFirstMon_2
# 132 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 1
	goto_if_eq GiveFirstMon_3
# 136 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 2
	goto_if_eq GiveFirstMon_4
GiveFirstMon_1:
# 141 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 142 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedMonText, MSGBOX_DEFAULT
# 143 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 144 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveFirstMon_2:
# 130 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonKanto
	goto GiveFirstMon_1

GiveFirstMon_3:
# 134 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonJohto
	goto GiveFirstMon_1

GiveFirstMon_4:
# 138 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonHoenn
	goto GiveFirstMon_1


GiveSecondMon::
# 149 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 0
	goto_if_eq GiveSecondMon_2
# 153 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 1
	goto_if_eq GiveSecondMon_3
# 157 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 2
	goto_if_eq GiveSecondMon_4
GiveSecondMon_1:
# 162 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 163 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedMonText, MSGBOX_DEFAULT
# 164 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 165 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveSecondMon_2:
# 151 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonKanto
	goto GiveSecondMon_1

GiveSecondMon_3:
# 155 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonJohto
	goto GiveSecondMon_1

GiveSecondMon_4:
# 159 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonHoenn
	goto GiveSecondMon_1


GiveFirstMonKanto::
# 170 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveFirstMonKanto_2
# 175 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonKanto_3
# 180 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonKanto_4
GiveFirstMonKanto_1:
	return

GiveFirstMonKanto_2:
# 172 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_POLIWAG
# 173 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_POLIWAG, 20
	goto GiveFirstMonKanto_1

GiveFirstMonKanto_3:
# 177 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_VULPIX
# 178 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_VULPIX, 20
	goto GiveFirstMonKanto_1

GiveFirstMonKanto_4:
# 182 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ODDISH
# 183 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_ODDISH, 20
	goto GiveFirstMonKanto_1


GiveFirstMonJohto::
# 190 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveFirstMonJohto_2
# 195 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonJohto_3
# 200 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonJohto_4
GiveFirstMonJohto_1:
	return

GiveFirstMonJohto_2:
# 192 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_REMORAID
# 193 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_REMORAID, 20
	goto GiveFirstMonJohto_1

GiveFirstMonJohto_3:
# 197 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SLUGMA
# 198 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SLUGMA, 20
	goto GiveFirstMonJohto_1

GiveFirstMonJohto_4:
# 202 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SUNKERN
# 203 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SUNKERN, 20
	goto GiveFirstMonJohto_1


GiveFirstMonHoenn::
# 210 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveFirstMonHoenn_2
# 215 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonHoenn_3
# 220 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonHoenn_4
GiveFirstMonHoenn_1:
# 226 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveFirstMonHoenn_2:
# 212 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SPHEAL
# 213 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SPHEAL, 20
	goto GiveFirstMonHoenn_1

GiveFirstMonHoenn_3:
# 217 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NUMEL
# 218 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_NUMEL, 20
	goto GiveFirstMonHoenn_1

GiveFirstMonHoenn_4:
# 222 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SEEDOT
# 223 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SEEDOT, 20
	goto GiveFirstMonHoenn_1


GiveSecondMonKanto::
# 231 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveSecondMonKanto_2
# 236 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonKanto_3
# 241 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonKanto_4
GiveSecondMonKanto_1:
	return

GiveSecondMonKanto_2:
# 233 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GROWLITHE
# 234 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_GROWLITHE, 20
	goto GiveSecondMonKanto_1

GiveSecondMonKanto_3:
# 238 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SANDSHREW_ALOLAN
# 239 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SANDSHREW_ALOLAN, 20
	goto GiveSecondMonKanto_1

GiveSecondMonKanto_4:
# 243 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_JYNX
# 244 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_JYNX, 20
	goto GiveSecondMonKanto_1


GiveSecondMonJohto::
# 251 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveSecondMonJohto_2
# 256 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonJohto_3
# 261 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonJohto_4
GiveSecondMonJohto_1:
	return

GiveSecondMonJohto_2:
# 253 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LARVITAR
# 254 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_LARVITAR, 20
	goto GiveSecondMonJohto_1

GiveSecondMonJohto_3:
# 258 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_QWILFISH_HISUIAN
# 259 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_QWILFISH_HISUIAN, 20
	goto GiveSecondMonJohto_1

GiveSecondMonJohto_4:
# 263 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SUDOWOODO
# 264 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SUDOWOODO, 20
	goto GiveSecondMonJohto_1


GiveSecondMonHoenn::
# 271 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveSecondMonHoenn_2
# 276 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonHoenn_3
# 281 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonHoenn_4
GiveSecondMonHoenn_1:
	return

GiveSecondMonHoenn_2:
# 273 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BAGON
# 274 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_BAGON, 20
	goto GiveSecondMonHoenn_1

GiveSecondMonHoenn_3:
# 278 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ZIGZAGOON_GALARIAN
# 279 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_ZIGZAGOON_GALARIAN, 20
	goto GiveSecondMonHoenn_1

GiveSecondMonHoenn_4:
# 283 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SEVIPER
# 284 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SEVIPER, 20
	goto GiveSecondMonHoenn_1


GiveMonNick::
# 291 "data/maps/MysteryCave/scripts.pory"
	msgbox GiveMonNickText, MSGBOX_YESNO
# 292 "data/maps/MysteryCave/scripts.pory"
	hidemonpic
# 293 "data/maps/MysteryCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GiveMonNick_2
GiveMonNick_1:
	return

GiveMonNick_2:
# 295 "data/maps/MysteryCave/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 296 "data/maps/MysteryCave/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto GiveMonNick_1


# 329 "data/maps/MysteryCave/scripts.pory"
MysteryCave_Movement_SpenserWalkOff:
# 330 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 330 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 330 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 330 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 330 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 330 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 330 "data/maps/MysteryCave/scripts.pory"
	walk_right
	step_end

ArceusServantTextStart::
# 301 "data/maps/MysteryCave/scripts.pory"
	.string "???: Ah you must be {PLAYER}.\n"
	.string "My master had foretold your arrival.\l"
	.string "Let's see...\p"
	.string "He told me to prepare some things for\n"
	.string "you.$"

ReceivedPokedexText::
# 305 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the national\n"
	.string "POKéDEX!$"

ReceivedRunningShoesText::
# 309 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the RUNNING SHOES!$"

ReceivedPokenavText::
# 313 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the POKéNAV!$"

ReceivedMonText::
# 317 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received {STR_VAR_1}!$"

GiveMonNickText::
# 321 "data/maps/MysteryCave/scripts.pory"
	.string "Give {STR_VAR_1} a nickname?$"

MysteryCave_Text_ArceusServant_Goodbye::
# 325 "data/maps/MysteryCave/scripts.pory"
	.string "Now then. Fare thee well until our next\n"
	.string "meeting.\p"
	.string "I will be waiting for you at the top of\n"
	.string "the Sacred Mountain.\p"
	.string "$"
