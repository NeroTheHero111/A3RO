class CfgPatches
{
	class A3RO_ACEAX_ACEBI_Edits
	{
    name = "Arma 3 Realism Overhaul - ACE3 Arsenal Extended - Vanilla and ACE Compat - Edits";
    author = "NeroTheHero111";
    url = "";
    version="1.0";
	requiredAddons[] = 
	{
	"A3RO_ACE_Edits",
	"aceax_gearinfo",
	"aceax_acebi_compat",
	};
    units[] = {};
    weapons[] = {};
	skipWhenMissingDependencies = 1;
    };
};
class XtdGearModels
{
	class CamoBase // Creating additinal Camo Backgrounds for consistency. Colour Values taken from ACEAX.
	{
		class A3RO_M25_CAMO // Olive Colour
		{
			label="Camo";
			image="\A3RO_ACEAX\Edits\A3RO_M25_CAMO.paa";
		};	
		class A3RO_MSBS_SAND // Tan but not really
		{
			label="Sand";
			image="#(rgb,8,8,3)color(0.49,0.43,0.33,1)";
		};
		class A3RO_P99_KHK // Khaki but darker please (Green)
		{
			label="Khaki";
			image="#(rgb,8,8,3)color(0.34,0.4,0.26,1)";
		};
		class A3RO_CSAT // It uses a scrapped Alpha Texture so Ill just use HEX
		{
			label="CSAT";
			image = "z\aceax\addons\gearinfo\data\camo\csat.paa";
		};
		class A3RO_TAIGA
		{
			label="Camo";
			image = "z\aceax\compats\ACEandBI\data\camo\rus_taiga.paa";
		};
	};
	class CfgWeapons // Changing Weapon Labels to the Names from A3RO_Vanilla. Adding new Camos to ACEAX Models
	{
		class acebi_ak15
		{
		label="AK-15";
		};
		class acebi_ak15_gl
		{
		label="AK-15 GP-25";
		};
		class acebi_ak15k
		{
		label="AK-15K";
		};
		class acebi_asp1kir
		{
		label="ASP-1 Kir";
		};
		class acebi_cyrus
		{
		label="SVDK Magpul";
		};
		class acebi_f2000
		{
		label="FS2000 Tactical TR";
			class camo
			{
				values[]+=
				{
				"A3RO_CSAT"
				};
			};
		};
		class acebi_f2000_eglm
		{
		label="F2000 Tactical GL1";
			class camo
			{
				values[]+=
				{
				"A3RO_CSAT"
				};
			};
		};
		class acebi_f2000_tac
		{
		label="F2000 Tactical TR";
			class camo
			{
				values[]+=
				{
				"A3RO_CSAT"
				};
			};
		};
		class acebi_gm6_lynx
		{
		label="GM6 Lynx 12.7x108";
		};
		class acebi_hk121
		{
		label="MG5 A2";
		};
		class acebi_hk416a5_11
		{
		label="HK416A5 11''";
		};
		class acebi_hk416a5_11_gl
		{
		label="HK416A5 11'' GLM";
		};
		class acebi_hk416a5_14_5
		{
		label="HK416A5 14.5''";
		};
		class acebi_hk417a2_20
		{
		label="MR308 A3-28 20''";
		};
		class acebi_lwmmg
		{
		label="RM338";
		};
		class acebi_m14 // Also adding missing Camo BG
		{
		label="M25 SWS";
			class camo
			{
				values[]=
				{
				"A3RO_M25_CAMO",
				"OLI"
				};
			};
		};
		class acebi_m200_int
		{
		label="M200 Intervention® .408";
		};
		class acebi_msbs_grot // Also replacing Name of TAN BG to Sand 
		{
		label="MSBS Grot B16";
			class camo
			{
				values[]=
				{
				"BLK",
				"OLI",
				"EAF",
				"A3RO_MSBS_SAND"
				};
			};
		};
		class acebi_msbs_grot_gl
		{
		label="MSBS Grot B16 GP";
			class camo
			{
				values[]=
				{
				"BLK",
				"OLI",
				"EAF",
				"A3RO_MSBS_SAND"
				};
			};
		};
		class acebi_msbs_grot_mr
		{
		label="MSBS Grot B26";
			class camo
			{
				values[]=
				{
				"BLK",
				"OLI",
				"EAF",
				"A3RO_MSBS_SAND"
				};
			};
		};
		class acebi_msbs_grot_sg
		{
		label="MSBS Grot B16 SIX12";
			class camo
			{
				values[]=
				{
				"BLK",
				"OLI",
				"EAF",
				"A3RO_MSBS_SAND"
				};
			};
		};
		class acebi_mx
		{
		label="ACR Carbine";
		};
		class acebi_mx_3gl
		{
		label="ACR Carbine 3GL";
		};
		class acebi_mx_lsw
		{
		label="ACR HB";
		};
		class acebi_mxc
		{
		label="ACR Entry Carbine";
		};
		class acebi_mxm
		{
		label="ACR SPR";
		};
		class acebi_noreen
		{
		label="''Bad News'' LVOA® 16'' .338 LM";
		};
		class acebi_p90
		{
		label="P90 USG";
		};
		class acebi_p90_tr
		{
		label="P90 TR";
		};
		class acebi_ps90
		{
		label="PS90 USG";
		};
		class acebi_ps90_tr
		{
		label="PS90 TR";
		};
		class acebi_qbu88
		{
		label="QBU-88";
		};
		class acebi_qbz95_1
		{
		label="QBZ-95-1 FTU™";
		};
		class acebi_qbz95_1_gl
		{
		label="QBZ-95-1 FTU™ QLG-10A";
		};
		class acebi_qbz95_1_lsw
		{
		label="QJB-95-1 FTU™ LSW";
		};
		class acebi_rpk
		{
		label="RPK-12";
		};
		class acebi_sig556
		{
		label="SIG 556 DMR 21''";
		};
		class acebi_stoner99
		{
		label="Stoner 96";
		};
		class acebi_type115
		{
		label="Type 115";
		};
		class acebi_fnk45
		{
		label="FNX-45 Tactical";
		};
		class acebi_p99 // Also Swapping Order and Colour Names
		{
		label="P99 9x19";
			class camo
			{
				values[]=
				{
				"BLK",
				"A3RO_P99_KHK",
				"A3RO_MSBS_SAND"
				};
			};
		};
		class acebi_maaws_0
		{
		label="M3A1 MAAWS";
		};
		class acebi_maaws_1
		{
		label="M3E1 MAAWS";
		};
		class acebi_metis // Undefined BRN to CBR
		{
			class camo
			{
				values[]=
				{
					"CBR",
					"GRN"
				};
			};
		label="9K115-2 Metis-M1";
		};
		class acebi_rpg32 // Changing Order, Adding Camo
		{
		label="RPG-32";
		class camo
			{
				values[]=
				{
				"GRN",
				"HEX",
				"GHEX",
				"A3RO_TAIGA"
				};
			};
		};
		class acebi_titan_aa
		{
		label="Titan MPRL";
		};
		class acebi_titan_at
		{
		label="Mini-Spike";
		};
		class acebi_compact_nvg
		{
			class camo // I don't know how to delete the RGR value from the array, but I don't have to as its no longer assigned a class. Also I'm replacing them to fix the order since every other actually new Camo should use += anyway.
			{
				values[]=
				{
				"BLK",
				"GRN",
				"HEX",
				"GHEX",
				"UHEX"
				};
			};
		}
		class acebi_nvg_gen1 // Adding Tropic
		{
		label="NV Goggles (Gen1)";
			class camo
			{
				values[]+=
				{
				"Tropic"
				};
			};
		};
		class acebi_nvg_gen2
		{
		label="NV Goggles (Gen2)";
			class camo
			{
				values[]+=
				{
				"Tropic"	
				};
			};
		};
		class acebi_nvg_gen3
		{
		label="NV Goggles (Gen3)";
			class camo
			{
				values[]+=
				{
				"Tropic"	
				};
			};
		};
		class acebi_nvg_gen4
		{
		label="NV Goggles (Gen4)";
			class camo
			{
				values[]+=
				{
				"Tropic"	
				};
			};
		};
		class acebi_nvg_wide
		{
		label="NV Goggles (Wide)";
			class camo
			{
				values[]+=
				{
				"Tropic"	
				};
			};
		};
		// New ACEAX Models for ACE3 NV Goggles not yet sorted
		class a3ro_ACE_NVGoggles_Gen3_WP
		{
			options[]=
			{
				"camo"
			};
			label="NV Goggles (Gen 3, WP)";
			class camo
			{
				values[]=
				{
					"BLK",
					"SND",
					"OLI",
					"Tropic"
				};
				alwaysSelectable=1;
			};
		};
		class a3ro_ACE_NVG_Gen4_WP
		{
			options[]=
			{
				"camo"
			};
			label="NV Goggles (Gen 4, WP)";
			class camo
			{
				values[]=
				{
					"BLK",
					"SND",
					"OLI",
					"Tropic"
				};
				alwaysSelectable=1;
			};
		};
		class a3ro_ACE_NVG_Wide_WP
		{
			options[]=
			{
				"camo"
			};
			label="NV Goggles (Wide, WP)";
			class camo
			{
				values[]=
				{
					"BLK",
					"SND",
					"OLI",
					"Tropic"
				};
				alwaysSelectable=1;
			};
		};
	};
};
class XtdGearInfos // Applying Camo Edits. Adding new Camo Classes to existing Items.
{
	class CfgWeapons
	{
		class srifle_DMR_06_camo_F // Adding my own Camo BG
		{
		camo="A3RO_M25_CAMO";
		};
		class arifle_MSBS65_sand_F // Replacing Tan with Sand in Name.
		{
		camo="A3RO_MSBS_SAND";
		};
		class arifle_MSBS65_GL_sand_F
		{
		camo="A3RO_MSBS_SAND";
		};
		class arifle_MSBS65_Mark_sand_F
		{
		camo="A3RO_MSBS_SAND";
		};
		class arifle_MSBS65_UBS_sand_F
		{
		camo="A3RO_MSBS_SAND";
		};
		class hgun_P07_F // Replacing Sand and Khaki with Green and Tan but still called Sand and Khaki (wowee)
		{
		camo="A3RO_MSBS_SAND";
		};
		class hgun_P07_khk_F
		{
		camo="A3RO_P99_KHK";
		};
		class arifle_Mk20_CSAT_F
		{
		model="acebi_f2000";	
		camo="A3RO_CSAT";
		};
		class arifle_Mk20_GL_CSAT_F
		{
		model="acebi_f2000_eglm";	
		camo="A3RO_CSAT";
		};
		class arifle_Mk20C_CSAT_F
		{
		model="acebi_f2000_tac";	
		camo="A3RO_CSAT";
		};
		class launch_O_Vorona_brown_F // Changed Colour
		{
		model="acebi_metis";
		camo="CBR";
		};
		class launch_RPG32_camo_F // New skin needs a model silly.
		{
		model="acebi_rpg32";
		camo="A3RO_TAIGA";
		};
		class O_NVGoggles_blk_F
		{
		camo="BLK";
		};
		class O_NVGoggles_grn_F // Changing from Ranger Green to Green.
		{
		camo="GRN";
		};
		class O_NVGoggles_urb_F
		{
		camo="UHEX";
		};
		// Adding Classes to new NV Goggles ACEAX Models (Might aswell sort these while Im at it)
		// Also adding new Tropic Variants that I made a config for
		class ACE_NVG_Gen1_tna
		{
		model="acebi_nvg_gen1";
		camo="Tropic";
		};
		class ACE_NVG_Gen2_tna
		{
		model="acebi_nvg_gen2";
		camo="Tropic";
		};
		class NVGoggles_tna_F
		{
		model="acebi_nvg_gen3";
		camo="Tropic";
		};
		class ACE_NVGoggles_OPFOR_WP
		{
		model="a3ro_ACE_NVGoggles_Gen3_WP";
		camo="BLK";
		};
		class ACE_NVGoggles_WP
		{
		model="a3ro_ACE_NVGoggles_Gen3_WP";
		camo="SND";
		};
		class ACE_NVGoggles_INDEP_WP
		{
		model="a3ro_ACE_NVGoggles_Gen3_WP";
		camo="OLI";
		};
		class ACE_NVGoggles_tna_WP
		{
		model="a3ro_ACE_NVGoggles_Gen3_WP";
		camo="Tropic";
		};
		class ACE_NVG_Gen4_tna
		{
		model="acebi_nvg_gen4";
		camo="Tropic";
		};
		class ACE_NVG_Gen4_Black_WP
		{
		model="a3ro_ACE_NVG_Gen4_WP";
		camo="BLK";
		};
		class ACE_NVG_Gen4_WP
		{
		model="a3ro_ACE_NVG_Gen4_WP";
		camo="SND";
		};
		class ACE_NVG_Gen4_Green_WP
		{
		model="a3ro_ACE_NVG_Gen4_WP";
		camo="OLI";
		};
		class ACE_NVG_Gen4_tna_WP
		{
		model="a3ro_ACE_NVG_Gen4_WP";
		camo="Tropic";
		};
		class ACE_NVG_Wide_tna
		{
		model="acebi_nvg_wide";
		camo="Tropic";
		};
		class ACE_NVG_Wide_Black_WP
		{
		model="a3ro_ACE_NVG_Wide_WP";
		camo="BLK";
		};
		class ACE_NVG_Wide_WP
		{
		model="a3ro_ACE_NVG_Wide_WP";
		camo="SND";
		};
		class ACE_NVG_Wide_Green_WP
		{
		model="a3ro_ACE_NVG_Wide_WP";
		camo="OLI";
		};
		class ACE_NVG_Wide_tna_WP
		{
		model="a3ro_ACE_NVG_Wide_WP";
		camo="Tropic";
		};
	};
};