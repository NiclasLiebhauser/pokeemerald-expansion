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


SacredCity_EventScript_Artist::
# 31 "data/maps/SacredCity/scripts.pory"
	lock
# 32 "data/maps/SacredCity/scripts.pory"
	faceplayer
# 33 "data/maps/SacredCity/scripts.pory"
	goto_if_unset FLAG_DEFEATED_GROUDON, SacredCity_EventScript_Artist_2
# 39 "data/maps/SacredCity/scripts.pory"
	msgbox SacredCity_EventScript_Artist_Text_1
SacredCity_EventScript_Artist_1:
# 42 "data/maps/SacredCity/scripts.pory"
	release
	end

SacredCity_EventScript_Artist_2:
# 35 "data/maps/SacredCity/scripts.pory"
	msgbox SacredCity_EventScript_Artist_Text_0, MSGBOX_NPC
	goto SacredCity_EventScript_Artist_1


SacredCity_EventScript_MountainGuardian::
# 47 "data/maps/SacredCity/scripts.pory"
	lock
# 48 "data/maps/SacredCity/scripts.pory"
	faceplayer
# 49 "data/maps/SacredCity/scripts.pory"
	message SacredCity_EventScript_MountainGuardian_Text_0
# 50 "data/maps/SacredCity/scripts.pory"
	waitmessage
# 52 "data/maps/SacredCity/scripts.pory"
	checkitem ITEM_RED_ORB
# 53 "data/maps/SacredCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SacredCity_EventScript_MountainGuardian_3
SacredCity_EventScript_MountainGuardian_1:
# 62 "data/maps/SacredCity/scripts.pory"
	checkitem ITEM_BLUE_ORB
# 63 "data/maps/SacredCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SacredCity_EventScript_MountainGuardian_8
SacredCity_EventScript_MountainGuardian_6:
# 72 "data/maps/SacredCity/scripts.pory"
	message SacredCity_EventScript_MountainGuardian_Text_3
# 73 "data/maps/SacredCity/scripts.pory"
	waitmessage
# 74 "data/maps/SacredCity/scripts.pory"
	closemessage
# 75 "data/maps/SacredCity/scripts.pory"
	release
	end

SacredCity_EventScript_MountainGuardian_2:
# 55 "data/maps/SacredCity/scripts.pory"
	message SacredCity_EventScript_MountainGuardian_Text_1
# 56 "data/maps/SacredCity/scripts.pory"
	waitmessage
# 57 "data/maps/SacredCity/scripts.pory"
	closemessage
# 58 "data/maps/SacredCity/scripts.pory"
	release
	end

SacredCity_EventScript_MountainGuardian_3:
# 53 "data/maps/SacredCity/scripts.pory"
	goto_if_unset FLAG_RED_ORB_USED, SacredCity_EventScript_MountainGuardian_2
	goto SacredCity_EventScript_MountainGuardian_1

SacredCity_EventScript_MountainGuardian_7:
# 65 "data/maps/SacredCity/scripts.pory"
	message SacredCity_EventScript_MountainGuardian_Text_2
# 66 "data/maps/SacredCity/scripts.pory"
	waitmessage
# 67 "data/maps/SacredCity/scripts.pory"
	closemessage
# 68 "data/maps/SacredCity/scripts.pory"
	release
	end

SacredCity_EventScript_MountainGuardian_8:
# 63 "data/maps/SacredCity/scripts.pory"
	goto_if_unset FLAG_BLUE_ORB_USED, SacredCity_EventScript_MountainGuardian_7
	goto SacredCity_EventScript_MountainGuardian_6


SacredCity_EventScript_HexManiac1::
# 80 "data/maps/SacredCity/scripts.pory"
	trainerbattle_single TRAINER_HEX_MANIAC_SACRED_CITY_1, SacredCity_Text_HexManiac1_Intro, SacredCity_Text_HexManiac1_Defeat
# 81 "data/maps/SacredCity/scripts.pory"
	msgbox SacredCity_Text_HexManiac1_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredCity_EventScript_Psychic1::
# 85 "data/maps/SacredCity/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_SACRED_CITY_1, SacredCity_Text_Psychic1_Intro, SacredCity_Text_Psychic1_Defeat
# 86 "data/maps/SacredCity/scripts.pory"
	msgbox SacredCity_Text_Psychic1_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredCity_EventScript_Psychic2::
# 90 "data/maps/SacredCity/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_SACRED_CITY_2, SacredCity_Text_Psychic2_Intro, SacredCity_Text_Psychic2_Defeat
# 91 "data/maps/SacredCity/scripts.pory"
	msgbox SacredCity_Text_Psychic2_PostBattle, MSGBOX_AUTOCLOSE
	return


SacredCity_EventScript_Artist_Text_0:
# 35 "data/maps/SacredCity/scripts.pory"
	.string "Rumors say, that the deadly drought on\n"
	.string "northern part of the island is because\l"
	.string "of a powerful Pokémon hybernating\l"
	.string "there.\p"
	.string "But where would such a majestic beast\n"
	.string "be?$"

SacredCity_EventScript_Artist_Text_1:
# 39 "data/maps/SacredCity/scripts.pory"
	.string "They say the mysterious weather on on\n"
	.string "northern part of the island has\l"
	.string "stopped as suddenly as it had begun.$"

SacredCity_EventScript_MountainGuardian_Text_0:
# 49 "data/maps/SacredCity/scripts.pory"
	.string "There used to be a path here which led\n"
	.string "up the mountain. But it has vanished\l"
	.string "since KYOGRE raised the water level.\p"
	.string "$"

SacredCity_EventScript_MountainGuardian_Text_1:
# 55 "data/maps/SacredCity/scripts.pory"
	.string "I see you are carrying the sacred RED\n"
	.string "ORB. But it seems to have lost its\l"
	.string "luster.\p"
	.string "Maybe charging it with some energy will\n"
	.string "restore it to its former glory.\p"
	.string "$"

SacredCity_EventScript_MountainGuardian_Text_2:
# 65 "data/maps/SacredCity/scripts.pory"
	.string "I see you are carrying the sacred BLUE\n"
	.string "ORB. But it seems to have lost its\l"
	.string "luster.\p"
	.string "Maybe charging it with some energy will\n"
	.string "restore it to its former glory.\p"
	.string "$"

SacredCity_EventScript_MountainGuardian_Text_3:
# 72 "data/maps/SacredCity/scripts.pory"
	.string "My grand father had once told me about\n"
	.string "a temple which could open the path to\l"
	.string "the mountain.\p"
	.string "An ancient ritual involving two ORBs\n"
	.string "was once used to please the god and\l"
	.string "gain entrance to the mountain.\p"
	.string "$"

SacredCity_Text_HexManiac1_Intro::
# 94 "data/maps/SacredCity/scripts.pory"
	.string "Intro$"

SacredCity_Text_HexManiac1_Defeat::
# 98 "data/maps/SacredCity/scripts.pory"
	.string "Defeat$"

SacredCity_Text_HexManiac1_PostBattle::
# 102 "data/maps/SacredCity/scripts.pory"
	.string "Post$"

SacredCity_Text_Psychic1_Intro::
# 106 "data/maps/SacredCity/scripts.pory"
	.string "Intro$"

SacredCity_Text_Psychic1_Defeat::
# 110 "data/maps/SacredCity/scripts.pory"
	.string "Defeat$"

SacredCity_Text_Psychic1_PostBattle::
# 114 "data/maps/SacredCity/scripts.pory"
	.string "Post$"

SacredCity_Text_Psychic2_Intro::
# 118 "data/maps/SacredCity/scripts.pory"
	.string "Intro$"

SacredCity_Text_Psychic2_Defeat::
# 122 "data/maps/SacredCity/scripts.pory"
	.string "Defeat$"

SacredCity_Text_Psychic2_PostBattle::
# 126 "data/maps/SacredCity/scripts.pory"
	.string "Post$"

SacredCity_Text_FlyMachine::
# 130 "data/maps/SacredCity/scripts.pory"
	.string "Obtained FLY MACHINE!$"
