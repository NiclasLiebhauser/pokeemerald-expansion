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


SacredMountain_EventScript_AskPlayerToSave::
# 61 "data/maps/SacredMountain_Peak/scripts.pory"
	goto_if_unset FLAG_ASK_PLAYER_SAVE, SacredMountain_EventScript_AskPlayerToSave_2
SacredMountain_EventScript_AskPlayerToSave_1:
	end

SacredMountain_EventScript_AskPlayerToSave_2:
# 63 "data/maps/SacredMountain_Peak/scripts.pory"
	lock
# 64 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_EventScript_AskPlayerToSave_Text_0, MSGBOX_YESNO
# 65 "data/maps/SacredMountain_Peak/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SacredMountain_EventScript_AskPlayerToSave_5
SacredMountain_EventScript_AskPlayerToSave_4:
# 70 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_ASK_PLAYER_SAVE
# 71 "data/maps/SacredMountain_Peak/scripts.pory"
	setvar VAR_ASK_SAVE_STATE, 1
# 72 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	goto SacredMountain_EventScript_AskPlayerToSave_1

SacredMountain_EventScript_AskPlayerToSave_5:
# 67 "data/maps/SacredMountain_Peak/scripts.pory"
	special SaveGame
# 68 "data/maps/SacredMountain_Peak/scripts.pory"
	waitstate
	goto SacredMountain_EventScript_AskPlayerToSave_4


SacredMountain_EventScript_TryRemoveGiratinaOrigin::
# 79 "data/maps/SacredMountain_Peak/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 80 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_WON, SacredMountain_EventScript_RemoveGiratinaOrigin
	return


SacredMountain_EventScript_RemoveGiratinaOrigin::
# 85 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 6
	return


SacredMountain_EventScript_Cutscene_Trigger_Left::
# 90 "data/maps/SacredMountain_Peak/scripts.pory"
	lock
# 91 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 92 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 93 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 94 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 95 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 96 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 97 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_Cutscene_Main
# 98 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_Cutscene_Trigger_Middle::
# 103 "data/maps/SacredMountain_Peak/scripts.pory"
	lock
# 104 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 105 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 106 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_Cutscene_Main
# 107 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_Cutscene_Trigger_Right::
# 112 "data/maps/SacredMountain_Peak/scripts.pory"
	lock
# 113 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 114 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 115 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 116 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 117 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 118 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 119 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_Cutscene_Main
# 120 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_Cutscene_Main::
# 125 "data/maps/SacredMountain_Peak/scripts.pory"
	special SpawnCameraObject
# 126 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanUp
# 127 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 128 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Spenser1, MSGBOX_AUTOCLOSE
# 129 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmessage
# 131 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 132 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 133 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 135 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Spenser2, MSGBOX_NPC
# 137 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_EventScript_Cutscene_Main_Text_0, MSGBOX_NPC
# 139 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_PIN
# 140 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 141 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 142 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 5, Common_Movement_Delay48
# 143 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 145 "data/maps/SacredMountain_Peak/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 146 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 3
# 147 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 3, SacredMountain_Movement_Giovanni_WalkOn
# 148 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 149 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_WALL_HIT
# 150 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 5, SacredMountain_Movement_Spenser_PushedBack
# 151 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 153 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni1, MSGBOX_NPC
# 154 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanUp
# 155 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 156 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanUp
# 157 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 159 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_M_DETECT
# 160 "data/maps/SacredMountain_Peak/scripts.pory"
	dofieldeffectsparkle 18, 21, 0
# 161 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 162 "data/maps/SacredMountain_Peak/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 164 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_TO_WHITE
# 165 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 90
# 166 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_DIALGA, CRY_MODE_ENCOUNTER
# 167 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 168 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_PALKIA, CRY_MODE_ENCOUNTER
# 169 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 170 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_PALKIA
# 171 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_DIALGA
# 172 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 1
# 173 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 2
# 174 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 176 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni2, MSGBOX_NPC
# 177 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 3, SacredMountain_Movement_Giovanni_Push
# 178 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 179 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_WALL_HIT
# 180 "data/maps/SacredMountain_Peak/scripts.pory"
	setmetatile 18, 17, METATILE_Cave_SacredMountain_Peak_MountainOverhang, FALSE
# 181 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 5, SacredMountain_Movement_Spenser_PushedOff
# 182 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 10
# 183 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_FALL
# 184 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 185 "data/maps/SacredMountain_Peak/scripts.pory"
	setmetatile 18, 17, METATILE_Cave_SacredMountain_Peak_MountainOverhang, TRUE
# 186 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 5
# 188 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 189 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 190 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 192 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanDown
# 193 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 194 "data/maps/SacredMountain_Peak/scripts.pory"
	special RemoveCameraObject
# 196 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_GIOVANNI_TRAINER
# 197 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 3
# 198 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 7
# 199 "data/maps/SacredMountain_Peak/scripts.pory"
	fadedefaultbgm
# 201 "data/maps/SacredMountain_Peak/scripts.pory"
	setvar VAR_SACRED_MOUNTAIN_PEAK_STATE, 1
# 202 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_Giovanni::
# 207 "data/maps/SacredMountain_Peak/scripts.pory"
	lock
# 208 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 7, Common_Movement_FacePlayer
# 209 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni_PreBattle, MSGBOX_NPC
# 210 "data/maps/SacredMountain_Peak/scripts.pory"
	trainerbattle_no_intro TRAINER_GIOVANNI_SACRED_MOUNTAIN, SacredMountain_Text_Giovanni_Deafeat
# 211 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni_PostBattle, MSGBOX_NPC
# 213 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_M_DETECT
# 214 "data/maps/SacredMountain_Peak/scripts.pory"
	dofieldeffectsparkle 18, 20, 0
# 215 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 217 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 218 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 90
# 219 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni_CallForGiratina, MSGBOX_NPC
# 220 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_GIRATINA, CRY_MODE_ENCOUNTER
# 221 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 222 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_GIRATINA
# 223 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 4
# 224 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 225 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 90
# 226 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_DoGiratinaBattle
# 228 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_DoGiratinaBattle::
# 233 "data/maps/SacredMountain_Peak/scripts.pory"
	setvar VAR_TEMP_0, 0
# 234 "data/maps/SacredMountain_Peak/scripts.pory"
	setwildbattle SPECIES_GIRATINA, 70
# 235 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_NO_CATCHING
# 236 "data/maps/SacredMountain_Peak/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 237 "data/maps/SacredMountain_Peak/scripts.pory"
	waitstate
# 238 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 239 "data/maps/SacredMountain_Peak/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 240 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_WON, SacredMountain_EventScript_GiratinaBattleWon
# 241 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SacredMountain_EventScript_ThereIsNoEscape
# 242 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_RAN, SacredMountain_EventScript_ThereIsNoEscape
# 244 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_GiratinaBattleWon::
# 249 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 250 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_GIRATINA, CRY_MODE_FAINT
# 251 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 253 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni_PostBattleGiratina, MSGBOX_NPC
# 254 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 255 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 257 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_M_DETECT
# 258 "data/maps/SacredMountain_Peak/scripts.pory"
	dofieldeffectsparkle 18, 20, 0
# 259 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 261 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_M_DETECT
# 262 "data/maps/SacredMountain_Peak/scripts.pory"
	dofieldeffectsparkle 18, 19, 0
# 263 "data/maps/SacredMountain_Peak/scripts.pory"
	dofieldeffectsparkle 18, 18, 0
# 264 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 266 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_GIRATINA, CRY_MODE_ENCOUNTER
# 267 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 269 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 270 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 90
# 271 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni_Giratina_Kills_Giovanni, MSGBOX_NPC
# 272 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_M_DRAGON_RAGE
# 273 "data/maps/SacredMountain_Peak/scripts.pory"
	waitse
# 274 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_GIRATINA_ORIGIN, CRY_MODE_ENCOUNTER
# 275 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 276 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_GIRATINA
# 277 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_GIOVANNI_TRAINER
# 278 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 4
# 279 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 7
# 280 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_GIRATINA_ORIGIN
# 281 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 6
# 282 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 284 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 285 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 287 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_DoGiratinaOriginBattle
# 289 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_ThereIsNoEscape::
# 294 "data/maps/SacredMountain_Peak/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq SacredMountain_EventScript_ThereIsNoEscape_2
SacredMountain_EventScript_ThereIsNoEscape_1:
# 299 "data/maps/SacredMountain_Peak/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SacredMountain_EventScript_ThereIsNoEscape_5
SacredMountain_EventScript_ThereIsNoEscape_4:
# 305 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end

SacredMountain_EventScript_ThereIsNoEscape_2:
# 297 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_DoGiratinaBattle
	goto SacredMountain_EventScript_ThereIsNoEscape_1

SacredMountain_EventScript_ThereIsNoEscape_5:
# 302 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_DoGiratinaOriginBattle
	goto SacredMountain_EventScript_ThereIsNoEscape_4


SacredMountain_EventScript_DoGiratinaOriginBattle::
# 310 "data/maps/SacredMountain_Peak/scripts.pory"
	setvar VAR_TEMP_0, 1
# 311 "data/maps/SacredMountain_Peak/scripts.pory"
	setvar VAR_LAST_TALKED, 6
# 312 "data/maps/SacredMountain_Peak/scripts.pory"
	setwildbattle SPECIES_GIRATINA_ORIGIN, 70
# 313 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_NO_CATCHING
# 314 "data/maps/SacredMountain_Peak/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 315 "data/maps/SacredMountain_Peak/scripts.pory"
	waitstate
# 316 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 317 "data/maps/SacredMountain_Peak/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 318 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_WON, SacredMountain_EventScript_GiratinaOriginBattleWon
# 319 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SacredMountain_EventScript_ThereIsNoEscape
# 320 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_RAN, SacredMountain_EventScript_ThereIsNoEscape
# 322 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_GiratinaOriginBattleWon::
# 327 "data/maps/SacredMountain_Peak/scripts.pory"
	setvar VAR_SACRED_MOUNTAIN_PEAK_STATE, 2
# 328 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 15
# 330 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_EventScript_GiratinaOriginBattleWon_Text_0, MSGBOX_AUTOCLOSE
# 331 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmessage
# 333 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_TO_WHITE
# 334 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_ARCEUS
# 335 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_GIRATINA_ORIGIN
# 336 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 8
# 337 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 6
# 339 "data/maps/SacredMountain_Peak/scripts.pory"
	setobjectxy 8, 18, 14
# 341 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
# 342 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 344 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_M_EXPLOSION
# 345 "data/maps/SacredMountain_Peak/scripts.pory"
	waitse
# 347 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 10
# 349 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_GIRATINA, CRY_MODE_FAINT
# 350 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 352 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 353 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 355 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 357 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_Arceus_Entrance
# 359 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_Arceus_Entrance::
# 365 "data/maps/SacredMountain_Peak/scripts.pory"
	special SpawnCameraObject
# 366 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanUp
# 367 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 368 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanUp
# 369 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 370 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanUp
# 371 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 373 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 8, Common_Movement_WalkDown3
# 374 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 376 "data/maps/SacredMountain_Peak/scripts.pory"
	message SacredMountain_Text_Arceus_Opening
# 377 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmessage
# 379 "data/maps/SacredMountain_Peak/scripts.pory"
	checkitem ITEM_AZURE_FLUTE
# 380 "data/maps/SacredMountain_Peak/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SacredMountain_EventScript_Arceus_Entrance_2
# 386 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_Credits
SacredMountain_EventScript_Arceus_Entrance_1:
# 389 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end

SacredMountain_EventScript_Arceus_Entrance_2:
# 382 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_AzureFlute
	goto SacredMountain_EventScript_Arceus_Entrance_1


SacredMountain_EventScript_AzureFlute::
# 394 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_EventScript_AzureFlute_Text_0, MSGBOX_YESNO
# 395 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmessage
# 396 "data/maps/SacredMountain_Peak/scripts.pory"
	closemessage
# 398 "data/maps/SacredMountain_Peak/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SacredMountain_EventScript_AzureFlute_2
# 413 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_Credits
SacredMountain_EventScript_AzureFlute_1:
# 416 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end

SacredMountain_EventScript_AzureFlute_2:
# 400 "data/maps/SacredMountain_Peak/scripts.pory"
	playfanfare MUS_AZURE_FLUTE
# 401 "data/maps/SacredMountain_Peak/scripts.pory"
	waitfanfare
# 402 "data/maps/SacredMountain_Peak/scripts.pory"
	setvar VAR_SACRED_MOUNTAIN_PEAK_STATE, 3
# 404 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Arceus_Challange, MSGBOX_AUTOCLOSE
# 405 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmessage
# 407 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanDown
# 408 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 409 "data/maps/SacredMountain_Peak/scripts.pory"
	special RemoveCameraObject
	goto SacredMountain_EventScript_AzureFlute_1


SacredMountain_EventScript_Credits::
# 421 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
# 422 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 423 "data/maps/SacredMountain_Peak/scripts.pory"
	setrespawn HEAL_LOCATION_MYSTERY_CAVE
# 424 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 120
# 425 "data/maps/SacredMountain_Peak/scripts.pory"
	special GameClear
# 426 "data/maps/SacredMountain_Peak/scripts.pory"
	waitstate
# 427 "data/maps/SacredMountain_Peak/scripts.pory"
	releaseall
	end


SacredMountain_EventScript_WalkBack::
# 432 "data/maps/SacredMountain_Peak/scripts.pory"
	lock
# 433 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_EventScript_WalkBack_Text_0
# 434 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 435 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 436 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_Arceus::
# 441 "data/maps/SacredMountain_Peak/scripts.pory"
	lock
# 442 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_EventScript_Arceus_Text_0, MSGBOX_AUTOCLOSE
# 443 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmessage
# 444 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
# 445 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 446 "data/maps/SacredMountain_Peak/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCEUS, SacredMountain_EventScript_Arceus_Text_1
# 447 "data/maps/SacredMountain_Peak/scripts.pory"
	message SacredMountain_EventScript_Arceus_Text_2
# 448 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmessage
# 449 "data/maps/SacredMountain_Peak/scripts.pory"
	closemessage
# 450 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_Credits
	return


# 502 "data/maps/SacredMountain_Peak/scripts.pory"
SacredMountain_Movement_Giovanni_WalkOn:
# 503 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 503 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 503 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 503 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 503 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 503 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 503 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 503 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 503 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 504 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_right
# 505 "data/maps/SacredMountain_Peak/scripts.pory"
	face_up
	step_end

# 508 "data/maps/SacredMountain_Peak/scripts.pory"
SacredMountain_Movement_Giovanni_Push:
# 509 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_fast_up
	step_end

# 512 "data/maps/SacredMountain_Peak/scripts.pory"
SacredMountain_Movement_Spenser_PushedBack:
# 513 "data/maps/SacredMountain_Peak/scripts.pory"
	jump_up
# 514 "data/maps/SacredMountain_Peak/scripts.pory"
	face_down
	step_end

# 517 "data/maps/SacredMountain_Peak/scripts.pory"
SacredMountain_Movement_Spenser_PushedOff:
# 518 "data/maps/SacredMountain_Peak/scripts.pory"
	jump_2_up
# 518 "data/maps/SacredMountain_Peak/scripts.pory"
	jump_2_up
	step_end

# 521 "data/maps/SacredMountain_Peak/scripts.pory"
SacredMountain_Movement_Camera_PanUp:
# 522 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_slow_up
	step_end

# 525 "data/maps/SacredMountain_Peak/scripts.pory"
SacredMountain_Movement_Camera_PanDown:
# 526 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_slow_down
# 526 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_slow_down
# 526 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_slow_down
	step_end

SacredMountain_EventScript_AskPlayerToSave_Text_0:
# 64 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "The end is near. Save game?$"

SacredMountain_EventScript_Cutscene_Main_Text_0:
# 137 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "???: No need for such hasty actions!$"

SacredMountain_EventScript_GiratinaOriginBattleWon_Text_0:
# 330 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "???: Be gone beast of darkness!$"

SacredMountain_EventScript_AzureFlute_Text_0:
# 394 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "The AZURE FLUTE in your bag begins to\n"
	.string "shine.\p"
	.string "Play the AZURE FLUTE?$"

SacredMountain_EventScript_WalkBack_Text_0:
# 433 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "GIOVANNI: And where do you think you\n"
	.string "are going?$"

SacredMountain_EventScript_Arceus_Text_0:
# 442 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "...$"

SacredMountain_EventScript_Arceus_Text_1:
# 446 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "Well done. You have triumphed over a\n"
	.string "god.$"

SacredMountain_EventScript_Arceus_Text_2:
# 447 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "ARCEUS: Thy reward for triumphing o'er\n"
	.string "me shall be thy freedom.\p"
	.string "Go forth and live thy life amongst\n"
	.string "these people.\p"
	.string "At the end of thy journey, I shall await\n"
	.string "thee.\p"
	.string "$"

SacredMountain_Text_Spenser1::
# 453 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "SPENSER: Finally, you made it. Reaching\n"
	.string "this point in space and time means you\l"
	.string "must have beaten Archie and Maxie, yet\l"
	.string "the time paradox that destroyed this\l"
	.string "timeline still exists...$"

SacredMountain_Text_Spenser2::
# 457 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "We shall use the power of the orbs you\n"
	.string "have collected to restore this region\l"
	.string "to its original state.\p"
	.string "Maybe then we will finally discern who\n"
	.string "was behind all this.$"

SacredMountain_Text_Giovanni1::
# 461 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "GIOVANNI: I have to thank you for\n"
	.string "powering up the orbs again.\p"
	.string "After I gave Archie the blue orb to\n"
	.string "destroy Hoenn, it lost all of its power.\p"
	.string "Yet here we are. My CHAIN will steal all\n"
	.string "that energy from you to power itself\l"
	.string "up.$"

SacredMountain_Text_Giovanni2::
# 465 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "GIOVANNI: Yes! With the full power of\n"
	.string "my RED CHAIN thanks to the energy of\l"
	.string "the orbs. I succeeded at last in\l"
	.string "summoning the mighty rulers of space\l"
	.string "and time.\p"
	.string "Welcome Dialga and Palkia.\n"
	.string "My, new slaves. You will do my bidding.\p"
	.string "Incidentally old man. I don't think that\n"
	.string "I have any use for you anymore.$"

SacredMountain_Text_Giovanni_PreBattle::
# 469 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "GIOVANNI: So you want to stop me?\n"
	.string "Come an try.$"

SacredMountain_Text_Giovanni_Deafeat::
# 473 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "Lost to a mere child...$"

SacredMountain_Text_Giovanni_PostBattle::
# 477 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "No! This is inconceivable.\n"
	.string "How... how did I lose.\p"
	.string "You leave me no choice. I shall summon\n"
	.string "darkness itself to crush you.$"

SacredMountain_Text_Giovanni_CallForGiratina::
# 481 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "Let the rule of darkness be eternal.\p"
	.string "Come forth GIRATINA!$"

SacredMountain_Text_Giovanni_PostBattleGiratina::
# 485 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "Impossible! How could GIRATINA lose?\n"
	.string "It is the strongest POKéMON known to\l"
	.string "man.\p"
	.string "No...\p"
	.string "I can not accept this. RED CHAIN, give\n"
	.string "GIRATINA the power to continue battle!$"

SacredMountain_Text_Giovanni_Giratina_Kills_Giovanni::
# 489 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "Huh? GIRATINA?\p"
	.string "What are you doing?\p"
	.string "No! Stop...!$"

SacredMountain_Text_Arceus_Opening::
# 493 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "ARCEUS: The offender hath been caught,\n"
	.string "thanks to thee.\p"
	.string "Thy purpose here is fulfilled, and thus\n"
	.string "thy life shall be forfeit, to return\l"
	.string "unto the endless void of space and\l"
	.string "time.\p"
	.string "Prepare thyself, servant, for thine\n"
	.string "existence shall cease in but mere\l"
	.string "moments.\p"
	.string "$"

SacredMountain_Text_Arceus_Challange::
# 497 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "AREUS: The flute granteth thee the\n"
	.string "divine right to challenge me. Yet be\l"
	.string "thou prepared, and take not mine\l"
	.string "strength lightly.$"
