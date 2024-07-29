AquasHideout_2F_MapScripts::
	.byte 0


AquasHideout_2F_EventScript_DiveMachine::
# 8 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 1
# 9 "data/maps/AquasHideout_2F/scripts.pory"
	setflag FLAG_ITEM_DIVE_MACHINE
# 10 "data/maps/AquasHideout_2F/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_DIVE
# 11 "data/maps/AquasHideout_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 12 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_DiveMachine
# 13 "data/maps/AquasHideout_2F/scripts.pory"
	waitfanfare
# 14 "data/maps/AquasHideout_2F/scripts.pory"
	waitbuttonpress
# 15 "data/maps/AquasHideout_2F/scripts.pory"
	closemessage
	return


AquasHideout_2F_EventScript_Archie::
# 19 "data/maps/AquasHideout_2F/scripts.pory"
	lockall
# 20 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_Archie_PreBattel
# 21 "data/maps/AquasHideout_2F/scripts.pory"
	waitmessage
# 22 "data/maps/AquasHideout_2F/scripts.pory"
	closemessage
# 23 "data/maps/AquasHideout_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE_AQUA_HQ, AquasHideout_2F_Text_Archie_Defeat
# 24 "data/maps/AquasHideout_2F/scripts.pory"
	msgbox AquasHideout_2F_Text_Archie_PostBattel
# 25 "data/maps/AquasHideout_2F/scripts.pory"
	giveitem ITEM_BLUE_ORB
# 26 "data/maps/AquasHideout_2F/scripts.pory"
	waitse
# 27 "data/maps/AquasHideout_2F/scripts.pory"
	waitmessage
# 28 "data/maps/AquasHideout_2F/scripts.pory"
	closemessage
# 29 "data/maps/AquasHideout_2F/scripts.pory"
	setflag FLAG_AQUA_LEFT_HIDEOUT
# 30 "data/maps/AquasHideout_2F/scripts.pory"
	call AquasHideout_2F_RemoveAqua
# 31 "data/maps/AquasHideout_2F/scripts.pory"
	releaseall
	end


AquasHideout_2F_RemoveAqua::
# 36 "data/maps/AquasHideout_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/maps/AquasHideout_2F/scripts.pory"
	playse SE_EXIT
# 38 "data/maps/AquasHideout_2F/scripts.pory"
	waitse
# 40 "data/maps/AquasHideout_2F/scripts.pory"
	removeobject 2
# 42 "data/maps/AquasHideout_2F/scripts.pory"
	setvar VAR_ROUTE203_CAVE_STATE, 1
# 43 "data/maps/AquasHideout_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


AquasHideout_2F_Text_DiveMachine::
# 47 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Obtained DIVE MACHINE!$"

AquasHideout_2F_Text_Archie_PreBattel::
# 52 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Lorem ipsum dolor sit amet, consectetur\n"
	.string "adipiscing elit, sed do eiusmod tempor\l"
	.string "incididunt ut labore et dolore magna\l"
	.string "aliqua.$"

AquasHideout_2F_Text_Archie_PostBattel::
# 57 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Lorem ipsum dolor sit amet, consectetur\n"
	.string "adipiscing elit, sed do eiusmod tempor\l"
	.string "incididunt ut labore et dolore magna\l"
	.string "aliqua.$"

AquasHideout_2F_Text_Archie_Defeat::
# 62 "data/maps/AquasHideout_2F/scripts.pory"
	.string "Lorem ipsum dolor sit amet, consectetur\n"
	.string "adipiscing elit, sed do eiusmod tempor\l"
	.string "incididunt ut labore et dolore magna\l"
	.string "aliqua.$"
