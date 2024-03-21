VaultCorridor_MapScripts::
	.byte 0


VaultCorridor_EventScript_OldMan::
# 5 "data/maps/VaultCorridor/scripts.pory"
	lock
# 6 "data/maps/VaultCorridor/scripts.pory"
	faceplayer
# 7 "data/maps/VaultCorridor/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq VaultCorridor_EventScript_OldMan_1
# 13 "data/maps/VaultCorridor/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq VaultCorridor_EventScript_OldMan_2
	return

VaultCorridor_EventScript_OldMan_1:
# 8 "data/maps/VaultCorridor/scripts.pory"
	msgbox VaultCorridor_EventScript_OldMan_Text_0
# 9 "data/maps/VaultCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 10 "data/maps/VaultCorridor/scripts.pory"
	release
	end

VaultCorridor_EventScript_OldMan_2:
# 14 "data/maps/VaultCorridor/scripts.pory"
	msgbox VaultCorridor_EventScript_OldMan_Text_1
# 15 "data/maps/VaultCorridor/scripts.pory"
	release
	end


VaultCorridor_EventScript_Scientist1::
# 22 "data/maps/VaultCorridor/scripts.pory"
	lock
# 23 "data/maps/VaultCorridor/scripts.pory"
	faceplayer
# 24 "data/maps/VaultCorridor/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq VaultCorridor_EventScript_Scientist1_1
# 30 "data/maps/VaultCorridor/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq VaultCorridor_EventScript_Scientist1_2
	return

VaultCorridor_EventScript_Scientist1_1:
# 25 "data/maps/VaultCorridor/scripts.pory"
	msgbox VaultCorridor_EventScript_Scientist1_Text_0
# 26 "data/maps/VaultCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 27 "data/maps/VaultCorridor/scripts.pory"
	release
	end

VaultCorridor_EventScript_Scientist1_2:
# 31 "data/maps/VaultCorridor/scripts.pory"
	msgbox VaultCorridor_EventScript_Scientist1_Text_1
# 32 "data/maps/VaultCorridor/scripts.pory"
	release
	end


VaultCorridor_EventScript_GoToTheParty::
# 39 "data/maps/VaultCorridor/scripts.pory"
	lock
# 40 "data/maps/VaultCorridor/scripts.pory"
	msgbox VaultCorridor_EventScript_GoToTheParty_Text_0
# 41 "data/maps/VaultCorridor/scripts.pory"
	waitmessage
# 42 "data/maps/VaultCorridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GoToTheParty
# 43 "data/maps/VaultCorridor/scripts.pory"
	waitmovement 0
# 44 "data/maps/VaultCorridor/scripts.pory"
	release
	return


# 46 "data/maps/VaultCorridor/scripts.pory"
GoToTheParty:
# 47 "data/maps/VaultCorridor/scripts.pory"
	walk_left
# 47 "data/maps/VaultCorridor/scripts.pory"
	walk_left
	step_end

VaultCorridor_EventScript_OldMan_Text_0:
# 8 "data/maps/VaultCorridor/scripts.pory"
	.string "My grandfather used to tell me stories\n"
	.string "about when they first entered this\l"
	.string "place.$"

VaultCorridor_EventScript_OldMan_Text_1:
# 14 "data/maps/VaultCorridor/scripts.pory"
	.string "He was only 26 years old when they shut\n"
	.string "the doors.$"

VaultCorridor_EventScript_Scientist1_Text_0:
# 25 "data/maps/VaultCorridor/scripts.pory"
	.string "We have all been anticipating this day\n"
	.string "for quite some time.$"

VaultCorridor_EventScript_Scientist1_Text_1:
# 31 "data/maps/VaultCorridor/scripts.pory"
	.string "After weeks of sustained low levels of\n"
	.string "radiation, it is finally safe to exit.$"

VaultCorridor_EventScript_GoToTheParty_Text_0:
# 40 "data/maps/VaultCorridor/scripts.pory"
	.string "I should go join everyone downstairs.$"
