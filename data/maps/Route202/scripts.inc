Route202_MapScripts::
	.byte 0


Route202_EventScript_BlackBelt::
# 4 "data/maps/Route202/scripts.pory"
	lock
# 5 "data/maps/Route202/scripts.pory"
	faceplayer
# 6 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_BlackBelt_Text_0, MSGBOX_NPC
# 7 "data/maps/Route202/scripts.pory"
	release
	end


Route202_EventScript_BlackBelt_Text_0:
# 6 "data/maps/Route202/scripts.pory"
	.string "I have heard rumors that Team Aqua is\n"
	.string "developing a DIVE MACHINE. Even though\l"
	.string "their leader is the one responsible for\l"
	.string "this mess. I have to admit it would be\l"
	.string "pretty cool to be able to dive again.$"
