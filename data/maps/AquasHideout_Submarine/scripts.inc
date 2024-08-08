AquasHideout_Submarine_MapScripts::
	.byte 0


AquasHideout_Submarine_Trigger_BlueButton::
# 5 "data/maps/AquasHideout_Submarine/scripts.pory"
	lockall
# 6 "data/maps/AquasHideout_Submarine/scripts.pory"
	setvar VAR_TEMP_1, 1
# 7 "data/maps/AquasHideout_Submarine/scripts.pory"
	setvar VAR_TEMP_2, 0
# 8 "data/maps/AquasHideout_Submarine/scripts.pory"
	playse SE_PIN
# 9 "data/maps/AquasHideout_Submarine/scripts.pory"
	call AquasHideout_Submarine_EventScript_BlueButton_Pressed
# 10 "data/maps/AquasHideout_Submarine/scripts.pory"
	special DrawWholeMapView
# 11 "data/maps/AquasHideout_Submarine/scripts.pory"
	releaseall
	end


AquasHideout_Submarine_Trigger_GreenButton::
# 16 "data/maps/AquasHideout_Submarine/scripts.pory"
	lockall
# 17 "data/maps/AquasHideout_Submarine/scripts.pory"
	setvar VAR_TEMP_1, 0
# 18 "data/maps/AquasHideout_Submarine/scripts.pory"
	setvar VAR_TEMP_2, 1
# 19 "data/maps/AquasHideout_Submarine/scripts.pory"
	playse SE_PIN
# 20 "data/maps/AquasHideout_Submarine/scripts.pory"
	call AquasHideout_Submarine_EventScript_GreenButton_Pressed
# 21 "data/maps/AquasHideout_Submarine/scripts.pory"
	special DrawWholeMapView
# 22 "data/maps/AquasHideout_Submarine/scripts.pory"
	releaseall
	end


AquasHideout_Submarine_EventScript_BlueButton_Pressed::
# 27 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 14, 17, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 28 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 14, 18, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 29 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 14, 19, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 30 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 14, 20, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 32 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 28, 3, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 33 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 28, 4, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 34 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 28, 5, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 35 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 28, 6, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 37 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 9, 3, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 38 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 9, 4, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 39 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 9, 5, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 40 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 9, 6, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 42 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 47, 10, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 43 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 47, 11, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 44 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 47, 12, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 45 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 47, 13, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
	return


AquasHideout_Submarine_EventScript_GreenButton_Pressed::
# 51 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 14, 17, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 52 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 14, 18, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 53 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 14, 19, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 54 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 14, 20, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 56 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 28, 3, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 57 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 28, 4, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 58 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 28, 5, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 59 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 28, 6, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 61 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 9, 3, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 62 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 9, 4, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 63 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 9, 5, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 64 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 9, 6, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 66 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 47, 10, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 67 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 47, 11, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 68 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 47, 12, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 69 "data/maps/AquasHideout_Submarine/scripts.pory"
	setmetatile 47, 13, METATILE_BikeShop_Wall_Edge_Top, FALSE
	return

