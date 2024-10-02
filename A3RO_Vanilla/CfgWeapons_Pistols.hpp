// 4-Five. Changing: Name.
class hgun_Pistol_heavy_01_F : Pistol_Base_F
{
descriptionShort = "Handgun<br />Calibre: .45 ACP";
displayname = "FNX-45 Tactical";
initSpeed = 384.6336;
};
class hgun_Pistol_heavy_01_green_F : hgun_Pistol_heavy_01_F
{
displayname = "FNX-45 Tactical (Green)";	
};

// ACP-C2. Changing: Name
class hgun_ACPC2_F : Pistol_Base_F
{
descriptionShort = "Handgun<br />Calibre: .45 ACP";
displayname = "Custom TLE/RL II .45 (Sand)";
initSpeed = 364.5408;
};
// Creating Black Patterns of both Custom TLE/RL II Variants using hidden Texture
class hgun_ACPC2_blk_F : hgun_ACPC2_F
{
_generalMacro = "hgun_ACPC2_blk_F";
baseWeapon = "hgun_ACPC2_blk_F";		
displayname = "Custom TLE/RL II .45";
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\Acpc2_black_2_co.paa"};
picture = "A3RO_Vanilla\Textures\gear_Acpc2_lazy_X_CA.paa";
};

// Creating Custom TLE/RL II 10mm Auto
class hgun_ACPC2_10mmA_F : hgun_ACPC2_F
{	
_generalMacro = "hgun_ACPC2_10mmA_F";
baseWeapon = "hgun_ACPC2_10mmA_F";
descriptionShort = "Handgun<br />Calibre: 10mm Auto";
displayname = "Custom TLE/RL II 10x25 (Sand)";
initSpeed = 325.8312;
magazines[] = {"8Rnd_10mmA_Mag"};
magazineWell[] = {"ACPC2_10mmA"};
};
class hgun_ACPC2_10mmA_blk_F : hgun_ACPC2_10mmA_F
{
_generalMacro = "hgun_ACPC2_10mmA_blk_F";
baseWeapon = "hgun_ACPC2_10mmA_blk_F";		
displayname = "Custom TLE/RL II 10x25";
hiddenSelectionsTextures[] = {"A3RO_Vanilla\Textures\Acpc2_black_2_co.paa"};
picture = "A3RO_Vanilla\Textures\gear_Acpc2_lazy_X_CA.paa";
};

// P07. Changing: Name. Adding PointerSlot Proxy. Removing 30Rnd Magazines
class hgun_P07_F : Pistol_Base_F
{
descriptionShort = "Handgun<br />Calibre: 9x19mm Parabellum";
displayname = "P99 9x19 (Sand)";
initSpeed = 408;
magazines[] = {"16Rnd_9x21_Mag"};
magazineWell[] = {"Pistol_9x21","P99_9x19"};
};
class hgun_P07_khk_F : hgun_P07_F
{
displayname = "P99 9x19 (Khaki)";
};
class hgun_P07_blk_F : hgun_P07_F
{
displayname = "P99 9x19";
};

// A little explanation: The P07 and Rook-40 share the same Magazines. By leaving the P07 as 9x21 which is correctly one of its variants, I would then have to make new base magazines and replace them on every single Unit (128) that uses the pistol. Any modded unit would be left with no magazines they can fire unless I also create a new Pistol class that has to be replaced on every single Unit and then hide the vanilla class. This is feasible for say the RPK-16 as there are only a few Units that use it and its magazines, but not in this instance. It is easier, less clutter and widens compatability to change the vanilla 9x21 to the 9x19 that both the real life P99 and MP-443 share and then add additional 9x21.

// Creating P99 9x21 Patterns
class hgun_P99_9x21_F : hgun_P07_F
{
_generalMacro = "hgun_P07_9x21_F";
baseWeapon = "hgun_P07_9x21_F";
descriptionShort = "Handgun<br />Calibre: 9x21mm IMI";
displayname = "P99 9x21 (Sand)";
magazines[] = {"15Rnd_P99_9x21_Mag"};
magazineWell[] = {"P99_9x21"};
};
class hgun_P99_9x21_khk_F : hgun_P99_9x21_F
{
_generalMacro = "hgun_P99_9x21_khk_F";
baseWeapon = "hgun_P99_9x21_khk_F";		
displayname = "P99 9x21 (Khaki)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Pistols\P07\Data\hgun_P07_khk_F.paa"};
picture = "\A3\Weapons_F_Exp\Pistols\P07\Data\UI\icon_hgun_P07_khk_F_X_CA.paa";
};
class hgun_P99_9x21_blk_F : hgun_P99_9x21_F
{
_generalMacro = "hgun_P99_9x21_blk_F";
baseWeapon = "hgun_P99_9x21_blk_F";		
displayname = "P99 9x21";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Pistols\P07\Data\hgun_P07_blk_F.paa"};
picture = "\A3\Weapons_F_Exp\Pistols\P07\Data\UI\icon_hgun_P07_blk_F_X_CA.paa";
};

// Creating P99 .40 S&W Patterns
class hgun_P99_40SW_F : hgun_P07_F
{
_generalMacro = "hgun_P99_40SW_F";
baseWeapon = "hgun_P99_40SW_F";
descriptionShort = "Handgun<br />Calibre: .40 Smith & Wesson";
displayname = "P99 .40 (Sand)";
initSpeed = 344;
magazines[] = {"12Rnd_P99_40SW_Mag"};
magazineWell[] = {"P99_40SW"};
scope = 2;
};
class hgun_P99_40SW_khk_F : hgun_P99_40SW_F
{
_generalMacro = "hgun_P99_40SW_khk_F";
baseWeapon = "hgun_P99_40SW_khk_F";		
displayname = "P99 .40 (Khaki)";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Pistols\P07\Data\hgun_P07_khk_F.paa"};
picture = "\A3\Weapons_F_Exp\Pistols\P07\Data\UI\icon_hgun_P07_khk_F_X_CA.paa";
};
class hgun_P99_40SW_blk_F : hgun_P99_40SW_F
{
_generalMacro = "hgun_P99_40SW_blk_F";
baseWeapon = "hgun_P99_40SW_blk_F";		
displayname = "P99 .40";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Pistols\P07\Data\hgun_P07_blk_F.paa"};
picture = "\A3\Weapons_F_Exp\Pistols\P07\Data\UI\icon_hgun_P07_blk_F_X_CA.paa";
};

// Rook-40
class hgun_Rook40_F : Pistol_Base_F
{
descriptionShort = "Handgun<br />Calibre: 9x19mm Parabellum";
displayname = "MP-443 Grach";
initSpeed = 450;
magazines[] = {"16Rnd_9x21_Mag"};
magazineWell[] = {"CBA_9x19_MP443","Pistol_9x21"};
};

// PM. Changing: Name. Description. Adding Magwell
class hgun_Pistol_01_F : Pistol_Base_F
{	
descriptionShort = "Handgun<br />Calibre: 9x18mm Makarov";
displayname = "PM";
initSpeed = 315;
magazines[] = {"10Rnd_9x21_Mag"};
magazineWell[] = {"CBA_9x18_PM"};	
};

// Creating IJ-70
class hgun_Pistol_01_380A_F : hgun_Pistol_01_F
{	
_generalMacro = "hgun_Pistol_01_380A_F";
baseWeapon = "hgun_Pistol_01_380A_F";	
descriptionShort = "Handgun<br />Calibre: .380 Auto";
displayname = "IJ-70";
initSpeed = 312;
magazines[] = {"8Rnd_380Auto_Mag"};
magazineWell[] = {"CBA_380ACP_PM"};	
};

// Starter Pistol. Changing: Description
class hgun_Pistol_Signal_F : Pistol_Base_F
{
descriptionShort = "Fictional Flaregun<br />Calibre: 10mm Signal Flares";	
displayname = "Flare Pistol";
initSpeed = 250;
};

// Zubr. Changing: Name. Description. Calibre to of 45 ACP 6Rnd to .40 S&W
class hgun_Pistol_heavy_02_F : Pistol_Base_F
{
descriptionShort = "Handgun<br />Calibre: .357 Magnum";	
displayname = "Rhino 60DS .357";
initSpeed = 386.7912;
magazines[] = {"6Rnd_45ACP_Cylinder"};
magazineWell[] = {"Cylinder_45ACP"};
};

// Creating Rhino 60DS 9x19
class hgun_Pistol_heavy_02_9x19_F : hgun_Pistol_heavy_02_F
{
_generalMacro = "hgun_Pistol_heavy_02_9x19_F";
baseWeapon = "hgun_Pistol_heavy_02_9x19_F";
descriptionShort = "Handgun<br />Calibre: 9x19 Parabellum";	
displayname = "Rhino 60DS 9x19";
initSpeed = 344.7288;
magazines[] = {"6Rnd_9x19_Cylinder"};
magazineWell[] = {"Cylinder_9x19"};
};

// Creating Rhino 60DS .357 Magnum
class hgun_Pistol_heavy_02_40SW_F : hgun_Pistol_heavy_02_F
{
_generalMacro = "hgun_Pistol_heavy_02_40SW_F";
baseWeapon = "hgun_Pistol_heavy_02_40SW_F";
descriptionShort = "Handgun<br />Calibre: .40 Smith & Wesson";	
displayname = "Rhino 60DS .40";
initSpeed = 329.4888;
magazines[] = {"6Rnd_40SW_Cylinder"};
magazineWell[] = {"CBA_40SW_6rnds"};
};

// Creating Judge Magnum .45 Colt / .410 bore
class hgun_Pistol_Judge_F : hgun_Pistol_heavy_02_F
{
_generalMacro = "hgun_Pistol_Judge_F";	
baseWeapon = "hgun_Pistol_Judge_F";
bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.562341,1,15};
bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.562341,1,15};
bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.562341,1,15};
bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.562341,1,15};
bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.562341,1,15};
bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.562341,1,15};
bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.562341,1,15};
bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.562341,1,15};
bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.562341,1,15};
bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.562341,1,15};
bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.562341,1,15};
descriptionShort = "Revolver<br />Calibre: .45 Colt / .410 bore";
displayname = "Judge Magnum";
drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\dry_Zubr",0.398107,1,20};
hiddenSelections[] = {"camo"};
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Data\Pistol_Signal_01_CO"};
initSpeed = 333.1464;
magazines[] = {"6Rnd_45Colt_Clip"};
magazineWell[] = {"Taurus_45Colt","Taurus_410bore"};	
model = "\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Pistol_Signal_01_F.p3d";
picture = "\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Data\UI\gear_Pistol_Signal_01_X_ca.paa";
recoil = "recoil_pistol_zubr";
reloadMagazineSound[] = {"A3\Sounds_F_Kart\Weapons\starting_pistol_reload",0.562341,1,30};
soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083}; 
UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
};

// Spectrum Device Base Class. Adding: Description
class hgun_esd_01_base_F : Pistol_Base_F
{
descriptionShort = "Transceiver with Electromagnetic Spectrum Analyser";	
displayname = "Spectrum Device Base Class";
};