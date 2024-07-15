Route203_Cave_MapScripts::
# 14 "data/maps/Route203_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route203_Cave_OnTransition
	.byte 0


Route203_Cave_OnTransition::
# 18 "data/maps/Route203_Cave/scripts.pory"
	goto_if_unset FLAG_AQUA_LEFT_ROUTE_203_CAVE, Route203_Cave_OnTransition_2
Route203_Cave_OnTransition_1:
	end

Route203_Cave_OnTransition_2:
# 20 "data/maps/Route203_Cave/scripts.pory"
	hideobjectat 20, MAP_ROUTE203_CAVE
	goto Route203_Cave_OnTransition_1


Route203_Cave_EventScript_AdminFight::
# 26 "data/maps/Route203_Cave/scripts.pory"
	lock
# 27 "data/maps/Route203_Cave/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 28 "data/maps/Route203_Cave/scripts.pory"
	playse SE_PIN
# 29 "data/maps/Route203_Cave/scripts.pory"
	applymovement 19, Common_Movement_ExclamationMark
# 30 "data/maps/Route203_Cave/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route203_Cave/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 32 "data/maps/Route203_Cave/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route203_Cave/scripts.pory"
	applymovement 19, Route203_Cave_Movement_AquaAdmin
# 34 "data/maps/Route203_Cave/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaAdmin_PreBattle
# 36 "data/maps/Route203_Cave/scripts.pory"
	waitmessage
# 37 "data/maps/Route203_Cave/scripts.pory"
	closemessage
# 38 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_no_intro TRAINER_AQUA_ADMIN_ROUTE203_CAVE, Route203_Cave_Text_AquaAdmin_Defeat
# 40 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaAdmin_PostBattle
# 41 "data/maps/Route203_Cave/scripts.pory"
	waitmessage
# 42 "data/maps/Route203_Cave/scripts.pory"
	closemessage
# 44 "data/maps/Route203_Cave/scripts.pory"
	fadescreen FADE_TO_BLACK
# 45 "data/maps/Route203_Cave/scripts.pory"
	playse SE_EXIT
# 46 "data/maps/Route203_Cave/scripts.pory"
	waitse
# 47 "data/maps/Route203_Cave/scripts.pory"
	removeobject 1
# 48 "data/maps/Route203_Cave/scripts.pory"
	removeobject 2
# 49 "data/maps/Route203_Cave/scripts.pory"
	removeobject 3
# 50 "data/maps/Route203_Cave/scripts.pory"
	removeobject 13
# 51 "data/maps/Route203_Cave/scripts.pory"
	removeobject 14
# 52 "data/maps/Route203_Cave/scripts.pory"
	removeobject 15
# 53 "data/maps/Route203_Cave/scripts.pory"
	removeobject 16
# 54 "data/maps/Route203_Cave/scripts.pory"
	removeobject 17
# 55 "data/maps/Route203_Cave/scripts.pory"
	removeobject 18
# 56 "data/maps/Route203_Cave/scripts.pory"
	removeobject 19
# 57 "data/maps/Route203_Cave/scripts.pory"
	setflag FLAG_AQUA_LEFT_ROUTE_203_CAVE
# 58 "data/maps/Route203_Cave/scripts.pory"
	setvar VAR_ROUTE203_CAVE_STATE, 1
# 59 "data/maps/Route203_Cave/scripts.pory"
	showobjectat 20, MAP_ROUTE203_CAVE
# 60 "data/maps/Route203_Cave/scripts.pory"
	fadescreen FADE_FROM_BLACK
	end


Route203_Cave_EventScript_RockSmashMachine::
# 66 "data/maps/Route203_Cave/scripts.pory"
	removeobject 20
# 67 "data/maps/Route203_Cave/scripts.pory"
	setflag FLAG_ITEM_ROCK_SMASH_MACHINE
# 68 "data/maps/Route203_Cave/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_ROCK_SMASH
# 69 "data/maps/Route203_Cave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 70 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_RockSmashMachine
# 71 "data/maps/Route203_Cave/scripts.pory"
	waitfanfare
# 72 "data/maps/Route203_Cave/scripts.pory"
	waitbuttonpress
# 73 "data/maps/Route203_Cave/scripts.pory"
	closemessage
	return


Route203_Cave_EventScript_AquaGrunt_Working::
# 77 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt_Working, MSGBOX_SIGN
	return


Route203_Cave_EventScript_AquaGrunt_1::
# 81 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_1, Route203_Cave_Text_AquaGrunt1_Intro, Route203_Cave_Text_AquaGrunt1_Defeat
# 82 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt1_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_2::
# 86 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_2, Route203_Cave_Text_AquaGrunt2_Intro, Route203_Cave_Text_AquaGrunt2_Defeat
# 87 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt2_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_3::
# 91 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_3, Route203_Cave_Text_AquaGrunt3_Intro, Route203_Cave_Text_AquaGrunt3_Defeat
# 92 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt3_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_4::
# 96 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_4, Route203_Cave_Text_AquaGrunt4_Intro, Route203_Cave_Text_AquaGrunt4_Defeat
# 97 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt4_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_5::
# 101 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_5, Route203_Cave_Text_AquaGrunt5_Intro, Route203_Cave_Text_AquaGrunt5_Defeat
# 102 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt5_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_6::
# 106 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_6, Route203_Cave_Text_AquaGrunt6_Intro, Route203_Cave_Text_AquaGrunt6_Defeat
# 107 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt6_PostBattle, MSGBOX_AUTOCLOSE
	return


# 223 "data/maps/Route203_Cave/scripts.pory"
Route203_Cave_Movement_AquaAdmin:
# 224 "data/maps/Route203_Cave/scripts.pory"
	walk_right
# 225 "data/maps/Route203_Cave/scripts.pory"
	walk_up
# 225 "data/maps/Route203_Cave/scripts.pory"
	walk_up
	step_end

Route203_Cave_Text_AquaGrunt1_Intro::
# 111 "data/maps/Route203_Cave/scripts.pory"
	.string "Intro$"

Route203_Cave_Text_AquaGrunt1_Defeat::
# 116 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaGrunt1_PostBattle::
# 121 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_AquaGrunt2_Intro::
# 126 "data/maps/Route203_Cave/scripts.pory"
	.string "Intro$"

Route203_Cave_Text_AquaGrunt2_Defeat::
# 131 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaGrunt2_PostBattle::
# 136 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_AquaGrunt3_Intro::
# 141 "data/maps/Route203_Cave/scripts.pory"
	.string "Intro$"

Route203_Cave_Text_AquaGrunt3_Defeat::
# 146 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaGrunt3_PostBattle::
# 151 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_AquaGrunt4_Intro::
# 156 "data/maps/Route203_Cave/scripts.pory"
	.string "Intro$"

Route203_Cave_Text_AquaGrunt4_Defeat::
# 161 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaGrunt4_PostBattle::
# 166 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_AquaGrunt5_Intro::
# 171 "data/maps/Route203_Cave/scripts.pory"
	.string "Intro$"

Route203_Cave_Text_AquaGrunt5_Defeat::
# 176 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaGrunt5_PostBattle::
# 181 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_AquaGrunt6_Intro::
# 186 "data/maps/Route203_Cave/scripts.pory"
	.string "Intro$"

Route203_Cave_Text_AquaGrunt6_Defeat::
# 191 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaGrunt6_PostBattle::
# 196 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_AquaGrunt_Working::
# 200 "data/maps/Route203_Cave/scripts.pory"
	.string "Can't you see that I'm working.$"

Route203_Cave_Text_AquaAdmin_PreBattle::
# 205 "data/maps/Route203_Cave/scripts.pory"
	.string "Admin...$"

Route203_Cave_Text_AquaAdmin_Defeat::
# 210 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaAdmin_PostBattle::
# 215 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_RockSmashMachine::
# 219 "data/maps/Route203_Cave/scripts.pory"
	.string "Obtained ROCK SMASH MACHINE!$"
