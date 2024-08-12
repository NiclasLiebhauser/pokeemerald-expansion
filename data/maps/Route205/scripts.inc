Route205_MapScripts::
	.byte 0


Route205_EventScript_Angler::
# 6 "data/maps/Route205/scripts.pory"
	lock
# 7 "data/maps/Route205/scripts.pory"
	faceplayer
# 8 "data/maps/Route205/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GOOD_ROD, Route205_EventScript_Angler_2
# 19 "data/maps/Route205/scripts.pory"
	message Route205_EventScript_Angler_Text_1
# 20 "data/maps/Route205/scripts.pory"
	waitmessage
Route205_EventScript_Angler_1:
# 22 "data/maps/Route205/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 23 "data/maps/Route205/scripts.pory"
	release
	end

Route205_EventScript_Angler_2:
# 10 "data/maps/Route205/scripts.pory"
	message Route205_EventScript_Angler_Text_0
# 11 "data/maps/Route205/scripts.pory"
	waitmessage
# 12 "data/maps/Route205/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 13 "data/maps/Route205/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 14 "data/maps/Route205/scripts.pory"
	waitfanfare
# 15 "data/maps/Route205/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
	goto Route205_EventScript_Angler_1


Route205_EventScript_Angler_Text_0:
# 10 "data/maps/Route205/scripts.pory"
	.string "Me? No we don't need to fight I am only\n"
	.string "interested in the sea, you see?\p"
	.string "Here you can have this as token of my\n"
	.string "affection for the sea\p"
	.string "$"

Route205_EventScript_Angler_Text_1:
# 19 "data/maps/Route205/scripts.pory"
	.string "I already gave you something. Please\n"
	.string "just let me admire the beauty of the\l"
	.string "sea.\p"
	.string "$"
