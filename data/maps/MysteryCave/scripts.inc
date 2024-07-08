MysteryCave_MapScripts::
	.byte 0


ManiacTriggeredEventScript1::
# 7 "data/maps/MysteryCave/scripts.pory"
	lockall
# 8 "data/maps/MysteryCave/scripts.pory"
	playse SE_PIN
# 9 "data/maps/MysteryCave/scripts.pory"
	applymovement 7, ManiacExclamationMovement
# 10 "data/maps/MysteryCave/scripts.pory"
	waitmovement 7
# 11 "data/maps/MysteryCave/scripts.pory"
	delay 24
# 12 "data/maps/MysteryCave/scripts.pory"
	applymovement 7, ManiacWalkOn1Movement
# 13 "data/maps/MysteryCave/scripts.pory"
	waitmovement 0
# 14 "data/maps/MysteryCave/scripts.pory"
	call StartAdventureEventScript
# 15 "data/maps/MysteryCave/scripts.pory"
	call ManiacWalkOff
# 16 "data/maps/MysteryCave/scripts.pory"
	releaseall
	end


ManiacTriggeredEventScript2::
# 21 "data/maps/MysteryCave/scripts.pory"
	lockall
# 22 "data/maps/MysteryCave/scripts.pory"
	playse SE_PIN
# 23 "data/maps/MysteryCave/scripts.pory"
	applymovement 7, ManiacExclamationMovement
# 24 "data/maps/MysteryCave/scripts.pory"
	waitmovement 7
# 25 "data/maps/MysteryCave/scripts.pory"
	delay 24
# 26 "data/maps/MysteryCave/scripts.pory"
	applymovement 7, ManiacWalkOn2Movement
# 27 "data/maps/MysteryCave/scripts.pory"
	waitmovement 0
# 28 "data/maps/MysteryCave/scripts.pory"
	call StartAdventureEventScript
# 29 "data/maps/MysteryCave/scripts.pory"
	call ManiacWalkOff
# 30 "data/maps/MysteryCave/scripts.pory"
	releaseall
	end


ManiacWalkOff::
# 35 "data/maps/MysteryCave/scripts.pory"
	applymovement 7, ManiacWalkOffMovement
# 36 "data/maps/MysteryCave/scripts.pory"
	waitmovement 0
# 37 "data/maps/MysteryCave/scripts.pory"
	removeobject 7
	return


StartAdventureEventScript::
# 42 "data/maps/MysteryCave/scripts.pory"
	msgbox ArceusServantTextStart, MSGBOX_DEFAULT
# 43 "data/maps/MysteryCave/scripts.pory"
	call ReceivePokedex
# 44 "data/maps/MysteryCave/scripts.pory"
	call ReceivePokenav
# 45 "data/maps/MysteryCave/scripts.pory"
	call ReceiveRunningShoes
# 46 "data/maps/MysteryCave/scripts.pory"
	call ReceiveBike
# 47 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMon
# 48 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMon
# 49 "data/maps/MysteryCave/scripts.pory"
	setvar VAR_START_ADVENTURE_STATE, 1
# 51 "data/maps/MysteryCave/scripts.pory"
	waitmessage
# 52 "data/maps/MysteryCave/scripts.pory"
	waitbuttonpress
# 53 "data/maps/MysteryCave/scripts.pory"
	closemessage
	return


ReceivePokedex::
# 58 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 59 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedPokedexText, MSGBOX_DEFAULT
# 60 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 61 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 62 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 63 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 64 "data/maps/MysteryCave/scripts.pory"
	special SetUnlockedPokedexFlags
# 65 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 66 "data/maps/MysteryCave/scripts.pory"
	special EnableNationalPokedex
	return


ReceiveBike::
# 71 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 72 "data/maps/MysteryCave/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 73 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
	return


ReceiveRunningShoes::
# 78 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 79 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedRunningShoesText, MSGBOX_DEFAULT
# 80 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 81 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


ReceivePokenav::
# 86 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 87 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedPokenavText, MSGBOX_DEFAULT
# 88 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 89 "data/maps/MysteryCave/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
	return


GiveFirstMon::
# 94 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 1
	goto_if_eq GiveFirstMon_2
# 98 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 2
	goto_if_eq GiveFirstMon_3
# 102 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 3
	goto_if_eq GiveFirstMon_4
GiveFirstMon_1:
# 107 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 108 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedMonText, MSGBOX_DEFAULT
# 109 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 110 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveFirstMon_2:
# 96 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonKanto
	goto GiveFirstMon_1

GiveFirstMon_3:
# 100 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonJohto
	goto GiveFirstMon_1

GiveFirstMon_4:
# 104 "data/maps/MysteryCave/scripts.pory"
	call GiveFirstMonHoenn
	goto GiveFirstMon_1


GiveSecondMon::
# 115 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 1
	goto_if_eq GiveSecondMon_2
# 119 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 2
	goto_if_eq GiveSecondMon_3
# 123 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_1, 3
	goto_if_eq GiveSecondMon_4
GiveSecondMon_1:
# 128 "data/maps/MysteryCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 129 "data/maps/MysteryCave/scripts.pory"
	msgbox ReceivedMonText, MSGBOX_DEFAULT
# 130 "data/maps/MysteryCave/scripts.pory"
	waitfanfare
# 131 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveSecondMon_2:
# 117 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonKanto
	goto GiveSecondMon_1

GiveSecondMon_3:
# 121 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonJohto
	goto GiveSecondMon_1

GiveSecondMon_4:
# 125 "data/maps/MysteryCave/scripts.pory"
	call GiveSecondMonHoenn
	goto GiveSecondMon_1


GiveFirstMonKanto::
# 136 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonKanto_2
# 141 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonKanto_3
# 146 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 3
	goto_if_eq GiveFirstMonKanto_4
GiveFirstMonKanto_1:
	return

GiveFirstMonKanto_2:
# 138 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_POLIWAG
# 139 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_POLIWAG, 15
	goto GiveFirstMonKanto_1

GiveFirstMonKanto_3:
# 143 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_VULPIX
# 144 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_VULPIX, 15
	goto GiveFirstMonKanto_1

GiveFirstMonKanto_4:
# 148 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ODDISH
# 149 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_ODDISH, 15
	goto GiveFirstMonKanto_1


GiveFirstMonJohto::
# 156 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonJohto_2
# 161 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonJohto_3
# 166 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 3
	goto_if_eq GiveFirstMonJohto_4
GiveFirstMonJohto_1:
	return

GiveFirstMonJohto_2:
# 158 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_REMORAID
# 159 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_REMORAID, 15
	goto GiveFirstMonJohto_1

GiveFirstMonJohto_3:
# 163 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SLUGMA
# 164 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SLUGMA, 15
	goto GiveFirstMonJohto_1

GiveFirstMonJohto_4:
# 168 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SUNKERN
# 169 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SUNKERN, 15
	goto GiveFirstMonJohto_1


GiveFirstMonHoenn::
# 176 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveFirstMonHoenn_2
# 181 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveFirstMonHoenn_3
# 186 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 3
	goto_if_eq GiveFirstMonHoenn_4
GiveFirstMonHoenn_1:
# 192 "data/maps/MysteryCave/scripts.pory"
	call GiveMonNick
	return

GiveFirstMonHoenn_2:
# 178 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SPHEAL
# 179 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SPHEAL, 15
	goto GiveFirstMonHoenn_1

GiveFirstMonHoenn_3:
# 183 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NUMEL
# 184 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_NUMEL, 15
	goto GiveFirstMonHoenn_1

GiveFirstMonHoenn_4:
# 188 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SEEDOT
# 189 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SEEDOT, 15
	goto GiveFirstMonHoenn_1


GiveSecondMonKanto::
# 197 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonKanto_2
# 202 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonKanto_3
# 207 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 3
	goto_if_eq GiveSecondMonKanto_4
GiveSecondMonKanto_1:
	return

GiveSecondMonKanto_2:
# 199 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GROWLITHE
# 200 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_GROWLITHE, 15
	goto GiveSecondMonKanto_1

GiveSecondMonKanto_3:
# 204 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SANDSHREW_ALOLAN
# 205 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SANDSHREW_ALOLAN, 15
	goto GiveSecondMonKanto_1

GiveSecondMonKanto_4:
# 209 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_JYNX
# 210 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_JYNX, 15
	goto GiveSecondMonKanto_1


GiveSecondMonJohto::
# 217 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonJohto_2
# 222 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonJohto_3
# 227 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 3
	goto_if_eq GiveSecondMonJohto_4
GiveSecondMonJohto_1:
	return

GiveSecondMonJohto_2:
# 219 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LARVITAR
# 220 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_LARVITAR, 15
	goto GiveSecondMonJohto_1

GiveSecondMonJohto_3:
# 224 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_QWILFISH_HISUIAN
# 225 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_QWILFISH_HISUIAN, 15
	goto GiveSecondMonJohto_1

GiveSecondMonJohto_4:
# 229 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SUDOWOODO
# 230 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SUDOWOODO, 15
	goto GiveSecondMonJohto_1


GiveSecondMonHoenn::
# 237 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 1
	goto_if_eq GiveSecondMonHoenn_2
# 242 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 2
	goto_if_eq GiveSecondMonHoenn_3
# 247 "data/maps/MysteryCave/scripts.pory"
	compare VAR_START_QUESTION_2, 3
	goto_if_eq GiveSecondMonHoenn_4
GiveSecondMonHoenn_1:
	return

GiveSecondMonHoenn_2:
# 239 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BAGON
# 240 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_BAGON, 15
	goto GiveSecondMonHoenn_1

GiveSecondMonHoenn_3:
# 244 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ZIGZAGOON_GALARIAN
# 245 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_ZIGZAGOON_GALARIAN, 15
	goto GiveSecondMonHoenn_1

GiveSecondMonHoenn_4:
# 249 "data/maps/MysteryCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SEVIPER
# 250 "data/maps/MysteryCave/scripts.pory"
	givemon SPECIES_SEVIPER, 15
	goto GiveSecondMonHoenn_1


GiveMonNick::
# 257 "data/maps/MysteryCave/scripts.pory"
	msgbox GiveMonNickText, MSGBOX_YESNO
# 258 "data/maps/MysteryCave/scripts.pory"
	hidemonpic
# 259 "data/maps/MysteryCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GiveMonNick_2
GiveMonNick_1:
	return

GiveMonNick_2:
# 261 "data/maps/MysteryCave/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 262 "data/maps/MysteryCave/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto GiveMonNick_1


# 291 "data/maps/MysteryCave/scripts.pory"
ManiacWalkOffMovement:
# 292 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 292 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 292 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 292 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 292 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 292 "data/maps/MysteryCave/scripts.pory"
	walk_right
# 292 "data/maps/MysteryCave/scripts.pory"
	walk_right
	step_end

# 295 "data/maps/MysteryCave/scripts.pory"
ManiacExclamationMovement:
# 296 "data/maps/MysteryCave/scripts.pory"
	emote_exclamation_mark
	step_end

# 299 "data/maps/MysteryCave/scripts.pory"
ManiacWalkOn1Movement:
# 300 "data/maps/MysteryCave/scripts.pory"
	walk_left
	step_end

# 303 "data/maps/MysteryCave/scripts.pory"
ManiacWalkOn2Movement:
# 304 "data/maps/MysteryCave/scripts.pory"
	walk_left
# 304 "data/maps/MysteryCave/scripts.pory"
	walk_left
	step_end

ArceusServantTextStart::
# 267 "data/maps/MysteryCave/scripts.pory"
	.string "???: Ah you must be {PLAYER}.\n"
	.string "My master had foretold your arrival.\l"
	.string "Let's see...\p"
	.string "He told me to prepare some things for\n"
	.string "you.$"

ReceivedPokedexText::
# 271 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the national\n"
	.string "POKéDEX!$"

ReceivedRunningShoesText::
# 275 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the RUNNING SHOES!$"

ReceivedPokenavText::
# 279 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received the POKéNAV!$"

ReceivedMonText::
# 283 "data/maps/MysteryCave/scripts.pory"
	.string "{PLAYER} received {STR_VAR_1}!$"

GiveMonNickText::
# 287 "data/maps/MysteryCave/scripts.pory"
	.string "Give {STR_VAR_1} a nickname?$"
