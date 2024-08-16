MagmaIsland_House1_MapScripts::
	.byte 0


MagmaIsland_House1_EventScript_OldWoman::
# 4 "data/maps/MagmaIsland_House1/scripts.pory"
	lock
# 5 "data/maps/MagmaIsland_House1/scripts.pory"
	faceplayer
# 7 "data/maps/MagmaIsland_House1/scripts.pory"
	msgbox MagmaIsland_House1_EventScript_OldWoman_Text_0, MSGBOX_YESNO
# 8 "data/maps/MagmaIsland_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MagmaIsland_House1_EventScript_OldWoman_2
MagmaIsland_House1_EventScript_OldWoman_1:
# 14 "data/maps/MagmaIsland_House1/scripts.pory"
	msgbox MagmaIsland_House1_EventScript_OldWoman_Text_2, MSGBOX_NPC
# 15 "data/maps/MagmaIsland_House1/scripts.pory"
	release
	end

MagmaIsland_House1_EventScript_OldWoman_2:
# 10 "data/maps/MagmaIsland_House1/scripts.pory"
	msgbox MagmaIsland_House1_EventScript_OldWoman_Text_1
# 11 "data/maps/MagmaIsland_House1/scripts.pory"
	closemessage
# 12 "data/maps/MagmaIsland_House1/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto MagmaIsland_House1_EventScript_OldWoman_1


MagmaIsland_House1_EventScript_OldWoman_Text_0:
# 7 "data/maps/MagmaIsland_House1/scripts.pory"
	.string "Oh, dear.\n"
	.string "Aren't your POKéMON exhausted?\p"
	.string "If you'd like, rest up here.That's a fine\n"
	.string "idea! You should do that$"

MagmaIsland_House1_EventScript_OldWoman_Text_1:
# 10 "data/maps/MagmaIsland_House1/scripts.pory"
	.string "Take your time and rest up.$"

MagmaIsland_House1_EventScript_OldWoman_Text_2:
# 14 "data/maps/MagmaIsland_House1/scripts.pory"
	.string "Come back at any time.$"
