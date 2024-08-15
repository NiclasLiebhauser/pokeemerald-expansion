SacredCity_MapScripts::
# 4 "data/maps/SacredCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SacredCity_OnTransition
# 5 "data/maps/SacredCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SacredCity_OnResume
# 6 "data/maps/SacredCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SacredCity_OnLoad
	.byte 0


SacredCity_OnTransition::
# 10 "data/maps/SacredCity/scripts.pory"
	setflag FLAG_VISITED_SACRED_CITY
	end


SacredCity_OnResume::
# 15 "data/maps/SacredCity/scripts.pory"
	setdivewarp MAP_UNDERWATER_SACRED_CITY, 9, 6
	end


SacredCity_OnLoad::
# 20 "data/maps/SacredCity/scripts.pory"
	call_if_unset FLAG_MOUNTAIN_PATH_FREE, SacredCity_Hide_Cave_Entrance
	end


SacredCity_Hide_Cave_Entrance::
# 25 "data/maps/SacredCity/scripts.pory"
	setmetatile 25, 6, METATILE_Sootopolis_Sootopolis_RockWall, TRUE
# 26 "data/maps/SacredCity/scripts.pory"
	setmetatile 25, 7, METATILE_Sootopolis_Sootopolis_RockWall, TRUE
	end


SacredCity_EventScript_FlyMachine::
# 31 "data/maps/SacredCity/scripts.pory"
	removeobject 1
# 32 "data/maps/SacredCity/scripts.pory"
	setflag FLAG_ITEM_FLYING_MACHINE
# 33 "data/maps/SacredCity/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_FLY
# 34 "data/maps/SacredCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 35 "data/maps/SacredCity/scripts.pory"
	msgbox SacredCity_Text_FlyMachine
# 36 "data/maps/SacredCity/scripts.pory"
	waitfanfare
# 37 "data/maps/SacredCity/scripts.pory"
	waitbuttonpress
# 38 "data/maps/SacredCity/scripts.pory"
	closemessage
	return


SacredCity_EventScript_Artist::
# 42 "data/maps/SacredCity/scripts.pory"
	lock
# 43 "data/maps/SacredCity/scripts.pory"
	faceplayer
# 44 "data/maps/SacredCity/scripts.pory"
	goto_if_unset FLAG_DEFEATED_GROUDON, SacredCity_EventScript_Artist_2
# 50 "data/maps/SacredCity/scripts.pory"
	msgbox SacredCity_EventScript_Artist_Text_1
SacredCity_EventScript_Artist_1:
# 53 "data/maps/SacredCity/scripts.pory"
	release
	end

SacredCity_EventScript_Artist_2:
# 46 "data/maps/SacredCity/scripts.pory"
	msgbox SacredCity_EventScript_Artist_Text_0, MSGBOX_NPC
	goto SacredCity_EventScript_Artist_1


SacredCity_EventScript_MountainGuardian::
# 58 "data/maps/SacredCity/scripts.pory"
	lock
# 59 "data/maps/SacredCity/scripts.pory"
	faceplayer
# 60 "data/maps/SacredCity/scripts.pory"
	message SacredCity_EventScript_MountainGuardian_Text_0
# 61 "data/maps/SacredCity/scripts.pory"
	waitmessage
# 63 "data/maps/SacredCity/scripts.pory"
	checkitem ITEM_RED_ORB
# 64 "data/maps/SacredCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SacredCity_EventScript_MountainGuardian_3
SacredCity_EventScript_MountainGuardian_1:
# 73 "data/maps/SacredCity/scripts.pory"
	checkitem ITEM_BLUE_ORB
# 74 "data/maps/SacredCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SacredCity_EventScript_MountainGuardian_8
SacredCity_EventScript_MountainGuardian_6:
# 83 "data/maps/SacredCity/scripts.pory"
	message SacredCity_EventScript_MountainGuardian_Text_3
# 84 "data/maps/SacredCity/scripts.pory"
	waitmessage
# 85 "data/maps/SacredCity/scripts.pory"
	closemessage
# 86 "data/maps/SacredCity/scripts.pory"
	release
	end

SacredCity_EventScript_MountainGuardian_2:
# 66 "data/maps/SacredCity/scripts.pory"
	message SacredCity_EventScript_MountainGuardian_Text_1
# 67 "data/maps/SacredCity/scripts.pory"
	waitmessage
# 68 "data/maps/SacredCity/scripts.pory"
	closemessage
# 69 "data/maps/SacredCity/scripts.pory"
	release
	end

SacredCity_EventScript_MountainGuardian_3:
# 64 "data/maps/SacredCity/scripts.pory"
	goto_if_unset FLAG_RED_ORB_USED, SacredCity_EventScript_MountainGuardian_2
	goto SacredCity_EventScript_MountainGuardian_1

SacredCity_EventScript_MountainGuardian_7:
# 76 "data/maps/SacredCity/scripts.pory"
	message SacredCity_EventScript_MountainGuardian_Text_2
# 77 "data/maps/SacredCity/scripts.pory"
	waitmessage
# 78 "data/maps/SacredCity/scripts.pory"
	closemessage
# 79 "data/maps/SacredCity/scripts.pory"
	release
	end

SacredCity_EventScript_MountainGuardian_8:
# 74 "data/maps/SacredCity/scripts.pory"
	goto_if_unset FLAG_BLUE_ORB_USED, SacredCity_EventScript_MountainGuardian_7
	goto SacredCity_EventScript_MountainGuardian_6


SacredCity_EventScript_Artist_Text_0:
# 46 "data/maps/SacredCity/scripts.pory"
	.string "Rumors say, that the deadly drought on\n"
	.string "northern part of the island is because\l"
	.string "of a powerful Pokémon hybernating\l"
	.string "there.\p"
	.string "But where would such a majestic beast\n"
	.string "be?$"

SacredCity_EventScript_Artist_Text_1:
# 50 "data/maps/SacredCity/scripts.pory"
	.string "They say the mysterious weather on on\n"
	.string "northern part of the island has\l"
	.string "stopped as suddenly as it had begun.$"

SacredCity_EventScript_MountainGuardian_Text_0:
# 60 "data/maps/SacredCity/scripts.pory"
	.string "There used to be a path here which led\n"
	.string "up the mountain. But I has vanished\l"
	.string "since KYOGRE raised the water level.\p"
	.string "$"

SacredCity_EventScript_MountainGuardian_Text_1:
# 66 "data/maps/SacredCity/scripts.pory"
	.string "I see you are carrying the sacred RED\n"
	.string "ORB. But it seems to have lost its\l"
	.string "luster.\p"
	.string "Maybe charging it with some energy will\n"
	.string "restore it to its former glory.\p"
	.string "$"

SacredCity_EventScript_MountainGuardian_Text_2:
# 76 "data/maps/SacredCity/scripts.pory"
	.string "I see you are carrying the sacred BLUE\n"
	.string "ORB. But it seems to have lost its\l"
	.string "luster.\p"
	.string "Maybe charging it with some energy will\n"
	.string "restore it to its former glory.\p"
	.string "$"

SacredCity_EventScript_MountainGuardian_Text_3:
# 83 "data/maps/SacredCity/scripts.pory"
	.string "My grand father had once told me about\n"
	.string "a temple which could open the path to\l"
	.string "the mountain.\p"
	.string "An ancient ritual involving two ORBs\n"
	.string "was once used to please the god and\l"
	.string "gain entrance to the mountain.\p"
	.string "$"

SacredCity_Text_FlyMachine::
# 92 "data/maps/SacredCity/scripts.pory"
	.string "Obtained FLY MACHINE!$"
