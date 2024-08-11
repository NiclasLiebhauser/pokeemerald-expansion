MagmaCave_3F_MapScripts::
	.byte 0


MagmaCave_3F_Evenscript_Maxie::
# 7 "data/maps/MagmaCave_3F/scripts.pory"
	lock
# 8 "data/maps/MagmaCave_3F/scripts.pory"
	faceplayer
# 9 "data/maps/MagmaCave_3F/scripts.pory"
	call_if_set FLAG_RED_ORB_RECEIVED, MagmaCave_3F_BattleMaxie
# 10 "data/maps/MagmaCave_3F/scripts.pory"
	msgbox MagmaCave_3F_Evenscript_Maxie_Text_0
# 11 "data/maps/MagmaCave_3F/scripts.pory"
	waitmessage
# 12 "data/maps/MagmaCave_3F/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 13 "data/maps/MagmaCave_3F/scripts.pory"
	waitmovement 0
# 14 "data/maps/MagmaCave_3F/scripts.pory"
	release
	end


MagmaCave_3F_Evenscript_StealRedOrb::
# 19 "data/maps/MagmaCave_3F/scripts.pory"
	lock
# 20 "data/maps/MagmaCave_3F/scripts.pory"
	msgbox MagmaCave_3F_Text_RedOrb, MSGBOX_YESNO
# 21 "data/maps/MagmaCave_3F/scripts.pory"
	call_if_eq VAR_RESULT, YES, MagmaCave_3F_Evenscript_RedOrbTaken
# 22 "data/maps/MagmaCave_3F/scripts.pory"
	release
	end


MagmaCave_3F_Evenscript_RedOrbTaken::
# 27 "data/maps/MagmaCave_3F/scripts.pory"
	setflag FLAG_RED_ORB_RECEIVED
# 28 "data/maps/MagmaCave_3F/scripts.pory"
	giveitem ITEM_RED_ORB
# 29 "data/maps/MagmaCave_3F/scripts.pory"
	playse SE_PIN
# 30 "data/maps/MagmaCave_3F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 31 "data/maps/MagmaCave_3F/scripts.pory"
	playse SE_PIN
# 32 "data/maps/MagmaCave_3F/scripts.pory"
	waitse
# 33 "data/maps/MagmaCave_3F/scripts.pory"
	applymovement 1, MagmaCave_3F_Movement_MaxieApproach
# 34 "data/maps/MagmaCave_3F/scripts.pory"
	waitmovement 0
# 35 "data/maps/MagmaCave_3F/scripts.pory"
	call MagmaCave_3F_BattleMaxie
# 37 "data/maps/MagmaCave_3F/scripts.pory"
	release
	end


MagmaCave_3F_BattleMaxie::
# 42 "data/maps/MagmaCave_3F/scripts.pory"
	msgbox MagmaCave_3F_Text_MaxieCaught
# 43 "data/maps/MagmaCave_3F/scripts.pory"
	waitmessage
# 44 "data/maps/MagmaCave_3F/scripts.pory"
	closemessage
# 45 "data/maps/MagmaCave_3F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HQ, MagmaCave_3F_Text_MaxieDefeated
# 46 "data/maps/MagmaCave_3F/scripts.pory"
	call MagmaCave_3F_MaxieDefeated
# 48 "data/maps/MagmaCave_3F/scripts.pory"
	release
	end


MagmaCave_3F_MaxieDefeated::
# 53 "data/maps/MagmaCave_3F/scripts.pory"
	msgbox MagmaCave_3F_Text_MaxiePostBattle
# 54 "data/maps/MagmaCave_3F/scripts.pory"
	waitmessage
# 55 "data/maps/MagmaCave_3F/scripts.pory"
	closemessage
# 57 "data/maps/MagmaCave_3F/scripts.pory"
	setflag FLAG_MAGMA_LEFT_HIDEOUT
# 58 "data/maps/MagmaCave_3F/scripts.pory"
	call MagmaCave_3F_RemoveMagma
# 59 "data/maps/MagmaCave_3F/scripts.pory"
	setvar VAR_LEVEL_CAP, 45
# 61 "data/maps/MagmaCave_3F/scripts.pory"
	release
	end


MagmaCave_3F_RemoveMagma::
# 66 "data/maps/MagmaCave_3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 67 "data/maps/MagmaCave_3F/scripts.pory"
	playse SE_EXIT
# 68 "data/maps/MagmaCave_3F/scripts.pory"
	waitse
# 70 "data/maps/MagmaCave_3F/scripts.pory"
	removeobject 1
# 71 "data/maps/MagmaCave_3F/scripts.pory"
	removeobject 2
# 73 "data/maps/MagmaCave_3F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


# 94 "data/maps/MagmaCave_3F/scripts.pory"
MagmaCave_3F_Movement_MaxieApproach:
# 95 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 95 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 95 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 96 "data/maps/MagmaCave_3F/scripts.pory"
	walk_left
# 97 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 97 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 97 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 97 "data/maps/MagmaCave_3F/scripts.pory"
	walk_down
# 98 "data/maps/MagmaCave_3F/scripts.pory"
	walk_left
# 99 "data/maps/MagmaCave_3F/scripts.pory"
	face_player
	step_end

MagmaCave_3F_Evenscript_Maxie_Text_0:
# 10 "data/maps/MagmaCave_3F/scripts.pory"
	.string "I am studying the magma. Go away.$"

MagmaCave_3F_Text_RedOrb::
# 77 "data/maps/MagmaCave_3F/scripts.pory"
	.string "You see a Red Orb inside this machine.\n"
	.string "Do you want to take it?$"

MagmaCave_3F_Text_MaxieCaught::
# 81 "data/maps/MagmaCave_3F/scripts.pory"
	.string "Hey! I saw that. Give me back my Red Orb.$"

MagmaCave_3F_Text_MaxieDefeated::
# 85 "data/maps/MagmaCave_3F/scripts.pory"
	.string "Defeated by a kid again...\n"
	.string "What shall now become of my ambitions.$"

MagmaCave_3F_Text_MaxiePostBattle::
# 90 "data/maps/MagmaCave_3F/scripts.pory"
	.string "Post$"
