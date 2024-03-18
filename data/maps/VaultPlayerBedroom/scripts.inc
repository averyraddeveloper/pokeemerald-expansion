VaultPlayerBedroom_MapScripts::
# 2 "data/maps/VaultPlayerBedroom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VaultPlayerBedroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

VaultPlayerBedroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/VaultPlayerBedroom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, VaultPlayerBedroom_EventScript_OpeningSequenceCheck
	.2byte 0


VaultPlayerBedroom_EventScript_OpeningSequenceCheck::
# 8 "data/maps/VaultPlayerBedroom/scripts.pory"
	goto_if_unset FLAG_SET_WALL_CLOCK, VaultPlayerBedroom_EventScript_OpeningSequenceCheck_1
	return

VaultPlayerBedroom_EventScript_OpeningSequenceCheck_1:
# 9 "data/maps/VaultPlayerBedroom/scripts.pory"
	goto VaultPlayerBedroom_EventScript_OpeningSequence
	return


VaultPlayerBedroom_EventScript_OpeningSequence::
# 14 "data/maps/VaultPlayerBedroom/scripts.pory"
	lockall
# 15 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 17 "data/maps/VaultPlayerBedroom/scripts.pory"
	playse SE_UNLOCK
# 18 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement 1, Common_Movement_Sleeping
# 19 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmovement 0
# 20 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 21 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmovement 0
# 22 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement 1, FriendEnters
# 23 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmovement 0
# 24 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_OpeningSequence_Text_0
# 29 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement 1, FriendLeaves
# 30 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmovement 0
# 31 "data/maps/VaultPlayerBedroom/scripts.pory"
	removeobject 1
# 32 "data/maps/VaultPlayerBedroom/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 33 "data/maps/VaultPlayerBedroom/scripts.pory"
	playse SE_EXIT
# 34 "data/maps/VaultPlayerBedroom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 35 "data/maps/VaultPlayerBedroom/scripts.pory"
	goto VaultPlayerBedroom_EventScript_ContinueOpening
# 36 "data/maps/VaultPlayerBedroom/scripts.pory"
	releaseall
	return


# 38 "data/maps/VaultPlayerBedroom/scripts.pory"
FriendEnters:
# 39 "data/maps/VaultPlayerBedroom/scripts.pory"
	walk_down
# 39 "data/maps/VaultPlayerBedroom/scripts.pory"
	walk_down
	step_end

# 41 "data/maps/VaultPlayerBedroom/scripts.pory"
FriendLeaves:
# 42 "data/maps/VaultPlayerBedroom/scripts.pory"
	face_up
# 43 "data/maps/VaultPlayerBedroom/scripts.pory"
	walk_up
# 43 "data/maps/VaultPlayerBedroom/scripts.pory"
	walk_up
	step_end

VaultPlayerBedroom_EventScript_ContinueOpening::
# 47 "data/maps/VaultPlayerBedroom/scripts.pory"
	lockall
# 48 "data/maps/VaultPlayerBedroom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 49 "data/maps/VaultPlayerBedroom/scripts.pory"
	random 7
# 50 "data/maps/VaultPlayerBedroom/scripts.pory"
	switch VAR_RESULT
# 51 "data/maps/VaultPlayerBedroom/scripts.pory"
	case 0, VaultPlayerBedroom_EventScript_ContinueOpening_3
# 52 "data/maps/VaultPlayerBedroom/scripts.pory"
	case 1, VaultPlayerBedroom_EventScript_ContinueOpening_4
# 53 "data/maps/VaultPlayerBedroom/scripts.pory"
	case 2, VaultPlayerBedroom_EventScript_ContinueOpening_5
# 54 "data/maps/VaultPlayerBedroom/scripts.pory"
	case 3, VaultPlayerBedroom_EventScript_ContinueOpening_6
# 55 "data/maps/VaultPlayerBedroom/scripts.pory"
	case 4, VaultPlayerBedroom_EventScript_ContinueOpening_7
# 56 "data/maps/VaultPlayerBedroom/scripts.pory"
	case 5, VaultPlayerBedroom_EventScript_ContinueOpening_8
# 57 "data/maps/VaultPlayerBedroom/scripts.pory"
	case 6, VaultPlayerBedroom_EventScript_ContinueOpening_9
VaultPlayerBedroom_EventScript_ContinueOpening_1:
# 59 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_7
# 60 "data/maps/VaultPlayerBedroom/scripts.pory"
	special PlayerNamingScreen
# 61 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitstate
# 62 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_8
# 63 "data/maps/VaultPlayerBedroom/scripts.pory"
	dynmultichoice 3, 3, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, VaultPlayerBedroom_EventScript_ContinueOpening_Text_9, VaultPlayerBedroom_EventScript_ContinueOpening_Text_10
# 64 "data/maps/VaultPlayerBedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VaultPlayerBedroom_EventScript_ContinueOpening_11
# 66 "data/maps/VaultPlayerBedroom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VaultPlayerBedroom_EventScript_ContinueOpening_12
VaultPlayerBedroom_EventScript_ContinueOpening_10:
# 69 "data/maps/VaultPlayerBedroom/scripts.pory"
	releaseall
	return

VaultPlayerBedroom_EventScript_ContinueOpening_3:
# 51 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_0
	goto VaultPlayerBedroom_EventScript_ContinueOpening_1

VaultPlayerBedroom_EventScript_ContinueOpening_4:
# 52 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_1
	goto VaultPlayerBedroom_EventScript_ContinueOpening_1

VaultPlayerBedroom_EventScript_ContinueOpening_5:
# 53 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_2
	goto VaultPlayerBedroom_EventScript_ContinueOpening_1

VaultPlayerBedroom_EventScript_ContinueOpening_6:
# 54 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_3
	goto VaultPlayerBedroom_EventScript_ContinueOpening_1

VaultPlayerBedroom_EventScript_ContinueOpening_7:
# 55 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_4
	goto VaultPlayerBedroom_EventScript_ContinueOpening_1

VaultPlayerBedroom_EventScript_ContinueOpening_8:
# 56 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_5
	goto VaultPlayerBedroom_EventScript_ContinueOpening_1

VaultPlayerBedroom_EventScript_ContinueOpening_9:
# 57 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_6
	goto VaultPlayerBedroom_EventScript_ContinueOpening_1

VaultPlayerBedroom_EventScript_ContinueOpening_11:
# 65 "data/maps/VaultPlayerBedroom/scripts.pory"
	goto VaultPlayerBedroom_EventScript_AcceptName
	goto VaultPlayerBedroom_EventScript_ContinueOpening_10

VaultPlayerBedroom_EventScript_ContinueOpening_12:
# 67 "data/maps/VaultPlayerBedroom/scripts.pory"
	goto VaultPlayerBedroom_EventScript_RetryName
	goto VaultPlayerBedroom_EventScript_ContinueOpening_10


VaultPlayerBedroom_EventScript_RetryName::
# 73 "data/maps/VaultPlayerBedroom/scripts.pory"
	special PlayerNamingScreen
# 74 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitstate
# 75 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_8
# 76 "data/maps/VaultPlayerBedroom/scripts.pory"
	dynmultichoice 3, 3, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, VaultPlayerBedroom_EventScript_ContinueOpening_Text_9, VaultPlayerBedroom_EventScript_ContinueOpening_Text_10
# 77 "data/maps/VaultPlayerBedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VaultPlayerBedroom_EventScript_RetryName_1
# 79 "data/maps/VaultPlayerBedroom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VaultPlayerBedroom_EventScript_RetryName_2
	return

VaultPlayerBedroom_EventScript_RetryName_1:
# 78 "data/maps/VaultPlayerBedroom/scripts.pory"
	goto VaultPlayerBedroom_EventScript_AcceptName
	return

VaultPlayerBedroom_EventScript_RetryName_2:
# 80 "data/maps/VaultPlayerBedroom/scripts.pory"
	goto VaultPlayerBedroom_EventScript_RetryName
	return


VaultPlayerBedroom_EventScript_AcceptName::
# 85 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_AcceptName_Text_0
# 86 "data/maps/VaultPlayerBedroom/scripts.pory"
	special StartWallClock
# 87 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitstate
# 88 "data/maps/VaultPlayerBedroom/scripts.pory"
	gettime
# 89 "data/maps/VaultPlayerBedroom/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8000
# 90 "data/maps/VaultPlayerBedroom/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8001
# 91 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_AcceptName_Text_1
# 92 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_AcceptName_Text_2
# 93 "data/maps/VaultPlayerBedroom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 94 "data/maps/VaultPlayerBedroom/scripts.pory"
	releaseall
	end


VaultPlayerBedroom_EventScript_OpeningSequence_Text_0:
# 24 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "Did you fall asleep at your computer\n"
	.string "again?!\l"
	.string "...\l"
	.string "Don't you know today is the big day?\l"
	.string "The day we've all been waiting for,\l"
	.string "finally we can leave! The scientists\l"
	.string "have given the all clear, and I can't\l"
	.string "wait to get out of this stuffy vault.\l"
	.string "You should finish your work, and come\l"
	.string "join the festivities. Remember to sign\l"
	.string "and date it!$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_0:
# 51 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "“...and thus concluding that Pidgey\n"
	.string "feathers possess an aerodynamic\l"
	.string "advantage over Swablu feathers in\l"
	.string "simulated wind tunnel tests.”$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_1:
# 52 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "“...and thus demonstrating that\n"
	.string "Magikarp's splashing behavior has a\l"
	.string "negligible impact on water quality\l"
	.string "within aquarium environments.”$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_2:
# 53 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "“...and thus illustrating the inefficacy\n"
	.string "of Slowpoke tails as a suitable\l"
	.string "substitute for building material in\l"
	.string "architectural engineering.”$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_3:
# 54 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "“...and thus, it is proven that Yache\n"
	.string "Berries are not a suitable whole meal\l"
	.string "replacement.”$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_4:
# 55 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "“...and thus proposing that the spatial\n"
	.string "distortion caused by Ultra Wormholes\l"
	.string "may provide a means for\l"
	.string "interdimensional communication,\l"
	.string "subject to further investigation.”$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_5:
# 56 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "“...and thus suggesting that the\n"
	.string "migratory patterns of Wingull are\l"
	.string "influenced by geomagnetic anomalies\l"
	.string "rather than seasonal changes in\l"
	.string "climate.”$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_6:
# 57 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "“...and thus highlighting the symbiotic\n"
	.string "relationship between Corsola colonies\l"
	.string "and coral reef ecosystems,\l"
	.string "underscoring the importance of\l"
	.string "conservation efforts in marine\l"
	.string "biodiversity hotspots.”$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_7:
# 59 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "SIGNED: ...$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_8:
# 62 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "{PLAYER}, is that it?$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_9:
# 63 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "Yes$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_10:
# 63 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "No$"

VaultPlayerBedroom_EventScript_AcceptName_Text_0:
# 85 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "SIGNED: {PLAYER} at TIME: ...$"

VaultPlayerBedroom_EventScript_AcceptName_Text_1:
# 91 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "SIGNED: {PLAYER} at TIME:\n"
	.string "{STR_VAR_1}:{STR_VAR_2}$"

VaultPlayerBedroom_EventScript_AcceptName_Text_2:
# 92 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "Now that I am finished, I should get\n"
	.string "changed and go join everyone.$"
