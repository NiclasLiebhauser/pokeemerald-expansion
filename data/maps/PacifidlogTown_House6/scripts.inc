PacifidlogTown_House6_MapScripts::
	.byte 0


PacifidlogTown_House6_MoveRelearnersHouse_EventScript_MoveRelearner::
# 4 "data/maps/PacifidlogTown_House6/scripts.pory"
	lock
# 5 "data/maps/PacifidlogTown_House6/scripts.pory"
	faceplayer
# 6 "data/maps/PacifidlogTown_House6/scripts.pory"
	waitmovement 0
# 7 "data/maps/PacifidlogTown_House6/scripts.pory"
	goto_if_set FLAG_TEMP_1, PacifidlogTown_House6_MoveRelearnersHouse_EventScript_MoveRelearner_2
PacifidlogTown_House6_MoveRelearnersHouse_EventScript_MoveRelearner_1:
# 11 "data/maps/PacifidlogTown_House6/scripts.pory"
	msgbox PacifidlogTown_House6_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
# 12 "data/maps/PacifidlogTown_House6/scripts.pory"
	setflag FLAG_TEMP_1
# 13 "data/maps/PacifidlogTown_House6/scripts.pory"
	call PacifidlogTown_House6_MoveRelearnersHouse_EventScript_AskTeachMove
	end

PacifidlogTown_House6_MoveRelearnersHouse_EventScript_MoveRelearner_2:
# 9 "data/maps/PacifidlogTown_House6/scripts.pory"
	call PacifidlogTown_House6_MoveRelearnersHouse_EventScript_AskTeachMove
	goto PacifidlogTown_House6_MoveRelearnersHouse_EventScript_MoveRelearner_1


PacifidlogTown_House6_MoveRelearnersHouse_EventScript_AskTeachMove::
# 18 "data/maps/PacifidlogTown_House6/scripts.pory"
	checkmoney 1000
# 19 "data/maps/PacifidlogTown_House6/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PacifidlogTown_House6_MoveRelearnersHouse_EventScript_AskTeachMove_2
PacifidlogTown_House6_MoveRelearnersHouse_EventScript_AskTeachMove_1:
# 23 "data/maps/PacifidlogTown_House6/scripts.pory"
	msgbox PacifidlogTown_House6_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
# 24 "data/maps/PacifidlogTown_House6/scripts.pory"
	waitmessage
# 25 "data/maps/PacifidlogTown_House6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PacifidlogTown_House6_MoveRelearnersHouse_EventScript_AskTeachMove_5
PacifidlogTown_House6_MoveRelearnersHouse_EventScript_AskTeachMove_4:
# 29 "data/maps/PacifidlogTown_House6/scripts.pory"
	call PacifidlogTown_House6_MoveRelearnersHouse_EventScript_ChooseMon
	end

PacifidlogTown_House6_MoveRelearnersHouse_EventScript_AskTeachMove_2:
# 21 "data/maps/PacifidlogTown_House6/scripts.pory"
	call PacifidlogTown_House6_MoveRelearnersHouse_EventScript_ComeBackWithMoney
	goto PacifidlogTown_House6_MoveRelearnersHouse_EventScript_AskTeachMove_1

PacifidlogTown_House6_MoveRelearnersHouse_EventScript_AskTeachMove_5:
# 27 "data/maps/PacifidlogTown_House6/scripts.pory"
	call PacifidlogTown_House6_MoveRelearnersHouse_EventScript_ComeBackWithMoney
	goto PacifidlogTown_House6_MoveRelearnersHouse_EventScript_AskTeachMove_4


PacifidlogTown_House6_MoveRelearnersHouse_EventScript_ComeBackWithMoney::
# 34 "data/maps/PacifidlogTown_House6/scripts.pory"
	msgbox PacifidlogTown_House6_MoveRelearnersHouse_Text_ComeBackWithMoney, MSGBOX_DEFAULT
# 35 "data/maps/PacifidlogTown_House6/scripts.pory"
	release
	end


PacifidlogTown_House6_MoveRelearnersHouse_EventScript_ChooseMon::
# 40 "data/maps/PacifidlogTown_House6/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 41 "data/maps/PacifidlogTown_House6/scripts.pory"
	special ChooseMonForMoveRelearner
# 42 "data/maps/PacifidlogTown_House6/scripts.pory"
	waitstate
# 43 "data/maps/PacifidlogTown_House6/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq PacifidlogTown_House6_MoveRelearnersHouse_EventScript_ChooseMon_2
PacifidlogTown_House6_MoveRelearnersHouse_EventScript_ChooseMon_1:
# 47 "data/maps/PacifidlogTown_House6/scripts.pory"
	special IsSelectedMonEgg
# 48 "data/maps/PacifidlogTown_House6/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
# 49 "data/maps/PacifidlogTown_House6/scripts.pory"
	goto_if_eq VAR_0x8005, 0, FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
# 50 "data/maps/PacifidlogTown_House6/scripts.pory"
	call PacifidlogTown_House6_MoveRelearnersHouse_EventScript_ChooseMove
	end

PacifidlogTown_House6_MoveRelearnersHouse_EventScript_ChooseMon_2:
# 45 "data/maps/PacifidlogTown_House6/scripts.pory"
	call PacifidlogTown_House6_MoveRelearnersHouse_EventScript_ComeBackWithMoney
	goto PacifidlogTown_House6_MoveRelearnersHouse_EventScript_ChooseMon_1


PacifidlogTown_House6_MoveRelearnersHouse_EventScript_ChooseMove::
# 55 "data/maps/PacifidlogTown_House6/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
# 56 "data/maps/PacifidlogTown_House6/scripts.pory"
	special TeachMoveRelearnerMove
# 57 "data/maps/PacifidlogTown_House6/scripts.pory"
	waitstate
# 58 "data/maps/PacifidlogTown_House6/scripts.pory"
	goto_if_eq VAR_0x8004, 0, PacifidlogTown_House6_MoveRelearnersHouse_EventScript_ChooseMon
# 59 "data/maps/PacifidlogTown_House6/scripts.pory"
	showmoneybox 0, 0
# 60 "data/maps/PacifidlogTown_House6/scripts.pory"
	delay 30
# 61 "data/maps/PacifidlogTown_House6/scripts.pory"
	removemoney 1000
# 62 "data/maps/PacifidlogTown_House6/scripts.pory"
	playse SE_SHOP
# 63 "data/maps/PacifidlogTown_House6/scripts.pory"
	updatemoneybox
# 64 "data/maps/PacifidlogTown_House6/scripts.pory"
	waitse
# 65 "data/maps/PacifidlogTown_House6/scripts.pory"
	delay 30
# 66 "data/maps/PacifidlogTown_House6/scripts.pory"
	hidemoneybox
# 67 "data/maps/PacifidlogTown_House6/scripts.pory"
	call PacifidlogTown_House6_MoveRelearnersHouse_EventScript_ComeBackWithMoney
	end


PacifidlogTown_House6_MoveRelearnersHouse_Text_ComeBackWithMoney::
# 71 "data/maps/PacifidlogTown_House6/scripts.pory"
	.string "If your POKéMON need to learn a move,\n"
	.string "come back with ¥1000.$"

PacifidlogTown_House6_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove::
# 75 "data/maps/PacifidlogTown_House6/scripts.pory"
	.string "You seem to have the required sum on\n"
	.string "you. Let me guess, you want me to teach\l"
	.string "a move?$"

PacifidlogTown_House6_MoveRelearnersHouse_Text_ImTheMoveTutor::
# 79 "data/maps/PacifidlogTown_House6/scripts.pory"
	.string "I'm the MOVE TUTOR.\p"
	.string "I know all the moves that POKéMON\n"
	.string "learn--every one of them--and I can\l"
	.string "teach POKéMON those moves.\p"
	.string "I can teach a move to a POKéMON\n"
	.string "of yours if you'd like.\p"
	.string "I'll do it for ¥1000.$"
