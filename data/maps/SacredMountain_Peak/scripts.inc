SacredMountain_Peak_MapScripts::
# 11 "data/maps/SacredMountain_Peak/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SacredMountain_EventScript_OnTransition
# 12 "data/maps/SacredMountain_Peak/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SacredMountain_EventScript_OnResume
	.byte 0


SacredMountain_EventScript_OnResume::
# 18 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SacredMountain_EventScript_TryRemoveGiratinaOrigin
	return


SacredMountain_EventScript_OnTransition::
# 24 "data/maps/SacredMountain_Peak/scripts.pory"
	compare VAR_SACRED_MOUNTAIN_PEAK_STATE, 0
	goto_if_eq SacredMountain_EventScript_OnTransition_2
# 41 "data/maps/SacredMountain_Peak/scripts.pory"
	compare VAR_SACRED_MOUNTAIN_PEAK_STATE, 1
	goto_if_eq SacredMountain_EventScript_OnTransition_3
# 52 "data/maps/SacredMountain_Peak/scripts.pory"
	compare VAR_SACRED_MOUNTAIN_PEAK_STATE, 2
	goto_if_eq SacredMountain_EventScript_OnTransition_4
SacredMountain_EventScript_OnTransition_1:
	end

SacredMountain_EventScript_OnTransition_2:
# 26 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_PALKIA
# 27 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_DIALGA
# 28 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_GIOVANNI_CUSCENE
# 29 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_GIRATINA
# 30 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_GIRATINA_ORIGIN
# 31 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_GIOVANNI_TRAINER
# 32 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_ARCEUS
# 33 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 1
# 34 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 2
# 35 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 4
# 36 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 6
# 37 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 3
# 38 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 7
# 39 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 8
	goto SacredMountain_EventScript_OnTransition_1

SacredMountain_EventScript_OnTransition_3:
# 43 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_SPENSER
# 44 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_GIOVANNI_TRAINER
# 45 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_PALKIA
# 46 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_DIALGA
# 47 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 5
# 48 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 7
# 49 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 1
# 50 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 2
	goto SacredMountain_EventScript_OnTransition_1

SacredMountain_EventScript_OnTransition_4:
# 54 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_ARCEUS
# 55 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 8
	goto SacredMountain_EventScript_OnTransition_1


SacredMountain_EventScript_TryRemoveGiratinaOrigin::
# 61 "data/maps/SacredMountain_Peak/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 62 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_WON, SacredMountain_EventScript_RemoveGiratinaOrigin
	return


SacredMountain_EventScript_RemoveGiratinaOrigin::
# 67 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 6
	return


SacredMountain_EventScript_Cutscene_Trigger_Left::
# 72 "data/maps/SacredMountain_Peak/scripts.pory"
	lock
# 73 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 74 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 75 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 76 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 77 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 78 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 79 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_Cutscene_Main
# 80 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_Cutscene_Trigger_Middle::
# 85 "data/maps/SacredMountain_Peak/scripts.pory"
	lock
# 86 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 87 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 88 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_Cutscene_Main
# 89 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_Cutscene_Trigger_Right::
# 94 "data/maps/SacredMountain_Peak/scripts.pory"
	lock
# 95 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 96 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 97 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 98 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 99 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 100 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 101 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_Cutscene_Main
# 102 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_Cutscene_Main::
# 107 "data/maps/SacredMountain_Peak/scripts.pory"
	special SpawnCameraObject
# 108 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanUp
# 109 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 110 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Spenser1, MSGBOX_AUTOCLOSE
# 111 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmessage
# 113 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 114 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 115 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 117 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Spenser2, MSGBOX_NPC
# 119 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_EventScript_Cutscene_Main_Text_0, MSGBOX_NPC
# 121 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_PIN
# 122 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 123 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 124 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 5, Common_Movement_Delay48
# 125 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 127 "data/maps/SacredMountain_Peak/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 128 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 3
# 129 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 3, SacredMountain_Movement_Giovanni_WalkOn
# 130 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 131 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_WALL_HIT
# 132 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 5, SacredMountain_Movement_Spenser_PushedBack
# 133 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 135 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni1, MSGBOX_NPC
# 136 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanUp
# 137 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 138 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanUp
# 139 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 141 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_M_DETECT
# 142 "data/maps/SacredMountain_Peak/scripts.pory"
	dofieldeffectsparkle 18, 21, 0
# 143 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 144 "data/maps/SacredMountain_Peak/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 146 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_TO_WHITE
# 147 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 90
# 148 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_DIALGA, CRY_MODE_ENCOUNTER
# 149 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 150 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_PALKIA, CRY_MODE_ENCOUNTER
# 151 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 152 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_PALKIA
# 153 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_DIALGA
# 154 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 1
# 155 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 2
# 156 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 158 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni2, MSGBOX_NPC
# 159 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 3, SacredMountain_Movement_Giovanni_Push
# 160 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 161 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_WALL_HIT
# 162 "data/maps/SacredMountain_Peak/scripts.pory"
	setmetatile 18, 17, METATILE_Cave_SacredMountain_Peak_MountainOverhang, FALSE
# 163 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 5, SacredMountain_Movement_Spenser_PushedOff
# 164 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 10
# 165 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_FALL
# 166 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 167 "data/maps/SacredMountain_Peak/scripts.pory"
	setmetatile 18, 17, METATILE_Cave_SacredMountain_Peak_MountainOverhang, TRUE
# 168 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 5
# 170 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 171 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 172 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 174 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanDown
# 175 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 176 "data/maps/SacredMountain_Peak/scripts.pory"
	special RemoveCameraObject
# 178 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_GIOVANNI_TRAINER
# 179 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 3
# 180 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 7
# 181 "data/maps/SacredMountain_Peak/scripts.pory"
	fadedefaultbgm
# 183 "data/maps/SacredMountain_Peak/scripts.pory"
	setvar VAR_SACRED_MOUNTAIN_PEAK_STATE, 1
# 184 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_Giovanni::
# 189 "data/maps/SacredMountain_Peak/scripts.pory"
	lock
# 190 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 7, Common_Movement_FacePlayer
# 191 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni_PreBattle, MSGBOX_NPC
# 192 "data/maps/SacredMountain_Peak/scripts.pory"
	trainerbattle_no_intro TRAINER_GIOVANNI_SACRED_MOUNTAIN, SacredMountain_Text_Giovanni_Deafeat
# 193 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni_PostBattle, MSGBOX_NPC
# 195 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_M_DETECT
# 196 "data/maps/SacredMountain_Peak/scripts.pory"
	dofieldeffectsparkle 18, 20, 0
# 197 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 199 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 200 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 90
# 201 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni_CallForGiratina, MSGBOX_NPC
# 202 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_GIRATINA, CRY_MODE_ENCOUNTER
# 203 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 204 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_GIRATINA
# 205 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 4
# 206 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 208 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_DoGiratinaBattle
# 210 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_DoGiratinaBattle::
# 215 "data/maps/SacredMountain_Peak/scripts.pory"
	setvar VAR_TEMP_0, 0
# 216 "data/maps/SacredMountain_Peak/scripts.pory"
	setwildbattle SPECIES_GIRATINA, 70
# 217 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_NO_CATCHING
# 218 "data/maps/SacredMountain_Peak/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 219 "data/maps/SacredMountain_Peak/scripts.pory"
	waitstate
# 220 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 221 "data/maps/SacredMountain_Peak/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 222 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_WON, SacredMountain_EventScript_GiratinaBattleWon
# 223 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SacredMountain_EventScript_ThereIsNoEscape
# 224 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_RAN, SacredMountain_EventScript_ThereIsNoEscape
# 226 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_GiratinaBattleWon::
# 231 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 232 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_GIRATINA, CRY_MODE_FAINT
# 233 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 235 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni_PostBattleGiratina, MSGBOX_NPC
# 236 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 237 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 239 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_M_DETECT
# 240 "data/maps/SacredMountain_Peak/scripts.pory"
	dofieldeffectsparkle 18, 20, 0
# 241 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 243 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_M_DETECT
# 244 "data/maps/SacredMountain_Peak/scripts.pory"
	dofieldeffectsparkle 18, 19, 0
# 245 "data/maps/SacredMountain_Peak/scripts.pory"
	dofieldeffectsparkle 18, 18, 0
# 246 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 248 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_GIRATINA, CRY_MODE_ENCOUNTER
# 249 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 251 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 252 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 90
# 253 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni_Giratina_Kills_Giovanni, MSGBOX_NPC
# 254 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_M_DRAGON_RAGE
# 255 "data/maps/SacredMountain_Peak/scripts.pory"
	waitse
# 256 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_GIRATINA_ORIGIN, CRY_MODE_ENCOUNTER
# 257 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 258 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_GIRATINA
# 259 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_GIOVANNI_TRAINER
# 260 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 4
# 261 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 7
# 262 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_GIRATINA_ORIGIN
# 263 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 6
# 264 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 266 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 267 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 269 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_DoGiratinaOriginBattle
# 271 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_ThereIsNoEscape::
# 276 "data/maps/SacredMountain_Peak/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq SacredMountain_EventScript_ThereIsNoEscape_2
SacredMountain_EventScript_ThereIsNoEscape_1:
# 281 "data/maps/SacredMountain_Peak/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SacredMountain_EventScript_ThereIsNoEscape_5
SacredMountain_EventScript_ThereIsNoEscape_4:
# 287 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end

SacredMountain_EventScript_ThereIsNoEscape_2:
# 279 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_DoGiratinaBattle
	goto SacredMountain_EventScript_ThereIsNoEscape_1

SacredMountain_EventScript_ThereIsNoEscape_5:
# 284 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_DoGiratinaOriginBattle
	goto SacredMountain_EventScript_ThereIsNoEscape_4


SacredMountain_EventScript_DoGiratinaOriginBattle::
# 292 "data/maps/SacredMountain_Peak/scripts.pory"
	setvar VAR_TEMP_0, 1
# 293 "data/maps/SacredMountain_Peak/scripts.pory"
	setvar VAR_LAST_TALKED, 6
# 294 "data/maps/SacredMountain_Peak/scripts.pory"
	setwildbattle SPECIES_GIRATINA_ORIGIN, 70
# 295 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_NO_CATCHING
# 296 "data/maps/SacredMountain_Peak/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 297 "data/maps/SacredMountain_Peak/scripts.pory"
	waitstate
# 298 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 299 "data/maps/SacredMountain_Peak/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 300 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_WON, SacredMountain_EventScript_GiratinaOriginBattleWon
# 301 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SacredMountain_EventScript_ThereIsNoEscape
# 302 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_RAN, SacredMountain_EventScript_ThereIsNoEscape
# 304 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_GiratinaOriginBattleWon::
# 309 "data/maps/SacredMountain_Peak/scripts.pory"
	setvar VAR_SACRED_MOUNTAIN_PEAK_STATE, 2
# 310 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 15
# 312 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_EventScript_GiratinaOriginBattleWon_Text_0, MSGBOX_AUTOCLOSE
# 313 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmessage
# 315 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_TO_WHITE
# 316 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_ARCEUS
# 317 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_GIRATINA_ORIGIN
# 318 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 8
# 319 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 6
# 321 "data/maps/SacredMountain_Peak/scripts.pory"
	setobjectxy 8, 18, 14
# 323 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
# 324 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 326 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_M_EXPLOSION
# 327 "data/maps/SacredMountain_Peak/scripts.pory"
	waitse
# 329 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 10
# 331 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_GIRATINA, CRY_MODE_FAINT
# 332 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 334 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 335 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 337 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 339 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_Arceus_Entrance
# 341 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_Arceus_Entrance::
# 347 "data/maps/SacredMountain_Peak/scripts.pory"
	special SpawnCameraObject
# 348 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanUp
# 349 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 350 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanUp
# 351 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 352 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanUp
# 353 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 355 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 8, Common_Movement_WalkDown3
# 356 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 358 "data/maps/SacredMountain_Peak/scripts.pory"
	message SacredMountain_Text_Arceus_Opening
# 359 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmessage
# 361 "data/maps/SacredMountain_Peak/scripts.pory"
	checkitem ITEM_AZURE_FLUTE
# 362 "data/maps/SacredMountain_Peak/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SacredMountain_EventScript_Arceus_Entrance_2
# 368 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_Credits
SacredMountain_EventScript_Arceus_Entrance_1:
# 371 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end

SacredMountain_EventScript_Arceus_Entrance_2:
# 364 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_AzureFlute
	goto SacredMountain_EventScript_Arceus_Entrance_1


SacredMountain_EventScript_AzureFlute::
# 376 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_EventScript_AzureFlute_Text_0, MSGBOX_YESNO
# 377 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmessage
# 378 "data/maps/SacredMountain_Peak/scripts.pory"
	closemessage
# 380 "data/maps/SacredMountain_Peak/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SacredMountain_EventScript_AzureFlute_2
# 395 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_Credits
SacredMountain_EventScript_AzureFlute_1:
# 398 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end

SacredMountain_EventScript_AzureFlute_2:
# 382 "data/maps/SacredMountain_Peak/scripts.pory"
	playfanfare MUS_AZURE_FLUTE
# 383 "data/maps/SacredMountain_Peak/scripts.pory"
	waitfanfare
# 384 "data/maps/SacredMountain_Peak/scripts.pory"
	setvar VAR_SACRED_MOUNTAIN_PEAK_STATE, 3
# 386 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Arceus_Challange, MSGBOX_AUTOCLOSE
# 387 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmessage
# 389 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanDown
# 390 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 391 "data/maps/SacredMountain_Peak/scripts.pory"
	special RemoveCameraObject
	goto SacredMountain_EventScript_AzureFlute_1


SacredMountain_EventScript_Credits::
# 403 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 404 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_EventScript_Credits_Text_0
	end


SacredMountain_EventScript_WalkBack::
# 409 "data/maps/SacredMountain_Peak/scripts.pory"
	lock
# 410 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_EventScript_WalkBack_Text_0
# 411 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 412 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 413 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_Arceus::
# 418 "data/maps/SacredMountain_Peak/scripts.pory"
	lock
# 419 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_EventScript_Arceus_Text_0, MSGBOX_AUTOCLOSE
# 420 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmessage
# 421 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
# 422 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 423 "data/maps/SacredMountain_Peak/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCEUS, SacredMountain_EventScript_Arceus_Text_1
# 424 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_Credits
	return


# 488 "data/maps/SacredMountain_Peak/scripts.pory"
SacredMountain_Movement_Giovanni_WalkOn:
# 489 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 489 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 489 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 489 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 489 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 489 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 489 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 489 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 489 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 490 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_right
# 491 "data/maps/SacredMountain_Peak/scripts.pory"
	face_up
	step_end

# 494 "data/maps/SacredMountain_Peak/scripts.pory"
SacredMountain_Movement_Giovanni_Push:
# 495 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_fast_up
	step_end

# 498 "data/maps/SacredMountain_Peak/scripts.pory"
SacredMountain_Movement_Spenser_PushedBack:
# 499 "data/maps/SacredMountain_Peak/scripts.pory"
	jump_up
# 500 "data/maps/SacredMountain_Peak/scripts.pory"
	face_down
	step_end

# 503 "data/maps/SacredMountain_Peak/scripts.pory"
SacredMountain_Movement_Spenser_PushedOff:
# 504 "data/maps/SacredMountain_Peak/scripts.pory"
	jump_2_up
# 504 "data/maps/SacredMountain_Peak/scripts.pory"
	jump_2_up
	step_end

# 507 "data/maps/SacredMountain_Peak/scripts.pory"
SacredMountain_Movement_Camera_PanUp:
# 508 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_slow_up
	step_end

# 511 "data/maps/SacredMountain_Peak/scripts.pory"
SacredMountain_Movement_Camera_PanDown:
# 512 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_slow_down
# 512 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_slow_down
# 512 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_slow_down
	step_end

SacredMountain_EventScript_Cutscene_Main_Text_0:
# 119 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "???: Halt!$"

SacredMountain_EventScript_GiratinaOriginBattleWon_Text_0:
# 312 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "???: Be gone beast of darkness!$"

SacredMountain_EventScript_AzureFlute_Text_0:
# 376 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "The AZURE FLUTE in your bag begins to\n"
	.string "shine.\p"
	.string "Play the AZURE FLUTE?$"

SacredMountain_EventScript_Credits_Text_0:
# 404 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "You have reached the end of the\n"
	.string "journey.$"

SacredMountain_EventScript_WalkBack_Text_0:
# 410 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "GIOVANNI: And where do you think you\n"
	.string "are going?$"

SacredMountain_EventScript_Arceus_Text_0:
# 419 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "...$"

SacredMountain_EventScript_Arceus_Text_1:
# 423 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "Well done. You have triumphed over a\n"
	.string "god.$"

SacredMountain_Text_Spenser1::
# 428 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "SPENSER: Lorem Ipsum!\n"
	.string "Lorem Lorem\p"
	.string "Ipsum$"

SacredMountain_Text_Spenser2::
# 433 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "Lorem Ipsum!$"

SacredMountain_Text_Giovanni1::
# 438 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "GIOVANNI: Lorem Ipsum!$"

SacredMountain_Text_Giovanni2::
# 443 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "GIOVANNI: Lorem Ipsum!$"

SacredMountain_Text_Giovanni_PreBattle::
# 448 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "GIOVANNI: So you want to stop me?\n"
	.string "Come an try.$"

SacredMountain_Text_Giovanni_Deafeat::
# 453 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "Lost to a mere child...$"

SacredMountain_Text_Giovanni_PostBattle::
# 458 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "No! This is inconceivable.\n"
	.string "How... how did I lose.\p"
	.string "You leave me no choice. I would not\n"
	.string "wish this upon my worst enemy...$"

SacredMountain_Text_Giovanni_CallForGiratina::
# 463 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "Let the rule of darkness be eternal.\p"
	.string "Come forth GIRATINA!$"

SacredMountain_Text_Giovanni_PostBattleGiratina::
# 468 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "Impossible! How could GIRATINA lose?\n"
	.string "It is the strongest POKéMON known to\l"
	.string "man.\p"
	.string "No...\p"
	.string "I can not accept this. RED NECLACE,\n"
	.string "give GIRATINA the power to continue\l"
	.string "battle!$"

SacredMountain_Text_Giovanni_Giratina_Kills_Giovanni::
# 473 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "Huh? GIRATINA?\p"
	.string "What are you doing?\p"
	.string "No stop...$"

SacredMountain_Text_Arceus_Opening::
# 478 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "Hello... Blah blah blah\p"
	.string "$"

SacredMountain_Text_Arceus_Challange::
# 483 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "The flute grants thee the divine right\n"
	.string "to challange me. Be prepared and do not\l"
	.string "take me lightly.$"
