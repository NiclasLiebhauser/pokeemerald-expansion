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


Route203_Cave_EventScript_NpcRockSmash::
# 26 "data/maps/Route203_Cave/scripts.pory"
	random 100
# 27 "data/maps/Route203_Cave/scripts.pory"
	goto_if_unset FLAG_AQUA_LEFT_ROUTE_203_CAVE, Route203_Cave_EventScript_NpcRockSmash_2
	return

Route203_Cave_EventScript_NpcRockSmash_1:
# 29 "data/maps/Route203_Cave/scripts.pory"
	playse SE_M_ROCK_THROW
	return

Route203_Cave_EventScript_NpcRockSmash_2:
# 27 "data/maps/Route203_Cave/scripts.pory"
	compare VAR_RESULT, 50
	goto_if_lt Route203_Cave_EventScript_NpcRockSmash_1
	return


Route203_Cave_EventScript_AdminFight::
# 34 "data/maps/Route203_Cave/scripts.pory"
	lock
# 35 "data/maps/Route203_Cave/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 36 "data/maps/Route203_Cave/scripts.pory"
	playse SE_PIN
# 37 "data/maps/Route203_Cave/scripts.pory"
	applymovement 19, Common_Movement_ExclamationMark
# 38 "data/maps/Route203_Cave/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route203_Cave/scripts.pory"
	applymovement 19, Common_Movement_Delay48
# 40 "data/maps/Route203_Cave/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route203_Cave/scripts.pory"
	applymovement 19, Route203_Cave_Movement_AquaAdmin
# 42 "data/maps/Route203_Cave/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaAdmin_PreBattle
# 44 "data/maps/Route203_Cave/scripts.pory"
	waitmessage
# 45 "data/maps/Route203_Cave/scripts.pory"
	closemessage
# 46 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_no_intro TRAINER_AQUA_ADMIN_ROUTE203_CAVE, Route203_Cave_Text_AquaAdmin_Defeat
# 48 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaAdmin_PostBattle
# 49 "data/maps/Route203_Cave/scripts.pory"
	waitmessage
# 50 "data/maps/Route203_Cave/scripts.pory"
	closemessage
# 52 "data/maps/Route203_Cave/scripts.pory"
	fadescreen FADE_TO_BLACK
# 53 "data/maps/Route203_Cave/scripts.pory"
	playse SE_EXIT
# 54 "data/maps/Route203_Cave/scripts.pory"
	waitse
# 55 "data/maps/Route203_Cave/scripts.pory"
	removeobject 1
# 56 "data/maps/Route203_Cave/scripts.pory"
	removeobject 2
# 57 "data/maps/Route203_Cave/scripts.pory"
	removeobject 3
# 58 "data/maps/Route203_Cave/scripts.pory"
	removeobject 13
# 59 "data/maps/Route203_Cave/scripts.pory"
	removeobject 14
# 60 "data/maps/Route203_Cave/scripts.pory"
	removeobject 15
# 61 "data/maps/Route203_Cave/scripts.pory"
	removeobject 16
# 62 "data/maps/Route203_Cave/scripts.pory"
	removeobject 17
# 63 "data/maps/Route203_Cave/scripts.pory"
	removeobject 18
# 64 "data/maps/Route203_Cave/scripts.pory"
	removeobject 19
# 65 "data/maps/Route203_Cave/scripts.pory"
	setflag FLAG_AQUA_LEFT_ROUTE_203_CAVE
# 66 "data/maps/Route203_Cave/scripts.pory"
	setvar VAR_ROUTE203_CAVE_STATE, 1
# 67 "data/maps/Route203_Cave/scripts.pory"
	showobjectat 20, MAP_ROUTE203_CAVE
# 68 "data/maps/Route203_Cave/scripts.pory"
	fadescreen FADE_FROM_BLACK
	end


Route203_Cave_EventScript_RockSmashMachine::
# 74 "data/maps/Route203_Cave/scripts.pory"
	removeobject 20
# 75 "data/maps/Route203_Cave/scripts.pory"
	setflag FLAG_ITEM_ROCK_SMASH_MACHINE
# 76 "data/maps/Route203_Cave/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_ROCK_SMASH
# 77 "data/maps/Route203_Cave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 78 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_RockSmashMachine
# 79 "data/maps/Route203_Cave/scripts.pory"
	waitfanfare
# 80 "data/maps/Route203_Cave/scripts.pory"
	waitbuttonpress
# 81 "data/maps/Route203_Cave/scripts.pory"
	closemessage
	return


Route203_Cave_EventScript_AquaGrunt_Working::
# 85 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt_Working, MSGBOX_SIGN
	return


Route203_Cave_EventScript_AquaGrunt_1::
# 89 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_1, Route203_Cave_Text_AquaGrunt1_Intro, Route203_Cave_Text_AquaGrunt1_Defeat
# 90 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt1_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_2::
# 94 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_2, Route203_Cave_Text_AquaGrunt2_Intro, Route203_Cave_Text_AquaGrunt2_Defeat
# 95 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt2_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_3::
# 99 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_3, Route203_Cave_Text_AquaGrunt3_Intro, Route203_Cave_Text_AquaGrunt3_Defeat
# 100 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt3_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_4::
# 104 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_4, Route203_Cave_Text_AquaGrunt4_Intro, Route203_Cave_Text_AquaGrunt4_Defeat
# 105 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt4_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_5::
# 109 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_5, Route203_Cave_Text_AquaGrunt5_Intro, Route203_Cave_Text_AquaGrunt5_Defeat
# 110 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt5_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_6::
# 114 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_6, Route203_Cave_Text_AquaGrunt6_Intro, Route203_Cave_Text_AquaGrunt6_Defeat
# 115 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt6_PostBattle, MSGBOX_AUTOCLOSE
	return


# 231 "data/maps/Route203_Cave/scripts.pory"
Route203_Cave_Movement_AquaAdmin:
# 232 "data/maps/Route203_Cave/scripts.pory"
	walk_right
# 233 "data/maps/Route203_Cave/scripts.pory"
	walk_up
# 233 "data/maps/Route203_Cave/scripts.pory"
	walk_up
	step_end

Route203_Cave_Text_AquaGrunt1_Intro::
# 119 "data/maps/Route203_Cave/scripts.pory"
	.string "Intro$"

Route203_Cave_Text_AquaGrunt1_Defeat::
# 124 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaGrunt1_PostBattle::
# 129 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_AquaGrunt2_Intro::
# 134 "data/maps/Route203_Cave/scripts.pory"
	.string "Intro$"

Route203_Cave_Text_AquaGrunt2_Defeat::
# 139 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaGrunt2_PostBattle::
# 144 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_AquaGrunt3_Intro::
# 149 "data/maps/Route203_Cave/scripts.pory"
	.string "Intro$"

Route203_Cave_Text_AquaGrunt3_Defeat::
# 154 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaGrunt3_PostBattle::
# 159 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_AquaGrunt4_Intro::
# 164 "data/maps/Route203_Cave/scripts.pory"
	.string "Intro$"

Route203_Cave_Text_AquaGrunt4_Defeat::
# 169 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaGrunt4_PostBattle::
# 174 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_AquaGrunt5_Intro::
# 179 "data/maps/Route203_Cave/scripts.pory"
	.string "Intro$"

Route203_Cave_Text_AquaGrunt5_Defeat::
# 184 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaGrunt5_PostBattle::
# 189 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_AquaGrunt6_Intro::
# 194 "data/maps/Route203_Cave/scripts.pory"
	.string "Intro$"

Route203_Cave_Text_AquaGrunt6_Defeat::
# 199 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaGrunt6_PostBattle::
# 204 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_AquaGrunt_Working::
# 208 "data/maps/Route203_Cave/scripts.pory"
	.string "Can't you see that I'm working.$"

Route203_Cave_Text_AquaAdmin_PreBattle::
# 213 "data/maps/Route203_Cave/scripts.pory"
	.string "Admin...$"

Route203_Cave_Text_AquaAdmin_Defeat::
# 218 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeat$"

Route203_Cave_Text_AquaAdmin_PostBattle::
# 223 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_RockSmashMachine::
# 227 "data/maps/Route203_Cave/scripts.pory"
	.string "Obtained ROCK SMASH MACHINE!$"
