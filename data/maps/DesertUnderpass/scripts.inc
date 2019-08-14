DesertUnderpass_MapScripts:: @ 823AF37
	map_script MAP_SCRIPT_ON_TRANSITION, DesertUnderpass_OnTransition
	.byte 0

DesertUnderpass_OnTransition: @ 823AF3D
	setflag FLAG_LANDMARK_DESERT_UNDERPASS
	end

DesertUnderpass_EventScript_23AF41:: @ 823AF41
	lock
	faceplayer
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, DesertUnderpass_EventScript_23AF57
	goto_if_set FLAG_CHOSE_ROOT_FOSSIL, DesertUnderpass_EventScript_23AF68
	release
	end

DesertUnderpass_EventScript_23AF57:: @ 823AF57
	giveitem_std ITEM_CLAW_FOSSIL
	removeobject 1
	release
	end

DesertUnderpass_EventScript_23AF68:: @ 823AF68
	giveitem_std ITEM_ROOT_FOSSIL
	removeobject 1
	release
	end

DesertUnderpass_EventScript_23AF68_1:: 
	giveitem_std ITEM_DOME_FOSSIL
	removeobject 1
	release
	end

DesertUnderpass_EventScript_23AF68_2::
	giveitem_std ITEM_HELIX_FOSSIL
	removeobject 1
	release
	end

DesertUnderpass_EventScript_23AF68_3::
	giveitem_std ITEM_OLD_AMBER
	removeobject 1
	release
	end

DesertUnderpass_EventScript_23AF68_4::
	giveitem_std ITEM_ARMOR_FOSSIL
	removeobject 1
	release
	end

DesertUnderpass_EventScript_23AF68_5::
	giveitem_std ITEM_SKULL_FOSSIL
	removeobject 1
	release
	end

DesertUnderpass_Text_23AF79:: @ 823AF79
	.string "{PLAYER} found the Root Fossil.$"

DesertUnderpass_Text_23AF93:: @ 823AF93
	.string "{PLAYER} found the Claw Fossil.$"

