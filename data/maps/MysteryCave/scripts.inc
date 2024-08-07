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
# 56 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_AZURE_FLUTE
# 58 "data/maps/MysteryCave/scripts.pory"
	setvar VAR_START_ADVENTURE_STATE, 1
# 59 "data/maps/MysteryCave/scripts.pory"
	setvar VAR_LEVEL_CAP, 25
# 61 "data/maps/MysteryCave/scripts.pory"
	waitmessage
# 62 "data/maps/MysteryCave/scripts.pory"
	waitbuttonpress
# 63 "data/maps/MysteryCave/scripts.pory"
	message MysteryCave_Text_ArceusServant_Goodbye
# 64 "data/maps/MysteryCave/scripts.pory"
	waitmessage
# 65 "data/maps/MysteryCave/scripts.pory"
	closemessage
	return


ReceivePokedex::
# 70 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 71 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedPokedexText, MSGBOX_DEFAULT
# 72 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 73 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 74 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 75 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 76 "data/maps/MysteryCave/scripts.pory"
	special SetUnlockedPokedexFlags
# 77 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 78 "data/maps/MysteryCave/scripts.pory"
	special EnableNationalPokedex
	return


ReceiveBike::
# 83 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 84 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 85 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveRunningShoes::
# 90 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 91 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedRunningShoesText, MSGBOX_DEFAULT
# 92 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 93 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


ReceivePokenav::
# 98 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 99 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedPokenavText, MSGBOX_DEFAULT
# 100 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 101 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
	return


ReceiveExpShare::
# 106 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_EXP_SHARE
# 107 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 108 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 109 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveInfiniteRepel::
# 114 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 115 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_INFINITE_REPEL
# 116 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


GiveFirstMon::
# 121 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 0
	goto_if_eq GiveFirstMon_2
# 125 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 1
	goto_if_eq GiveFirstMon_3
# 129 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 2
	goto_if_eq GiveFirstMon_4
GiveFirstMon_1:
# 134 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 135 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedMonText, MSGBOX_DEFAULT
# 136 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 137 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveFirstMon_2:
# 123 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonKanto
	goto GiveFirstMon_1

GiveFirstMon_3:
# 127 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonJohto
	goto GiveFirstMon_1

GiveFirstMon_4:
# 131 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonHoenn
	goto GiveFirstMon_1


GiveSecondMon::
# 142 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 0
	goto_if_eq GiveSecondMon_2
# 146 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 1
	goto_if_eq GiveSecondMon_3
# 150 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 2
	goto_if_eq GiveSecondMon_4
GiveSecondMon_1:
# 155 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 156 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedMonText, MSGBOX_DEFAULT
# 157 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 158 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveSecondMon_2:
# 144 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonKanto
	goto GiveSecondMon_1

GiveSecondMon_3:
# 148 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonJohto
	goto GiveSecondMon_1

GiveSecondMon_4:
# 152 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonHoenn
	goto GiveSecondMon_1


GiveFirstMonKanto::
# 163 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveFirstMonKanto_2
# 168 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonKanto_3
# 173 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonKanto_4
GiveFirstMonKanto_1:
	return

GiveFirstMonKanto_2:
# 165 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_POLIWAG
# 166 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_POLIWAG, 15
	goto GiveFirstMonKanto_1

GiveFirstMonKanto_3:
# 170 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_VULPIX
# 171 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_VULPIX, 15
	goto GiveFirstMonKanto_1

GiveFirstMonKanto_4:
# 175 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ODDISH
# 176 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_ODDISH, 15
	goto GiveFirstMonKanto_1


GiveFirstMonJohto::
# 183 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveFirstMonJohto_2
# 188 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonJohto_3
# 193 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonJohto_4
GiveFirstMonJohto_1:
	return

GiveFirstMonJohto_2:
# 185 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_REMORAID
# 186 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_REMORAID, 15
	goto GiveFirstMonJohto_1

GiveFirstMonJohto_3:
# 190 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SLUGMA
# 191 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SLUGMA, 15
	goto GiveFirstMonJohto_1

GiveFirstMonJohto_4:
# 195 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SUNKERN
# 196 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SUNKERN, 15
	goto GiveFirstMonJohto_1


GiveFirstMonHoenn::
# 203 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveFirstMonHoenn_2
# 208 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonHoenn_3
# 213 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonHoenn_4
GiveFirstMonHoenn_1:
# 219 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveFirstMonHoenn_2:
# 205 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SPHEAL
# 206 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SPHEAL, 15
	goto GiveFirstMonHoenn_1

GiveFirstMonHoenn_3:
# 210 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NUMEL
# 211 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_NUMEL, 15
	goto GiveFirstMonHoenn_1

GiveFirstMonHoenn_4:
# 215 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SEEDOT
# 216 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SEEDOT, 15
	goto GiveFirstMonHoenn_1


GiveSecondMonKanto::
# 224 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveSecondMonKanto_2
# 229 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonKanto_3
# 234 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonKanto_4
GiveSecondMonKanto_1:
	return

GiveSecondMonKanto_2:
# 226 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GROWLITHE
# 227 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_GROWLITHE, 15
	goto GiveSecondMonKanto_1

GiveSecondMonKanto_3:
# 231 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SANDSHREW_ALOLAN
# 232 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SANDSHREW_ALOLAN, 15
	goto GiveSecondMonKanto_1

GiveSecondMonKanto_4:
# 236 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_JYNX
# 237 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_JYNX, 15
	goto GiveSecondMonKanto_1


GiveSecondMonJohto::
# 244 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveSecondMonJohto_2
# 249 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonJohto_3
# 254 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonJohto_4
GiveSecondMonJohto_1:
	return

GiveSecondMonJohto_2:
# 246 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LARVITAR
# 247 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_LARVITAR, 15
	goto GiveSecondMonJohto_1

GiveSecondMonJohto_3:
# 251 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_QWILFISH_HISUIAN
# 252 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_QWILFISH_HISUIAN, 15
	goto GiveSecondMonJohto_1

GiveSecondMonJohto_4:
# 256 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SUDOWOODO
# 257 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SUDOWOODO, 15
	goto GiveSecondMonJohto_1


GiveSecondMonHoenn::
# 264 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveSecondMonHoenn_2
# 269 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonHoenn_3
# 274 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonHoenn_4
GiveSecondMonHoenn_1:
	return

GiveSecondMonHoenn_2:
# 266 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BAGON
# 267 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_BAGON, 15
	goto GiveSecondMonHoenn_1

GiveSecondMonHoenn_3:
# 271 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ZIGZAGOON_GALARIAN
# 272 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_ZIGZAGOON_GALARIAN, 15
	goto GiveSecondMonHoenn_1

GiveSecondMonHoenn_4:
# 276 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SEVIPER
# 277 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SEVIPER, 15
	goto GiveSecondMonHoenn_1


GiveMonNick::
# 284 "data/maps/MysteryCave/scripts.pory"
	msgbox GiveMonNickText, MSGBOX_YESNO
# 285 "data/maps/MysteryCave/scripts.pory"
	hidemonpic
# 286 "data/maps/MysteryCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GiveMonNick_2
GiveMonNick_1:
	return

GiveMonNick_2:
# 288 "data/maps/MysteryCave/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 289 "data/maps/MysteryCave/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto GiveMonNick_1


# 322 "data/maps/MysteryCave/scripts.pory"
MysteryCave_Movement_SpenserWalkOff:
# 323 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 323 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 323 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 323 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 323 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 323 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 323 "data/maps/MysteryCave/scripts.pory"
	walk_right
	step_end

ArceusServantTextStart::
# 294 "data/maps/MysteryCave/scripts.pory"
	.string "???: Ah you must be {PLAYER}.\n"
	.string "My master had foretold your arrival.\l"
	.string "Let's see...\p"
	.string "He told me to prepare some things for\n"
	.string "you.$"

ReceivedPokedexText::
# 298 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the national\n"
	.string "POKéDEX!$"

ReceivedRunningShoesText::
# 302 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the RUNNING SHOES!$"

ReceivedPokenavText::
# 306 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the POKéNAV!$"

ReceivedMonText::
# 310 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received {STR_VAR_1}!$"

GiveMonNickText::
# 314 "data/maps/MysteryCave/scripts.pory"
	.string "Give {STR_VAR_1} a nickname?$"

MysteryCave_Text_ArceusServant_Goodbye::
# 318 "data/maps/MysteryCave/scripts.pory"
	.string "Now then. Fare thee well until our next\n"
	.string "meeting.\p"
	.string "I will be waiting for you at the top of\n"
	.string "the Sacred Mountain.\p"
	.string "$"
