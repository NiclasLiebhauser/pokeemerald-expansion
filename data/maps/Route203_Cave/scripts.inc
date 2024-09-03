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
	call EventScript_Increase_LevelCap
# 75 "data/maps/Route203_Cave/scripts.pory"
	clearflag FLAG_HIDE_ROCK_SMASH_MACHINE
# 76 "data/maps/Route203_Cave/scripts.pory"
	addobject 20
# 77 "data/maps/Route203_Cave/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 79 "data/maps/Route203_Cave/scripts.pory"
	release
	end


EventScript_Increase_LevelCap::
# 84 "data/maps/Route203_Cave/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 85 "data/maps/Route203_Cave/scripts.pory"
	message EventScript_Increase_LevelCap_Text_0
# 86 "data/maps/Route203_Cave/scripts.pory"
	waitfanfare
# 87 "data/maps/Route203_Cave/scripts.pory"
	closemessage
	return


Route203_Cave_EventScript_RockSmashMachine::
# 92 "data/maps/Route203_Cave/scripts.pory"
	lock
# 93 "data/maps/Route203_Cave/scripts.pory"
	removeobject 20
# 94 "data/maps/Route203_Cave/scripts.pory"
	setflag FLAG_ITEM_ROCK_SMASH_MACHINE
# 95 "data/maps/Route203_Cave/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_ROCK_SMASH
# 96 "data/maps/Route203_Cave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 97 "data/maps/Route203_Cave/scripts.pory"
	giveitem ITEM_MACHINE_ROCK_SMASH
# 98 "data/maps/Route203_Cave/scripts.pory"
	waitfanfare
# 99 "data/maps/Route203_Cave/scripts.pory"
	waitmessage
# 100 "data/maps/Route203_Cave/scripts.pory"
	closemessage
# 101 "data/maps/Route203_Cave/scripts.pory"
	release
	end


Route203_Cave_EventScript_AquaGrunt_Working::
# 106 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt_Working, MSGBOX_SIGN
	return


Route203_Cave_EventScript_AquaGrunt_1::
# 110 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_1, Route203_Cave_Text_AquaGrunt1_Intro, Route203_Cave_Text_AquaGrunt1_Defeat
# 111 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt1_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_2::
# 115 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_2, Route203_Cave_Text_AquaGrunt2_Intro, Route203_Cave_Text_AquaGrunt2_Defeat
# 116 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt2_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_3::
# 120 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_3, Route203_Cave_Text_AquaGrunt3_Intro, Route203_Cave_Text_AquaGrunt3_Defeat
# 121 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt3_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_4::
# 125 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_4, Route203_Cave_Text_AquaGrunt4_Intro, Route203_Cave_Text_AquaGrunt4_Defeat
# 126 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt4_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_5::
# 130 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_5, Route203_Cave_Text_AquaGrunt5_Intro, Route203_Cave_Text_AquaGrunt5_Defeat
# 131 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt5_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_Cave_EventScript_AquaGrunt_6::
# 135 "data/maps/Route203_Cave/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_ROUTE203_CAVE_6, Route203_Cave_Text_AquaGrunt6_Intro, Route203_Cave_Text_AquaGrunt6_Defeat
# 136 "data/maps/Route203_Cave/scripts.pory"
	msgbox Route203_Cave_Text_AquaGrunt6_PostBattle, MSGBOX_AUTOCLOSE
	return


# 230 "data/maps/Route203_Cave/scripts.pory"
Route203_Cave_Movement_AquaAdmin:
# 231 "data/maps/Route203_Cave/scripts.pory"
	walk_right
# 232 "data/maps/Route203_Cave/scripts.pory"
	walk_up
# 232 "data/maps/Route203_Cave/scripts.pory"
	walk_up
	step_end

EventScript_Increase_LevelCap_Text_0:
# 85 "data/maps/Route203_Cave/scripts.pory"
	.string "Your ANCIENT PLATE shines with new\n"
	.string "power!$"

Route203_Cave_Text_AquaGrunt1_Intro::
# 139 "data/maps/Route203_Cave/scripts.pory"
	.string "You’re not getting past us! Team Aqua\n"
	.string "rules this cave, and we’ll show you why!$"

Route203_Cave_Text_AquaGrunt1_Defeat::
# 143 "data/maps/Route203_Cave/scripts.pory"
	.string "No... how could I lose in our own\n"
	.string "hideout?$"

Route203_Cave_Text_AquaGrunt1_PostBattle::
# 147 "data/maps/Route203_Cave/scripts.pory"
	.string "You got lucky this time, but Team Aqua\n"
	.string "won’t let this slide!$"

Route203_Cave_Text_AquaGrunt2_Intro::
# 151 "data/maps/Route203_Cave/scripts.pory"
	.string "Intruders aren’t welcome here! Prepare\n"
	.string "to face the wrath of Team Aqua!$"

Route203_Cave_Text_AquaGrunt2_Defeat::
# 155 "data/maps/Route203_Cave/scripts.pory"
	.string "I can’t believe I was defeated...$"

Route203_Cave_Text_AquaGrunt2_PostBattle::
# 159 "data/maps/Route203_Cave/scripts.pory"
	.string "We’ll regroup and come back stronger.\n"
	.string "You won’t stand a chance next time!$"

Route203_Cave_Text_AquaGrunt3_Intro::
# 163 "data/maps/Route203_Cave/scripts.pory"
	.string "You’ve made it this far, but you won’t get\n"
	.string "any further! Team Aqua will see to that!$"

Route203_Cave_Text_AquaGrunt3_Defeat::
# 167 "data/maps/Route203_Cave/scripts.pory"
	.string "Defeated... how could this happen?$"

Route203_Cave_Text_AquaGrunt3_PostBattle::
# 171 "data/maps/Route203_Cave/scripts.pory"
	.string "You may have won this battle, but Team\n"
	.string "Aqua’s mission isn’t over yet!$"

Route203_Cave_Text_AquaGrunt4_Intro::
# 175 "data/maps/Route203_Cave/scripts.pory"
	.string "You’re up against the best of Team Aqua!\n"
	.string "Let’s see if you can handle it!$"

Route203_Cave_Text_AquaGrunt4_Defeat::
# 179 "data/maps/Route203_Cave/scripts.pory"
	.string "No way... I was supposed to stop you!$"

Route203_Cave_Text_AquaGrunt4_PostBattle::
# 183 "data/maps/Route203_Cave/scripts.pory"
	.string "Don’t get too comfortable. Team Aqua\n"
	.string "will strike back with even more force!$"

Route203_Cave_Text_AquaGrunt5_Intro::
# 187 "data/maps/Route203_Cave/scripts.pory"
	.string "You’ve come far, but this is where your\n"
	.string "journey ends! Team Aqua will crush you!$"

Route203_Cave_Text_AquaGrunt5_Defeat::
# 191 "data/maps/Route203_Cave/scripts.pory"
	.string "I can’t believe it... defeated in our own\n"
	.string "cave...$"

Route203_Cave_Text_AquaGrunt5_PostBattle::
# 195 "data/maps/Route203_Cave/scripts.pory"
	.string "This isn’t over! We’ll return with a\n"
	.string "vengeance!$"

Route203_Cave_Text_AquaGrunt6_Intro::
# 199 "data/maps/Route203_Cave/scripts.pory"
	.string "You’re no match for the power of Team\n"
	.string "Aqua! Prepare to be washed away!$"

Route203_Cave_Text_AquaGrunt6_Defeat::
# 203 "data/maps/Route203_Cave/scripts.pory"
	.string "Swept away... by a mere trainer...$"

Route203_Cave_Text_AquaGrunt6_PostBattle::
# 207 "data/maps/Route203_Cave/scripts.pory"
	.string "You got the better of me this time, but\n"
	.string "Team Aqua won’t be so easily defeated\l"
	.string "again!$"

Route203_Cave_Text_AquaGrunt_Working::
# 211 "data/maps/Route203_Cave/scripts.pory"
	.string "Can't you see that I'm working.$"

Route203_Cave_Text_AquaAdmin_PreBattle::
# 214 "data/maps/Route203_Cave/scripts.pory"
	.string "How has an intruder gotten this far?\n"
	.string "What are these useless grunts doing?\p"
	.string "It doesn't matter. I'll stop you\n"
	.string "personally.$"

Route203_Cave_Text_AquaAdmin_Defeat::
# 218 "data/maps/Route203_Cave/scripts.pory"
	.string "How could this happen... I was supposed\n"
	.string "to be second to none other than the\l"
	.string "boss.$"

Route203_Cave_Text_AquaAdmin_PostBattle::
# 222 "data/maps/Route203_Cave/scripts.pory"
	.string "Post$"

Route203_Cave_Text_RockSmashMachine::
# 226 "data/maps/Route203_Cave/scripts.pory"
	.string "Obtained ROCK SMASH MACHINE!$"
