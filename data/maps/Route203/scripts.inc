Route203_MapScripts::
	.byte 0


Route203_EventScript_Fisherman::
# 4 "data/maps/Route203/scripts.pory"
	lock
# 5 "data/maps/Route203/scripts.pory"
	faceplayer
# 6 "data/maps/Route203/scripts.pory"
	msgbox Route203_EventScript_Fisherman_Text_0, MSGBOX_NPC
# 7 "data/maps/Route203/scripts.pory"
	release
	end


Route203_EventScript_Tuber1::
# 12 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_TUBER_ROUTE_203_1, Route203_Text_Tuber1_Intro, Route203_Text_Tuber1_Defeat
# 13 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_Tuber1_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_Expert1::
# 17 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_EXPERT_ROUTE_203_1, Route203_Text_Expert1_Intro, Route203_Text_Expert1_Defeat
# 18 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_Expert1_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_HexManiac1::
# 22 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_HEX_MANIAC_ROUTE_203_1, Route203_Text_HexManiac1_Intro, Route203_Text_HexManiac1_Defeat
# 23 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_HexManiac1_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_BlackBelt1::
# 27 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_ROUTE_203_1, Route203_Text_BlackBelt1_Intro, Route203_Text_BlackBelt1_Defeat
# 28 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_BlackBelt1_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_Hiker1::
# 32 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_HIKER_ROUTE_203_1, Route203_Text_Hiker1_Intro, Route203_Text_Hiker1_Defeat
# 33 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_Hiker1_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_Swimmer1::
# 37 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_ROUTE_203_1, Route203_Text_Swimmer1_Intro, Route203_Text_Swimmer1_Defeat
# 38 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_Swimmer1_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_Swimmer2::
# 42 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_ROUTE_203_2, Route203_Text_Swimmer2_Intro, Route203_Text_Swimmer2_Defeat
# 43 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_Swimmer2_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_Swimmer3::
# 47 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_ROUTE_203_3, Route203_Text_Swimmer3_Intro, Route203_Text_Swimmer3_Defeat
# 48 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_Swimmer3_PostBattle, MSGBOX_AUTOCLOSE
	return


Route203_EventScript_Fisherman_Text_0:
# 6 "data/maps/Route203/scripts.pory"
	.string "Since the rise of the water level the\n"
	.string "only way to the Sacred Island is\l"
	.string "accessible via diving. But since the ban\l"
	.string "of Pokémon using HM moves only pro\l"
	.string "dives can make the trip.$"

Route203_Text_Tuber1_Intro::
# 51 "data/maps/Route203/scripts.pory"
	.string "I'm just a kid, but my Pokémon are super\n"
	.string "tough! You better watch out!$"

Route203_Text_Tuber1_Defeat::
# 55 "data/maps/Route203/scripts.pory"
	.string "Aww, I lost...$"

Route203_Text_Tuber1_PostBattle::
# 59 "data/maps/Route203/scripts.pory"
	.string "I’ll get stronger, just you wait! Next\n"
	.string "time, I won’t lose!$"

Route203_Text_Expert1_Intro::
# 63 "data/maps/Route203/scripts.pory"
	.string "I've spent a lifetime studying Pokémon.\n"
	.string "Let me show you what true experience\l"
	.string "looks like!$"

Route203_Text_Expert1_Defeat::
# 67 "data/maps/Route203/scripts.pory"
	.string "Hmph, even experts can fall...$"

Route203_Text_Expert1_PostBattle::
# 71 "data/maps/Route203/scripts.pory"
	.string "You’ve got talent, youngster. But\n"
	.string "remember, wisdom comes with age. I'll be\l"
	.string "ready for our next encounter.$"

Route203_Text_HexManiac1_Intro::
# 75 "data/maps/Route203/scripts.pory"
	.string "You can’t escape the darkness that\n"
	.string "surrounds me. My Pokémon and I thrive\l"
	.string "in it!$"

Route203_Text_HexManiac1_Defeat::
# 79 "data/maps/Route203/scripts.pory"
	.string "The shadows... betrayed me...$"

Route203_Text_HexManiac1_PostBattle::
# 83 "data/maps/Route203/scripts.pory"
	.string "Even in defeat, the darkness whispers\n"
	.string "to me. I'll return, and next time, you'll\l"
	.string "feel its full power.$"

Route203_Text_BlackBelt1_Intro::
# 87 "data/maps/Route203/scripts.pory"
	.string "My fists are as strong as my Pokémon!\n"
	.string "Let's see if you can handle our\l"
	.string "combined strength!$"

Route203_Text_BlackBelt1_Defeat::
# 91 "data/maps/Route203/scripts.pory"
	.string "My focus... broken.$"

Route203_Text_BlackBelt1_PostBattle::
# 95 "data/maps/Route203/scripts.pory"
	.string "Strength isn’t just about winning. I'll\n"
	.string "train harder, and next time, my fists\l"
	.string "will find their mark.$"

Route203_Text_Hiker1_Intro::
# 99 "data/maps/Route203/scripts.pory"
	.string "The mountains have made me strong, and\n"
	.string "so have my Pokémon! Can you match our\l"
	.string "endurance?$"

Route203_Text_Hiker1_Defeat::
# 103 "data/maps/Route203/scripts.pory"
	.string "I’ve been toppled like a boulder...$"

Route203_Text_Hiker1_PostBattle::
# 107 "data/maps/Route203/scripts.pory"
	.string "Even the strongest peaks can crumble.\n"
	.string "I’ll return, tougher and more resilient.$"

Route203_Text_Swimmer1_Intro::
# 111 "data/maps/Route203/scripts.pory"
	.string "The water is my home turf, and in it, I'm\n"
	.string "unbeatable! Let's see if you can keep\l"
	.string "up!$"

Route203_Text_Swimmer1_Defeat::
# 115 "data/maps/Route203/scripts.pory"
	.string "I can't swim my way out of this one...$"

Route203_Text_Swimmer1_PostBattle::
# 119 "data/maps/Route203/scripts.pory"
	.string "I guess I was all washed up this time.\n"
	.string "I'll dive back in stronger next time!$"

Route203_Text_Swimmer2_Intro::
# 123 "data/maps/Route203/scripts.pory"
	.string "I've trained with the tides, mastering\n"
	.string "every current. You'll be no match for\l"
	.string "me!$"

Route203_Text_Swimmer2_Defeat::
# 127 "data/maps/Route203/scripts.pory"
	.string "Swept away... just like that.$"

Route203_Text_Swimmer2_PostBattle::
# 131 "data/maps/Route203/scripts.pory"
	.string "The ocean may be vast, but so is my\n"
	.string "determination. I'll make waves next\l"
	.string "time!$"

Route203_Text_Swimmer3_Intro::
# 135 "data/maps/Route203/scripts.pory"
	.string "My Pokémon and I are as free as the\n"
	.string "open sea! Let's see if you can keep up\l"
	.string "with our rhythm!$"

Route203_Text_Swimmer3_Defeat::
# 139 "data/maps/Route203/scripts.pory"
	.string "Looks like we got outpaced...$"

Route203_Text_Swimmer3_PostBattle::
# 143 "data/maps/Route203/scripts.pory"
	.string "The sea always calls me back. I'll be\n"
	.string "ready to ride the waves again soon,\l"
	.string "stronger than ever.$"
