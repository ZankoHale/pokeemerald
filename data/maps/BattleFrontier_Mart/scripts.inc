BattleFrontier_Mart_MapScripts:: @ 8267ACB
	.byte 0

BattleFrontier_Mart_EventScript_267ACC:: @ 8267ACC
	lock
	faceplayer
	message gUnknown_08272A21
	waitmessage
	pokemart BattleFrontier_Mart_Pokemart_267AE4
	msgbox gUnknown_08272A3F, MSGBOX_DEFAULT
	release
	end

	.align 2
BattleFrontier_Mart_Pokemart_267AE4: @ 8267AE4
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_PROTEIN
	.2byte ITEM_CALCIUM
	.2byte ITEM_IRON
	.2byte ITEM_ZINC
	.2byte ITEM_CARBOS
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE
	release
	end

BattleFrontier_Mart_EventScript_267ACC_n1::
	lock
	faceplayer
	message gUnknown_08272A21
	waitmessage
	pokemart BattleFrontier_Mart_Pokemart_267AE4_n1
	msgbox gUnknown_08272A3F, MSGBOX_DEFAULT
	release
	end

	.align 2
BattleFrontier_Mart_Pokemart_267AE4_n1:
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_LEPPA_BERRY
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_LUM_BERRY
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_FIGY_BERRY
	.2byte ITEM_WIKI_BERRY
	.2byte ITEM_MAGO_BERRY
	.2byte ITEM_AGUAV_BERRY
	.2byte ITEM_IAPAPA_BERRY
	.2byte ITEM_RAZZ_BERRY
	.2byte ITEM_BLUK_BERRY
	.2byte ITEM_NANAB_BERRY
	.2byte ITEM_WEPEAR_BERRY
	.2byte ITEM_PINAP_BERRY
	.2byte ITEM_POMEG_BERRY
	.2byte ITEM_KELPSY_BERRY
	.2byte ITEM_QUALOT_BERRY
	.2byte ITEM_HONDEW_BERRY
	.2byte ITEM_GREPA_BERRY
	.2byte ITEM_TAMATO_BERRY
	.2byte ITEM_CORNN_BERRY
	.2byte ITEM_MAGOST_BERRY
	.2byte ITEM_RABUTA_BERRY
	.2byte ITEM_NOMEL_BERRY
	.2byte ITEM_SPELON_BERRY
	.2byte ITEM_PAMTRE_BERRY
	.2byte ITEM_WATMEL_BERRY
	.2byte ITEM_DURIN_BERRY
	.2byte ITEM_BELUE_BERRY
	.2byte ITEM_OCCA_BERRY
	.2byte ITEM_PASSHO_BERRY
	.2byte ITEM_WACAN_BERRY
	.2byte ITEM_RINDO_BERRY
	.2byte ITEM_YACHE_BERRY
	.2byte ITEM_CHOPLE_BERRY
	.2byte ITEM_KEBIA_BERRY
	.2byte ITEM_SHUCA_BERRY
	.2byte ITEM_COBA_BERRY
	.2byte ITEM_PAYAPA_BERRY
	.2byte ITEM_TANGA_BERRY
	.2byte ITEM_CHARTI_BERRY
	.2byte ITEM_KASIB_BERRY
	.2byte ITEM_HABAN_BERRY
	.2byte ITEM_COLBUR_BERRY
	.2byte ITEM_BABIRI_BERRY
	.2byte ITEM_CHILAN_BERRY
	.2byte ITEM_ROSELI_BERRY
	.2byte ITEM_LIECHI_BERRY
	.2byte ITEM_GANLON_BERRY
	.2byte ITEM_SALAC_BERRY
	.2byte ITEM_PETAYA_BERRY
	.2byte ITEM_APICOT_BERRY
	.2byte ITEM_LANSAT_BERRY
//	.2byte ITEM_MICLE_BERRY
	.2byte ITEM_STARF_BERRY
	.2byte ITEM_ENIGMA_BERRY
//	.2byte ITEM_CUSTAP_BERRY
//	.2byte ITEM_JABOCA_BERRY
//	.2byte ITEM_ROWAP_BERRY
//	.2byte ITEM_KEE_BERRY
//	.2byte ITEM_MARANGA_BERRY
	.2byte ITEM_NONE
	release
	end

BattleFrontier_Mart_EventScript_267ACC_n2::
	lock
	faceplayer
	message gUnknown_08272A21
	waitmessage
	pokemart BattleFrontier_Mart_Pokemart_267AE4_n2
	msgbox gUnknown_08272A3F, MSGBOX_DEFAULT
	release
	end

	.align 2
BattleFrontier_Mart_Pokemart_267AE4_n2:
//	.2byte ITEM_MICLE_BERRY
	.2byte ITEM_ENIGMA_BERRY
	.2byte ITEM_NONE
	release
	end

BattleFrontier_Mart_EventScript_267B02:: @ 8267B02
	msgbox BattleFrontier_Mart_Text_267B29, MSGBOX_NPC
	end

BattleFrontier_Mart_EventScript_267B0B:: @ 8267B0B
	lock
	applymovement 2, Common_Movement_FaceDown
	waitmovement 0
	msgbox BattleFrontier_Mart_Text_267B8F, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Mart_EventScript_267B20:: @ 8267B20
	msgbox BattleFrontier_Mart_Text_267C01, MSGBOX_NPC
	end

BattleFrontier_Mart_Text_267B29: @ 8267B29
	.string "We came here to chaperon our\n"
	.string "grandson.\p"
	.string "But since we're here, we thought\n"
	.string "we should get some souvenirs.$"

BattleFrontier_Mart_Text_267B8F: @ 8267B8F
	.string "Dear, what do you think of this?\n"
	.string "Wouldn't this make a nice gift?\p"
	.string "It's…Pro…te…in?\n"
	.string "It sounds delicious, doesn't it?$"

BattleFrontier_Mart_Text_267C01: @ 8267C01
	.string "A lot of the Battle Frontier's\n"
	.string "facilities don't allow the use of items\l"
	.string "during battles.\p"
	.string "That rule makes things tougher than\n"
	.string "they already are!$"

