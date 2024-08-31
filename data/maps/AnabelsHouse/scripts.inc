AnabelsHouse_MapScripts::
	.byte 0


AnabelsHouse_EventScript_Anabel::
# 7 "data/maps/AnabelsHouse/scripts.pory"
	lockall
# 8 "data/maps/AnabelsHouse/scripts.pory"
	faceplayer
# 9 "data/maps/AnabelsHouse/scripts.pory"
	checkitem ITEM_PARCEL
# 10 "data/maps/AnabelsHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AnabelsHouse_EventScript_Anabel_2
# 14 "data/maps/AnabelsHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_ANABEL_SECOND_FIGHT, AnabelsHouse_EventScript_Anabel_3
# 18 "data/maps/AnabelsHouse/scripts.pory"
	compare VAR_HIDE_AND_SEEK, 3
	goto_if_ge AnabelsHouse_EventScript_Anabel_4
# 35 "data/maps/AnabelsHouse/scripts.pory"
	goto_if_set FLAG_ANABEL_HIDE_AND_SEEK, AnabelsHouse_EventScript_Anabel_5
# 39 "data/maps/AnabelsHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_ANABEL_FIRST_FIGHT, AnabelsHouse_EventScript_Anabel_6
# 47 "data/maps/AnabelsHouse/scripts.pory"
	goto_if_set FLAG_PACIFIDLOG_PARCEL_DELIVERED, AnabelsHouse_EventScript_Anabel_7
# 57 "data/maps/AnabelsHouse/scripts.pory"
	msgbox AnabelsHouse_EventScript_Anabel_Text_6, MSGBOX_NPC
AnabelsHouse_EventScript_Anabel_1:
# 60 "data/maps/AnabelsHouse/scripts.pory"
	releaseall
	end

AnabelsHouse_EventScript_Anabel_2:
# 12 "data/maps/AnabelsHouse/scripts.pory"
	call AnabelsHouse_EventScript_Anabel_GiveParcel
	goto AnabelsHouse_EventScript_Anabel_1

AnabelsHouse_EventScript_Anabel_3:
# 16 "data/maps/AnabelsHouse/scripts.pory"
	msgbox AnabelsHouse_EventScript_Anabel_Text_0, MSGBOX_NPC
	goto AnabelsHouse_EventScript_Anabel_1

AnabelsHouse_EventScript_Anabel_4:
# 20 "data/maps/AnabelsHouse/scripts.pory"
	compare VAR_HIDE_AND_SEEK, 3
	goto_if_eq AnabelsHouse_EventScript_Anabel_16
# 27 "data/maps/AnabelsHouse/scripts.pory"
	msgbox AnabelsHouse_EventScript_Anabel_Text_2, MSGBOX_YESNO
AnabelsHouse_EventScript_Anabel_15:
# 30 "data/maps/AnabelsHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AnabelsHouse_EventScript_Anabel_23
	goto AnabelsHouse_EventScript_Anabel_1

AnabelsHouse_EventScript_Anabel_5:
# 37 "data/maps/AnabelsHouse/scripts.pory"
	msgbox AnabelsHouse_EventScript_Anabel_Text_3, MSGBOX_NPC
	goto AnabelsHouse_EventScript_Anabel_1

AnabelsHouse_EventScript_Anabel_6:
# 41 "data/maps/AnabelsHouse/scripts.pory"
	msgbox AnabelsHouse_EventScript_Anabel_Text_4, MSGBOX_YESNO
# 42 "data/maps/AnabelsHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AnabelsHouse_EventScript_Anabel_19
	goto AnabelsHouse_EventScript_Anabel_1

AnabelsHouse_EventScript_Anabel_7:
# 49 "data/maps/AnabelsHouse/scripts.pory"
	msgbox AnabelsHouse_EventScript_Anabel_Text_5, MSGBOX_YESNO
# 50 "data/maps/AnabelsHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AnabelsHouse_EventScript_Anabel_21
	goto AnabelsHouse_EventScript_Anabel_1

AnabelsHouse_EventScript_Anabel_16:
# 22 "data/maps/AnabelsHouse/scripts.pory"
	addvar VAR_HIDE_AND_SEEK, 1
# 23 "data/maps/AnabelsHouse/scripts.pory"
	msgbox AnabelsHouse_EventScript_Anabel_Text_1, MSGBOX_YESNO
	goto AnabelsHouse_EventScript_Anabel_15

AnabelsHouse_EventScript_Anabel_19:
# 44 "data/maps/AnabelsHouse/scripts.pory"
	call AnabelsHouse_EventScript_Anabel_StartHideAndSeek
	goto AnabelsHouse_EventScript_Anabel_1

AnabelsHouse_EventScript_Anabel_21:
# 52 "data/maps/AnabelsHouse/scripts.pory"
	call AnabelsHouse_EventScript_Anabel_FirstFight
	goto AnabelsHouse_EventScript_Anabel_1

AnabelsHouse_EventScript_Anabel_23:
# 32 "data/maps/AnabelsHouse/scripts.pory"
	call AnabelsHouse_EventScript_Anabel_SecondFight
	goto AnabelsHouse_EventScript_Anabel_1


AnabelsHouse_EventScript_Anabel_GiveParcel::
# 65 "data/maps/AnabelsHouse/scripts.pory"
	msgbox AnabelsHouse_EventScript_Anabel_GiveParcel_Text_0
# 66 "data/maps/AnabelsHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 67 "data/maps/AnabelsHouse/scripts.pory"
	message AnabelsHouse_EventScript_Anabel_GiveParcel_Text_1
# 68 "data/maps/AnabelsHouse/scripts.pory"
	waitfanfare
# 69 "data/maps/AnabelsHouse/scripts.pory"
	setflag FLAG_PACIFIDLOG_PARCEL_DELIVERED
# 70 "data/maps/AnabelsHouse/scripts.pory"
	removeitem ITEM_PARCEL
# 71 "data/maps/AnabelsHouse/scripts.pory"
	msgbox AnabelsHouse_EventScript_Anabel_GiveParcel_Text_2, MSGBOX_YESNO
# 73 "data/maps/AnabelsHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AnabelsHouse_EventScript_Anabel_GiveParcel_2
AnabelsHouse_EventScript_Anabel_GiveParcel_1:
	return

AnabelsHouse_EventScript_Anabel_GiveParcel_2:
# 75 "data/maps/AnabelsHouse/scripts.pory"
	call AnabelsHouse_EventScript_Anabel_FirstFight
	goto AnabelsHouse_EventScript_Anabel_GiveParcel_1


AnabelsHouse_EventScript_Anabel_FirstFight::
# 82 "data/maps/AnabelsHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_ANABEL_1, AnabelsHouse_Text_Fight1_Defeat
# 83 "data/maps/AnabelsHouse/scripts.pory"
	setflag FLAG_DEFEATED_ANABEL_FIRST_FIGHT
# 84 "data/maps/AnabelsHouse/scripts.pory"
	releaseall
	end


AnabelsHouse_EventScript_Anabel_StartHideAndSeek::
# 89 "data/maps/AnabelsHouse/scripts.pory"
	setflag FLAG_ANABEL_HIDE_AND_SEEK
# 90 "data/maps/AnabelsHouse/scripts.pory"
	releaseall
	end


AnabelsHouse_EventScript_CutMachine::
# 95 "data/maps/AnabelsHouse/scripts.pory"
	removeobject 2
# 96 "data/maps/AnabelsHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 97 "data/maps/AnabelsHouse/scripts.pory"
	setflag FLAG_ITEM_CUT_MACHINE
# 98 "data/maps/AnabelsHouse/scripts.pory"
	setflag FLAG_PLAYER_CAN_USE_CUT
# 99 "data/maps/AnabelsHouse/scripts.pory"
	giveitem ITEM_MACHINE_CUT
# 100 "data/maps/AnabelsHouse/scripts.pory"
	waitfanfare
# 101 "data/maps/AnabelsHouse/scripts.pory"
	waitmessage
# 102 "data/maps/AnabelsHouse/scripts.pory"
	closemessage
	return


AnabelsHouse_EventScript_Anabel_SecondFight::
# 106 "data/maps/AnabelsHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_ANABEL_2, AnabelsHouse_Text_Fight2_Defeat
# 107 "data/maps/AnabelsHouse/scripts.pory"
	setflag FLAG_DEFEATED_ANABEL_SECOND_FIGHT
# 109 "data/maps/AnabelsHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 110 "data/maps/AnabelsHouse/scripts.pory"
	giveitem ITEM_AZURE_FLUTE
# 112 "data/maps/AnabelsHouse/scripts.pory"
	releaseall
	end


AnabelsHouse_EventScript_Anabel_Text_0:
# 16 "data/maps/AnabelsHouse/scripts.pory"
	.string "ANANBEL: The flute was a gift from a\n"
	.string "friend. So keep it safe, yeah?$"

AnabelsHouse_EventScript_Anabel_Text_1:
# 23 "data/maps/AnabelsHouse/scripts.pory"
	.string "ANABEL: Color me supprised. You\n"
	.string "managed to find them all and quickly\l"
	.string "too.\p"
	.string "Wanna have a go at another round with\n"
	.string "me? I'll even throw in a rare item as a\l"
	.string "reward.$"

AnabelsHouse_EventScript_Anabel_Text_2:
# 27 "data/maps/AnabelsHouse/scripts.pory"
	.string "ANABEL: Wanna have a go at another\n"
	.string "round with me? I'll even throw in a rare\l"
	.string "item as a reward.$"

AnabelsHouse_EventScript_Anabel_Text_3:
# 37 "data/maps/AnabelsHouse/scripts.pory"
	.string "ANANBEL: Have you found all of my birds\n"
	.string "yet?$"

AnabelsHouse_EventScript_Anabel_Text_4:
# 41 "data/maps/AnabelsHouse/scripts.pory"
	.string "ANABEL: You seem quite capable. Wanna\n"
	.string "play a round of hide and seek with my\l"
	.string "birds?$"

AnabelsHouse_EventScript_Anabel_Text_5:
# 49 "data/maps/AnabelsHouse/scripts.pory"
	.string "ANABEL: Did you have a change of mind\n"
	.string "and want to fight against me?$"

AnabelsHouse_EventScript_Anabel_Text_6:
# 57 "data/maps/AnabelsHouse/scripts.pory"
	.string "ANABEL: I'm Anabel, nice to meet ya. You\n"
	.string "might know me from the battle frontier\l"
	.string "way before this mess.\p"
	.string "Anyways I'm retired. But it's nice to\n"
	.string "have a visitor, so make yourself at\l"
	.string "home.$"

AnabelsHouse_EventScript_Anabel_GiveParcel_Text_0:
# 65 "data/maps/AnabelsHouse/scripts.pory"
	.string "ANABEL: You have something for me? A\n"
	.string "parcel from my uncle?$"

AnabelsHouse_EventScript_Anabel_GiveParcel_Text_1:
# 67 "data/maps/AnabelsHouse/scripts.pory"
	.string "You give Anabel the parcel.$"

AnabelsHouse_EventScript_Anabel_GiveParcel_Text_2:
# 71 "data/maps/AnabelsHouse/scripts.pory"
	.string "ANABEL: Thank you for going out of your\n"
	.string "way to deliver it to me.\p"
	.string "As a token of my appreciation why not\n"
	.string "have a fight with me?$"

AnabelsHouse_Text_CutMachine::
# 116 "data/maps/AnabelsHouse/scripts.pory"
	.string "Obtained CUT MACHINE!$"

AnabelsHouse_Text_Fight1_Defeat::
# 120 "data/maps/AnabelsHouse/scripts.pory"
	.string "Deafeat$"

AnabelsHouse_Text_Fight2_Defeat::
# 124 "data/maps/AnabelsHouse/scripts.pory"
	.string "Deafeat$"
