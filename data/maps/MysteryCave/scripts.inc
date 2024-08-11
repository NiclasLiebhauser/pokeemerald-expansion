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
	call GiveFirstMon
# 54 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMon
# 55 "data/maps/MysteryCave/scripts.pory"
	setvar VAR_START_ADVENTURE_STATE, 1
# 56 "data/maps/MysteryCave/scripts.pory"
	setvar VAR_LEVEL_CAP, 25
# 58 "data/maps/MysteryCave/scripts.pory"
	waitmessage
# 59 "data/maps/MysteryCave/scripts.pory"
	waitbuttonpress
# 60 "data/maps/MysteryCave/scripts.pory"
	message MysteryCave_Text_ArceusServant_Goodbye
# 61 "data/maps/MysteryCave/scripts.pory"
	waitmessage
# 62 "data/maps/MysteryCave/scripts.pory"
	closemessage
	return


ReceivePokedex::
# 67 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 68 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedPokedexText, MSGBOX_DEFAULT
# 69 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 70 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 71 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 72 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 73 "data/maps/MysteryCave/scripts.pory"
	special SetUnlockedPokedexFlags
# 74 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 75 "data/maps/MysteryCave/scripts.pory"
	special EnableNationalPokedex
	return


ReceiveBike::
# 80 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 81 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 82 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveRunningShoes::
# 87 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 88 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedRunningShoesText, MSGBOX_DEFAULT
# 89 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 90 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


ReceivePokenav::
# 95 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 96 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedPokenavText, MSGBOX_DEFAULT
# 97 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 98 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
	return


ReceiveExpShare::
# 103 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_EXP_SHARE
# 104 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 105 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 106 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveInfiniteRepel::
# 111 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 112 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_INFINITE_REPEL
# 113 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


GiveFirstMon::
# 118 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 0
	goto_if_eq GiveFirstMon_2
# 122 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 1
	goto_if_eq GiveFirstMon_3
# 126 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 2
	goto_if_eq GiveFirstMon_4
GiveFirstMon_1:
# 131 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 132 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedMonText, MSGBOX_DEFAULT
# 133 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 134 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveFirstMon_2:
# 120 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonKanto
	goto GiveFirstMon_1

GiveFirstMon_3:
# 124 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonJohto
	goto GiveFirstMon_1

GiveFirstMon_4:
# 128 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonHoenn
	goto GiveFirstMon_1


GiveSecondMon::
# 139 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 0
	goto_if_eq GiveSecondMon_2
# 143 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 1
	goto_if_eq GiveSecondMon_3
# 147 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 2
	goto_if_eq GiveSecondMon_4
GiveSecondMon_1:
# 152 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 153 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedMonText, MSGBOX_DEFAULT
# 154 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 155 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveSecondMon_2:
# 141 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonKanto
	goto GiveSecondMon_1

GiveSecondMon_3:
# 145 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonJohto
	goto GiveSecondMon_1

GiveSecondMon_4:
# 149 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonHoenn
	goto GiveSecondMon_1


GiveFirstMonKanto::
# 160 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveFirstMonKanto_2
# 165 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonKanto_3
# 170 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonKanto_4
GiveFirstMonKanto_1:
	return

GiveFirstMonKanto_2:
# 162 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_POLIWAG
# 163 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_POLIWAG, 20
	goto GiveFirstMonKanto_1

GiveFirstMonKanto_3:
# 167 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_VULPIX
# 168 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_VULPIX, 20
	goto GiveFirstMonKanto_1

GiveFirstMonKanto_4:
# 172 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ODDISH
# 173 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_ODDISH, 20
	goto GiveFirstMonKanto_1


GiveFirstMonJohto::
# 180 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveFirstMonJohto_2
# 185 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonJohto_3
# 190 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonJohto_4
GiveFirstMonJohto_1:
	return

GiveFirstMonJohto_2:
# 182 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_REMORAID
# 183 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_REMORAID, 20
	goto GiveFirstMonJohto_1

GiveFirstMonJohto_3:
# 187 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SLUGMA
# 188 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SLUGMA, 20
	goto GiveFirstMonJohto_1

GiveFirstMonJohto_4:
# 192 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SUNKERN
# 193 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SUNKERN, 20
	goto GiveFirstMonJohto_1


GiveFirstMonHoenn::
# 200 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveFirstMonHoenn_2
# 205 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonHoenn_3
# 210 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonHoenn_4
GiveFirstMonHoenn_1:
# 216 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveFirstMonHoenn_2:
# 202 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SPHEAL
# 203 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SPHEAL, 20
	goto GiveFirstMonHoenn_1

GiveFirstMonHoenn_3:
# 207 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NUMEL
# 208 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_NUMEL, 20
	goto GiveFirstMonHoenn_1

GiveFirstMonHoenn_4:
# 212 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SEEDOT
# 213 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SEEDOT, 20
	goto GiveFirstMonHoenn_1


GiveSecondMonKanto::
# 221 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveSecondMonKanto_2
# 226 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonKanto_3
# 231 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonKanto_4
GiveSecondMonKanto_1:
	return

GiveSecondMonKanto_2:
# 223 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GROWLITHE
# 224 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_GROWLITHE, 20
	goto GiveSecondMonKanto_1

GiveSecondMonKanto_3:
# 228 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SANDSHREW_ALOLAN
# 229 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SANDSHREW_ALOLAN, 20
	goto GiveSecondMonKanto_1

GiveSecondMonKanto_4:
# 233 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_JYNX
# 234 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_JYNX, 20
	goto GiveSecondMonKanto_1


GiveSecondMonJohto::
# 241 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveSecondMonJohto_2
# 246 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonJohto_3
# 251 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonJohto_4
GiveSecondMonJohto_1:
	return

GiveSecondMonJohto_2:
# 243 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LARVITAR
# 244 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_LARVITAR, 20
	goto GiveSecondMonJohto_1

GiveSecondMonJohto_3:
# 248 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_QWILFISH_HISUIAN
# 249 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_QWILFISH_HISUIAN, 20
	goto GiveSecondMonJohto_1

GiveSecondMonJohto_4:
# 253 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SUDOWOODO
# 254 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SUDOWOODO, 20
	goto GiveSecondMonJohto_1


GiveSecondMonHoenn::
# 261 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveSecondMonHoenn_2
# 266 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonHoenn_3
# 271 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonHoenn_4
GiveSecondMonHoenn_1:
	return

GiveSecondMonHoenn_2:
# 263 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BAGON
# 264 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_BAGON, 20
	goto GiveSecondMonHoenn_1

GiveSecondMonHoenn_3:
# 268 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ZIGZAGOON_GALARIAN
# 269 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_ZIGZAGOON_GALARIAN, 20
	goto GiveSecondMonHoenn_1

GiveSecondMonHoenn_4:
# 273 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SEVIPER
# 274 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SEVIPER, 20
	goto GiveSecondMonHoenn_1


GiveMonNick::
# 281 "data/maps/MysteryCave/scripts.pory"
	msgbox GiveMonNickText, MSGBOX_YESNO
# 282 "data/maps/MysteryCave/scripts.pory"
	hidemonpic
# 283 "data/maps/MysteryCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GiveMonNick_2
GiveMonNick_1:
	return

GiveMonNick_2:
# 285 "data/maps/MysteryCave/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 286 "data/maps/MysteryCave/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto GiveMonNick_1


# 319 "data/maps/MysteryCave/scripts.pory"
MysteryCave_Movement_SpenserWalkOff:
# 320 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 320 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 320 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 320 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 320 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 320 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 320 "data/maps/MysteryCave/scripts.pory"
	walk_right
	step_end

ArceusServantTextStart::
# 291 "data/maps/MysteryCave/scripts.pory"
	.string "???: Ah you must be {PLAYER}.\n"
	.string "My master had foretold your arrival.\l"
	.string "Let's see...\p"
	.string "He told me to prepare some things for\n"
	.string "you.$"

ReceivedPokedexText::
# 295 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the national\n"
	.string "POKéDEX!$"

ReceivedRunningShoesText::
# 299 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the RUNNING SHOES!$"

ReceivedPokenavText::
# 303 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the POKéNAV!$"

ReceivedMonText::
# 307 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received {STR_VAR_1}!$"

GiveMonNickText::
# 311 "data/maps/MysteryCave/scripts.pory"
	.string "Give {STR_VAR_1} a nickname?$"

MysteryCave_Text_ArceusServant_Goodbye::
# 315 "data/maps/MysteryCave/scripts.pory"
	.string "Now then. Fare thee well until our next\n"
	.string "meeting.\p"
	.string "I will be waiting for you at the top of\n"
	.string "the Sacred Mountain.\p"
	.string "$"
