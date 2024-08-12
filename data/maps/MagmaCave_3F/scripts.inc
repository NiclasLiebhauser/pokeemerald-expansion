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
# 15 "data/maps/MagmaCave_3F/scripts.pory"
	addvar VAR_STEP_COUNTER, 1
	end

MagmaCave_3F_ShowRedOrbInteract_2:
# 13 "data/maps/MagmaCave_3F/scripts.pory"
	dofieldeffectsparkle 28, 26, 0
	goto MagmaCave_3F_ShowRedOrbInteract_1


MagmaCave_3F_Evenscript_Maxie::
# 20 "data/maps/MagmaCave_3F/scripts.pory"
	lock
# 21 "data/maps/MagmaCave_3F/scripts.pory"
	faceplayer
# 22 "data/maps/MagmaCave_3F/scripts.pory"
	call_if_set FLAG_RED_ORB_RECEIVED, MagmaCave_3F_BattleMaxie
# 23 "data/maps/MagmaCave_3F/scripts.pory"
	msgbox MagmaCave_3F_Evenscript_Maxie_Text_0
# 24 "data/maps/MagmaCave_3F/scripts.pory"
	waitmessage
# 25 "data/maps/MagmaCave_3F/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 26 "data/maps/MagmaCave_3F/scripts.pory"
	waitmovement 0
# 27 "data/maps/MagmaCave_3F/scripts.pory"
	release
	end


MagmaCave_3F_Evenscript_StealRedOrb::
# 32 "data/maps/MagmaCave_3F/scripts.pory"
	lock
# 33 "data/maps/MagmaCave_3F/scripts.pory"
	msgbox MagmaCave_3F_Text_RedOrb, MSGBOX_YESNO
# 34 "data/maps/MagmaCave_3F/scripts.pory"
	call_if_eq VAR_RESULT, YES, MagmaCave_3F_Evenscript_RedOrbTaken
# 35 "data/maps/MagmaCave_3F/scripts.pory"
	release
	end


MagmaCave_3F_Evenscript_RedOrbTaken::
# 40 "data/maps/MagmaCave_3F/scripts.pory"
	setflag FLAG_RED_ORB_RECEIVED
# 41 "data/maps/MagmaCave_3F/scripts.pory"
	giveitem ITEM_RED_ORB_OFF
# 42 "data/maps/MagmaCave_3F/scripts.pory"
	playse SE_PIN
# 43 "data/maps/MagmaCave_3F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 44 "data/maps/MagmaCave_3F/scripts.pory"
	playse SE_PIN
# 45 "data/maps/MagmaCave_3F/scripts.pory"
	waitse
# 46 "data/maps/MagmaCave_3F/scripts.pory"
	applymovement 1, MagmaCave_3F_Movement_MaxieApproach
# 47 "data/maps/MagmaCave_3F/scripts.pory"
	waitmovement 0
# 48 "data/maps/MagmaCave_3F/scripts.pory"
	call MagmaCave_3F_BattleMaxie
# 50 "data/maps/MagmaCave_3F/scripts.pory"
	release
	end


MagmaCave_3F_BattleMaxie::
# 55 "data/maps/MagmaCave_3F/scripts.pory"
	msgbox MagmaCave_3F_Text_MaxieCaught
# 56 "data/maps/MagmaCave_3F/scripts.pory"
	waitmessage
# 57 "data/maps/MagmaCave_3F/scripts.pory"
	closemessage
# 58 "data/maps/MagmaCave_3F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HQ, MagmaCave_3F_Text_MaxieDefeated
# 59 "data/maps/MagmaCave_3F/scripts.pory"
	call MagmaCave_3F_MaxieDefeated
# 61 "data/maps/MagmaCave_3F/scripts.pory"
	release
	end


MagmaCave_3F_MaxieDefeated::
# 66 "data/maps/MagmaCave_3F/scripts.pory"
	msgbox MagmaCave_3F_Text_MaxiePostBattle
# 67 "data/maps/MagmaCave_3F/scripts.pory"
	waitmessage
# 68 "data/maps/MagmaCave_3F/scripts.pory"
	closemessage
# 70 "data/maps/MagmaCave_3F/scripts.pory"
	setflag FLAG_MAGMA_LEFT_HIDEOUT
# 71 "data/maps/MagmaCave_3F/scripts.pory"
	call MagmaCave_3F_RemoveMagma
# 72 "data/maps/MagmaCave_3F/scripts.pory"
	setvar VAR_LEVEL_CAP, 50
# 74 "data/maps/MagmaCave_3F/scripts.pory"
	release
	end


MagmaCave_3F_RemoveMagma::
# 79 "data/maps/MagmaCave_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 80 "data/maps/MagmaCave_3F/scripts.pory"
	playse SE_EXIT
# 81 "data/maps/MagmaCave_3F/scripts.pory"
	waitse
# 83 "data/maps/MagmaCave_3F/scripts.pory"
	removeobject 1
# 84 "data/maps/MagmaCave_3F/scripts.pory"
	removeobject 2
# 86 "data/maps/MagmaCave_3F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


# 107 "data/maps/MagmaCave_3F/scripts.pory"
MagmaCave_3F_Movement_MaxieApproach:
# 108 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 108 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 108 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 109 "data/maps/MagmaCave_3F/scripts.pory"
	walk_left
# 110 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 110 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 110 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 110 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 111 "data/maps/MagmaCave_3F/scripts.pory"
	walk_left
# 112 "data/maps/MagmaCave_3F/scripts.pory"
	face_player
	step_end

MagmaCave_3F_Evenscript_Maxie_Text_0:
# 23 "data/maps/MagmaCave_3F/scripts.pory"
	.string "I am studying the magma. Go away.$"

MagmaCave_3F_Text_RedOrb::
# 90 "data/maps/MagmaCave_3F/scripts.pory"
	.string "You see a Red Orb inside this machine.\n"
	.string "Do you want to take it?$"

MagmaCave_3F_Text_MaxieCaught::
# 94 "data/maps/MagmaCave_3F/scripts.pory"
	.string "Hey! I saw that. Give me back my Red Orb.$"

MagmaCave_3F_Text_MaxieDefeated::
# 98 "data/maps/MagmaCave_3F/scripts.pory"
	.string "Defeated by a kid again...\n"
	.string "What shall now become of my ambitions.$"

MagmaCave_3F_Text_MaxiePostBattle::
# 103 "data/maps/MagmaCave_3F/scripts.pory"
	.string "Post$"
