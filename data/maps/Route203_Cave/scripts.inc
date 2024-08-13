Route203_Cave_MapScripts::
# 14 "data/maps/Route203_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route203_Cave_OnTransition
	.byte 0


Route203_Cave_OnTransition::
# 18 "data/maps/Route203_Cave/scripts.pory"
	goto_if_unset FLAG_AQUA_LEFT_ROUTE_203_CAVE, Route203_Cave_OnTransition_2
# 23 "data/maps/Route203_Cave/scripts.pory"
	goto_if_set FLAG_AQUA_LEFT_ROUTE_203_CAVE, Route203_Cave_OnTransition_4
Route203_Cave_OnTransition_1:
	end

Route203_Cave_OnTransition_2:
# 20 "data/maps/Route203_Cave/scripts.pory"
	setflag FLAG_HIDE_ROCK_SMASH_MACHINE
# 21 "data/maps/Route203_Cave/scripts.pory"
	removeobject 20
	goto Route203_Cave_OnTransition_1

Route203_Cave_OnTransition_3:
# 25 "data/maps/Route203_Cave/scripts.pory"
	clearflag FLAG_HIDE_ROCK_SMASH_MACHINE
# 26 "data/maps/Route203_Cave/scripts.pory"
	addobject 20
	goto Route203_Cave_OnTransition_1

Route203_Cave_OnTransition_4:
# 23 "data/maps/Route203_Cave/scripts.pory"
	goto_if_unset FLAG_PLAYER_CAN_USE_ROCK_SMASH, Route203_Cave_OnTransition_3
	goto Route203_Cave_OnTransition_1


Route203_Cave_EventScript_NpcRockSmash::
# 32 "data/maps/Route203_Cave/scripts.pory"
	random 100
# 33 "data/maps/Route203_Cave/scripts.pory"
	goto_if_unset FLAG_AQUA_LEFT_ROUTE_203_CAVE, Route203_Cave_EventScript_NpcRockSmash_2
	return

Route203_Cave_EventScript_NpcRockSmash_1:
# 35 "data/maps/Route203_Cave/scripts.pory"
	playse SE_M_ROCK_THROW
	return

Route203_Cave_EventScript_NpcRockSmash_2:
# 33 "data/maps/Route203_Cave/scripts.pory"
	compare VAR_RESULT, 50
	goto_if_lt Route203_Cave_EventScript_NpcRockSmash_1
	return


Route203_Cave_EventScript_AdminFight::
# 40 "data/maps/Route203_Cave/scripts.pory"
	lock
# 41 "data/maps/Route203_Cave/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 42 "data/maps/Route203_Cave/scripts.pory"
	playse SE_PIN
# 43 "data/maps/Route203_Cave/scripts.pory"
	applymovement 19, Common_Movement_ExclamationMark
# 44 "data/maps/Route203_Cave/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route203_Cave/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 46 "data/maps/Route203_Cave/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route203_Cave/scripts.pory"
	applymovement 19, Route203_Cave_Movement_AquaAdmin
# 48 "data/maps/Route203_Cave/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaAdmin_PreBattle
# 50 "data/maps/Route203_Cave/scripts.pory"
	waitmessage
# 51 "data/maps/Route203_Cave/scripts.pory"
	closemessage
# 52 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_no_intro TRAINER_AQUA_ADMIN_ROUTE203_CAVE, Route203_Cave_Text_AquaAdmin_Defeat
# 54 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaAdmin_PostBattle
# 55 "data/maps/Route203_Cave/scripts.pory"
	waitmessage
# 56 "data/maps/Route203_Cave/scripts.pory"
	closemessage
# 58 "data/maps/Route203_Cave/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data/maps/Route203_Cave/scripts.pory"
	playse SE_EXIT
# 60 "data/maps/Route203_Cave/scripts.pory"
	waitse
# 61 "data/maps/Route203_Cave/scripts.pory"
	removeobject 1
# 62 "data/maps/Route203_Cave/scripts.pory"
	removeobject 2
# 63 "data/maps/Route203_Cave/scripts.pory"
	removeobject 3
# 64 "data/maps/Route203_Cave/scripts.pory"
	removeobject 13
# 65 "data/maps/Route203_Cave/scripts.pory"
	removeobject 14
# 66 "data/maps/Route203_Cave/scripts.pory"
	removeobject 15
# 67 "data/maps/Route203_Cave/scripts.pory"
	removeobject 16
# 68 "data/maps/Route203_Cave/scripts.pory"
	removeobject 17
# 69 "data/maps/Route203_Cave/scripts.pory"
	removeobject 18
# 70 "data/maps/Route203_Cave/scripts.pory"
	removeobject 19
# 71 "data/maps/Route203_Cave/scripts.pory"
	setflag FLAG_AQUA_LEFT_ROUTE_203_CAVE
# 72 "data/maps/Route203_Cave/scripts.pory"
	setvar VAR_ROUTE203_CAVE_STATE, 1
# 73 "data/maps/Route203_Cave/scripts.pory"
	setvar VAR_LEVEL_CAP, 40
# 74 "data/maps/Route203_Cave/scripts.pory"
	clearflag FLAG_HIDE_ROCK_SMASH_MACHINE
# 75 "data/maps/Route203_Cave/scripts.pory"
	addobject 20
# 76 "data/maps/Route203_Cave/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 78 "data/maps/Route203_Cave/scripts.pory"
	release
	end


Route203_Cave_EventScript_RockSmashMachine::
# 83 "data/maps/Route203_Cave/scripts.pory"
	removeobject 20
# 84 "data/maps/Route203_Cave/scripts.pory"
	setflag FLAG_ITEM_ROCK_SMASH_MACHINE
# 85 "data/maps/Route203_Cave/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_ROCK_SMASH
# 86 "data/maps/Route203_Cave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 87 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_RockSmashMachine
# 88 "data/maps/Route203_Cave/scripts.pory"
	waitfanfare
# 89 "data/maps/Route203_Cave/scripts.pory"
	waitbuttonpress
# 90 "data/maps/Route203_Cave/scripts.pory"
	closemessage
	return


Route203_Cave_EventScript_AquaGrunt_Working::
# 94 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt_Working, MSGBOX_SIGN
	return


Route203_Cave_EventScript_AquaGrunt_1::
# 98 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_1, Route203_Cave_Text_AquaGrunt1_Intro, Route203_Cave_Text_AquaGrunt1_Defeat
# 99 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt1_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_2::
# 103 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_2, Route203_Cave_Text_AquaGrunt2_Intro, Route203_Cave_Text_AquaGrunt2_Defeat
# 104 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt2_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_3::
# 108 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_3, Route203_Cave_Text_AquaGrunt3_Intro, Route203_Cave_Text_AquaGrunt3_Defeat
# 109 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt3_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_4::
# 113 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_4, Route203_Cave_Text_AquaGrunt4_Intro, Route203_Cave_Text_AquaGrunt4_Defeat
# 114 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt4_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_5::
# 118 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_5, Route203_Cave_Text_AquaGrunt5_Intro, Route203_Cave_Text_AquaGrunt5_Defeat
# 119 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt5_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_6::
# 123 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_6, Route203_Cave_Text_AquaGrunt6_Intro, Route203_Cave_Text_AquaGrunt6_Defeat
# 124 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt6_PostBattle, MSGBOX_AUTOCLOSE
	return


# 240 "data/maps/Route203_Cave/scripts.pory"
Route203_Cave_Movement_AquaAdmin:
# 241 "data/maps/Route203_Cave/scripts.pory"
	walk_right
# 242 "data/maps/Route203_Cave/scripts.pory"
	walk_up
# 242 "data/maps/Route203_Cave/scripts.pory"
	walk_up
	step_end

Route203_Cave_Text_AquaGrunt1_Intro::
# 128 "data/maps/Route203_Cave/scripts.pory"
	.string "Intro$"

Route203_Cave_Text_AquaGrunt1_Defeat::
# 133 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaGrunt1_PostBattle::
# 138 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_AquaGrunt2_Intro::
# 143 "data/maps/Route203_Cave/scripts.pory"
	.string "Intro$"

Route203_Cave_Text_AquaGrunt2_Defeat::
# 148 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaGrunt2_PostBattle::
# 153 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_AquaGrunt3_Intro::
# 158 "data/maps/Route203_Cave/scripts.pory"
	.string "Intro$"

Route203_Cave_Text_AquaGrunt3_Defeat::
# 163 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaGrunt3_PostBattle::
# 168 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_AquaGrunt4_Intro::
# 173 "data/maps/Route203_Cave/scripts.pory"
	.string "Intro$"

Route203_Cave_Text_AquaGrunt4_Defeat::
# 178 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaGrunt4_PostBattle::
# 183 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_AquaGrunt5_Intro::
# 188 "data/maps/Route203_Cave/scripts.pory"
	.string "Intro$"

Route203_Cave_Text_AquaGrunt5_Defeat::
# 193 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaGrunt5_PostBattle::
# 198 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_AquaGrunt6_Intro::
# 203 "data/maps/Route203_Cave/scripts.pory"
	.string "Intro$"

Route203_Cave_Text_AquaGrunt6_Defeat::
# 208 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaGrunt6_PostBattle::
# 213 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_AquaGrunt_Working::
# 217 "data/maps/Route203_Cave/scripts.pory"
	.string "Can't you see that I'm working.$"

Route203_Cave_Text_AquaAdmin_PreBattle::
# 222 "data/maps/Route203_Cave/scripts.pory"
	.string "Admin...$"

Route203_Cave_Text_AquaAdmin_Defeat::
# 227 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaAdmin_PostBattle::
# 232 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_RockSmashMachine::
# 236 "data/maps/Route203_Cave/scripts.pory"
	.string "Obtained ROCK SMASH MACHINE!$"
