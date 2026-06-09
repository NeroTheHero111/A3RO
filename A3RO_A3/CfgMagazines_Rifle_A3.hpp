// AKM 30Rnd Mags. Changing: Description
class 30Rnd_762x39_Mag_F : CA_Magazine
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: AK-15, AK-15C, AKM";
displayName = "7.62x39 30Rnd Reload Tracer (Yellow) AKM Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 717.804;
mass = 19.3098;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_762x39_YRT_Mag_F_ca.paa";
};
class 30Rnd_762x39_Mag_Green_F : 30Rnd_762x39_Mag_F
{
displayName = "7.62x39 30Rnd Reload Tracer (Green) AKM Mag";
displaynameshort = "Rel. Tr. (Green)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_762x39_GRT_Mag_F_ca.paa";
};
class 30Rnd_762x39_Mag_Tracer_F : 30Rnd_762x39_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 30<br />Tracers: Every Round<br />Used in: AK-15, AK-15C, AKM";
displayName = "7.62x39 30Rnd Tracer (Yellow) AKM Mag";
displayNameShort = "Tracer (Yellow)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_762x39_YT_Mag_F_ca.paa";
};
class 30Rnd_762x39_Mag_Tracer_Green_F : 30Rnd_762x39_Mag_Tracer_F
{
displayName = "7.62x39 30Rnd Tracer (Green) AKM Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_762x39_GT_Mag_F_ca.paa";
};

// AKM 75Rnd Mags. Changing: Name. Description
class 75Rnd_762x39_Mag_F : 30Rnd_762x39_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 75<br />Tracers: Last 4 Rounds<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 75Rnd Reload Tracer (Yellow) AKM Mag";
displaynameshort = "Rel. Tr. (Yellow)";
mass = 48.9999;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_762x39_Mag_YRT_F_ca.paa";
};
class 75Rnd_762x39_Mag_Tracer_F : 75Rnd_762x39_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 75<br />Tracers: Every Round<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 75Rnd Tracer (Yellow) AKM Mag";
displayNameShort = "Tracer (Yellow)";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_762x39_Mag_YT_F_ca.paa";
};

// AKS-74U 30Rnd Mags. Changing: Name. Description
class 30Rnd_545x39_Mag_F : CA_Magazine
{
descriptionShort = "Calibre: 5.45x39mm<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: AK-12, AK-12C, AKS-74U";
displayName = "5.45x39 30Rnd Reload Tracer (Yellow) Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 890.016;
mass = 10.8671;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_545x39_YRT_Mag_F_ca.paa";
};
class 30Rnd_545x39_Mag_Green_F : 30Rnd_545x39_Mag_F
{
displayName = "5.45x39 30Rnd Reload Tracer (Green) Mag";
displaynameshort = "Rel. Tr. (Green)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_545x39_GRT_Mag_F_ca.paa";
};
class 30Rnd_545x39_Mag_Tracer_F : 30Rnd_545x39_Mag_F
{
descriptionShort = "Calibre: 5.45x39mm<br />Rounds: 30<br />Tracers: Every Round<br />Used in: AK-12, AK-12C, AKS-74U";
displayName = "5.45x39 30Rnd Tracer (Yellow) Mag";
displayNameShort = "Tracer (Yellow)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_545x39_YT_Mag_F_ca.paa";
};
class 30Rnd_545x39_Mag_Tracer_Green_F : 30Rnd_545x39_Mag_Tracer_F
{
displayName = "5.45x39 30Rnd Tracer (Green) Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_545x39_GT_Mag_F_ca.paa";
};

// Vanilla AK12 Mags. Changing: Name. Description.

// 30Rnd
class 30Rnd_762x39_AK12_Mag_F : 30Rnd_762x39_Mag_F
{
displayName = "7.62x39 30Rnd Reload Tracer (Green) AK-15 Mag";
displaynameshort = "Rel. Tr. (Green)";
mass = 16.0910;
picture = "\A3RO_A3\Textures\UI\icon_30rnd_762x39_AK12_GRT_Mag_F_ca.paa";
};
class 30Rnd_762x39_AK12_Arid_Mag_F : 30Rnd_762x39_AK12_Mag_F 
{
displayName = "7.62x39 30Rnd Reload Tracer (Green) AK-15 Sand Mag";
picture = "\A3RO_A3\Textures\UI\icon_30rnd_762x39_AK12_Sand_GRT_Mag_F_ca.paa";
};
class 30Rnd_762x39_AK12_Lush_Mag_F : 30Rnd_762x39_AK12_Mag_F 
{
displayName = "7.62x39 30Rnd Reload Tracer (Green) AK-15 Khaki Mag";	
picture = "\A3RO_A3\Textures\UI\icon_30rnd_762x39_AK12_Lush_GRT_Mag_F_ca.paa";
};
class 30Rnd_762x39_AK12_Mag_Tracer_F : 30Rnd_762x39_AK12_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 30<br />Tracers: Every Round<br />Used in: AK-15, AK-15C, AKM";
displayName = "7.62x39 30Rnd Tracer (Green) AK-15 Mag";	
displayNameShort = "Tracer (Green)";
picture = "\A3RO_A3\Textures\UI\icon_30rnd_762x39_AK12_GT_Mag_F_ca.paa";
};
class 30Rnd_762x39_AK12_Arid_Mag_Tracer_F : 30Rnd_762x39_AK12_Mag_Tracer_F 
{	
displayName = "7.62x39 30Rnd Tracer (Green) AK-15 Sand Mag";
picture = "\A3RO_A3\Textures\UI\icon_30rnd_762x39_AK12_Sand_GT_Mag_F_ca.paa";
};
class 30Rnd_762x39_AK12_Lush_Mag_Tracer_F : 30Rnd_762x39_AK12_Mag_Tracer_F 
{
displayName = "7.62x39 30Rnd Tracer (Green) AK-15 Khaki Mag";
picture = "\A3RO_A3\Textures\UI\icon_30rnd_762x39_AK12_Lush_GT_Mag_F_ca.paa";
};

// 75Rnd
class 75Rnd_762x39_AK12_Mag_F : 30Rnd_762x39_AK12_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 75<br />Tracers: Last 4 Rounds<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 75Rnd Reload Tracer (Green) AK-15 Mag";
mass = 49.5;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_762x39_GRT_AK15_Mag_F_ca.paa";
};
class 75Rnd_762x39_AK12_Arid_Mag_F : 75Rnd_762x39_AK12_Mag_F
{
displayName = "7.62x39 75Rnd Reload Tracer (Green) AK-15 Arid Mag";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_762x39_GRT_AK15_Arid_Mag_F_ca.paa";
};
class 75Rnd_762x39_AK12_Lush_Mag_F : 75Rnd_762x39_AK12_Mag_F
{
displayName = "7.62x39 75Rnd Reload Tracer (Green) AK-15 Lush Mag";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_762x39_GRT_AK15_Lush_Mag_F_ca.paa";
};
class 75Rnd_762x39_AK12_Mag_Tracer_F : 75Rnd_762x39_AK12_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 75<br />Tracers: Every Round<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 75Rnd Tracer (Green) AK-15 Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_762x39_GT_AK15_Mag_F_ca.paa";
};
class 75Rnd_762x39_AK12_Arid_Mag_Tracer_F : 75Rnd_762x39_AK12_Mag_Tracer_F
{
displayName = "7.62x39 75Rnd Tracer (Green) Arid AK-15 Mag";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_762x39_GT_AK15_Arid_Mag_F_ca.paa";		
};
class 75Rnd_762x39_AK12_Lush_Mag_Tracer_F : 75Rnd_762x39_AK12_Mag_Tracer_F
{
displayName = "7.62x39 75Rnd Tracer (Green) Lush AK-15 Mag";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_762x39_GT_AK15_Lush_Mag_F_ca.paa";		
};

// Creating AKM 7.62 Tracer Every 4 and tracerless Magazines

// 30Rnd
class 30Rnd_762x39_T4_Mag_F : 30Rnd_762x39_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 30Rnd Tracer Every 4 (Yellow) AKM Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_A3\Textures\UI\icon_30rnd_762x39_AK12_YT4_Mag_F_ca.paa";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 30Rnd_762x39_T4_G_Mag_F : 30Rnd_762x39_T4_Mag_F
{
ammo = "B_762x39_Ball_Green_F";
displayName = "7.62x39 30Rnd Tracer Every 4 (Green) AKM Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_762x39_GT4_Mag_F_ca.paa";
};
class 30Rnd_762x39_NT_Mag_F : 30Rnd_762x39_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 30<br />Tracers: None<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 30Rnd AKM Mag";
displayNameShort = "";  
lastRoundsTracer = 0;
picture = "\a3\weapons_f_exp\MagazineProxies\data\UI\icon_30Rnd_762x39_Mag_F_CA.paa";
};

// 75Rnd
class 75Rnd_762x39_T4_Mag_F : 75Rnd_762x39_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 75Rnd Tracer Every 4 (Yellow) AKM Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_762x39_Mag_YT4_F_ca.paa";
tracersEvery = 4;
};
class 75Rnd_762x39_NT_Mag_F : 75Rnd_762x39_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 75<br />Tracers: None<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 75Rnd AKM Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_F_CA.paa";
};

// Creating AKM 75Rnd Green Drums using hidden Texture
class 75Rnd_762x39_Green_Mag_F : 75Rnd_762x39_Mag_F
{
displayName = "7.62x39 75Rnd Reload Tracer (Yellow) Green AKM Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_762x39_Mag_YRT_Green_F_ca.paa";
};
class 75Rnd_762x39_NT_Green_Mag_F : 75Rnd_762x39_Green_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 75<br />Tracers: None<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 75Rnd Green AKM Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Green_F_ca.paa";
};
class 75Rnd_762x39_Green_Mag_Tracer_F : 75Rnd_762x39_Green_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 75<br />Tracers: Every Round<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 75Rnd Tracer (Yellow) Green AKM Mag";	
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_762x39_Mag_YT_Green_F_ca.paa";
tracersEvery = 1;
};
class 75Rnd_762x39_Mag_T4_Green_F : 75Rnd_762x39_Green_Mag_Tracer_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 75Rnd Tracer Every 4 (Yellow) Green AKM Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
tracersEvery = 4;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_762x39_Mag_YT4_Green_F_ca.paa";
};

// Creating AK-15 7.62 Tracer every 4 and tracerless AK-15 Magazines

// 30Rnd
class 30Rnd_762x39_AK12_T4_Mag_F : 30Rnd_762x39_AK12_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 30Rnd Tracer Every 4 (Green) AK-15 Mag";
displaynameshort = "Tr. 1 In 4 (Green)";	
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_30rnd_762x39_AK12_GT4_Mag_F_ca.paa";
tracersEvery = 4;
};
class 30Rnd_762x39_AK12_T4_Arid_Mag_F : 30Rnd_762x39_AK12_T4_Mag_F 
{	
displayName = "7.62x39 30Rnd Tracer Every 4 (Green) AK-15 Sand Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_camo_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_30rnd_762x39_AK12_Sand_GT4_Mag_F_ca.paa";
};
class 30Rnd_762x39_AK12_T4_Lush_Mag_F : 30Rnd_762x39_AK12_T4_Mag_F 
{
displayName = "7.62x39 30Rnd Tracer Every 4 (Green) AK-15 Khaki Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_Khaki_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_30rnd_762x39_AK12_Lush_GT4_Mag_F_ca.paa";
};
class 30Rnd_762x39_AK12_NT_Mag_F : 30Rnd_762x39_AK12_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 30<br />Tracers: None<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 30Rnd AK-15 Mag";
displayNameShort = "";	
lastRoundsTracer = 0;
picture = "\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_30Rnd_762x39_AK12_Mag_F_CA.paa";
};
class 30Rnd_762x39_AK12_NT_Arid_Mag_F : 30Rnd_762x39_AK12_NT_Mag_F 
{	
displayName = "7.62x39 30Rnd AK-15 Sand Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_camo_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Arid_Mag_F_CA.paa";
};
class 30Rnd_762x39_AK12_NT_Lush_Mag_F : 30Rnd_762x39_AK12_NT_Mag_F 
{
displayName = "7.62x39 30Rnd AK-15 Khaki Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_Khaki_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Lush_Mag_F_CA.paa";	
};

// 75Rnd
class 75Rnd_762x39_AK12_T4_Mag_F : 75Rnd_762x39_AK12_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 75Rnd Tracer Every 4 (Green) AK-15 Mag";	
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_762x39_GT4_AK15_Mag_F_ca.paa";
tracersEvery = 4;
};
class 75Rnd_762x39_AK12_T4_Arid_Mag_F : 75Rnd_762x39_AK12_T4_Mag_F 
{	
displayName = "7.62x39 75Rnd Tracer Every 4 (Green) AK-15 Sand Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_762x39_GT4_AK15_Arid_Mag_F_ca.paa";
};
class 75Rnd_762x39_AK12_T4_Lush_Mag_F : 75Rnd_762x39_AK12_T4_Mag_F 
{
displayName = "7.62x39 75Rnd Tracer Every 4 (Green) AK-15 Khaki Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_762x39_GT4_AK15_Lush_Mag_F_ca.paa";
};
class 75Rnd_762x39_AK12_NT_Mag_F : 75Rnd_762x39_AK12_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 75<br />Tracers: None<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 75Rnd AK-15 Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Mag_F_CA.paa";
};
class 75Rnd_762x39_AK12_NT_Arid_Mag_F : 75Rnd_762x39_AK12_NT_Mag_F 
{	
displayName = "7.62x39 75Rnd Sand AK-15 Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_F_CA.paa";
};
class 75Rnd_762x39_AK12_NT_Lush_Mag_F : 75Rnd_762x39_AK12_NT_Mag_F 
{
displayName = "7.62x39 75Rnd Khaki AK-15 Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_F_CA.paa";
};

// Creating AKS-74U 30Rnd 5.45 Tracer Every 4 and tracerless Magazines
class 30Rnd_545x39_Mag_T4_F : 30Rnd_545x39_Mag_F
{
descriptionShort = "Calibre: 5.45x39mm<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: AK-12, AK-12C, AKS-74U";
displayName = "5.45x39 30Rnd Tracer Every 4 (Yellow) Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_545x39_YT4_Mag_F_ca.paa";
tracersEvery = 4;
};
class 30Rnd_545x39_Mag_T4_Green_F : 30Rnd_545x39_Mag_T4_F
{
ammo = "B_545x39_Ball_Green_F";
displayName = "5.45x39 30Rnd Tracer Every 4 (Green) Mag";	
displaynameshort = "Tr. 1 In 4 (Green)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_545x39_GT4_Mag_F_ca.paa";
};
class 30Rnd_545x39_Mag_NT_F : 30Rnd_545x39_Mag_F
{
descriptionShort = "Calibre: 5.45x39mm<br />Rounds: 30<br />Tracers: None<br />Used in: AK-12, AK-12C, AKS-74U";
displayName = "5.45x39 30Rnd Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_F_ca.paa";
};

// Creating 5.45 95Rnd Magazines

// Reload Tracer
class 95Rnd_545x39_RPK16_Mag_F : 75Rnd_762x39_AK12_Mag_F
{
ammo = "B_545x39_Ball_Green_F";
count = 95;
descriptionShort = "Calibre: 5.45x39mm<br />Rounds: 95<br />Tracers: Last 4 Rounds<br />Used in: RPK-16";	
displayName = "5.45x39 95Rnd Reload Tracer (Green) RPK-16 Mag";
displaynameshort = "Rel. Tr. (Green)";
initSpeed = 890.016;
mass = 44.4857;
picture = "\A3RO_A3\Textures\UI\icon_95Rnd_545x39_GRT_Mag_F_ca.paa";
};
class 95Rnd_545x39_RPK16_Arid_Mag_F : 95Rnd_545x39_RPK16_Mag_F
{
displayName = "5.45x39 95Rnd Reload Tracer (Green) RPK-16 Arid Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\A3RO_A3\Textures\UI\icon_95Rnd_545x39_GRT_Arid_Mag_F_ca.paa";
};
class 95Rnd_545x39_RPK16_Lush_Mag_F : 95Rnd_545x39_RPK16_Mag_F
{
displayName = "5.45x39 95Rnd Reload Tracer (Green) RPK-16 Lush Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
picture = "\A3RO_A3\Textures\UI\icon_95Rnd_545x39_GRT_Lush_Mag_F_ca.paa";
};

// Tracer
class 95Rnd_545x39_RPK16_Mag_Tracer_F : 95Rnd_545x39_RPK16_Mag_F
{
descriptionShort = "Calibre: 5.45x39mm<br />Rounds: 95<br />Tracers: Every Round<br />Used in: RPK-16";	
displayName = "5.45x39 95Rnd Tracer (Green) RPK-16 Mag";	
displayNameShort = "Tracer (Green)";
lastRoundsTracer = 95;
picture = "\A3RO_A3\Textures\UI\icon_95Rnd_545x39_GT_Mag_F_ca.paa";
tracersEvery = 1;
};
class 95Rnd_545x39_RPK16_Arid_Mag_Tracer_F : 95Rnd_545x39_RPK16_Mag_Tracer_F
{
displayName = "5.45x39 95Rnd Tracer (Green) RPK-16 Arid Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\A3RO_A3\Textures\UI\icon_95Rnd_545x39_GT_Arid_Mag_F_ca.paa";
};
class 95Rnd_545x39_RPK16_Lush_Mag_Tracer_F : 95Rnd_545x39_RPK16_Mag_Tracer_F
{
displayName = "5.45x39 95Rnd Tracer (Green) RPK-16 Lush Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};	
picture = "\A3RO_A3\Textures\UI\icon_95Rnd_545x39_GT_Lush_Mag_F_ca.paa";
};

// Tracerless
class 95Rnd_545x39_RPK16_Mag_NT_F : 95Rnd_545x39_RPK16_Mag_F
{
descriptionShort = "Calibre: 5.45x39mm<br />Rounds: 95<br />Tracers: None<br />Used in: RPK-16";	
displayName = "5.45x39 95Rnd RPK-16 Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Mag_F_CA.paa";
};
class 95Rnd_545x39_RPK16_Arid_Mag_NT_F : 95Rnd_545x39_RPK16_Mag_NT_F
{
displayName = "5.45x39 95Rnd RPK-16 Arid Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_F_CA.paa";
};
class 95Rnd_545x39_RPK16_Lush_Mag_NT_F : 95Rnd_545x39_RPK16_Mag_NT_F
{
displayName = "5.45x39 95Rnd RPK-16 Lush Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};	
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_F_CA.paa";
};

// Tracer Every 4
class 95Rnd_545x39_RPK16_Mag_T4_F : 95Rnd_545x39_RPK16_Mag_Tracer_F
{
descriptionShort = "Calibre: 5.45x39mm<br />Rounds: 95<br />Tracers: Every 4th Round<br />Used in: RPK-16";	
displayName = "5.45x39 95Rnd Tracer Every 4 (Green) RPK-16 Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_95Rnd_545x39_GT4_Mag_F_ca.paa";
tracersEvery = 4;
};
class 95Rnd_545x39_RPK16_Arid_Mag_T4_F : 95Rnd_545x39_RPK16_Mag_T4_F
{
displayName = "5.45x39 95Rnd Tracer Every 4 (Green) RPK-16 Arid Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\A3RO_A3\Textures\UI\icon_95Rnd_545x39_GT4_Arid_Mag_F_ca.paa";
};
class 95Rnd_545x39_RPK16_Lush_Mag_T4_F : 95Rnd_545x39_RPK16_Mag_T4_F
{
displayName = "5.45x39 95Rnd Tracer Every 4 (Green) RPK-16 Lush Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};	
picture = "\A3RO_A3\Textures\UI\icon_95Rnd_545x39_GT4_Lush_Mag_F_ca.paa";
};

// Creating 5.56 90Rnd Magazines

// Reload Tracer
class 90Rnd_556x45_AK_Mag_F : 75Rnd_762x39_Mag_F
{
ammo = "B_556x45_Ball_Tracer_Green";
count = 90;
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 90<br />Tracers: Last 4 Rounds<br />Used in: AK-19, WASR-3";	
displayName = "5.56x45 90Rnd Reload Tracer (Green) AK Mag";
displaynameshort = "Rel. Tr. (Green)";
initSpeed = 913.486;
mass = 46.4285;
picture = "\A3RO_A3\Textures\UI\icon_90Rnd_556x45_Mag_GRT_F_ca.paa";
};
class 90Rnd_556x45_AK_Green_Mag_F : 90Rnd_556x45_AK_Mag_F
{
displayName = "5.56x45 90Rnd Reload Tracer (Green) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_90Rnd_556x45_Mag_GRT_Green_F_ca.paa";
};

// Tracer
class 90Rnd_556x45_AK_Mag_Tracer_F : 90Rnd_556x45_AK_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 90<br />Tracers: Every Round<br />Used in: AK-19, WASR-3";
displayName = "5.56x45 90Rnd Tracer (Green) AK Mag";	
displayNameShort = "Tracer (Green)";
lastRoundsTracer = 90;
picture = "\A3RO_A3\Textures\UI\icon_90Rnd_556x45_Mag_GT_F_ca.paa";
tracersEvery = 1;
};
class 90Rnd_556x45_AK_Green_Mag_Tracer_F : 90Rnd_556x45_AK_Mag_Tracer_F
{
displayName = "5.56x45 90Rnd Tracer (Green) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_90Rnd_556x45_Mag_GT_Green_F_ca.paa";
};

// Tracerless
class 90Rnd_556x45_AK_Mag_NT_F : 90Rnd_556x45_AK_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 90<br />Tracers: None<br />Used in: AK-19, WASR-3";
displayName = "5.56x45 90Rnd AK Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_F_CA.paa";
};
class 90Rnd_556x45_AK_Green_Mag_NT_F : 90Rnd_556x45_AK_Mag_NT_F
{
displayName = "5.56x45 90Rnd AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Green_F_ca.paa";
};

// Tracer Every 4
class 90Rnd_556x45_AK_Mag_T4_F : 90Rnd_556x45_AK_Mag_Tracer_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 90<br />Tracers: Every 4th Round<br />Used in: AK-19, WASR-3";
displayName = "5.56x45 90Rnd Tracer Every 4 (Green) AK Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_90Rnd_556x45_Mag_GT4_F_ca.paa";
tracersEvery = 4;
};
class 90Rnd_556x45_AK_Green_Mag_T4_F : 90Rnd_556x45_AK_Mag_T4_F
{
displayName = "5.56x45 90Rnd Tracer Every 4 (Green) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_90Rnd_556x45_Mag_GT4_Green_F_ca.paa";
};

// Creating .223 Remington 90Rnd Magazines
// Reload Tracer
class 90Rnd_223REM_AK_Mag_F : 75Rnd_762x39_Mag_F
{
ammo = "B_223REM_Ball";
count = 90;
descriptionShort = "Calibre: .223 Remington<br />Rounds: 90<br />Tracers: Last 4 Rounds<br />Used in: TR3 .223, WASR-3, AK-19";	
displayName = ".223 90Rnd Reload Tracer (Yellow) AK Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 1007.669;
mass = 45.3999;
picture = "\A3RO_A3\Textures\UI\icon_90Rnd_556x45_Mag_YRT_F_ca.paa";
};
class 90Rnd_223REM_AK_Green_Mag_F : 90Rnd_223REM_AK_Mag_F
{
displayName = ".223 90Rnd Reload Tracer (Yellow) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_90Rnd_556x45_Mag_YRT_Green_F_ca.paa";
};

// Tracer
class 90Rnd_223REM_AK_Mag_Tracer_F : 90Rnd_223REM_AK_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 90<br />Tracers: Every Round<br />Used in: TR3 .223, WASR-3, AK-19";	
displayName = ".223 90Rnd Tracer (Yellow) AK Mag";	
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 90;
picture = "\A3RO_A3\Textures\UI\icon_90Rnd_556x45_Mag_YT_F_ca.paa";
tracersEvery = 1;
};
class 90Rnd_223REM_AK_Green_Mag_Tracer_F : 90Rnd_223REM_AK_Mag_Tracer_F
{
displayName = ".223 90Rnd Tracer (Yellow) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_90Rnd_556x45_Mag_YT_Green_F_ca.paa";
};

// Tracerless
class 90Rnd_223REM_AK_Mag_NT_F : 90Rnd_223REM_AK_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 90<br />Tracers: None<br />Used in: TR3 .223, WASR-3, AK-19";	
displayName = ".223 90Rnd AK Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_F_CA.paa";
};
class 90Rnd_223REM_AK_Green_Mag_NT_F : 90Rnd_223REM_AK_Mag_NT_F
{
displayName = ".223 90Rnd AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Green_F_ca.paa";
};

// Tracer Every 4
class 90Rnd_223REM_AK_Mag_T4_F : 90Rnd_223REM_AK_Mag_Tracer_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 90<br />Tracers: Every 4th Round<br />Used in: TR3 .223, WASR-3, AK-19";	
displayName = ".223 90Rnd Tracer Every 4 (Yellow) AK Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_90Rnd_556x45_Mag_YT4_F_ca.paa";
tracersEvery = 4;
};
class 90Rnd_223REM_AK_Green_Mag_T4_F : 90Rnd_223REM_AK_Mag_T4_F
{
displayName = ".223 90Rnd Tracer Every 4 (Yellow) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_90Rnd_556x45_Mag_YT4_Green_F_ca.paa";
};

// IR-DIM
// 5.56
class 90Rnd_556x45_AK_Mag_IRT_F : 90Rnd_556x45_AK_Mag_Tracer_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 90Rnd Tracer (IR-DIM) AK Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_90Rnd_556x45_Mag_IRT_F_ca.paa";
};
class 90Rnd_556x45_AK_Green_Mag_IRT_F : 90Rnd_556x45_AK_Mag_IRT_F
{
displayName = "5.56x45 90Rnd Tracer (IR-DIM) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_90Rnd_556x45_Mag_IRT_Green_F_ca.paa";
};

// IR-DIM T4
// 5.56
class 90Rnd_556x45_AK_Mag_IRT4_F : 90Rnd_556x45_AK_Mag_T4_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 90Rnd Tracer Every 4 (IR-DIM) AK Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_90Rnd_556x45_Mag_IRT4_F_ca.paa";
};
class 90Rnd_556x45_AK_Green_Mag_IRT4_F : 90Rnd_556x45_AK_Mag_IRT4_F
{
displayName = "5.56x45 90Rnd Tracer Every 4 (IR-DIM) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_90Rnd_556x45_Mag_IRT4_Green_F_ca.paa";
};

// QBZ-95-1 30Rnd 5.8 Magazines. Changing: Name. Description

class 30Rnd_580x42_Mag_F : CA_Magazine
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 30Rnd Reload Tracer (Green) Mag";
displaynameshort = "Rel. Tr. (Green)";
initSpeed = 930.25;
mass = 12.0899;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_58x42_GRT_Mag_F_CA.paa";
};
class 30Rnd_580x42_Mag_Tracer_F : 30Rnd_580x42_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 30<br />Tracers: Every Round<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 30Rnd Tracer (Green) Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_58x42_GT_Mag_F_CA.paa";
};

// QJB-95-1 75Rnd 5.8 Magazines. Changing: Name. Description. Mass. Ammocount from 100 to 75
class 100Rnd_580x42_Mag_F : 30Rnd_580x42_Mag_F
{
count = 75;
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 75<br />Tracers: Last 4 Rounds<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 75Rnd Reload Tracer (Green) Mag";
mass = 43.0797;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_58x42_GRT_Mag_F_CA.paa";
};
class 100Rnd_580x42_ghex_Mag_F : 100Rnd_580x42_Mag_F
{
displayName = "5.8x42 75Rnd Reload Tracer (Green) Green Hex Mag";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_58x42_GRT_GHex_Mag_F_CA.paa";
};
class 100Rnd_580x42_hex_Mag_F : 100Rnd_580x42_Mag_F
{
displayName = "5.8x42 75Rnd Reload Tracer (Green) Hex Mag";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_58x42_GRT_Hex_Mag_F_CA.paa";
};
class 100Rnd_580x42_Mag_Tracer_F : 100Rnd_580x42_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 75<br />Tracers: Every Round<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 75Rnd Tracer (Green) Mag";
displayNameShort = "Tracer (Green)";
lastRoundsTracer = 75;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_58x42_GT_Mag_F_CA.paa";
};
class 100Rnd_580x42_ghex_Mag_Tracer_F : 100Rnd_580x42_Mag_Tracer_F
{
displayName = "5.8x42 75Rnd Tracer (Green) Green Hex Mag";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_58x42_GT_GHex_Mag_F_CA.paa";
};
class 100Rnd_580x42_hex_Mag_Tracer_F : 100Rnd_580x42_Mag_Tracer_F
{
displayName = "5.8x42 75Rnd Tracer (Green) Hex Mag";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_58x42_GT_Hex_Mag_F_CA.paa";
};


// Creating 5.8 Tracer Every 4 and tracerless Magazines
// 30Rnd
class 30Rnd_580x42_Mag_T4_F : 30Rnd_580x42_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 30Rnd Tracer Every 4 (Green) Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_58x42_GT4_Mag_F_CA.paa";
tracersEvery = 4;
};
class 30Rnd_580x42_NT_Mag_F : 30Rnd_580x42_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 30<br />Tracers: None<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 30Rnd Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_58x42_PosFix_Mag_F_CA.paa";
};

// 100Rnd
class 100Rnd_580x42_T4_Mag_F : 100Rnd_580x42_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 75Rnd Tracer Every 4 (Green) Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_58x42_GT4_Mag_F_CA.paa";
tracersEvery = 4;
};
class 100Rnd_580x42_ghex_T4_Mag_F : 100Rnd_580x42_ghex_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 75Rnd Tracer Every 4 (Green) Green Hex Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_58x42_GT4_GHex_Mag_F_CA.paa";
tracersEvery = 4;
};
class 100Rnd_580x42_hex_T4_Mag_F : 100Rnd_580x42_hex_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 75Rnd Tracer Every 4 (Green) Hex Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_58x42_GT4_Hex_Mag_F_CA.paa";
tracersEvery = 4;
};
class 100Rnd_580x42_NT_Mag_F : 100Rnd_580x42_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 75<br />Tracers: None<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 75Rnd Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_58x42_PosFix_Mag_F_CA.paa";
};
class 100Rnd_580x42_ghex_NT_Mag_F : 100Rnd_580x42_ghex_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 75<br />Tracers: None<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 75Rnd Green Hex Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_58x42_PosFix_GHex_Mag_F_CA.paa";
};
class 100Rnd_580x42_hex_NT_Mag_F : 100Rnd_580x42_hex_Mag_F
{
descriptionShort = "Calibre: 5.8x42mm<br />Rounds: 75<br />Tracers: None<br />Used in: QBZ-95-1, QJB-95-1";
displayName = "5.8x42 75Rnd Hex Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_58x42_PosFix_Hex_Mag_F_CA.paa";
};


// QBZ 5.56 NATO Magazines and Drums
//30 Rnd
class 30Rnd_556x45_RT_QBZ_Mag_F : 30Rnd_580x42_Mag_F
{
ammo = "B_556x45_Ball_Tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 30Rnd Reload Tracer (Red) QBZ Mag";	
displaynameshort = "Rel. Tr. (Red)";
initSpeed = 913.486;
mass = 12.0009;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_RRT_QBZ_Mag_F_CA.paa";
};
class 30Rnd_556x45_Tracer_QBZ_Mag_F : 30Rnd_556x45_RT_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every Round<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 30Rnd Tracer (Red) QBZ Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_RT_QBZ_Mag_F_CA.paa";
tracersEvery = 1;
};
class 30Rnd_556x45_T4_QBZ_Mag_F : 30Rnd_556x45_Tracer_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 30Rnd Tracer Every 4 (Red) QBZ Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_RT4_QBZ_Mag_F_CA.paa";
tracersEvery = 4;	
};
class 30Rnd_556x45_NT_QBZ_Mag_F : 30Rnd_556x45_RT_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: None<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 30Rnd QBZ Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_58x42_PosFix_Mag_F_CA.paa";
};

// 100Rnds
// GHex
class 75Rnd_556x45_RT_Ghex_QBZ_Mag_F : 100Rnd_580x42_ghex_Mag_F
{
ammo = "B_556x45_Ball_Tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: Last 4 Rounds<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd Reload Tracer (Red) QBZ Green Hex Mag";
displaynameshort = "Rel. Tr. (Red)";
initSpeed = 913.486;
mass = 42.8571;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_RRT_GHex_QBZ_CA.paa";
};
class 75Rnd_556x45_Tracer_Ghex_QBZ_Mag_F : 75Rnd_556x45_RT_Ghex_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: Every Round<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd Tracer (Red) QBZ Green Hex Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_RT_GHex_QBZ_CA.paa";
tracersEvery = 1;
};
class 75Rnd_556x45_T4_Ghex_QBZ_Mag_F : 75Rnd_556x45_Tracer_Ghex_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd Tracer Every 4 (Red) QBZ Green Hex Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_RT4_GHex_QBZ_CA.paa";
tracersEvery = 4;	
};
class 75Rnd_556x45_NT_Ghex_QBZ_Mag_F : 75Rnd_556x45_RT_Ghex_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: None<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd QBZ Green Hex Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_58x42_PosFix_GHex_Mag_F_CA.paa";
};

// Hex
class 75Rnd_556x45_RT_Hex_QBZ_Mag_F : 100Rnd_580x42_hex_Mag_F
{
ammo = "B_556x45_Ball_Tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: Last 4 Rounds<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd Reload Tracer (Red) QBZ Hex Mag";
displaynameshort = "Rel. Tr. (Red)";
initSpeed = 913.486;
mass = 42.8571;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_RRT_Hex_QBZ_CA.paa";
};
class 75Rnd_556x45_Tracer_Hex_QBZ_Mag_F : 75Rnd_556x45_RT_Hex_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: Every Round<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd Tracer (Red) QBZ Hex Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_RT_Hex_QBZ_CA.paa";
tracersEvery = 1;
};
class 75Rnd_556x45_T4_Hex_QBZ_Mag_F : 75Rnd_556x45_Tracer_Hex_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd Tracer Every 4 (Red) QBZ Hex Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_RT4_Hex_QBZ_CA.paa";
tracersEvery = 4;
};
class 75Rnd_556x45_NT_Hex_QBZ_Mag_F : 75Rnd_556x45_RT_Hex_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: None<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd QBZ Hex Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_58x42_PosFix_Hex_Mag_F_CA.paa";
};

// Black
class 75Rnd_556x45_RT_QBZ_Mag_F : 100Rnd_580x42_Mag_F
{
ammo = "B_556x45_Ball_Tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: Last 4 Rounds<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd Reload Tracer (Red) QBZ Mag";
displaynameshort = "Rel. Tr. (Red)";
initSpeed = 913.486;
mass = 42.8571;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_RRT_QBZ_CA.paa";
};
class 75Rnd_556x45_Tracer_QBZ_Mag_F : 75Rnd_556x45_RT_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: Every Round<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd Tracer (Red) QBZ Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_RT_QBZ_CA.paa";
tracersEvery = 1;
};
class 75Rnd_556x45_T4_QBZ_Mag_F : 75Rnd_556x45_Tracer_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd Tracer Every 4 (Red) QBZ Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_RT4_QBZ_CA.paa";
tracersEvery = 4;	
};
class 75Rnd_556x45_NT_QBZ_Mag_F : 75Rnd_556x45_RT_QBZ_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 75<br />Tracers: None<br />Used in: QBZ-97 FTU™, QBZ-97 FTU™ QLG-10A, QJB-97 FTU™";
displayName = "5.56x45 75Rnd QBZ Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_58x42_PosFix_Mag_F_CA.paa";
};


// T97NSR-A .223 NATO Magazines and Drums
//30 Rnd
class 30Rnd_223REM_RT_QBZ_Mag_F : 30Rnd_556x45_RT_QBZ_Mag_F
{
ammo = "B_223REM_Ball";
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: T97NSR-A";
displayName = ".223 30Rnd Reload Tracer (Yellow) QBZ Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 1007.669;
mass = 11.6580;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_YRT_QBZ_Mag_F_CA.paa";
};
class 30Rnd_223REM_Tracer_QBZ_Mag_F : 30Rnd_223REM_RT_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Every Round<br />Used in: T97NSR-A";
displayName = ".223 30Rnd Tracer (Yellow) QBZ Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_YT_QBZ_Mag_F_CA.paa";
tracersEvery = 1;
};
class 30Rnd_223REM_T4_QBZ_Mag_F : 30Rnd_223REM_Tracer_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: T97NSR-A";
displayName = ".223 30Rnd Tracer Every 4 (Yellow) QBZ Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_YT4_QBZ_Mag_F_CA.paa";
tracersEvery = 4;	
};
class 30Rnd_223REM_NT_QBZ_Mag_F : 30Rnd_223REM_RT_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: None<br />Used in: T97NSR-A";
displayName = ".223 30Rnd QBZ Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_58x42_PosFix_Mag_F_CA.paa";
};

// 100Rnds
// GHex
class 75Rnd_223REM_RT_Ghex_QBZ_Mag_F : 75Rnd_556x45_RT_Ghex_QBZ_Mag_F
{
ammo = "B_223REM_Ball";
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: Last 4 Rounds<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Reload Tracer (Yellow) QBZ Green Hex Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 1007.669;
mass = 42;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_YRT_GHex_QBZ_CA.paa";
};
class 75Rnd_223REM_Tracer_Ghex_QBZ_Mag_F : 75Rnd_223REM_RT_Ghex_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: Every Round<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Tracer (Yellow) QBZ Green Hex Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_YT_GHex_QBZ_CA.paa";
tracersEvery = 1;
};
class 75Rnd_223REM_T4_Ghex_QBZ_Mag_F : 75Rnd_223REM_Tracer_Ghex_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Tracer Every 4 (Yellow) QBZ Green Hex Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_YT4_GHex_QBZ_CA.paa";
tracersEvery = 4;	
};
class 75Rnd_223REM_NT_Ghex_QBZ_Mag_F : 75Rnd_223REM_RT_Ghex_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: None<br />Used in: T97NSR-A";
displayName = ".223 75Rnd QBZ Green Hex Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_58x42_PosFix_GHex_Mag_F_CA.paa";
};

// Hex
class 75Rnd_223REM_RT_Hex_QBZ_Mag_F : 75Rnd_556x45_RT_Hex_QBZ_Mag_F
{
ammo = "B_223REM_Ball";
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: Last 4 Rounds<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Reload Tracer (Yellow) QBZ Hex Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 1007.669;
mass = 42;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_YRT_Hex_QBZ_CA.paa";
};
class 75Rnd_223REM_Tracer_Hex_QBZ_Mag_F : 75Rnd_223REM_RT_Hex_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: Every Round<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Tracer (Yellow) QBZ Hex Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_YT_Hex_QBZ_CA.paa";
tracersEvery = 1;
};
class 75Rnd_223REM_T4_Hex_QBZ_Mag_F : 75Rnd_223REM_Tracer_Hex_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Tracer Every 4 (Yellow) QBZ Hex Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_YT4_Hex_QBZ_CA.paa";
tracersEvery = 4;	
};
class 75Rnd_223REM_NT_Hex_QBZ_Mag_F : 75Rnd_223REM_RT_Hex_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: None<br />Used in: T97NSR-A";
displayName = ".223 75Rnd QBZ Hex Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_58x42_PosFix_Hex_Mag_F_CA.paa";
};

// Black
class 75Rnd_223REM_RT_QBZ_Mag_F : 75Rnd_556x45_RT_QBZ_Mag_F
{
ammo = "B_223REM_Ball";
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: Last 4 Rounds<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Reload Tracer (Yellow) QBZ Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 1007.669;
mass = 42;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_YRT_QBZ_CA.paa";
};
class 75Rnd_223REM_Tracer_QBZ_Mag_F : 75Rnd_223REM_RT_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: Every Round<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Tracer (Yellow) QBZ Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_YT_QBZ_CA.paa";
tracersEvery = 1;
};
class 75Rnd_223REM_T4_QBZ_Mag_F : 75Rnd_223REM_Tracer_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: T97NSR-A";
displayName = ".223 75Rnd Tracer Every 4 (Yellow) QBZ Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_YT4_QBZ_CA.paa";
tracersEvery = 4;
};
class 75Rnd_223REM_NT_QBZ_Mag_F : 75Rnd_223REM_RT_QBZ_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 75<br />Tracers: None<br />Used in: T97NSR-A";
displayName = ".223 75Rnd QBZ Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_58x42_PosFix_Mag_F_CA.paa";
};

// IR-DIM 
// 5.56
class 30Rnd_556x45_IRT_QBZ_Mag_F : 30Rnd_556x45_Tracer_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 30Rnd Tracer (IR-DIM) QBZ Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_IRT_QBZ_Mag_F_CA.paa";
};
class 75Rnd_556x45_IRT_Ghex_QBZ_Mag_F : 75Rnd_556x45_Tracer_Ghex_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 75Rnd Tracer (IR-DIM) QBZ Green Hex Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_IRT_GHex_QBZ_CA.paa";
};
class 75Rnd_556x45_IRT_Hex_QBZ_Mag_F : 75Rnd_556x45_Tracer_Hex_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 75Rnd Tracer (IR-DIM) QBZ Hex Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_IRT_Hex_QBZ_CA.paa";
};
class 75Rnd_556x45_IRT_QBZ_Mag_F : 75Rnd_556x45_Tracer_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 75Rnd Tracer (IR-DIM) QBZ Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_IRT_QBZ_CA.paa";
};

// IR-DIM T4
// 5.56
class 30Rnd_556x45_IRT4_QBZ_Mag_F : 30Rnd_556x45_T4_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 30Rnd Tracer Every 4 (IR-DIM) QBZ Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_IRT4_QBZ_Mag_F_CA.paa";
};
class 75Rnd_556x45_IRT4_Ghex_QBZ_Mag_F : 75Rnd_556x45_T4_Ghex_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 75Rnd Tracer Every 4 (IR-DIM) QBZ Green Hex Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_IRT4_GHex_QBZ_CA.paa";
};
class 75Rnd_556x45_IRT4_Hex_QBZ_Mag_F : 75Rnd_556x45_T4_Hex_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 75Rnd Tracer Every 4 (IR-DIM) QBZ Hex Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_IRT4_Hex_QBZ_CA.paa";
};
class 75Rnd_556x45_IRT4_QBZ_Mag_F : 75Rnd_556x45_T4_QBZ_Mag_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 75Rnd Tracer Every 4 (IR-DIM) QBZ Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_75Rnd_556x45_IRT4_QBZ_CA.paa";
};

// Katiba 6.5 30Rnd Magazines. Changing: Description. Ammo to 5.56. 
class 30Rnd_65x39_caseless_green : 30Rnd_65x39_caseless_mag
{
ammo = "B_556x45_Ball_Tracer_Green";
count = 20;
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 20<br />Tracers: Last 4 Rounds<br />Used in: KH-2002, KH-2002 Carbine, Type 115";
displayName = "5.56x45 20Rnd Reload Tracer (Green) KH-2002 Mag";
displaynameshort = "Rel. Tr. (Green)";
initSpeed = 913.486;
lastRoundsTracer = 4;
mass = 8.0961;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_556x45_GRT_Katiba_CA.paa";
};
class 30Rnd_65x39_caseless_green_mag_Tracer : 30Rnd_65x39_caseless_green
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 20<br />Tracers: Every Round<br />Used in: KH-2002, KH-2002 Carbine, Type 115";
displayName = "5.56x45 20Rnd Tracer (Green) KH-2002 Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_556x45_GT_Katiba_CA.paa";
};

// Creating KH-2002 5.56 20Rnd Tracer every 4 and tracerless Magazine.
class 20Rnd_556x45_Katiba_GT4_Mag : 30Rnd_65x39_caseless_green_mag_Tracer
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 20<br />Tracers: Every 4th Round<br />Used in: KH-2002, KH-2002 Carbine, Type 115";
displayName = "5.56x45 20Rnd Tracer Every 4 (Green) KH-2002 Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
lastRoundsTracer = 0;
tracersEvery = 4;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_556x45_GT4_Katiba_CA.paa";
};
class 20Rnd_556x45_Katiba_NT_Mag : 30Rnd_65x39_caseless_green
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 20<br />Tracers: None<br />Used in: KH-2002, KH-2002 Carbine, Type 115";
displayName = "5.56x45 20Rnd KH-2002 Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3\weapons_f\data\ui\m_20stanag_CA.paa";
};

// Type 115 Integrated .50BW Magazine. Changing: Name. Description
class 10Rnd_50BW_Mag_F : CA_Magazine
{
descriptionShort = "Calibre: .50 Beowulf<br />Rounds: 10<br />Tracers: None<br />Used in: Type 115";	
displayName = ".50 BW 10Rnd Mag";
displayNameShort = "";
mass = 13.5714;
};

// No Evidence of .50BW Tracer
/*class 10Rnd_50BW_Mag_Tracer_F : 10Rnd_50BW_Mag_F
{
descriptionShort = "Calibre: .50 Beowulf<br />Rounds: 10<br />Tracers: Every Round<br />Used in: Type 115";	
displayName = ".50 BW 10Rnd Tracer (Green) Mag";
displayNameShort = "Tracer (Green)";
lastRoundsTracer = 10;
picture = "\A3RO_A3\Textures\UI\icon_10Rnd_50BW_Tracer_Mag_F_CA.paa";
tracersEvery = 1;
};*/

// Creating .223 Remington KH-2002 Magazines
class 20Rnd_223REM_Katiba_YRT_Mag : 30Rnd_65x39_caseless_green
{
ammo = "B_223REM_Ball"; 
descriptionShort = "Calibre: .223 Remington<br />Rounds: 20<br />Tracers: Last 4 Rounds<br />Used in: KH-2002, KH-2002 Carbine, Type 115";
displayName = ".223 20Rnd Reload Tracer (Yellow) KH-2002 Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 1007.669;
mass = 7.8675;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_556x45_YRT_Katiba_CA.paa";
};
class 20Rnd_223REM_Katiba_YT_Mag : 20Rnd_223REM_Katiba_YRT_Mag
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 20<br />Tracers: Every Round<br />Used in: KH-2002, KH-2002 Carbine, Type 115";
displayName = ".223 20Rnd Tracer (Yellow) KH-2002 Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_556x45_YT_Katiba_CA.paa";
tracersEvery = 1;
};
class 20Rnd_223REM_Katiba_YT4_Mag : 20Rnd_223REM_Katiba_YT_Mag
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 20<br />Tracers: Every 4th Round<br />Used in: KH-2002, KH-2002 Carbine, Type 115";
displayName = ".223 20Rnd Tracer Every 4 (Yellow) KH-2002 Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_556x45_YT4_Katiba_CA.paa";
tracersEvery = 4;	
};
class 20Rnd_223REM_Katiba_NT_Mag : 20Rnd_223REM_Katiba_YRT_Mag
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 20<br />Tracers: None<br />Used in: KH-2002, KH-2002 Carbine, Type 115";
displayName = ".223 20Rnd KH-2002 Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3\weapons_f\data\ui\m_20stanag_CA.paa";
};

// IR-DIM
class 20Rnd_556x45_Katiba_IRT_Mag : 30Rnd_65x39_caseless_green_mag_Tracer
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 20Rnd Tracer (IR-DIM) KH-2002 Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_556x45_IRT_Katiba_CA.paa";
};
// IR-DIM T4
class 20Rnd_556x45_Katiba_IRT4_Mag : 20Rnd_556x45_Katiba_GT4_Mag
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 20Rnd Tracer Every 4 (IR-DIM) KH-2002 Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_556x45_IRT4_Katiba_CA.paa";
};

// Remaining MX Magazines. Changing: Name. Description. Ammo Count from 100 to 60
// 100 Rnd
class 100Rnd_65x39_caseless_black_mag : 100Rnd_65x39_caseless_mag
{
displayName = "6.5x39 60Rnd Reload Tracer (Red) Mag";
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_65x39_caseless_RRT_black_mag_CA.paa";
};
class 100Rnd_65x39_caseless_khaki_mag : 100Rnd_65x39_caseless_mag
{
displayName = "6.5x39 60Rnd Reload Tracer (Red) Khaki Mag";
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_65x39_caseless_RRT_khaki_mag_CA.paa";
};

// 30Rnd
class 30Rnd_65x39_caseless_black_mag : 30Rnd_65x39_caseless_mag 
{
displayName = "6.5x39 30Rnd Reload Tracer (Red) Mag";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_RRT4_black_mag_CA.paa";
};
class 30Rnd_65x39_caseless_khaki_mag : 30Rnd_65x39_caseless_mag
{
displayName = "6.5x39 30Rnd Reload Tracer (Red) Khaki Mag";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_RRT_khaki_mag_CA.paa";
};

// MX 6.5 Tracer Magazines. Changing: Name. Description

// 100Rnd
class 100Rnd_65x39_caseless_mag_Tracer : 100Rnd_65x39_caseless_mag
{
descriptionShort = "Calibre: 6.5x39mm<br />Rounds: 60<br />Tracers: Every Round<br />Used in: ACR Entry Carbine/Carbine/SPR/HB";	
displayName = "6.5x39 60Rnd Tracer (Red) Sand Mag";
displayNameShort = "Tracer (Red)";
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_65x39_caseless_RT_mag_CA.paa";
};
class 100Rnd_65x39_caseless_black_mag_tracer : 100Rnd_65x39_caseless_mag_Tracer
{
displayName = "6.5x39 60Rnd Tracer (Red) Mag";	
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_65x39_caseless_RT_black_mag_CA.paa";
};
class 100Rnd_65x39_caseless_khaki_mag_tracer : 100Rnd_65x39_caseless_mag_Tracer
{
displayName = "6.5x39 60Rnd Tracer (Red) Khaki Mag";
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_65x39_caseless_RT_khaki_mag_CA.paa";
};

// 30Rnd
class 30Rnd_65x39_caseless_mag_Tracer : 30Rnd_65x39_caseless_mag
{
descriptionShort = "Calibre: 6.5x39mm<br />Rounds: 30<br />Tracers: Every Round<br />Used in: ACR Entry Carbine/Carbine/SPR/HB";	
displayName = "6.5x39 30Rnd Tracer (Red) Sand Mag";
displayNameShort = "Tracer (Red)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_RT_mag_CA.paa";
};
class 30Rnd_65x39_caseless_black_mag_Tracer : 30Rnd_65x39_caseless_mag_Tracer
{
displayName = "6.5x39 30Rnd Tracer (Red) Mag";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_RT_black_mag_CA.paa";
};	
class 30Rnd_65x39_caseless_khaki_mag_Tracer : 30Rnd_65x39_caseless_mag_Tracer
{
displayName = "6.5x39 30Rnd Tracer (Red) Khaki Mag";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_RT_khaki_mag_CA.paa";
};

// Creating 6.5 tracerless ACR Magazines

// 100Rnd
class 100Rnd_65x39_NT_mag : 100Rnd_65x39_caseless_mag
{
descriptionShort = "Calibre: 6.5x39mm<br />Rounds: 60<br />Tracers: None<br />Used in: ACR Entry Carbine/Carbine/SPR/HB";
displayName = "6.5x39 60Rnd Sand Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\a3\weapons_f\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_mag_ca.paa";
};	
class 100Rnd_65x39_NT_black_mag : 100Rnd_65x39_NT_mag
{
displayName = "6.5x39 60Rnd Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"};
picture = "\a3\weapons_f\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_ca.paa";
};
class 100Rnd_65x39_NT_khaki_mag : 100Rnd_65x39_NT_mag
{
displayName = "6.5x39 60Rnd Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"};
picture = "\a3\weapons_f\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_khaki_mag_ca.paa";
};

// 30Rnd
class 30Rnd_65x39_NT_mag : 30Rnd_65x39_caseless_mag
{
descriptionShort = "Calibre: 6.5x39mm<br />Rounds: 30<br />Tracers: None<br />Used in: ACR Entry Carbine/Carbine/SPR/HB";
displayName = "6.5x39 30Rnd Sand Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_mag_ca.paa";
};	
class 30Rnd_65x39_NT_black_mag : 30Rnd_65x39_NT_mag
{
displayName = "6.5x39 30Rnd Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
picture = "\a3\weapons_f\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_ca.paa";
};
class 30Rnd_65x39_NT_khaki_mag : 30Rnd_65x39_NT_mag
{
displayName = "6.5x39 30Rnd Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
picture = "\a3\weapons_f\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_ca.paa";
};

// Creating 6.5 Tracer Every 4 ACR Magazines

// 100Rnd
class 100Rnd_65x39_T4_mag : 100Rnd_65x39_caseless_mag
{
descriptionShort = "Calibre: 6.5x39mm<br />Rounds: 60<br />Tracers: Every 4th Round<br />Used in: ACR Entry Carbine/Carbine/SPR/HB";
displayName = "6.5x39 60Rnd Tracer Every 4 (Red) Sand Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_65x39_caseless_RT4_mag_CA.paa";
tracersEvery = 4;
};	
class 100Rnd_65x39_T4_black_mag : 100Rnd_65x39_T4_mag
{
displayName = "6.5x39 60Rnd Tracer Every 4 (Red) Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_65x39_caseless_RT4_black_mag_CA.paa";
};
class 100Rnd_65x39_T4_khaki_mag : 100Rnd_65x39_T4_mag
{
displayName = "6.5x39 60Rnd Tracer Every 4 (Red) Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_65x39_caseless_RT4_khaki_mag_CA.paa";
};

// 30Rnd
class 30Rnd_65x39_T4_mag : 30Rnd_65x39_caseless_mag
{
descriptionShort = "Calibre: 6.5x39mm<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: ACR Entry Carbine/Carbine/SPR/HB";
displayName = "6.5x39 30Rnd Tracer Every 4 (Red) Sand Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_RT4_mag_CA.paa";
tracersEvery = 4;
};	
class 30Rnd_65x39_T4_black_mag : 30Rnd_65x39_T4_mag
{
displayName = "6.5x39 30Rnd Tracer Every 4 (Red) Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_RT4_black_mag_CA.paa";
};
class 30Rnd_65x39_T4_khaki_mag : 30Rnd_65x39_T4_mag
{
displayName = "6.5x39 30Rnd Tracer Every 4 (Red) Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_RT4_khaki_mag_CA.paa";
};

// Creating 6.5 IR-DIM Tracer Magazines
// 100Rnd
class 100Rnd_65x39_IRT_Mag : 100Rnd_65x39_caseless_mag_Tracer
{
ammo = "B_65x39_Case_IR";
displayName = "6.5x39 60Rnd Tracer (IR-DIM) Sand Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_65x39_caseless_IRT_mag_CA.paa";
};	
class 100Rnd_65x39_IRT_Black_Mag : 100Rnd_65x39_IRT_Mag
{
displayName = "6.5x39 60Rnd Tracer (IR-DIM) Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_65x39_caseless_IRT_black_mag_CA.paa";
};
class 100Rnd_65x39_IRT_Khaki_Mag : 100Rnd_65x39_IRT_Mag
{
displayName = "6.5x39 60Rnd Tracer (IR-DIM) Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_65x39_caseless_IRT_khaki_mag_CA.paa";
};

// 30Rnd
class 30Rnd_65x39_IRT_Mag : 30Rnd_65x39_caseless_mag_Tracer
{
ammo = "B_65x39_Case_IR";	
displayName = "6.5x39 30Rnd Tracer (IR-DIM) Sand Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_IRT_mag_CA.paa";
};	
class 30Rnd_65x39_IRT_Black_Mag : 30Rnd_65x39_IRT_Mag
{
displayName = "6.5x39 30Rnd Tracer (IR-DIM) Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_IRT_black_mag_CA.paa";
};
class 30Rnd_65x39_IRT_Khaki_Mag : 30Rnd_65x39_IRT_Mag
{
displayName = "6.5x39 30Rnd Tracer (IR-DIM) Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_IRT_khaki_mag_CA.paa";
};

// IR-DIM T4
// 100Rnd
class 100Rnd_65x39_IRT4_Mag : 100Rnd_65x39_T4_mag
{
ammo = "B_65x39_Case_IR";
displayName = "6.5x39 60Rnd Tracer Every 4 (IR-DIM) Sand Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_65x39_caseless_IRT4_mag_CA.paa";
};	
class 100Rnd_65x39_IRT4_Black_Mag : 100Rnd_65x39_IRT4_Mag
{
displayName = "6.5x39 60Rnd Tracer Every 4 (IR-DIM) Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_65x39_caseless_IRT4_black_mag_CA.paa";
};
class 100Rnd_65x39_IRT4_Khaki_Mag : 100Rnd_65x39_IRT4_Mag
{
displayName = "6.5x39 60Rnd Tracer Every 4 (IR-DIM) Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_65x39_caseless_IRT4_khaki_mag_CA.paa";
};

// 30Rnd
class 30Rnd_65x39_IRT4_Mag : 30Rnd_65x39_T4_mag
{
ammo = "B_65x39_Case_IR";	
displayName = "6.5x39 30Rnd Tracer Every 4 (IR-DIM) Sand Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_IRT4_mag_CA.paa";
};	
class 30Rnd_65x39_IRT4_Black_Mag : 30Rnd_65x39_IRT4_Mag
{
displayName = "6.5x39 30Rnd Tracer Every 4 (IR-DIM) Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_IRT4_black_mag_CA.paa";
};
class 30Rnd_65x39_IRT4_Khaki_Mag : 30Rnd_65x39_IRT4_Mag
{
displayName = "6.5x39 30Rnd Tracer Every 4 (IR-DIM) Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_65x39_caseless_IRT4_khaki_mag_CA.paa";
};

// 5.56 30Rnd Mags. Changing: Name. Description.

// Black
class 30Rnd_556x45_Stanag : CA_Magazine
{
ammo = "B_556x45_Ball_Tracer_Yellow";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";	
displayName = "5.56x45 30Rnd Reload Tracer (Yellow) Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 913.486;
mass = 13.9851;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_YRT_Stanag_ca.paa";
};
class 30Rnd_556x45_Stanag_green : 30Rnd_556x45_Stanag
{
displayName = "5.56x45 30Rnd Reload Tracer (Green) Mag";
displaynameshort = "Rel. Tr. (Green)";
initSpeed = 913.486;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_GRT_Stanag_ca.paa";
};
class 30Rnd_556x45_Stanag_red : 30Rnd_556x45_Stanag
{
displayName = "5.56x45 30Rnd Reload Tracer (Red) Mag";
displaynameshort = "Rel. Tr. (Red)";
initSpeed = 913.486;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_RRT_Stanag_ca.paa";
};
class 30Rnd_556x45_Stanag_Tracer_Yellow : 30Rnd_556x45_Stanag
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 30Rnd Tracer (Yellow) Mag";
displayNameShort = "Tracer (Yellow)";
initSpeed = 913.486;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_YT_Stanag_ca.paa";
};
class 30Rnd_556x45_Stanag_Tracer_Green : 30Rnd_556x45_Stanag
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 30Rnd Tracer (Green) Mag";
displayNameShort = "Tracer (Green)";
initSpeed = 913.486;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_GT_Stanag_ca.paa";
};
class 30Rnd_556x45_Stanag_Tracer_Red : 30Rnd_556x45_Stanag
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";	
displayName = "5.56x45 30Rnd Tracer (Red) Mag";
displayNameShort = "Tracer (Red)";
initSpeed = 913.486;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_RT_Stanag_ca.paa";
};

// Sand
class 30Rnd_556x45_Stanag_Sand : 30Rnd_556x45_Stanag
{
displayName = "5.56x45 30Rnd Reload Tracer (Yellow) Sand Mag";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_YRT_Stanag_Sand_ca.paa";
};
class 30Rnd_556x45_Stanag_Sand_green : 30Rnd_556x45_Stanag_Sand
{
displayName = "5.56x45 30Rnd Reload Tracer (Green) Sand Mag";
displaynameshort = "Rel. Tr. (Green)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_GRT_Stanag_Sand_ca.paa";
};
class 30Rnd_556x45_Stanag_Sand_red : 30Rnd_556x45_Stanag_Sand
{
displayName = "5.56x45 30Rnd Reload Tracer (Red) Sand Mag";
displaynameshort = "Rel. Tr. (Red)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_RRT_Stanag_Sand_ca.paa";
};
class 30Rnd_556x45_Stanag_Sand_Tracer_Red : 30Rnd_556x45_Stanag_Sand 
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";	
displayName = "5.56x45 30Rnd Tracer (Red) Sand Mag";
displayNameShort = "Tracer (Red)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_RT_Stanag_Sand_ca.paa";
};
class 30Rnd_556x45_Stanag_Sand_Tracer_Green : 30Rnd_556x45_Stanag_Sand_Tracer_Red 
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";	
displayName = "5.56x45 30Rnd Tracer (Green) Sand Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_GT_Stanag_Sand_ca.paa";
};
class 30Rnd_556x45_Stanag_Sand_Tracer_Yellow : 30Rnd_556x45_Stanag_Sand_Tracer_Red 
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";	
displayName = "5.56x45 30Rnd Tracer (Yellow) Sand Mag";
displayNameShort = "Tracer (Yellow)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_YT_Stanag_Sand_ca.paa";
};

// Creating 30Rnd 5.56 Tracer Every 4 and tracerless Magazines

// Black
class 30Rnd_556x45_Stanag_T4_Red : 30Rnd_556x45_Stanag_Tracer_Red
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 30Rnd Tracer Every 4 (Red) Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
tracersEvery = 4;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_RT4_Stanag_ca.paa";
};
class 30Rnd_556x45_Stanag_T4_Green : 30Rnd_556x45_Stanag_T4_Red
{
ammo = "B_556x45_Ball_Tracer_Green";	
displayName = "5.56x45 30Rnd Tracer Every 4 (Green) Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_GT4_Stanag_ca.paa";
};
class 30Rnd_556x45_Stanag_T4_Yellow : 30Rnd_556x45_Stanag_T4_Red
{
ammo = "B_556x45_Ball_Tracer_Yellow";	
displayName = "5.56x45 30Rnd Tracer Every 4 (Yellow) Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_YT4_Stanag_ca.paa";
};
class 30Rnd_556x45_Stanag_NT : 30Rnd_556x45_Stanag
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: None<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 30Rnd Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_CA.paa";
};

// Sand
class 30Rnd_556x45_Stanag_Sand_T4_Red : 30Rnd_556x45_Stanag_Sand_Tracer_Red
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 30Rnd Tracer Every 4 (Red) Sand Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
tracersEvery = 4;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_RT4_Stanag_Sand_ca.paa";
};
class 30Rnd_556x45_Stanag_Sand_T4_Green : 30Rnd_556x45_Stanag_Sand_T4_Red
{
ammo = "B_556x45_Ball_Tracer_Green";	
displayName = "5.56x45 30Rnd Tracer Every 4 (Green) Sand Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_GT4_Stanag_Sand_ca.paa";
};
class 30Rnd_556x45_Stanag_Sand_T4_Yellow : 30Rnd_556x45_Stanag_Sand_T4_Red
{
ammo = "B_556x45_Ball_Tracer_Yellow";	
displayName = "5.56x45 30Rnd Tracer Every 4 (Yellow) Sand Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_YT4_Stanag_Sand_ca.paa";
};
class 30Rnd_556x45_Stanag_Sand_NT : 30Rnd_556x45_Stanag_Sand
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: None<br />Used in: FS/F2000, HK416 A5 11''/14.5'', MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 30Rnd Sand Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_CA.paa";
};

// 5.56 150Rnd Mags. Changing: Name. Description. Ammocount from 150 to 100
class 150Rnd_556x45_Drum_Mag_F : CA_Magazine
{
count = 100;
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 100<br />Tracers: Last 4 Rounds<br />Used in: HK416 A5 11''/14.5''";	
displayName = "5.56x45 100Rnd Reload Tracer (Red) Mag";
displaynameshort = "Rel. Tr. (Red)";
initSpeed = 913.486;
mass = 46.4333;
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_RRT_Drum_Mag_F_CA.paa";
};
class 150Rnd_556x45_Drum_Mag_Tracer_F : 150Rnd_556x45_Drum_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 100<br />Tracers: Every Round<br />Used in: HK416 A5 11''/14.5''";
displayName = "5.56x45 100Rnd Tracer (Red) Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 100;
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_RT_Drum_Mag_F_CA.paa";
};
class 150Rnd_556x45_Drum_Green_Mag_F : 150Rnd_556x45_Drum_Mag_F
{
displayName = "5.56x45 100Rnd Reload Tracer (Red) Green Mag";
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_RRT_Drum_Green_Mag_F_CA.paa";
};
class 150Rnd_556x45_Drum_Green_Mag_Tracer_F: 150Rnd_556x45_Drum_Green_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 100<br />Tracers: Every Round<br />Used in: HK416 A5 11''/14.5''";
displayName = "5.56x45 100Rnd Tracer (Red) Green Mag";	
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 100;
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_RT_Drum_Green_Mag_F_CA.paa";
};
class 150Rnd_556x45_Drum_Sand_Mag_F : 150Rnd_556x45_Drum_Mag_F
{
displayName = "5.56x45 100Rnd Reload Tracer (Red) Sand Mag";
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_RRT_Drum_Sand_Mag_F_CA.paa";
};
class 150Rnd_556x45_Drum_Sand_Mag_Tracer_F : 150Rnd_556x45_Drum_Sand_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 100<br />Tracers: Every Round<br />Used in: HK416 A5 11''/14.5''";
displayName = "5.56x45 100Rnd Tracer (Red) Sand Mag";
displayNameShort = "Tracer (Red)";
lastRoundsTracer = 100;
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_RT_Drum_Sand_Mag_F_CA.paa";
};

// Creating 5.56 100Rnd Tracer Every 4 and tracerless Magazines
class 150Rnd_556x45_Drum_Mag_T4_F : 150Rnd_556x45_Drum_Mag_Tracer_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 100<br />Tracers: Every 4th Round<br />Used in: HK416 A5 11''/14.5''";
displayName = "5.56x45 100Rnd Tracer Every 4 (Red) Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_RT4_Drum_Mag_F_CA.paa";
tracersEvery = 4;
};
class 150Rnd_556x45_Drum_Green_Mag_T4_F : 150Rnd_556x45_Drum_Green_Mag_Tracer_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 100<br />Tracers: Every 4th Round<br />Used in: HK416 A5 11''/14.5''";
displayName = "5.56x45 100Rnd Tracer Every 4 (Red) Green Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_RT4_Drum_Green_Mag_F_CA.paa";
tracersEvery = 4;
};
class 150Rnd_556x45_Drum_Sand_Mag_T4_F : 150Rnd_556x45_Drum_Sand_Mag_Tracer_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 100<br />Tracers: Every 4th Round<br />Used in: HK416 A5 11''/14.5''";
displayName = "5.56x45 100Rnd Tracer Every 4 (Red) Sand Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_RT4_Drum_Sand_Mag_F_CA.paa";
tracersEvery = 4;	
};
class 150Rnd_556x45_Drum_Mag_NT_F : 150Rnd_556x45_Drum_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 100<br />Tracers: None<br />Used in: HK416 A5 11''/14.5''";
displayName = "5.56x45 100Rnd Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_150Rnd_556x45_Drum_Mag_F_ca.paa";
};
class 150Rnd_556x45_Drum_Green_Mag_NT_F : 150Rnd_556x45_Drum_Green_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 100<br />Tracers: None<br />Used in: HK416 A5 11''/14.5''";
displayName = "5.56x45 100Rnd Green Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_150Rnd_556x45_Drum_Green_Mag_F_CA.paa";
};
class 150Rnd_556x45_Drum_Sand_Mag_NT_F : 150Rnd_556x45_Drum_Sand_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 100<br />Tracers: None<br />Used in: HK416 A5 11''/14.5''";
displayName = "5.56x45 100Rnd Sand Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_150Rnd_556x45_Drum_Sand_Mag_F_ca.paa";
};

// Promet 30Rnd Mags. Changing: Name. Description. Model to hidden 5.56 one
class 30Rnd_65x39_caseless_msbs_mag : 30Rnd_65x39_caseless_mag
{
ammo = "B_556x45_Ball_Tracer_Red";
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 30Rnd Reload Tracer (Red) PMAG Mag";
displaynameshort = "Rel. Tr. (Red)";
initSpeed = 913.486;
modelSpecial = "a3\weapons_f_enoch\magazineproxies\mag_556x45_msbs_30rnd.p3d";
mass = 11.6261;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_RRT_PMAG_ca.paa";
};
class 30Rnd_65x39_caseless_msbs_mag_Tracer : 30Rnd_65x39_caseless_msbs_mag
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every Round<br />Used in: MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 30Rnd Tracer (Red) PMAG Mag";
displayNameShort = "Tracer (Red)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_RT_PMAG_ca.paa";
};

// Creating 5.56 30Rnd Tracer Every 4 and tracerless PMAG Mags
class 30Rnd_65x39_caseless_msbs_mag_T4 : 30Rnd_65x39_caseless_msbs_mag_Tracer
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 30Rnd Tracer Every 4 (Red) PMAG Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
tracersEvery = 4;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_RT4_PMAG_ca.paa";
};
class 30Rnd_65x39_caseless_msbs_mag_NT : 30Rnd_65x39_caseless_msbs_mag
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: None<br />Used in: MSBS Grot B16/B26, C/G/TAR-21";
displayName = "5.56x45 30Rnd PMAG Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_NT_PMAG_ca.paa";
};

// Creating AK-19 5.56 Magazines
class 30Rnd_556x45_AK_Mag_RT_F : 30Rnd_556x45_Stanag
{
ammo = "B_556x45_Ball_Tracer_Green"; 
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: AK-19, WASR-3";
displayName = "5.56x45 30Rnd Reload Tracer (Green) AK Mag";
displaynameshort = "Rel. Tr. (Green)";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"A3RO_A3\Textures\magazine_ak19_co.paa"};
mass = 12.0671;
modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_545x39_ak74_30rnd.p3d";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_AK_Mag_GRT_F_CA.paa";
};
class 30Rnd_556x45_AK_Mag_Tracer_F : 30Rnd_556x45_AK_Mag_RT_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every Round<br />Used in: AK-19, WASR-3";
displayName = "5.56x45 30Rnd Tracer (Green) AK Mag";
displayNameShort = "Tracer (Green)";
lastRoundsTracer = 0;
tracersEvery = 1;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_AK_Mag_GT_F_CA.paa";
};
class 30Rnd_556x45_AK_Mag_T4_F : 30Rnd_556x45_AK_Mag_Tracer_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: AK-19, WASR-3";
displayName = "5.56x45 30Rnd Tracer Every 4 (Green) AK Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_AK_Mag_GT4_F_CA.paa";
tracersEvery = 4;	
};
class 30Rnd_556x45_AK_Mag_NT_F : 30Rnd_556x45_AK_Mag_RT_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 30<br />Tracers: None<br />Used in: AK-19, WASR-3";
displayName = "5.56x45 30Rnd AK Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_AK_Mag_F_CA.paa";
};

// Creating Stanag .223 Remington Magazines
// 30 Rnds 
// Black
class 30Rnd_223REM_Mag_RT_F : 30Rnd_556x45_Stanag
{
ammo = "B_223REM_Ball"; 
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 30Rnd Reload Tracer (Yellow) Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 1007.669;
mass = 13.6422;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_YRT_Stanag_CA.paa";
};
class 30Rnd_223REM_Mag_Tracer_F : 30Rnd_223REM_Mag_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Every Round<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 30Rnd Tracer (Yellow) Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
tracersEvery = 1;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_YT_Stanag_CA.paa";
};
class 30Rnd_223REM_Mag_T4_F : 30Rnd_223REM_Mag_Tracer_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 30Rnd Tracer Every 4 (Yellow) Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
tracersEvery = 4;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_YT4_Stanag_CA.paa";
};
class 30Rnd_223REM_Mag_NT_F : 30Rnd_223REM_Mag_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: None<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 30Rnd Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_Improved_Stanag_ca.paa";
};
// Sand
class 30Rnd_223REM_Mag_Sand_RT_F : 30Rnd_556x45_Stanag_Sand
{
ammo = "B_223REM_Ball"; 
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 30Rnd Reload Tracer (Yellow) Sand Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 1007.669;
mass = 13.6422;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_YRT_Stanag_Sand_ca.paa";
};
class 30Rnd_223REM_Mag_Sand_Tracer_F : 30Rnd_223REM_Mag_Sand_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Every Round<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 30Rnd Tracer (Yellow) Sand Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
tracersEvery = 1;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_YT_Stanag_Sand_ca.paa";
};
class 30Rnd_223REM_Mag_Sand_T4_F : 30Rnd_223REM_Mag_Sand_Tracer_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 30Rnd Tracer Every 4 (Yellow) Sand Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
tracersEvery = 4;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_YT4_Stanag_Sand_ca.paa";
};
class 30Rnd_223REM_Mag_Sand_NT_F : 30Rnd_223REM_Mag_Sand_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: None<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 30Rnd Sand Mag";
displayNameShort = "";  
lastRoundsTracer = 0;
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_CA.paa";
};

// 100Rnds
// Black
class 100Rnd_223REM_Mag_RT_F : 150Rnd_556x45_Drum_Mag_F
{
ammo = "B_223REM_Ball"; 
descriptionShort = "Calibre: .223 Remington<br />Rounds: 100<br />Tracers: Last 4 Rounds<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 100Rnd Reload Tracer (Yellow) Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 1007.669;
mass = 45.2904;
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_YRT_Drum_Mag_F_CA.paa";
};
class 100Rnd_223REM_Mag_Tracer_F : 100Rnd_223REM_Mag_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 100<br />Tracers: Every Round<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 100Rnd Tracer (Yellow) Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_YT_Drum_Mag_F_CA.paa";
tracersEvery = 1;
};
class 100Rnd_223REM_Mag_T4_F : 100Rnd_223REM_Mag_Tracer_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 100<br />Tracers: Every 4th Round<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 100Rnd Tracer Every 4 (Yellow) Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_YT4_Drum_Mag_F_CA.paa";
tracersEvery = 4;	
};
class 100Rnd_223REM_Mag_NT_F : 100Rnd_223REM_Mag_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 100<br />Tracers: None<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 100Rnd Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_150Rnd_556x45_Drum_Mag_F_ca.paa";
};
// Sand
class 100Rnd_223REM_Mag_Sand_RT_F : 150Rnd_556x45_Drum_Sand_Mag_F
{
ammo = "B_223REM_Ball"; 
descriptionShort = "Calibre: .223 Remington<br />Rounds: 100<br />Tracers: Last 4 Rounds<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 100Rnd Reload Tracer (Yellow) Sand Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 1007.669;
mass = 45.2904;
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_YRT_Drum_Sand_Mag_F_CA.paa";
};
class 100Rnd_223REM_Mag_Sand_Tracer_F : 100Rnd_223REM_Mag_Sand_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 100<br />Tracers: Every Round<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 100Rnd Tracer (Yellow) Sand Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_YT_Drum_Sand_Mag_F_CA.paa";
tracersEvery = 1;
};
class 100Rnd_223REM_Mag_Sand_T4_F : 100Rnd_223REM_Mag_Sand_Tracer_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 100<br />Tracers: Every 4th Round<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 100Rnd Tracer Every 4 (Yellow) Sand Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_YT4_Drum_Sand_Mag_F_CA.paa";
tracersEvery = 4;	
};
class 100Rnd_223REM_Mag_Sand_NT_F : 100Rnd_223REM_Mag_Sand_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 100<br />Tracers: None<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 100Rnd Sand Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_150Rnd_556x45_Drum_Sand_Mag_F_CA.paa";
};
// Green
class 100Rnd_223REM_Mag_Green_RT_F : 150Rnd_556x45_Drum_Green_Mag_F
{
ammo = "B_223REM_Ball"; 
descriptionShort = "Calibre: .223 Remington<br />Rounds: 100<br />Tracers: Last 4 Rounds<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 100Rnd Reload Tracer (Yellow) Green Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 1007.669;
mass = 45.2904;
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_YRT_Drum_Green_Mag_F_CA.paa";
};
class 100Rnd_223REM_Mag_Green_Tracer_F : 100Rnd_223REM_Mag_Green_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 100<br />Tracers: Every Round<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 100Rnd Tracer (Yellow) Green Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_YT_Drum_Green_Mag_F_CA.paa";
tracersEvery = 1;
};
class 100Rnd_223REM_Mag_Green_T4_F : 100Rnd_223REM_Mag_Green_Tracer_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 100<br />Tracers: Every 4th Round<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 100Rnd Tracer Every 4 (Yellow) Green Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_YT4_Drum_Green_Mag_F_CA.paa";
tracersEvery = 4;
};
class 100Rnd_223REM_Mag_Green_NT_F : 100Rnd_223REM_Mag_Green_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 100<br />Tracers: None<br />Used in: MR223 11'', MR223 14.5''";
displayName = ".223 100Rnd Green Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_150Rnd_556x45_Drum_Green_Mag_F_CA.paa";
};

// .223 Remington 30Rnd PMAG Mags.
class 30Rnd_223REM_PMAG_Mag_RT_F : 30Rnd_223REM_Mag_RT_F
{
ammo = "B_223REM_Ball"; 
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: MSBS Grot B16/B26, C/G/TAR-21";
displayName = ".223 30Rnd Reload Tracer (Yellow) PMAG Mag";
displaynameshort = "Rel. Tr. (Yellow)";
DLC = "Enoch";
mass = 11.2833;
modelSpecial = "a3\weapons_f_enoch\magazineproxies\mag_556x45_msbs_30rnd.p3d";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_YRT_PMAG_ca.paa";
};
class 30Rnd_223REM_PMAG_Mag_Tracer_F : 30Rnd_223REM_PMAG_Mag_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Every Round<br />Used in: MSBS Grot B16/B26, C/G/TAR-21";
displayName = ".223 30Rnd Tracer (Yellow) PMAG Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
tracersEvery = 1;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_YT_PMAG_ca.paa";
};
class 30Rnd_223REM_PMAG_Mag_T4_F : 30Rnd_223REM_PMAG_Mag_Tracer_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: MSBS Grot B16/B26, C/G/TAR-21";
displayName = ".223 30Rnd Tracer Every 4 (Yellow) PMAG Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
lastRoundsTracer = 0;
tracersEvery = 4;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_YT4_PMAG_ca.paa";
};
class 30Rnd_223REM_PMAG_Mag_NT_F : 30Rnd_223REM_PMAG_Mag_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: None<br />Used in: MSBS Grot B16/B26, C/G/TAR-21";
displayName = ".223 30Rnd PMAG Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_NT_PMAG_ca.paa";
};

// Creating TR3 .223 Remington Magazines
class 30Rnd_223REM_AK_Mag_RT_F : 30Rnd_223REM_Mag_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: TR3 .223, WASR-3, AK-19";
displayName = ".223 30Rnd Reload Tracer (Yellow) AK Mag";
displaynameshort = "Rel. Tr. (Yellow)";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"A3RO_A3\Textures\magazine_ak19_co.paa"};
modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_545x39_ak74_30rnd.p3d";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_AK_Mag_YRT_F_CA.paa";
};
class 30Rnd_223REM_AK_Mag_Tracer_F : 30Rnd_223REM_AK_Mag_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Every Round<br />Used in: TR3 .223, WASR-3, AK-19";
displayName = ".223 30Rnd Tracer (Yellow) AK Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
tracersEvery = 1;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_AK_Mag_YT_F_CA.paa";
};
class 30Rnd_223REM_AK_Mag_T4_F : 30Rnd_223REM_AK_Mag_Tracer_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: TR3 .223, WASR-3, AK-19";
displayName = ".223 30Rnd Tracer Every 4 (Yellow) AK Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
tracersEvery = 4;	
};
class 30Rnd_223REM_AK_Mag_NT_F : 30Rnd_223REM_AK_Mag_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 30<br />Tracers: None<br />Used in: TR3 .223, WASR-3, AK-19";
displayName = ".223 30Rnd AK Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_AK_Mag_F_CA.paa";
};

// Creating 20Rnd SIG Mags
class 20Rnd_223REM_Mag_RT_F : 30Rnd_223REM_Mag_RT_F
{
ammo = "B_223REM_Ball"; 
count = 20;
descriptionShort = "Calibre: .223 Remington<br />Rounds: 20<br />Tracers: Last 4 Rounds<br />Used in: SIG 556 DMR";
displayName = ".223 20Rnd Reload Tracer (Yellow) Mag";
displaynameshort = "Rel. Tr. (Yellow)";
mass = 7.8675;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_556x45_YRT_SIG_Mag_CA.paa";
};
class 20Rnd_223REM_Mag_Tracer_F : 20Rnd_223REM_Mag_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 20<br />Tracers: Every Round<br />Used in: SIG 556 DMR";
displayName = ".223 20Rnd Tracer (Yellow) Mag";
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_556x45_YT_SIG_Mag_CA.paa";
tracersEvery = 1;
};
class 20Rnd_223REM_Mag_T4_F : 20Rnd_223REM_Mag_Tracer_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 20<br />Tracers: Every 4th Round<br />Used in: SIG 556 DMR";
displayName = ".223 20Rnd Tracer Every 4 (Yellow) Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_556x45_YT4_SIG_Mag_CA.paa";
tracersEvery = 4;
};
class 20Rnd_223REM_Mag_NT_F : 20Rnd_223REM_Mag_RT_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 20<br />Tracers: None<br />Used in: SIG 556 DMR";
displayName = ".223 20Rnd Mag";
displayNameShort = "";
lastRoundsTracer = 0;
picture = "\A3RO_A3\Textures\UI\icon_20Rnd_556x45_SIG_Mag_CA.paa";
};

// IR-DIM
// 5.56
class 30Rnd_556x45_AK_Mag_IRT_F : 30Rnd_556x45_AK_Mag_Tracer_F
{
ammo = "B_556x45_Ball_IR"; 
displayName = "5.56x45 30Rnd Tracer (IR-DIM) AK Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_AK_Mag_IRT_F_CA.paa";
};
class 30Rnd_556x45_Stanag_IRT_F: 30Rnd_556x45_Stanag_Tracer_Yellow
{
ammo = "B_556x45_Ball_IR"; 	
displayName = "5.56x45 30Rnd Tracer (IR-DIM) Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_IRT_Stanag_CA.paa";
};
class 30Rnd_556x45_Stanag_Sand_IRT_F : 30Rnd_556x45_Stanag_Sand_Tracer_Yellow
{
ammo = "B_556x45_Ball_IR"; 	
displayName = "5.56x45 30Rnd Tracer (IR-DIM) Sand Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_IRT_Stanag_Sand_CA.paa";
};
class 30Rnd_556x45_Stanag_PMAG_IRT_F : 30Rnd_65x39_caseless_msbs_mag_Tracer
{
ammo = "B_556x45_Ball_IR";	
displayName = "5.56x45 30Rnd Tracer (IR-DIM) PMAG Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_IRT_PMAG_CA.paa";
};
class 100Rnd_556x45_Drum_Mag_IRT_F : 150Rnd_556x45_Drum_Mag_Tracer_F
{
ammo = "B_556x45_Ball_IR"; 	
displayName = "5.56x45 100Rnd Tracer (IR-DIM) Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_IRT_Drum_Mag_F_CA.paa";
};
class 100Rnd_556x45_Drum_Green_Mag_IRT_F: 150Rnd_556x45_Drum_Green_Mag_Tracer_F
{
ammo = "B_556x45_Ball_IR"; 
displayName = "5.56x45 100Rnd Tracer (IR-DIM) Green Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_IRT_Drum_Green_Mag_F_CA.paa";
};
class 100Rnd_556x45_Drum_Sand_Mag_IRT_F : 150Rnd_556x45_Drum_Sand_Mag_Tracer_F
{
ammo = "B_556x45_Ball_IR"; 	
displayName = "5.56x45 100Rnd Tracer (IR-DIM) Sand Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_IRT_Drum_Sand_Mag_F_CA.paa";
};

// IR-DIM T4
// 5.56
class 30Rnd_556x45_AK_Mag_IRT4_F : 30Rnd_556x45_AK_Mag_T4_F
{
ammo = "B_556x45_Ball_IR"; 
displayName = "5.56x45 30Rnd Tracer Every 4 (IR-DIM) AK Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_AK_Mag_IRT4_F_CA.paa";
};
class 30Rnd_556x45_Stanag_IRT4_F: 30Rnd_556x45_Stanag_T4_Yellow
{
ammo = "B_556x45_Ball_IR"; 	
displayName = "5.56x45 30Rnd Tracer Every 4 (IR-DIM) Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_IRT4_Stanag_CA.paa";
};
class 30Rnd_556x45_Stanag_Sand_IRT4_F : 30Rnd_556x45_Stanag_Sand_T4_Yellow
{
ammo = "B_556x45_Ball_IR"; 	
displayName = "5.56x45 30Rnd Tracer Every 4 (IR-DIM) Sand Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_IRT4_Stanag_Sand_CA.paa";
};
class 30Rnd_556x45_Stanag_PMAG_IRT4_F : 30Rnd_65x39_caseless_msbs_mag_T4
{
ammo = "B_556x45_Ball_IR";	
displayName = "5.56x45 30Rnd Tracer Every 4 (IR-DIM) PMAG Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_30Rnd_556x45_IRT4_PMAG_CA.paa";
};
class 100Rnd_556x45_Drum_Mag_IRT4_F : 150Rnd_556x45_Drum_Mag_T4_F
{
ammo = "B_556x45_Ball_IR"; 	
displayName = "5.56x45 100Rnd Tracer Every 4 (IR-DIM) Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_IRT4_Drum_Mag_F_CA.paa";
};
class 100Rnd_556x45_Drum_Green_Mag_IRT4_F: 150Rnd_556x45_Drum_Green_Mag_T4_F
{
ammo = "B_556x45_Ball_IR"; 
displayName = "5.56x45 100Rnd Tracer Every 4 (IR-DIM) Green Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_IRT4_Drum_Green_Mag_F_CA.paa";
};
class 100Rnd_556x45_Drum_Sand_Mag_IRT4_F : 150Rnd_556x45_Drum_Sand_Mag_T4_F
{
ammo = "B_556x45_Ball_IR"; 	
displayName = "5.56x45 100Rnd Tracer Every 4 (IR-DIM) Sand Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_A3\Textures\UI\icon_100Rnd_556x45_IRT_Drum_Sand_Mag_F_CA.paa";
};

// Hiding UW Mag. SDAR isnt real it cant hurt you. No Deprecation Notice as it works as intended in SCUBAR and nowhere outside.
class 20Rnd_556x45_UW_mag : 30Rnd_556x45_Stanag
{
scope = 1;
};