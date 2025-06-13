// Galat ARM 5.56
class arifle_Galat_base_lxWS : Rifle_Base_F
{
displayName = "Galil ARM Base Class";
descriptionShort = "Assault Rifle<br />Calibre: 5.45x45mm NATO";
hiddenSelectionsMaterials[] = {"\A3RO_CDLC_WS\Textures\galat_mat.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galat_co.paa"};
initSpeed = 950;
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS"};
magazineWell[] = {"556x45_Velko","CBA_556x45_GALIL","A3RO_WS_Galil_372"};
};
class arifle_Galat_lxWS : arifle_Galat_base_lxWS
{
displayName = "Galil ARM";
descriptionShort = "Assault Rifle<br />Calibre: 5.45x45mm NATO";
};
class arifle_Galat_worn_lxWS : arifle_Galat_lxWS
{
displayName = "Galil ARM (Weathered)";
hiddenSelectionsMaterials[] = {"\A3RO_CDLC_WS\Textures\galat_worn.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galat_worn_co.paa"};
magazines[] = {"35Rnd_556x45_Velko_worn_reload_tracer_yellow_lxWS"};
};
// Creating new Polymer Version
class arifle_Galat_poly_lxWS : arifle_Galat_lxWS
{
baseWeapon = "arifle_Galat_poly_lxWS";
displayName = "Galil ARM (Polymer)";
hiddenSelectionsMaterials[] = {"\A3RO_CDLC_WS\Textures\galat_poly.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galat_poly_co.paa"};
};

// Creating Base Class for all Semi-Auto Variants
class arifle_Galat_Semi_base_lxWS : arifle_Galat_base_lxWS
{
displayName = "Galil Sporting Models Base Class";
hiddenSelectionsMaterials[] = {"lxWS\weapons_f_lxWS\Rifles\Galat\data\Galat_Mat.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galat_semi_co.paa"};
picture = "\lxWS\weapons_f_lxWS\Rifles\Galat\Data\UI\icon_lxWS_arifle_Galat_F_X_CA.paa";
};

// Creating Galil Model 372
class arifle_Galat_M372_lxWS : arifle_Galat_Semi_base_lxWS
{
baseWeapon = "arifle_Galat_M372_lxWS";   
displayName = "Galil Model 372";
descriptionShort = "Sporting Rifle<br />Calibre: 5.56x45mm NATO";
magazines[] = {"35Rnd_223REM_Velko_lxWS"};
scope = 2;
scopeCurator = 2;
};
// Polymer
class arifle_Galat_M372_Poly_lxWS : arifle_Galat_M372_lxWS
{
baseWeapon = "arifle_Galat_M372_Poly_lxWS";     
displayName = "Galil Model 372 (Polymer)";
hiddenSelectionsMaterials[] = {"\A3RO_CDLC_WS\Textures\galat_poly_semi.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galat_poly_semi_co.paa"};
};
// Weathered
class arifle_Galat_M372_Worn_lxWS : arifle_Galat_M372_lxWS
{
baseWeapon = "arifle_Galat_M372_Worn_lxWS";         
displayName = "Galil Model 372 (Weathered)";
hiddenSelectionsMaterials[] = {"lxWS\weapons_1_f_lxWS\Rifles\Galat\data\Galat_worn.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galat_worn_semi_co.paa"};
magazines[] = {"35Rnd_223REM_Velko_worn_lxWS"};
picture = "\lxWS\weapons_1_f_lxws\Rifles\Galat\Data\ui\icon_arifle_Galat_worn_lxWS_CA.paa";
};

// Creating Galil Model 323
class arifle_Galat_M323_lxWS : arifle_Galat_Semi_base_lxWS
{
baseWeapon = "arifle_Galat_M323_lxWS";   
displayName = "Galil Model 323";
descriptionShort = "Sporting Rifle<br />Calibre: .308 Winchester";
initSpeed = 850;
magazines[] = {"25Rnd_308WIN_Galil_lxWS"};
magazineWell[] = {"CBA_762x51_GALIL"};
scope = 2;
scopeCurator = 2;
};
// Polymer
class arifle_Galat_M323_Poly_lxWS : arifle_Galat_M323_lxWS
{
baseWeapon = "arifle_Galat_M323_Poly_lxWS";         
displayName = "Galil Model 323 (Polymer)";
hiddenSelectionsMaterials[] = {"\A3RO_CDLC_WS\Textures\galat_poly_semi.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galat_poly_semi_co.paa"};
};
// Weathered
class arifle_Galat_M323_Worn_lxWS : arifle_Galat_M323_lxWS
{
baseWeapon = "arifle_Galat_M323_Worn_lxWS";         
displayName = "Galil Model 323 (Weathered)";
hiddenSelectionsMaterials[] = {"lxWS\weapons_1_f_lxWS\Rifles\Galat\data\Galat_worn.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galat_worn_semi_co.paa"};
magazines[] = {"25Rnd_308WIN_Galil_Rusty_lxWS"};
picture = "\lxWS\weapons_1_f_lxws\Rifles\Galat\Data\ui\icon_arifle_Galat_worn_lxWS_CA.paa";
};

// GM6 Lynx. Changing Name.
class srifle_GM6_snake_lxWS : srifle_GM6_F
{
displayName = "GM6 Lynx 12.7x108 (Snake)";
};

// Creating 12.7x99 Snake Lynx
class srifle_GM6_50BMG_Snake_F : srifle_GM6_50BMG_F
{
author = "Rotators Collective";
baseWeapon = "srifle_GM6_50BMG_Snake_F";
displayName = "GM6 Lynx 12.7x99 (Snake)";
DLC = "ws";
hiddenSelections[] = {"camo","mat1","mat2"};
hiddenSelectionsMaterials[] = {"","lxws\weapons_1_f_lxws\LongRangeRifles\gm6\data\gm6_snake.rvmat","lxws\weapons_1_f_lxws\LongRangeRifles\gm6\data\gm6_plastic_snake.rvmat"};
hiddenSelectionsTextures[] = {"lxws\weapons_1_f_lxws\LongRangeRifles\gm6\data\gm6_snake_co.paa"};
picture = "\lxws\weapons_1_f_lxws\LongRangeRifles\gm6\data\ui\icon_srifle_GM6_snake_lxWS_ca.paa";
};

// Mk18. Adjusting Black and Snake Patterns
class srifle_EBR_F;
class srifle_EBR_blk_lxWS : srifle_EBR_F
{
displayName = "Mk 14 Mod 0 EBR (Black)";
};
class srifle_EBR_snake_lxWS : srifle_EBR_F
{
displayName = "Mk 14 Mod 0 EBR (Snake)";
};

// Creating M1A Black and Snake
class EBR_base_F;
class srifle_M1A_ACLS_F : EBR_base_F
{
magazineWell[] += {"M14_308WIN_L"};
};
class srifle_M1A_ACLS_blk_lxWS : srifle_M1A_ACLS_F
{
author = "Rotators Collective";
baseWeapon = "srifle_M1A_ACLS_blk_lxWS";
displayName = "M1A ACLS (Black)";
DLC = "ws";
hiddenSelections[] = {"camo1","camo2"};
hiddenSelectionsMaterials[] = {"\lxWS\weapons_f_lxWS\data\M14\M14_EBR01_blk.rvmat","\lxWS\weapons_f_lxWS\data\M14\M14_EBR02_blk.rvmat"};
hiddenSelectionsTextures[] = {"\lxWS\weapons_f_lxWS\data\M14\M14_EBR01_blk_CO.paa","\lxWS\weapons_f_lxWS\data\M14\M14_EBR02_blk_CO.paa"};
magazines[] = {"20Rnd_Mk14_308WIN_Mag_blk_lxWS"};
picture = "\lxWS\weapons_f_lxWS\data\M14\UI\gear_EBR_blk_X_CA.paa";
};
class srifle_M1A_ACLS_snake_lxWS : srifle_M1A_ACLS_F
{
author = "Rotators Collective";
baseWeapon = "srifle_M1A_ACLS_snake_lxWS";
displayName = "M1A ACLS (Snake)";
DLC = "ws";
hiddenSelections[] = {"camo1","camo2"};
hiddenSelectionsMaterials[] = {"\lxWS\weapons_1_f_lxWS\longrangerifles\ebr\data\M14_EBR01_snake.rvmat","\lxWS\weapons_1_f_lxWS\longrangerifles\ebr\data\M14_EBR02_snake.rvmat"};
hiddenSelectionsTextures[] = {"\lxWS\weapons_1_f_lxWS\longrangerifles\ebr\data\M14_EBR01_snake_CO.paa","\lxWS\weapons_1_f_lxWS\longrangerifles\ebr\data\M14_EBR02_snake_CO.paa"};
magazines[] = {"20Rnd_Mk14_308WIN_Mag_snake_lxWS"};
picture = "\lxWS\weapons_1_f_lxws\LongRangeRifles\EBR\data\ui\gear_EBR_snake_X_CA.paa";
};

// Adding .223 Remington 60Rnd Magwell to Weapons
class arifle_SPAR_01_base_F : Rifle_Base_F
{
magazineWell[] += {"STANAG_223R_Large"};
};
class arifle_SPAR_02_base_F : Rifle_Base_F
{
magazineWell[] += {"STANAG_223R_Large"};
};
class Tavor_base_F : Rifle_Base_F
{
magazineWell[] += {"STANAG_223R_Large"};
};
class arifle_MSBS65_base_F : Rifle_Base_F
{
magazineWell[] += {"STANAG_223R_Large"};
};
// Me when I'm in a inexplicabily broken code competition and my opponent is += Operators
class arifle_TRG20_F : Tavor_base_F
{
displayName = "CTAR-21 (Olive)"; // Due to new Black Texture thats created below
magazineWell[] = {"MX_65x39_MSBS","STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_2D","PMAG_223REM","MR223_223R","STANAG_223R_Large"};
};
class arifle_TRG21_F : Tavor_base_F
{
displayName = "TAR-21 (Olive)";
magazineWell[] = {"MX_65x39_MSBS","STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_2D","PMAG_223REM","MR223_223R","STANAG_223R_Large"};
};
class arifle_MR223_01_base_F : arifle_SPAR_01_base_F
{
magazineWell[] = {"MR223_223R","MR223_223R_Large","STANAG_223R_Large"};
};
class arifle_MR223_02_base_F : arifle_SPAR_02_base_F
{
magazineWell[] = {"MR223_223R","MR223_223R_Large","STANAG_223R_Large"};
};

// GLX Base Class. Changing: Name. Description
class glaunch_GLX_base_lxWS : Rifle_Base_F
{
descriptionShort = "Grenade Launcher<br />Calibre: 40x46mm LV";
displayName = "GLX160 - standalone Base Class";
initSpeed = 76; // In a manner I am unable to comprehend in this flesh form, setting the initSpeed to 75 like with every other GL makes the Shotgun round super slow (75ms). On UGLs this behavior does not exist. Fair enough? Raising the value back up, however, does not increase the speed of the Grenades on the GLX though. Hooray? Update: You can set the Submunition Initspeed manually.
magazineWell[] = {"UGL_40x36","CBA_40mm_M203"}; // Pike doesn't fit
};
// GLX160 Patterns. Changing: Name.
class glaunch_GLX_lxWS : glaunch_GLX_base_lxWS
{
displayName = "GLX160 - standalone";
};
class glaunch_GLX_camo_lxWS : glaunch_GLX_base_lxWS
{
displayName = "GLX160 - standalone (Camo)";
};
class glaunch_GLX_ghex_lxWS : glaunch_GLX_base_lxWS
{
displayName = "GLX160 - standalone (Green Hex)";
};
class glaunch_GLX_hex_lxWS : glaunch_GLX_base_lxWS
{
displayName = "GLX160 - standalone (Hex)";
};
class glaunch_GLX_tan_lxWS : glaunch_GLX_base_lxWS
{
displayName = "GLX160 - standalone (Tan)";
};
class glaunch_GLX_snake_lxWS : glaunch_GLX_base_lxWS
{
displayName = "GLX160 - standalone (Snake)";
};

// AA40. Changing: Name. Description. Muzzle Velocity. MagazineWells
class sgun_aa40_base_lxWS : Rifle_Base_F
{
descriptionShort = "Automatic Combat Shotgun<br />Gauge: 12";
displayName = "AA-12 CQB Base Class";
initSpeed = -0.92; // Adjusted for Barrel Length based off of 28''
magazines[] = {"20Rnd_12Gauge_AA40_Pellets_lxWS"};
magazineWell[] += {"CBA_12g_AA12","CBA_12g_AA12_XL"};
};
class sgun_aa40_lxWS : sgun_aa40_base_lxWS
{
displayName = "AA-12 CQB";
magazines[] = {"20Rnd_12Gauge_AA40_Pellets_lxWS"};
};
class sgun_aa40_tan_lxWS : sgun_aa40_base_lxWS
{
displayName = "AA-12 CQB (Sand)";
};
class sgun_aa40_snake_lxWS : sgun_aa40_base_lxWS
{
displayName = "AA-12 CQB (Snake)";
};

// SLR Variants. Changing: Name. Description. Muzzle Velocity. MagWells
// SLR 7.62
class DMR_06_base_F;
class arifle_SLR_lxWS : DMR_06_base_F
{
descriptionShort = "Battle Rifle<br/>Calibre: 7.62x51mm NATO";
displayName = "StG 58 (Early)";
initSpeed = 823; // Wiki
magazines[] = {"20Rnd_762x51_slr_reload_tracer_green_lxWS"};
magazineWell[] += {"CBA_762x51_FAL","CBA_762x51_FAL_L","CBA_762x51_FAL_XL"};
};
class arifle_SLR_V_lxWS : arifle_SLR_lxWS
{
displayName = "StG 58";
};
class arifle_SLR_D_lxWS : arifle_SLR_lxWS
{
displayName = "StG 58 (Early/Desert)";
magazines[] = {"20Rnd_762x51_slr_desert_reload_tracer_red_lxWS"};
};
class arifle_SLR_V_camo_lxWS : arifle_SLR_V_lxWS
{
displayName = "StG 58 (Jungle)";
};
class arifle_SLR_GL_lxWS : arifle_SLR_lxWS
{
displayName = "SA58™ Carbine 16'' TPB (Wood/GL)";
initSpeed = 770;
};
class arifle_SLR_V_GL_lxWS : arifle_SLR_V_lxWS
{
displayName = "SA58™ Carbine 16'' TPB (Bipod/GL)";
initSpeed = 770;
};
class arifle_SLR_Para_lxWS : arifle_SLR_V_lxWS
{
descriptionShort = "Battle Rifle<br/>Calibre: 7.62x51mm NATO";
displayName = "SA58™ OSW 11''";
initSpeed = 725;
magazines[] = {"20Rnd_762x51_slr_reload_tracer_red_lxWS"};
};
class arifle_SLR_Para_snake_lxWS : arifle_SLR_Para_lxWS
{
displayName = "SA58™ OSW 11'' (Snake)";
};

// Velko Base Class
class arifle_Velko_base_lxWS : arifle_Galat_base_lxWS
{
displayName = "Vektor Base Class";
hiddenSelectionsMaterials[] = {"\A3RO_CDLC_WS\Textures\galilr4_mat.rvmat","lxWS\weapons_f_lxWS\Rifles\velko\data\handguard_mat.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galatr4_co.paa"};
magazineWell[] = {"556x45_Velko","CBA_556x45_GALIL","A3RO_WS_Galil_372"};
};

// Velko R4
class arifle_Velko_lxWS : arifle_Velko_base_lxWS
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "Vektor R4A1";
initSpeed = 980;
};

// Creating LM4
class arifle_Velko_Semi_lxWS : arifle_Velko_lxWS
{
baseWeapon = "arifle_Velko_Semi_lxWS";
descriptionShort = "Sporting Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "Vektor LM4";
hiddenSelectionsMaterials[] = {"\A3RO_CDLC_WS\Textures\galilr4_semi_mat.rvmat","lxWS\weapons_f_lxWS\Rifles\velko\data\handguard_mat.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galatr4_semi_co.paa"};
picture = "\lxWS\weapons_f_lxWS\Rifles\velko\Data\UI\icon_lxWS_arifle_Velko_F_X_CA.paa";
scope = 2;
scopeCurator = 2;
};

// Velko R5. This is actually a Galil SAR. Yep.
class arifle_VelkoR5_lxWS : arifle_Velko_base_lxWS
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "Galil SAR";
initSpeed = 900;
};
class arifle_VelkoR5_snake_lxWS : arifle_VelkoR5_lxWS
{
displayName = "Galil SAR (Snake)";
};
class arifle_VelkoR5_GL_lxWS : arifle_VelkoR5_lxWS
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO<br />Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
displayName = "Galil SAR M203A1";
};
class arifle_VelkoR5_GL_snake_lxWS : arifle_VelkoR5_GL_lxWS
{
displayName = "Galil SAR M203A1 (Snake)";
};

// SS77 Base Class
class LMG_S77_base_lxWS : Rifle_Long_Base_F
{
descriptionShort = "General Purpose Machine Gun<br />Calibre: 7.62x51mm NATO";
displayName = "SA77 Mk1 Base Class";
initSpeed = 840;
magazines[] = {"100Rnd_762x51_S77_GT4_lxWS"};
magazineWell[] = {"S77_762x51"};
};

// SS77 Mk1 Patterns
class LMG_S77_lxWS : LMG_S77_base_lxWS
{
displayName = "SS77 Mk1";
};
class LMG_S77_AAF_lxWS : LMG_S77_base_lxWS
{
displayName = "SS77 Mk1 (Camo)";
magazines[] = {"100Rnd_762x51_S77_GT4_lxWS"};
};
class LMG_S77_Desert_lxWS : LMG_S77_base_lxWS
{
displayName = "SS77 Mk1 (Desert)";
magazines[] = {"100Rnd_762x51_S77_GT4_lxWS"};
};
class LMG_S77_GHex_lxWS : LMG_S77_base_lxWS
{
displayName = "SS77 Mk1 (Green Hex)";
magazines[] = {"100Rnd_762x51_S77_GT4_lxWS"};
};
class LMG_S77_Hex_lxWS : LMG_S77_base_lxWS
{
displayName = "SS77 Mk1 (Hex)";
magazines[] = {"100Rnd_762x51_S77_GT4_lxWS"};
};

// SS77 Compact Base Class
class LMG_S77_Compact_base_lxWS : LMG_S77_base_lxWS
{
descriptionShort = "General Purpose Machine Gun<br />Calibre: 7.62x51mm NATO";
displayName = "SA77 Compact Base Class";
initSpeed = 816.55; // 20'' Barrel taking values from Stat Sheet
magazines[] = {"100Rnd_762x51_S77_GT4_lxWS"};
};

// SS77 Compact Patterns
class LMG_S77_Compact_lxWS : LMG_S77_Compact_base_lxWS
{
displayName = "SS77 Compact";
};
class LMG_S77_Compact_Snakeskin_lxWS : LMG_S77_Compact_base_lxWS
{
displayName = "SS77 Compact (Snake)";
magazines[] = {"100Rnd_762x51_S77_GT4_lxWS"};
};

// XMS Base Classes
class arifle_XMS_Base_lxWS : arifle_SPAR_01_base_F
{
descriptionShort = "Fictional Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "XMS Base Class";
initSpeed = 930.249; // From Chart
magazines[] = {"30Rnd_556x45_Stanag"};
magazineWell[] = {"STANAG_556x45","XMS_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL","PMAG_223REM","MR223_223R","MR223_223R_Large","STANAG_223R_Large","MX_65x39_MSBS","PMAG_223REM"};
};
class arifle_XMS_Base_khk_lxWS : arifle_XMS_Base_lxWS
{
displayName = "XMS (Khaki)";
};
class arifle_XMS_Base_Sand_lxWS : arifle_XMS_Base_lxWS
{
displayName = "XMS (Sand)";
magazines[] = {"30Rnd_556x45_Stanag_Sand"};
};
// XMS
class arifle_XMS_lxWS : arifle_XMS_Base_lxWS
{
displayName = "XMS";
};
class arifle_XMS_Gray_lxWS : arifle_XMS_lxWS
{
displayName = "XMS (Grey)";
};
class arifle_XMS_Camo_lxWS : arifle_XMS_lxWS
{
displayName = "XMS (Stripes)";
};
// XMS GL
class arifle_XMS_GL_lxWS : arifle_XMS_Base_lxWS
{
descriptionShort = "Fictional Assault Rifle<br />Calibre: 5.56x45mm NATO<br />Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
displayName = "XMS GLM";
};
class arifle_XMS_GL_Gray_lxWS : arifle_XMS_GL_lxWS
{
displayName = "XMS GLM (Grey)";
};
class arifle_XMS_GL_khk_lxWS : arifle_XMS_GL_lxWS
{
displayName = "XMS GLM (Khaki)";
};
class arifle_XMS_GL_Sand_lxWS : arifle_XMS_GL_lxWS
{
displayName = "XMS GLM (Sand)";
magazines[] = {"30Rnd_556x45_Stanag_Sand"};
};
class arifle_XMS_GL_Camo_lxWS : arifle_XMS_GL_lxWS
{
displayName = "XMS GLM (Stripes)";
};
// XMS SG
class arifle_XMS_Shot_lxWS : arifle_XMS_Base_lxWS
{
descriptionShort = "Fictional Assault Rifle<br />Calibre: 5.56x45mm NATO<br />Underbarrel Shotgun<br />Gauge: 12";
displayName = "XMS SIX12";
};
class arifle_XMS_Shot_Gray_lxWS : arifle_XMS_Shot_lxWS
{
displayName = "XMS SIX12 (Grey)";
};
class arifle_XMS_Shot_khk_lxWS : arifle_XMS_Shot_lxWS
{
displayName = "XMS SIX12 (Khaki)";
};
class arifle_XMS_Shot_Sand_lxWS : arifle_XMS_Shot_lxWS
{
displayName = "XMS SIX12 (Sand)";
magazines[] = {"30Rnd_556x45_Stanag_Sand"};
};
class arifle_XMS_Shot_Camo_lxWS : arifle_XMS_Shot_lxWS
{
displayName = "XMS SIX12 (Stripes)";
};
// XMS SW
class arifle_XMS_M_lxWS : arifle_XMS_Base_lxWS
{
displayName = "XMS SW";
initSpeed = 943.965; // From Chart
};
class arifle_XMS_M_Gray_lxWS : arifle_XMS_M_lxWS
{
displayName = "XMS SW (Grey)";
};
class arifle_XMS_M_khk_lxWS : arifle_XMS_M_lxWS
{
displayName = "XMS SW (Khaki)";
};
class arifle_XMS_M_Sand_lxWS : arifle_XMS_M_lxWS
{
displayName = "XMS SW (Sand)";
magazines[] = {"75Rnd_556x45_Stanag_camo_lxWS"};
};
class arifle_XMS_M_Camo_lxWS : arifle_XMS_M_lxWS
{
displayName = "XMS SW (Stripes)";
};

// RPG-42
class launch_RPG32_tan_lxWS : launch_RPG32_F
{
displayName = "RPG-32 (Sand)";
};

// Changing AKM (Weathered) to use Rusty Magazine
class arifle_AKM_Rusty_F : arifle_AKM_F
{
magazines[] = {"30Rnd_762x39_Mag_worn_RT_lxWS"};
};

// Creating TAR-21 variants with hidden Black skin. Renaming Original
class arifle_TRG20_blk_F : arifle_TRG20_F
{
author = "Rotators Collective";
baseWeapon = "arifle_TRG20_blk_F";
displayName = "CTAR-21";
hiddenSelectionsTextures[] = {"lxWS\weapons_f_lxWS\data\trg20\tar21_base_blk_co"};
picture = "\A3RO_CDLC_WS\Textures\UI\gear_trg20_blk_CA.paa";
};
class arifle_TRG21_GL_F : Tavor_base_F
{
displayName = "GTAR-21 FN40GL® (Olive)";
};
class arifle_TRG21_blk_GL_F : arifle_TRG21_GL_F
{
author = "Rotators Collective";
baseWeapon = "arifle_TRG21_blk_GL_F";
displayName = "GTAR-21 FN40GL®";
hiddenSelectionsTextures[] = {"lxWS\weapons_f_lxWS\data\trg20\tar21_base_blk_co","\a3\weapons_f\rifles\trg20\data\tar21_eglm_co.paa","\a3\weapons_f\data\gl_holo_co.paa"};
picture = "\A3RO_CDLC_WS\Textures\UI\gear_trg21_gl_blk_CA.paa";
};
class arifle_TRG21_blk_F : arifle_TRG21_F
{
author = "Rotators Collective";
baseWeapon = "arifle_TRG21_blk_F";
displayName = "TAR-21";
hiddenSelections[] = {"camo"}; // Vanilla Arma has a typo
hiddenSelectionsTextures[] = {"lxWS\weapons_f_lxWS\data\trg20\tar21_base_blk_co"};
picture = "\A3RO_CDLC_WS\Textures\UI\gear_trg21_blk_CA.paa";
};

// Creating CPW for Unit replacement
class hgun_cpw_ParaB_r1_F : hgun_cpw_ParaB_F
{
author = "Rotators Collective";
DLC = "ws";
    class LinkedItems
    {
        class LinkedItemsOptic
        {
        item = "optic_r1_high_lxWS";
        slot = "CowsSlot";
        };
    };
};

// Creating ZGL-40
class glaunch_ZGL40_lxWS : glaunch_GLX_base_lxWS
{
author = "NeroTheHero111";
baseWeapon = "glaunch_ZGL40_lxWS";
descriptionShort = "Grenade Launcher<br />Calibre: Very Small";
displayName = "ZGL-40 Mk. II";
DLC = "ws";
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\zgl_body_co"};
magazines[] = {"1Rnd_ZGL_Cluster_F"};
magazineWell[] = {"ZGL_Boom"};
picture = "\lxWS\weapons_1_f_lxws\Rifles\GLX\data\ui\icon_glaunch_GLX_lxWS_CA.paa";
scope = 2;
};