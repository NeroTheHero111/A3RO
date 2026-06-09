// Galat ARM 5.56
class arifle_Galat_base_lxWS : Rifle_Base_F
{
displayName = "Galil ARM Base Class";
descriptionShort = "Assault Rifle<br />Calibre: 5.45x45mm NATO";
hiddenSelectionsMaterials[] = {"\A3RO_CDLC_WS\Textures\galat_mat.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galat_co.paa"};
initSpeed = 950.062;
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
picture = "\A3RO_CDLC_WS\Textures\UI\icon_lxws_arifle_galat_f_372_poly_ca.paa";
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
picture = "\A3RO_CDLC_WS\Textures\UI\icon_lxws_arifle_galat_f_372_poly_ca.paa";
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
initSpeed = 850.088;
magazines[] = {"25Rnd_308WIN_Galil_lxWS"};
magazineWell[] = {"CBA_762x51_GALIL"};
picture = "\A3RO_CDLC_WS\Textures\UI\icon_lxws_arifle_galat_f_323_wood_ca.paa";
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
picture = "\A3RO_CDLC_WS\Textures\UI\icon_lxws_arifle_galat_f_323_poly_ca.paa";
};
// Weathered
class arifle_Galat_M323_Worn_lxWS : arifle_Galat_M323_lxWS
{
baseWeapon = "arifle_Galat_M323_Worn_lxWS";         
displayName = "Galil Model 323 (Weathered)";
hiddenSelectionsMaterials[] = {"lxWS\weapons_1_f_lxWS\Rifles\Galat\data\Galat_worn.rvmat"};
hiddenSelectionsTextures[] = {"\A3RO_CDLC_WS\Textures\galat_worn_semi_co.paa"};
magazines[] = {"25Rnd_308WIN_Galil_Rusty_lxWS"};
picture = "\A3RO_CDLC_WS\Textures\UI\icon_lxws_arifle_galat_f_323_worn_ca.paa";
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
initSpeed = 822.96; // Wiki
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
initSpeed = 769.925;
};
class arifle_SLR_V_GL_lxWS : arifle_SLR_V_lxWS
{
displayName = "SA58™ Carbine 16'' TPB (Bipod/GL)";
initSpeed = 769.925;
};
class arifle_SLR_Para_lxWS : arifle_SLR_V_lxWS
{
descriptionShort = "Battle Rifle<br/>Calibre: 7.62x51mm NATO";
displayName = "SA58™ OSW 11''";
initSpeed = 725.12;
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
magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS"};
magazineWell[] = {"556x45_Velko","CBA_556x45_GALIL","A3RO_WS_Galil_372"};
};

// Velko R4
class arifle_Velko_lxWS : arifle_Velko_base_lxWS
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "Vektor R4A1";
initSpeed = 979.932;
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
initSpeed = 900.075;
hiddenSelectionsMaterials[]= {"lxWS\weapons_1_f_lxWS\Rifles\velkor5\data\galilr5_mat.rvmat","lxWS\weapons_f_lxWS\Rifles\velko\data\handguard_mat.rvmat","lxWS\weapons_1_f_lxWS\Rifles\velkor5\data\r5_handguard.rvmat"};
};
class arifle_VelkoR5_snake_lxWS : arifle_VelkoR5_lxWS
{
displayName = "Galil SAR (Snake)";
};
class arifle_VelkoR5_GL_lxWS : arifle_VelkoR5_lxWS
{
descriptionShort = "Assault Rifle<br />Calibre: 5.56x45mm NATO<br />Underbarrel Grenade Launcher<br />Calibre: 40x46mm LV";
displayName = "Galil SAR M203A1";
hiddenSelectionsMaterials[]= {"lxWS\weapons_1_f_lxWS\Rifles\velkor5\data\galilr5_mat.rvmat","lxWS\weapons_f_lxWS\Rifles\velko\data\handguard_mat.rvmat","lxWS\weapons_1_f_lxWS\Rifles\velkor5\data\m203.rvmat","a3\weapons_f\data\gl_holo.rvmat","lxWS\weapons_1_f_lxWS\Rifles\velkor5\data\r5_handguard.rvmat"};
};
class arifle_VelkoR5_GL_snake_lxWS : arifle_VelkoR5_GL_lxWS
{
displayName = "Galil SAR M203A1 (Snake)";
};
// Creating Velko Variants w/ 50Rnd Magazine by default for UNA unit replacement
class arifle_VelkoR5_Holosight_blk_lxWS;
class arifle_VelkoR5_50rnd_Holosight_blk_lxWS : arifle_VelkoR5_Holosight_blk_lxWS
{
magazines[] = {"50Rnd_556x45_Velko_reload_tracer_red_lxWS"};
};
class arifle_VelkoR5_50Rnd_GL_lxWS : arifle_VelkoR5_GL_lxWS
{
magazines[] = {"50Rnd_556x45_Velko_reload_tracer_red_lxWS"};
scope = 1;
};

// XMS Base Classes
class arifle_XMS_Base_lxWS : arifle_SPAR_01_base_F
{
descriptionShort = "Fictional Assault Rifle<br />Calibre: 5.56x45mm NATO";
displayName = "XMS Base Class";
initSpeed = 930.25; // From Chart
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
class arifle_XMS_M_lxWS : arifle_XMS_lxWS
{
displayName = "XMS SW";
initSpeed = 943.966; // From Chart
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
class arifle_TRG21_GL_F : arifle_TRG21_F
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