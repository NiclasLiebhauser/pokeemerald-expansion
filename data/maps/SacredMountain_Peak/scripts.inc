SacredMountain_Peak_MapScripts::
# 10 "data/maps/SacredMountain_Peak/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SacredMountain_EventScript_OnTransition
# 11 "data/maps/SacredMountain_Peak/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SacredMountain_EventScript_OnResume
	.byte 0


SacredMountain_EventScript_OnResume::
# 17 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SacredMountain_EventScript_TryRemoveGiratinaOrigin
	return


SacredMountain_EventScript_OnTransition::
# 23 "data/maps/SacredMountain_Peak/scripts.pory"
	compare VAR_SACRED_MOUNTAIN_PEAK_STATE, 0
	goto_if_eq SacredMountain_EventScript_OnTransition_2
# 38 "data/maps/SacredMountain_Peak/scripts.pory"
	compare VAR_SACRED_MOUNTAIN_PEAK_STATE, 1
	goto_if_eq SacredMountain_EventScript_OnTransition_3
SacredMountain_EventScript_OnTransition_1:
	end

SacredMountain_EventScript_OnTransition_2:
# 25 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_PALKIA
# 26 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_DIALGA
# 27 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_GIOVANNI_CUSCENE
# 28 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_GIRATINA
# 29 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_GIRATINA_ORIGIN
# 30 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_GIOVANNI_TRAINER
# 31 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 1
# 32 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 2
# 33 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 4
# 34 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 6
# 35 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 3
# 36 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 7
	goto SacredMountain_EventScript_OnTransition_1

SacredMountain_EventScript_OnTransition_3:
# 40 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_SPENSER
# 41 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_GIOVANNI_TRAINER
# 42 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_PALKIA
# 43 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_DIALGA
# 44 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 5
# 45 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 7
# 46 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 1
# 47 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 2
	goto SacredMountain_EventScript_OnTransition_1


SacredMountain_EventScript_TryRemoveGiratinaOrigin::
# 53 "data/maps/SacredMountain_Peak/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 54 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_WON, SacredMountain_EventScript_RemoveGiratinaOrigin
	return


SacredMountain_EventScript_RemoveGiratinaOrigin::
# 59 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 6
	return


SacredMountain_EventScript_Cutscene_Trigger_Left::
# 64 "data/maps/SacredMountain_Peak/scripts.pory"
	lock
# 65 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 66 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 67 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 68 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 69 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 70 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 71 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_Cutscene_Main
# 72 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_Cutscene_Trigger_Middle::
# 77 "data/maps/SacredMountain_Peak/scripts.pory"
	lock
# 78 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 79 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 80 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_Cutscene_Main
# 81 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_Cutscene_Trigger_Right::
# 86 "data/maps/SacredMountain_Peak/scripts.pory"
	lock
# 87 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 88 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 89 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 90 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 91 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 92 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 93 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_Cutscene_Main
# 94 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_Cutscene_Main::
# 99 "data/maps/SacredMountain_Peak/scripts.pory"
	special SpawnCameraObject
# 100 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanUp
# 101 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 102 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Spenser1, MSGBOX_AUTOCLOSE
# 103 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmessage
# 105 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 106 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 107 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 109 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Spenser2, MSGBOX_NPC
# 111 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_EventScript_Cutscene_Main_Text_0, MSGBOX_NPC
# 113 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_PIN
# 114 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 115 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 116 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 5, Common_Movement_Delay48
# 117 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 119 "data/maps/SacredMountain_Peak/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, FALSE
# 120 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 3
# 121 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 3, SacredMountain_Movement_Giovanni_WalkOn
# 122 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 123 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_WALL_HIT
# 124 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 5, SacredMountain_Movement_Spenser_PushedBack
# 125 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 127 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni1, MSGBOX_NPC
# 128 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanUp
# 129 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 130 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanUp
# 131 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 133 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_M_DETECT
# 134 "data/maps/SacredMountain_Peak/scripts.pory"
	dofieldeffectsparkle 18, 21, 0
# 135 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 136 "data/maps/SacredMountain_Peak/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 138 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_TO_WHITE
# 139 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 90
# 140 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_DIALGA, CRY_MODE_ENCOUNTER
# 141 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 142 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_PALKIA, CRY_MODE_ENCOUNTER
# 143 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 144 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_PALKIA
# 145 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_DIALGA
# 146 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 1
# 147 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 2
# 148 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 150 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni2, MSGBOX_NPC
# 151 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 3, SacredMountain_Movement_Giovanni_Push
# 152 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 153 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_WALL_HIT
# 154 "data/maps/SacredMountain_Peak/scripts.pory"
	setmetatile 18, 17, METATILE_Cave_SacredMountain_Peak_MountainOverhang, FALSE
# 155 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 5, SacredMountain_Movement_Spenser_PushedOff
# 156 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 10
# 157 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_FALL
# 158 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 159 "data/maps/SacredMountain_Peak/scripts.pory"
	setmetatile 18, 17, METATILE_Cave_SacredMountain_Peak_MountainOverhang, TRUE
# 160 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 5
# 162 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 163 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 164 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 166 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SacredMountain_Movement_Camera_PanDown
# 167 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 168 "data/maps/SacredMountain_Peak/scripts.pory"
	special RemoveCameraObject
# 170 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_GIOVANNI_TRAINER
# 171 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 3
# 172 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 7
# 173 "data/maps/SacredMountain_Peak/scripts.pory"
	fadedefaultbgm
# 175 "data/maps/SacredMountain_Peak/scripts.pory"
	setvar VAR_SACRED_MOUNTAIN_PEAK_STATE, 1
# 176 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_Giovanni::
# 181 "data/maps/SacredMountain_Peak/scripts.pory"
	lock
# 182 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 7, Common_Movement_FacePlayer
# 183 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni_PreBattle, MSGBOX_NPC
# 184 "data/maps/SacredMountain_Peak/scripts.pory"
	trainerbattle_no_intro TRAINER_GIOVANNI_SACRED_MOUNTAIN, SacredMountain_Text_Giovanni_Deafeat
# 185 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni_PostBattle, MSGBOX_NPC
# 187 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_M_DETECT
# 188 "data/maps/SacredMountain_Peak/scripts.pory"
	dofieldeffectsparkle 18, 20, 0
# 189 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 191 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 192 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 90
# 193 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni_CallForGiratina, MSGBOX_NPC
# 194 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_GIRATINA, CRY_MODE_ENCOUNTER
# 195 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 196 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_GIRATINA
# 197 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 4
# 198 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 200 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_DoGiratinaBattle
# 202 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_DoGiratinaBattle::
# 207 "data/maps/SacredMountain_Peak/scripts.pory"
	setvar VAR_TEMP_0, 0
# 208 "data/maps/SacredMountain_Peak/scripts.pory"
	setwildbattle SPECIES_GIRATINA, 70
# 209 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_NO_CATCHING
# 210 "data/maps/SacredMountain_Peak/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 211 "data/maps/SacredMountain_Peak/scripts.pory"
	waitstate
# 212 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 213 "data/maps/SacredMountain_Peak/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 214 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_WON, SacredMountain_EventScript_GiratinaBattleWon
# 215 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SacredMountain_EventScript_ThereIsNoEscape
# 217 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_GiratinaBattleWon::
# 222 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 223 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_GIRATINA, CRY_MODE_FAINT
# 224 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 226 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni_PostBattleGiratina, MSGBOX_NPC
# 227 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 228 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 230 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_M_DETECT
# 231 "data/maps/SacredMountain_Peak/scripts.pory"
	dofieldeffectsparkle 18, 20, 0
# 232 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 234 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_M_DETECT
# 235 "data/maps/SacredMountain_Peak/scripts.pory"
	dofieldeffectsparkle 18, 19, 0
# 236 "data/maps/SacredMountain_Peak/scripts.pory"
	dofieldeffectsparkle 18, 18, 0
# 237 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 30
# 239 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_GIRATINA, CRY_MODE_ENCOUNTER
# 240 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 242 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 243 "data/maps/SacredMountain_Peak/scripts.pory"
	delay 90
# 244 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_Text_Giovanni_Giratina_Kills_Giovanni, MSGBOX_NPC
# 245 "data/maps/SacredMountain_Peak/scripts.pory"
	playse SE_M_DRAGON_RAGE
# 246 "data/maps/SacredMountain_Peak/scripts.pory"
	waitse
# 247 "data/maps/SacredMountain_Peak/scripts.pory"
	playmoncry SPECIES_GIRATINA_ORIGIN, CRY_MODE_ENCOUNTER
# 248 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmoncry
# 249 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_GIRATINA
# 250 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_HIDE_GIOVANNI_TRAINER
# 251 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 4
# 252 "data/maps/SacredMountain_Peak/scripts.pory"
	removeobject 7
# 253 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_HIDE_GIRATINA_ORIGIN
# 254 "data/maps/SacredMountain_Peak/scripts.pory"
	addobject 6
# 255 "data/maps/SacredMountain_Peak/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 257 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 258 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 260 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_DoGiratinaOriginBattle
# 262 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_ThereIsNoEscape::
# 267 "data/maps/SacredMountain_Peak/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq SacredMountain_EventScript_ThereIsNoEscape_2
SacredMountain_EventScript_ThereIsNoEscape_1:
# 272 "data/maps/SacredMountain_Peak/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SacredMountain_EventScript_ThereIsNoEscape_5
SacredMountain_EventScript_ThereIsNoEscape_4:
# 278 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end

SacredMountain_EventScript_ThereIsNoEscape_2:
# 270 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_DoGiratinaBattle
	goto SacredMountain_EventScript_ThereIsNoEscape_1

SacredMountain_EventScript_ThereIsNoEscape_5:
# 275 "data/maps/SacredMountain_Peak/scripts.pory"
	call SacredMountain_EventScript_DoGiratinaOriginBattle
	goto SacredMountain_EventScript_ThereIsNoEscape_4


SacredMountain_EventScript_DoGiratinaOriginBattle::
# 283 "data/maps/SacredMountain_Peak/scripts.pory"
	setvar VAR_TEMP_0, 1
# 284 "data/maps/SacredMountain_Peak/scripts.pory"
	setvar VAR_LAST_TALKED, 6
# 285 "data/maps/SacredMountain_Peak/scripts.pory"
	setwildbattle SPECIES_GIRATINA_ORIGIN, 70
# 286 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 287 "data/maps/SacredMountain_Peak/scripts.pory"
	setflag FLAG_NO_CATCHING
# 288 "data/maps/SacredMountain_Peak/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 289 "data/maps/SacredMountain_Peak/scripts.pory"
	waitstate
# 290 "data/maps/SacredMountain_Peak/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 291 "data/maps/SacredMountain_Peak/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 292 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_WON, SacredMountain_EventScript_GiratinaOriginBattleWon
# 293 "data/maps/SacredMountain_Peak/scripts.pory"
	call_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SacredMountain_EventScript_ThereIsNoEscape
# 295 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_GiratinaOriginBattleWon::
# 300 "data/maps/SacredMountain_Peak/scripts.pory"
	setvar VAR_SACRED_MOUNTAIN_PEAK_STATE, 2
# 301 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


SacredMountain_EventScript_WalkBack::
# 306 "data/maps/SacredMountain_Peak/scripts.pory"
	lock
# 307 "data/maps/SacredMountain_Peak/scripts.pory"
	msgbox SacredMountain_EventScript_WalkBack_Text_0
# 308 "data/maps/SacredMountain_Peak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 309 "data/maps/SacredMountain_Peak/scripts.pory"
	waitmovement 0
# 310 "data/maps/SacredMountain_Peak/scripts.pory"
	release
	end


# 364 "data/maps/SacredMountain_Peak/scripts.pory"
SacredMountain_Movement_Giovanni_WalkOn:
# 365 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 365 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 365 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 365 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 365 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 365 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 365 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 365 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 365 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_up
# 366 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_right
# 367 "data/maps/SacredMountain_Peak/scripts.pory"
	face_up
	step_end

# 370 "data/maps/SacredMountain_Peak/scripts.pory"
SacredMountain_Movement_Giovanni_Push:
# 371 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_fast_up
	step_end

# 374 "data/maps/SacredMountain_Peak/scripts.pory"
SacredMountain_Movement_Spenser_PushedBack:
# 375 "data/maps/SacredMountain_Peak/scripts.pory"
	jump_up
# 376 "data/maps/SacredMountain_Peak/scripts.pory"
	face_down
	step_end

# 379 "data/maps/SacredMountain_Peak/scripts.pory"
SacredMountain_Movement_Spenser_PushedOff:
# 380 "data/maps/SacredMountain_Peak/scripts.pory"
	jump_2_up
# 380 "data/maps/SacredMountain_Peak/scripts.pory"
	jump_2_up
	step_end

# 383 "data/maps/SacredMountain_Peak/scripts.pory"
SacredMountain_Movement_Camera_PanUp:
# 384 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_slow_up
	step_end

# 387 "data/maps/SacredMountain_Peak/scripts.pory"
SacredMountain_Movement_Camera_PanDown:
# 388 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_slow_down
# 388 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_slow_down
# 388 "data/maps/SacredMountain_Peak/scripts.pory"
	walk_slow_down
	step_end

SacredMountain_EventScript_Cutscene_Main_Text_0:
# 111 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "???: Halt!$"

SacredMountain_EventScript_WalkBack_Text_0:
# 307 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "GIOVANNI: And where do you think you\n"
	.string "are going?$"

SacredMountain_Text_Spenser1::
# 315 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "SPENSER: Lorem Ipsum!\n"
	.string "Lorem Lorem\p"
	.string "Ipsum$"

SacredMountain_Text_Spenser2::
# 320 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "Lorem Ipsum!$"

SacredMountain_Text_Giovanni1::
# 325 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "GIOVANNI: Lorem Ipsum!$"

SacredMountain_Text_Giovanni2::
# 330 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "GIOVANNI: Lorem Ipsum!$"

SacredMountain_Text_Giovanni_PreBattle::
# 335 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "GIOVANNI: So you want to stop me?\n"
	.string "Come an try.$"

SacredMountain_Text_Giovanni_Deafeat::
# 340 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "Lost to a mere child...$"

SacredMountain_Text_Giovanni_PostBattle::
# 345 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "No! This is inconceivable.\n"
	.string "How... how did I lose.\p"
	.string "You leave me no choice. I would not\n"
	.string "wish this upon my worst enemy...$"

SacredMountain_Text_Giovanni_CallForGiratina::
# 350 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "Let the rule of darkness be eternal.\p"
	.string "Come forth GIRATINA!$"

SacredMountain_Text_Giovanni_PostBattleGiratina::
# 355 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "Impossible! How could GIRATINA lose?\n"
	.string "It is the strongest POKéMON known to\l"
	.string "man.\p"
	.string "No...\p"
	.string "I can not accept this. RED NECLACE,\n"
	.string "give GIRATINA the power to continue\l"
	.string "battle!$"

SacredMountain_Text_Giovanni_Giratina_Kills_Giovanni::
# 360 "data/maps/SacredMountain_Peak/scripts.pory"
	.string "Huh? GIRATINA?\p"
	.string "What are you doing?\p"
	.string "No stop...$"
