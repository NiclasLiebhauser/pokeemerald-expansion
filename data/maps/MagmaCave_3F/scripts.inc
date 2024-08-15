MagmaCave_3F_MapScripts::
# 5 "data/maps/MagmaCave_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MagmaCave_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MagmaCave_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/MagmaCave_3F/scripts.pory"
	map_script_2 VAR_STEP_COUNTER, 0, MagmaCave_3F_ShowRedOrbInteract
	.2byte 0


MagmaCave_3F_ShowRedOrbInteract::
# 11 "data/maps/MagmaCave_3F/scripts.pory"
	goto_if_unset FLAG_RED_ORB_RECEIVED, MagmaCave_3F_ShowRedOrbInteract_2
MagmaCave_3F_ShowRedOrbInteract_1:
# 19 "data/maps/MagmaCave_3F/scripts.pory"
	addvar VAR_STEP_COUNTER, 1
	end

MagmaCave_3F_ShowRedOrbInteract_2:
# 13 "data/maps/MagmaCave_3F/scripts.pory"
	getplayerxy VAR_TEMP_A, VAR_TEMP_B
# 14 "data/maps/MagmaCave_3F/scripts.pory"
	compare VAR_TEMP_B, 18
	goto_if_ge MagmaCave_3F_ShowRedOrbInteract_4
	goto MagmaCave_3F_ShowRedOrbInteract_1

MagmaCave_3F_ShowRedOrbInteract_4:
# 16 "data/maps/MagmaCave_3F/scripts.pory"
	dofieldeffectsparkle 28, 26, 0
	goto MagmaCave_3F_ShowRedOrbInteract_1


MagmaCave_3F_Evenscript_Maxie::
# 24 "data/maps/MagmaCave_3F/scripts.pory"
	lock
# 25 "data/maps/MagmaCave_3F/scripts.pory"
	faceplayer
# 26 "data/maps/MagmaCave_3F/scripts.pory"
	call_if_set FLAG_RED_ORB_RECEIVED, MagmaCave_3F_BattleMaxie
# 27 "data/maps/MagmaCave_3F/scripts.pory"
	msgbox MagmaCave_3F_Evenscript_Maxie_Text_0
# 28 "data/maps/MagmaCave_3F/scripts.pory"
	waitmessage
# 29 "data/maps/MagmaCave_3F/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 30 "data/maps/MagmaCave_3F/scripts.pory"
	waitmovement 0
# 31 "data/maps/MagmaCave_3F/scripts.pory"
	release
	end


MagmaCave_3F_Evenscript_StealRedOrb::
# 36 "data/maps/MagmaCave_3F/scripts.pory"
	lock
# 37 "data/maps/MagmaCave_3F/scripts.pory"
	msgbox MagmaCave_3F_Text_RedOrb, MSGBOX_YESNO
# 38 "data/maps/MagmaCave_3F/scripts.pory"
	call_if_eq VAR_RESULT, YES, MagmaCave_3F_Evenscript_RedOrbTaken
# 39 "data/maps/MagmaCave_3F/scripts.pory"
	release
	end


MagmaCave_3F_Evenscript_RedOrbTaken::
# 44 "data/maps/MagmaCave_3F/scripts.pory"
	setflag FLAG_RED_ORB_RECEIVED
# 45 "data/maps/MagmaCave_3F/scripts.pory"
	giveitem ITEM_RED_ORB_OFF
# 46 "data/maps/MagmaCave_3F/scripts.pory"
	playse SE_PIN
# 47 "data/maps/MagmaCave_3F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 48 "data/maps/MagmaCave_3F/scripts.pory"
	playse SE_PIN
# 49 "data/maps/MagmaCave_3F/scripts.pory"
	waitse
# 50 "data/maps/MagmaCave_3F/scripts.pory"
	applymovement 1, MagmaCave_3F_Movement_MaxieApproach
# 51 "data/maps/MagmaCave_3F/scripts.pory"
	waitmovement 0
# 52 "data/maps/MagmaCave_3F/scripts.pory"
	call MagmaCave_3F_BattleMaxie
# 54 "data/maps/MagmaCave_3F/scripts.pory"
	release
	end


MagmaCave_3F_BattleMaxie::
# 59 "data/maps/MagmaCave_3F/scripts.pory"
	msgbox MagmaCave_3F_Text_MaxieCaught
# 60 "data/maps/MagmaCave_3F/scripts.pory"
	waitmessage
# 61 "data/maps/MagmaCave_3F/scripts.pory"
	closemessage
# 62 "data/maps/MagmaCave_3F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HQ, MagmaCave_3F_Text_MaxieDefeated
# 63 "data/maps/MagmaCave_3F/scripts.pory"
	call MagmaCave_3F_MaxieDefeated
# 65 "data/maps/MagmaCave_3F/scripts.pory"
	release
	end


MagmaCave_3F_MaxieDefeated::
# 70 "data/maps/MagmaCave_3F/scripts.pory"
	msgbox MagmaCave_3F_Text_MaxiePostBattle
# 71 "data/maps/MagmaCave_3F/scripts.pory"
	waitmessage
# 72 "data/maps/MagmaCave_3F/scripts.pory"
	closemessage
# 74 "data/maps/MagmaCave_3F/scripts.pory"
	setflag FLAG_MAGMA_LEFT_HIDEOUT
# 75 "data/maps/MagmaCave_3F/scripts.pory"
	call MagmaCave_3F_RemoveMagma
# 76 "data/maps/MagmaCave_3F/scripts.pory"
	setvar VAR_LEVEL_CAP, 50
# 78 "data/maps/MagmaCave_3F/scripts.pory"
	release
	end


MagmaCave_3F_RemoveMagma::
# 83 "data/maps/MagmaCave_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 84 "data/maps/MagmaCave_3F/scripts.pory"
	playse SE_EXIT
# 85 "data/maps/MagmaCave_3F/scripts.pory"
	waitse
# 87 "data/maps/MagmaCave_3F/scripts.pory"
	removeobject 1
# 88 "data/maps/MagmaCave_3F/scripts.pory"
	removeobject 2
# 90 "data/maps/MagmaCave_3F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


# 111 "data/maps/MagmaCave_3F/scripts.pory"
MagmaCave_3F_Movement_MaxieApproach:
# 112 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 112 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 112 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 113 "data/maps/MagmaCave_3F/scripts.pory"
	walk_left
# 114 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 114 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 114 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 114 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 115 "data/maps/MagmaCave_3F/scripts.pory"
	walk_left
# 116 "data/maps/MagmaCave_3F/scripts.pory"
	face_player
	step_end

MagmaCave_3F_Evenscript_Maxie_Text_0:
# 27 "data/maps/MagmaCave_3F/scripts.pory"
	.string "I am studying the magma. Go away.$"

MagmaCave_3F_Text_RedOrb::
# 94 "data/maps/MagmaCave_3F/scripts.pory"
	.string "You see a Red Orb inside this machine.\n"
	.string "Do you want to take it?$"

MagmaCave_3F_Text_MaxieCaught::
# 98 "data/maps/MagmaCave_3F/scripts.pory"
	.string "Hey! I saw that. Give me back my Red Orb.$"

MagmaCave_3F_Text_MaxieDefeated::
# 102 "data/maps/MagmaCave_3F/scripts.pory"
	.string "Defeated by a kid again...\n"
	.string "What shall now become of my ambitions.$"

MagmaCave_3F_Text_MaxiePostBattle::
# 107 "data/maps/MagmaCave_3F/scripts.pory"
	.string "Post$"
