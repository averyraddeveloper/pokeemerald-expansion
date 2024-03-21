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
	hideobjectat 1, MAP_VAULT_PLAYER_BEDROOM
# 16 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 17 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 18 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmovement 0
# 19 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement 1, FriendEnters
# 20 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Sleeping
# 21 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmovement 0
# 22 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 23 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmovement 0
# 24 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 25 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmovement 0
# 26 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_OpeningSequence_Text_0
# 29 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmessage
# 30 "data/maps/VaultPlayerBedroom/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 31 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 32 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmovement 0
# 33 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 34 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmovement 0
# 35 "data/maps/VaultPlayerBedroom/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 8
# 36 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Sleeping
# 37 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmovement 0
# 38 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 39 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmovement 0
# 40 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 41 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmovement 0
# 42 "data/maps/VaultPlayerBedroom/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 16
# 43 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 44 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmovement 0
# 45 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 46 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmovement 0
# 47 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
# 48 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmovement 0
# 49 "data/maps/VaultPlayerBedroom/scripts.pory"
	showobjectat 1, MAP_VAULT_PLAYER_BEDROOM
# 50 "data/maps/VaultPlayerBedroom/scripts.pory"
	playse SE_UNLOCK
# 51 "data/maps/VaultPlayerBedroom/scripts.pory"
	closemessage
# 52 "data/maps/VaultPlayerBedroom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 53 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 54 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 55 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmovement 0
# 56 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement 1, FriendEnters
# 57 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmovement 0
# 58 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_OpeningSequence_Text_1
# 63 "data/maps/VaultPlayerBedroom/scripts.pory"
	applymovement 1, FriendLeaves
# 64 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitmovement 0
# 65 "data/maps/VaultPlayerBedroom/scripts.pory"
	removeobject 1
# 66 "data/maps/VaultPlayerBedroom/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 67 "data/maps/VaultPlayerBedroom/scripts.pory"
	playse SE_EXIT
# 68 "data/maps/VaultPlayerBedroom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 69 "data/maps/VaultPlayerBedroom/scripts.pory"
	goto VaultPlayerBedroom_EventScript_ContinueOpening
# 70 "data/maps/VaultPlayerBedroom/scripts.pory"
	releaseall
	return


# 72 "data/maps/VaultPlayerBedroom/scripts.pory"
FriendEnters:
# 73 "data/maps/VaultPlayerBedroom/scripts.pory"
	walk_down
# 73 "data/maps/VaultPlayerBedroom/scripts.pory"
	walk_down
	step_end

# 75 "data/maps/VaultPlayerBedroom/scripts.pory"
FriendLeaves:
# 76 "data/maps/VaultPlayerBedroom/scripts.pory"
	face_up
# 77 "data/maps/VaultPlayerBedroom/scripts.pory"
	walk_up
# 77 "data/maps/VaultPlayerBedroom/scripts.pory"
	walk_up
	step_end

VaultPlayerBedroom_EventScript_ContinueOpening::
# 81 "data/maps/VaultPlayerBedroom/scripts.pory"
	lockall
# 82 "data/maps/VaultPlayerBedroom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 83 "data/maps/VaultPlayerBedroom/scripts.pory"
	random 7
# 84 "data/maps/VaultPlayerBedroom/scripts.pory"
	switch VAR_RESULT
# 85 "data/maps/VaultPlayerBedroom/scripts.pory"
	case 0, VaultPlayerBedroom_EventScript_ContinueOpening_3
# 86 "data/maps/VaultPlayerBedroom/scripts.pory"
	case 1, VaultPlayerBedroom_EventScript_ContinueOpening_4
# 87 "data/maps/VaultPlayerBedroom/scripts.pory"
	case 2, VaultPlayerBedroom_EventScript_ContinueOpening_5
# 88 "data/maps/VaultPlayerBedroom/scripts.pory"
	case 3, VaultPlayerBedroom_EventScript_ContinueOpening_6
# 89 "data/maps/VaultPlayerBedroom/scripts.pory"
	case 4, VaultPlayerBedroom_EventScript_ContinueOpening_7
# 90 "data/maps/VaultPlayerBedroom/scripts.pory"
	case 5, VaultPlayerBedroom_EventScript_ContinueOpening_8
# 91 "data/maps/VaultPlayerBedroom/scripts.pory"
	case 6, VaultPlayerBedroom_EventScript_ContinueOpening_9
VaultPlayerBedroom_EventScript_ContinueOpening_1:
# 93 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_7
# 94 "data/maps/VaultPlayerBedroom/scripts.pory"
	special PlayerNamingScreen
# 95 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitstate
# 96 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_8
# 97 "data/maps/VaultPlayerBedroom/scripts.pory"
	dynmultichoice 3, 3, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, VaultPlayerBedroom_EventScript_ContinueOpening_Text_9, VaultPlayerBedroom_EventScript_ContinueOpening_Text_10
# 98 "data/maps/VaultPlayerBedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VaultPlayerBedroom_EventScript_ContinueOpening_11
# 100 "data/maps/VaultPlayerBedroom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VaultPlayerBedroom_EventScript_ContinueOpening_12
VaultPlayerBedroom_EventScript_ContinueOpening_10:
# 103 "data/maps/VaultPlayerBedroom/scripts.pory"
	releaseall
	return

VaultPlayerBedroom_EventScript_ContinueOpening_3:
# 85 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_0
	goto VaultPlayerBedroom_EventScript_ContinueOpening_1

VaultPlayerBedroom_EventScript_ContinueOpening_4:
# 86 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_1
	goto VaultPlayerBedroom_EventScript_ContinueOpening_1

VaultPlayerBedroom_EventScript_ContinueOpening_5:
# 87 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_2
	goto VaultPlayerBedroom_EventScript_ContinueOpening_1

VaultPlayerBedroom_EventScript_ContinueOpening_6:
# 88 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_3
	goto VaultPlayerBedroom_EventScript_ContinueOpening_1

VaultPlayerBedroom_EventScript_ContinueOpening_7:
# 89 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_4
	goto VaultPlayerBedroom_EventScript_ContinueOpening_1

VaultPlayerBedroom_EventScript_ContinueOpening_8:
# 90 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_5
	goto VaultPlayerBedroom_EventScript_ContinueOpening_1

VaultPlayerBedroom_EventScript_ContinueOpening_9:
# 91 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_6
	goto VaultPlayerBedroom_EventScript_ContinueOpening_1

VaultPlayerBedroom_EventScript_ContinueOpening_11:
# 99 "data/maps/VaultPlayerBedroom/scripts.pory"
	goto VaultPlayerBedroom_EventScript_AcceptName
	goto VaultPlayerBedroom_EventScript_ContinueOpening_10

VaultPlayerBedroom_EventScript_ContinueOpening_12:
# 101 "data/maps/VaultPlayerBedroom/scripts.pory"
	goto VaultPlayerBedroom_EventScript_RetryName
	goto VaultPlayerBedroom_EventScript_ContinueOpening_10


VaultPlayerBedroom_EventScript_RetryName::
# 107 "data/maps/VaultPlayerBedroom/scripts.pory"
	special PlayerNamingScreen
# 108 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitstate
# 109 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_ContinueOpening_Text_8
# 110 "data/maps/VaultPlayerBedroom/scripts.pory"
	dynmultichoice 3, 3, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, VaultPlayerBedroom_EventScript_ContinueOpening_Text_9, VaultPlayerBedroom_EventScript_ContinueOpening_Text_10
# 111 "data/maps/VaultPlayerBedroom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VaultPlayerBedroom_EventScript_RetryName_1
# 113 "data/maps/VaultPlayerBedroom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VaultPlayerBedroom_EventScript_RetryName_2
	return

VaultPlayerBedroom_EventScript_RetryName_1:
# 112 "data/maps/VaultPlayerBedroom/scripts.pory"
	goto VaultPlayerBedroom_EventScript_AcceptName
	return

VaultPlayerBedroom_EventScript_RetryName_2:
# 114 "data/maps/VaultPlayerBedroom/scripts.pory"
	goto VaultPlayerBedroom_EventScript_RetryName
	return


VaultPlayerBedroom_EventScript_AcceptName::
# 119 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_AcceptName_Text_0
# 120 "data/maps/VaultPlayerBedroom/scripts.pory"
	special StartWallClock
# 121 "data/maps/VaultPlayerBedroom/scripts.pory"
	waitstate
# 122 "data/maps/VaultPlayerBedroom/scripts.pory"
	gettime
# 123 "data/maps/VaultPlayerBedroom/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8000
# 124 "data/maps/VaultPlayerBedroom/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8001
# 125 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_AcceptName_Text_1
# 126 "data/maps/VaultPlayerBedroom/scripts.pory"
	msgbox VaultPlayerBedroom_EventScript_AcceptName_Text_2
# 127 "data/maps/VaultPlayerBedroom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 128 "data/maps/VaultPlayerBedroom/scripts.pory"
	releaseall
	end


VaultPlayerBedroom_EventScript_OpeningSequence_Text_0:
# 26 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "Z...\n"
	.string "Z...\l"
	.string "Z...$"

VaultPlayerBedroom_EventScript_OpeningSequence_Text_1:
# 58 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "Did you fall asleep at your computer\n"
	.string "again?!\l"
	.string "...\l"
	.string "Don't you know today is the big day?\l"
	.string "The day we've all been waiting for. The\l"
	.string "scientists have given the all clear, and\l"
	.string "I am so excited to finally get out of\l"
	.string "this stuffy vault.\l"
	.string "You should finish your work, and come\l"
	.string "join the festivities. Remember to sign\l"
	.string "and date it!$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_0:
# 85 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "“...and thus concluding that Pidgey\n"
	.string "feathers possess an aerodynamic\l"
	.string "advantage over Swablu feathers in\l"
	.string "simulated wind tunnel tests.”$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_1:
# 86 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "“...and thus demonstrating that\n"
	.string "Magikarp's splashing behavior has a\l"
	.string "negligible impact on water quality\l"
	.string "within aquarium environments.”$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_2:
# 87 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "“...and thus illustrating the inefficacy\n"
	.string "of Slowpoke tails as a suitable\l"
	.string "substitute for building material in\l"
	.string "architectural engineering.”$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_3:
# 88 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "“...and thus, it is proven that Yache\n"
	.string "Berries are not a suitable whole meal\l"
	.string "replacement.”$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_4:
# 89 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "“...and thus proposing that the spatial\n"
	.string "distortion caused by Ultra Wormholes\l"
	.string "may provide a means for\l"
	.string "interdimensional communication,\l"
	.string "subject to further investigation.”$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_5:
# 90 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "“...and thus suggesting that the\n"
	.string "migratory patterns of Wingull are\l"
	.string "influenced by geomagnetic anomalies\l"
	.string "rather than seasonal changes in\l"
	.string "climate.”$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_6:
# 91 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "“...and thus highlighting the symbiotic\n"
	.string "relationship between Corsola colonies\l"
	.string "and coral reef ecosystems,\l"
	.string "underscoring the importance of\l"
	.string "conservation efforts in marine\l"
	.string "biodiversity hotspots.”$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_7:
# 93 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "SIGNED: ...$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_8:
# 96 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "{PLAYER}, is that it?$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_9:
# 97 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "Yes$"

VaultPlayerBedroom_EventScript_ContinueOpening_Text_10:
# 97 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "No$"

VaultPlayerBedroom_EventScript_AcceptName_Text_0:
# 119 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "SIGNED: {PLAYER} at TIME: ...$"

VaultPlayerBedroom_EventScript_AcceptName_Text_1:
# 125 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "SIGNED: {PLAYER} at TIME:\n"
	.string "{STR_VAR_1}:{STR_VAR_2}$"

VaultPlayerBedroom_EventScript_AcceptName_Text_2:
# 126 "data/maps/VaultPlayerBedroom/scripts.pory"
	.string "Now that I am finished, I should get\n"
	.string "changed and go join everyone.$"
