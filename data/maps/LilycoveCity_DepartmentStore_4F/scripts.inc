LilycoveCity_DepartmentStore_4F_MapScripts:: @ 821FDEA
	.byte 0

LilycoveCity_DepartmentStore_4F_EventScript_21FDEB:: @ 821FDEB
	msgbox LilycoveCity_DepartmentStore_4F_Text_21FE50, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_21FDF4:: @ 821FDF4
	msgbox LilycoveCity_DepartmentStore_4F_Text_21FEC7, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_21FDFD:: @ 821FDFD
	msgbox LilycoveCity_DepartmentStore_4F_Text_21FF2D, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_21FE06:: @ 821FE06
	lock
	faceplayer
	message gUnknown_08272A21
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_21FE20
	msgbox gUnknown_08272A3F, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_21FE20: @ 821FE20
	.2byte ITEM_TM38
	.2byte ITEM_TM25
	.2byte ITEM_TM14
	.2byte ITEM_TM15
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_EventScript_21FE2C:: @ 821FE2C
	lock
	faceplayer
	message gUnknown_08272A21
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_21FE44
	msgbox gUnknown_08272A3F, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_21FE44: @ 821FE44
	.2byte ITEM_TM17
	.2byte ITEM_TM20
	.2byte ITEM_TM33
	.2byte ITEM_TM16
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_EventScript_2_1::
	lock
	faceplayer
	message gUnknown_08272A21
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_2_2
	msgbox gUnknown_08272A3F, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_2_2:
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_METAL_COAT
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_DRAGON_SCALE
	.2byte ITEM_UP_GRADE
	.2byte ITEM_DUBIOUS_DISC
	.2byte ITEM_DEEP_SEA_TOOTH
	.2byte ITEM_DEEP_SEA_SCALE
	.2byte ITEM_PRISM_SCALE
	.2byte ITEM_OVAL_STONE
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_RAZOR_CLAW
	.2byte ITEM_RAZOR_FANG
	.2byte ITEM_PROTECTOR
	.2byte ITEM_ELECTIRIZER
	.2byte ITEM_MAGMARIZER
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_SACHET
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_Text_21FE50: @ 821FE50
	.string "Hmm…\p"
	.string "An attacking move…\n"
	.string "Or a defensive move…\p"
	.string "It's no easy matter to decide which TM\n"
	.string "moves should be taught to Pokémon…$"

LilycoveCity_DepartmentStore_4F_Text_21FEC7: @ 821FEC7
	.string "There are so many different kinds of\n"
	.string "TM moves.\p"
	.string "A catalog I read said there are fifty\n"
	.string "different kinds.$"

LilycoveCity_DepartmentStore_4F_Text_21FF2D: @ 821FF2D
	.string "I'd like to get all the different TMs,\n"
	.string "but a Pokémon learns only four moves.$"

