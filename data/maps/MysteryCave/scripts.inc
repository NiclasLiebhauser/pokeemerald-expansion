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
	call GiveFirstMon
# 53 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMon
# 54 "data/maps/MysteryCave/scripts.pory"
	setvar VAR_START_ADVENTURE_STATE, 1
# 55 "data/maps/MysteryCave/scripts.pory"
	setvar VAR_LEVEL_CAP, 25
# 57 "data/maps/MysteryCave/scripts.pory"
	waitmessage
# 58 "data/maps/MysteryCave/scripts.pory"
	waitbuttonpress
# 59 "data/maps/MysteryCave/scripts.pory"
	message MysteryCave_Text_ArceusServant_Goodbye
# 60 "data/maps/MysteryCave/scripts.pory"
	waitmessage
# 61 "data/maps/MysteryCave/scripts.pory"
	closemessage
	return


ReceivePokedex::
# 66 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 67 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedPokedexText, MSGBOX_DEFAULT
# 68 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 69 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 70 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 71 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 72 "data/maps/MysteryCave/scripts.pory"
	special SetUnlockedPokedexFlags
# 73 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 74 "data/maps/MysteryCave/scripts.pory"
	special EnableNationalPokedex
	return


ReceiveBike::
# 79 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 80 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 81 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveRunningShoes::
# 86 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 87 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedRunningShoesText, MSGBOX_DEFAULT
# 88 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 89 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


ReceivePokenav::
# 94 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 95 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedPokenavText, MSGBOX_DEFAULT
# 96 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 97 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
	return


ReceiveExpShare::
# 102 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_EXP_SHARE
# 103 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 104 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 105 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


GiveFirstMon::
# 110 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 0
	goto_if_eq GiveFirstMon_2
# 114 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 1
	goto_if_eq GiveFirstMon_3
# 118 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 2
	goto_if_eq GiveFirstMon_4
GiveFirstMon_1:
# 123 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 124 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedMonText, MSGBOX_DEFAULT
# 125 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 126 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveFirstMon_2:
# 112 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonKanto
	goto GiveFirstMon_1

GiveFirstMon_3:
# 116 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonJohto
	goto GiveFirstMon_1

GiveFirstMon_4:
# 120 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonHoenn
	goto GiveFirstMon_1


GiveSecondMon::
# 131 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 0
	goto_if_eq GiveSecondMon_2
# 135 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 1
	goto_if_eq GiveSecondMon_3
# 139 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 2
	goto_if_eq GiveSecondMon_4
GiveSecondMon_1:
# 144 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 145 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedMonText, MSGBOX_DEFAULT
# 146 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 147 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveSecondMon_2:
# 133 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonKanto
	goto GiveSecondMon_1

GiveSecondMon_3:
# 137 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonJohto
	goto GiveSecondMon_1

GiveSecondMon_4:
# 141 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonHoenn
	goto GiveSecondMon_1


GiveFirstMonKanto::
# 152 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveFirstMonKanto_2
# 157 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonKanto_3
# 162 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonKanto_4
GiveFirstMonKanto_1:
	return

GiveFirstMonKanto_2:
# 154 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_POLIWAG
# 155 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_POLIWAG, 15
	goto GiveFirstMonKanto_1

GiveFirstMonKanto_3:
# 159 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_VULPIX
# 160 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_VULPIX, 15
	goto GiveFirstMonKanto_1

GiveFirstMonKanto_4:
# 164 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ODDISH
# 165 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_ODDISH, 15
	goto GiveFirstMonKanto_1


GiveFirstMonJohto::
# 172 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveFirstMonJohto_2
# 177 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonJohto_3
# 182 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonJohto_4
GiveFirstMonJohto_1:
	return

GiveFirstMonJohto_2:
# 174 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_REMORAID
# 175 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_REMORAID, 15
	goto GiveFirstMonJohto_1

GiveFirstMonJohto_3:
# 179 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SLUGMA
# 180 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SLUGMA, 15
	goto GiveFirstMonJohto_1

GiveFirstMonJohto_4:
# 184 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SUNKERN
# 185 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SUNKERN, 15
	goto GiveFirstMonJohto_1


GiveFirstMonHoenn::
# 192 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveFirstMonHoenn_2
# 197 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonHoenn_3
# 202 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonHoenn_4
GiveFirstMonHoenn_1:
# 208 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveFirstMonHoenn_2:
# 194 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SPHEAL
# 195 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SPHEAL, 15
	goto GiveFirstMonHoenn_1

GiveFirstMonHoenn_3:
# 199 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NUMEL
# 200 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_NUMEL, 15
	goto GiveFirstMonHoenn_1

GiveFirstMonHoenn_4:
# 204 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SEEDOT
# 205 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SEEDOT, 15
	goto GiveFirstMonHoenn_1


GiveSecondMonKanto::
# 213 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveSecondMonKanto_2
# 218 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonKanto_3
# 223 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonKanto_4
GiveSecondMonKanto_1:
	return

GiveSecondMonKanto_2:
# 215 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GROWLITHE
# 216 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_GROWLITHE, 15
	goto GiveSecondMonKanto_1

GiveSecondMonKanto_3:
# 220 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SANDSHREW_ALOLAN
# 221 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SANDSHREW_ALOLAN, 15
	goto GiveSecondMonKanto_1

GiveSecondMonKanto_4:
# 225 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_JYNX
# 226 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_JYNX, 15
	goto GiveSecondMonKanto_1


GiveSecondMonJohto::
# 233 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveSecondMonJohto_2
# 238 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonJohto_3
# 243 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonJohto_4
GiveSecondMonJohto_1:
	return

GiveSecondMonJohto_2:
# 235 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LARVITAR
# 236 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_LARVITAR, 15
	goto GiveSecondMonJohto_1

GiveSecondMonJohto_3:
# 240 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_QWILFISH_HISUIAN
# 241 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_QWILFISH_HISUIAN, 15
	goto GiveSecondMonJohto_1

GiveSecondMonJohto_4:
# 245 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SUDOWOODO
# 246 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SUDOWOODO, 15
	goto GiveSecondMonJohto_1


GiveSecondMonHoenn::
# 253 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 0
	goto_if_eq GiveSecondMonHoenn_2
# 258 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonHoenn_3
# 263 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonHoenn_4
GiveSecondMonHoenn_1:
	return

GiveSecondMonHoenn_2:
# 255 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BAGON
# 256 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_BAGON, 15
	goto GiveSecondMonHoenn_1

GiveSecondMonHoenn_3:
# 260 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ZIGZAGOON_GALARIAN
# 261 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_ZIGZAGOON_GALARIAN, 15
	goto GiveSecondMonHoenn_1

GiveSecondMonHoenn_4:
# 265 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SEVIPER
# 266 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SEVIPER, 15
	goto GiveSecondMonHoenn_1


GiveMonNick::
# 273 "data/maps/MysteryCave/scripts.pory"
	msgbox GiveMonNickText, MSGBOX_YESNO
# 274 "data/maps/MysteryCave/scripts.pory"
	hidemonpic
# 275 "data/maps/MysteryCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GiveMonNick_2
GiveMonNick_1:
	return

GiveMonNick_2:
# 277 "data/maps/MysteryCave/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 278 "data/maps/MysteryCave/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto GiveMonNick_1


# 311 "data/maps/MysteryCave/scripts.pory"
MysteryCave_Movement_SpenserWalkOff:
# 312 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 312 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 312 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 312 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 312 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 312 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 312 "data/maps/MysteryCave/scripts.pory"
	walk_right
	step_end

ArceusServantTextStart::
# 283 "data/maps/MysteryCave/scripts.pory"
	.string "???: Ah you must be {PLAYER}.\n"
	.string "My master had foretold your arrival.\l"
	.string "Let's see...\p"
	.string "He told me to prepare some things for\n"
	.string "you.$"

ReceivedPokedexText::
# 287 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the national\n"
	.string "POKéDEX!$"

ReceivedRunningShoesText::
# 291 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the RUNNING SHOES!$"

ReceivedPokenavText::
# 295 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the POKéNAV!$"

ReceivedMonText::
# 299 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received {STR_VAR_1}!$"

GiveMonNickText::
# 303 "data/maps/MysteryCave/scripts.pory"
	.string "Give {STR_VAR_1} a nickname?$"

MysteryCave_Text_ArceusServant_Goodbye::
# 307 "data/maps/MysteryCave/scripts.pory"
	.string "Now then. Fare thee well until our next\n"
	.string "meeting.\p"
	.string "I will be waiting for you at the top of\n"
	.string "the Sacred Mountain.\p"
	.string "$"
