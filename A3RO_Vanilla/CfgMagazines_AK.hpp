// AKM 30Rnd Mags. Changing: Description
class 30Rnd_762x39_Mag_F : CA_Magazine
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: AK-15, AK-15C, AKM";
displayName = "7.62x39 30Rnd Reload Tracer (Yellow) AKM Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 718;
mass = 19.3098;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_762x39_YRT_Mag_F_ca.paa";
};
class 30Rnd_762x39_Mag_Green_F : 30Rnd_762x39_Mag_F
{
displayName = "7.62x39 30Rnd Reload Tracer (Green) AKM Mag";
displaynameshort = "Rel. Tr. (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_762x39_GRT_Mag_F_ca.paa";
};
class 30Rnd_762x39_Mag_Tracer_F : 30Rnd_762x39_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 30<br />Tracers: Every Round<br />Used in: AK-15, AK-15C, AKM";
displayName = "7.62x39 30Rnd Tracer (Yellow) AKM Mag";
displayNameShort = "Tracer (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_762x39_YT_Mag_F_ca.paa";
};
class 30Rnd_762x39_Mag_Tracer_Green_F : 30Rnd_762x39_Mag_Tracer_F
{
displayName = "7.62x39 30Rnd Tracer (Green) AKM Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_762x39_GT_Mag_F_ca.paa";
};

// AKM 75Rnd Mags. Changing: Name. Description
class 75Rnd_762x39_Mag_F : 30Rnd_762x39_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 75<br />Tracers: Last 4 Rounds<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 75Rnd Reload Tracer (Yellow) AKM Mag";
displaynameshort = "Rel. Tr. (Yellow)";
mass = 48.9999;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_762x39_Mag_YRT_F_ca.paa";
};
class 75Rnd_762x39_Mag_Tracer_F : 75Rnd_762x39_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 75<br />Tracers: Every Round<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 75Rnd Tracer (Yellow) AKM Mag";
displayNameShort = "Tracer (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_762x39_Mag_YT_F_ca.paa";
};

// AKS-74U 30Rnd Mags. Changing: Name. Description
class 30Rnd_545x39_Mag_F : CA_Magazine
{
descriptionShort = "Calibre: 5.45x39mm<br />Rounds: 30<br />Tracers: Last 4 Rounds<br />Used in: AK-12, AK-12C, AKS-74U";
displayName = "5.45x39 30Rnd Reload Tracer (Yellow) Mag";
displaynameshort = "Rel. Tr. (Yellow)";
initSpeed = 890;
mass = 10.86708541;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_545x39_YRT_Mag_F_ca.paa";
};
class 30Rnd_545x39_Mag_Green_F : 30Rnd_545x39_Mag_F
{
displayName = "5.45x39 30Rnd Reload Tracer (Green) Mag";
displaynameshort = "Rel. Tr. (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_545x39_GRT_Mag_F_ca.paa";
};
class 30Rnd_545x39_Mag_Tracer_F : 30Rnd_545x39_Mag_F
{
descriptionShort = "Calibre: 5.45x39mm<br />Rounds: 30<br />Tracers: Every Round<br />Used in: AK-12, AK-12C, AKS-74U";
displayName = "5.45x39 30Rnd Tracer (Yellow) Mag";
displayNameShort = "Tracer (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_545x39_YT_Mag_F_ca.paa";
};
class 30Rnd_545x39_Mag_Tracer_Green_F : 30Rnd_545x39_Mag_Tracer_F
{
displayName = "5.45x39 30Rnd Tracer (Green) Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_545x39_GT_Mag_F_ca.paa";
};

// Vanilla AK12 Mags. Changing: Name. Description.

// 30Rnd
class 30Rnd_762x39_AK12_Mag_F : 30Rnd_762x39_Mag_F
{
displayName = "7.62x39 30Rnd Reload Tracer (Green) AK-15 Mag";
displaynameshort = "Rel. Tr. (Green)";
mass = 16.0910;
picture = "\A3RO_Vanilla\Textures\UI\icon_30rnd_762x39_AK12_GRT_Mag_F_ca.paa";
};
class 30Rnd_762x39_AK12_Arid_Mag_F : 30Rnd_762x39_AK12_Mag_F 
{
displayName = "7.62x39 30Rnd Reload Tracer (Green) AK-15 Sand Mag";
picture = "\A3RO_Vanilla\Textures\UI\icon_30rnd_762x39_AK12_Sand_GRT_Mag_F_ca.paa";
};
class 30Rnd_762x39_AK12_Lush_Mag_F : 30Rnd_762x39_AK12_Mag_F 
{
displayName = "7.62x39 30Rnd Reload Tracer (Green) AK-15 Khaki Mag";	
picture = "\A3RO_Vanilla\Textures\UI\icon_30rnd_762x39_AK12_Lush_GRT_Mag_F_ca.paa";
};
class 30Rnd_762x39_AK12_Mag_Tracer_F : 30Rnd_762x39_AK12_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 30<br />Tracers: Every Round<br />Used in: AK-15, AK-15C, AKM";
displayName = "7.62x39 30Rnd Tracer (Green) AK-15 Mag";	
displayNameShort = "Tracer (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30rnd_762x39_AK12_GT_Mag_F_ca.paa";
};
class 30Rnd_762x39_AK12_Arid_Mag_Tracer_F : 30Rnd_762x39_AK12_Mag_Tracer_F 
{	
displayName = "7.62x39 30Rnd Tracer (Green) AK-15 Sand Mag";
picture = "\A3RO_Vanilla\Textures\UI\icon_30rnd_762x39_AK12_Sand_GT_Mag_F_ca.paa";
};
class 30Rnd_762x39_AK12_Lush_Mag_Tracer_F : 30Rnd_762x39_AK12_Mag_Tracer_F 
{
displayName = "7.62x39 30Rnd Tracer (Green) AK-15 Khaki Mag";
picture = "\A3RO_Vanilla\Textures\UI\icon_30rnd_762x39_AK12_Lush_GT_Mag_F_ca.paa";
};

// 75Rnd
class 75Rnd_762x39_AK12_Mag_F : 30Rnd_762x39_AK12_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 75<br />Tracers: Last 4 Rounds<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 75Rnd Reload Tracer (Green) AK-15 Mag";
mass = 49.5000s;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_762x39_GRT_AK15_Mag_F_ca.paa";
};
class 75Rnd_762x39_AK12_Arid_Mag_F : 75Rnd_762x39_AK12_Mag_F
{
displayName = "7.62x39 75Rnd Reload Tracer (Green) AK-15 Arid Mag";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_762x39_GRT_AK15_Arid_Mag_F_ca.paa";
};
class 75Rnd_762x39_AK12_Lush_Mag_F : 75Rnd_762x39_AK12_Mag_F
{
displayName = "7.62x39 75Rnd Reload Tracer (Green) AK-15 Lush Mag";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_762x39_GRT_AK15_Lush_Mag_F_ca.paa";
};
class 75Rnd_762x39_AK12_Mag_Tracer_F : 75Rnd_762x39_AK12_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 75<br />Tracers: Every Round<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 75Rnd Tracer (Green) AK-15 Mag";
displayNameShort = "Tracer (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_762x39_GT_AK15_Mag_F_ca.paa";
};
class 75Rnd_762x39_AK12_Arid_Mag_Tracer_F : 75Rnd_762x39_AK12_Mag_Tracer_F
{
displayName = "7.62x39 75Rnd Tracer (Green) Arid AK-15 Mag";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_762x39_GT_AK15_Arid_Mag_F_ca.paa";		
};
class 75Rnd_762x39_AK12_Lush_Mag_Tracer_F : 75Rnd_762x39_AK12_Mag_Tracer_F
{
displayName = "7.62x39 75Rnd Tracer (Green) Lush AK-15 Mag";
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_762x39_GT_AK15_Lush_Mag_F_ca.paa";		
};

// Creating AKM 7.62 Tracer Every 4 and tracerless Magazines

// 30Rnd
class 30Rnd_762x39_T4_Mag_F : 30Rnd_762x39_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 30Rnd Tracer Every 4 (Yellow) AKM Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30rnd_762x39_AK12_YT4_Mag_F_ca.paa";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 30Rnd_762x39_T4_G_Mag_F : 30Rnd_762x39_T4_Mag_F
{
ammo = "B_762x39_Ball_Green_F";
displayName = "7.62x39 30Rnd Tracer Every 4 (Green) AKM Mag";
displaynameshort = "Tr. 1 In 4 (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_762x39_GT4_Mag_F_ca.paa";
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
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_762x39_Mag_YT4_F_ca.paa";
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
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_762x39_Mag_YRT_Green_F_ca.paa";
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
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_762x39_Mag_YT_Green_F_ca.paa";
tracersEvery = 1;
};
class 75Rnd_762x39_Mag_T4_Green_F : 75Rnd_762x39_Green_Mag_Tracer_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 75<br />Tracers: Every 4th Round<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 75Rnd Tracer Every 4 (Yellow) Green AKM Mag";
displaynameshort = "Tr. 1 In 4 (Yellow)";
tracersEvery = 4;
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_762x39_Mag_YT4_Green_F_ca.paa";
};

// Creating AK-15 7.62 Tracer every 4 and tracerless AK-15 Magazines

// 30Rnd
class 30Rnd_762x39_AK12_T4_Mag_F : 30Rnd_762x39_AK12_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: AK-15, AK-15C, AKM";	
displayName = "7.62x39 30Rnd Tracer Every 4 (Green) AK-15 Mag";
displaynameshort = "Tr. 1 In 4 (Green)";	
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_30rnd_762x39_AK12_GT4_Mag_F_ca.paa";
tracersEvery = 4;
};
class 30Rnd_762x39_AK12_T4_Arid_Mag_F : 30Rnd_762x39_AK12_T4_Mag_F 
{	
displayName = "7.62x39 30Rnd Tracer Every 4 (Green) AK-15 Sand Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_camo_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_30rnd_762x39_AK12_Sand_GT4_Mag_F_ca.paa";
};
class 30Rnd_762x39_AK12_T4_Lush_Mag_F : 30Rnd_762x39_AK12_T4_Mag_F 
{
displayName = "7.62x39 30Rnd Tracer Every 4 (Green) AK-15 Khaki Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_Khaki_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_30rnd_762x39_AK12_Lush_GT4_Mag_F_ca.paa";
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
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_762x39_GT4_AK15_Mag_F_ca.paa";
tracersEvery = 4;
};
class 75Rnd_762x39_AK12_T4_Arid_Mag_F : 75Rnd_762x39_AK12_T4_Mag_F 
{	
displayName = "7.62x39 75Rnd Tracer Every 4 (Green) AK-15 Sand Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_762x39_GT4_AK15_Arid_Mag_F_ca.paa";
};
class 75Rnd_762x39_AK12_T4_Lush_Mag_F : 75Rnd_762x39_AK12_T4_Mag_F 
{
displayName = "7.62x39 75Rnd Tracer Every 4 (Green) AK-15 Khaki Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_75Rnd_762x39_GT4_AK15_Lush_Mag_F_ca.paa";
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
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_545x39_YT4_Mag_F_ca.paa";
tracersEvery = 4;
};
class 30Rnd_545x39_Mag_T4_Green_F : 30Rnd_545x39_Mag_T4_F
{
ammo = "B_545x39_Ball_Green_F";
displayName = "5.45x39 30Rnd Tracer Every 4 (Green) Mag";	
displaynameshort = "Tr. 1 In 4 (Green)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_545x39_GT4_Mag_F_ca.paa";
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
initSpeed = 890;
mass = 44.4857;
picture = "\A3RO_Vanilla\Textures\UI\icon_95Rnd_545x39_GRT_Mag_F_ca.paa";
};
class 95Rnd_545x39_RPK16_Arid_Mag_F : 95Rnd_545x39_RPK16_Mag_F
{
displayName = "5.45x39 95Rnd Reload Tracer (Green) RPK-16 Arid Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_95Rnd_545x39_GRT_Arid_Mag_F_ca.paa";
};
class 95Rnd_545x39_RPK16_Lush_Mag_F : 95Rnd_545x39_RPK16_Mag_F
{
displayName = "5.45x39 95Rnd Reload Tracer (Green) RPK-16 Lush Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_95Rnd_545x39_GRT_Lush_Mag_F_ca.paa";
};

// Tracer
class 95Rnd_545x39_RPK16_Mag_Tracer_F : 95Rnd_545x39_RPK16_Mag_F
{
descriptionShort = "Calibre: 5.45x39mm<br />Rounds: 95<br />Tracers: Every Round<br />Used in: RPK-16";	
displayName = "5.45x39 95Rnd Tracer (Green) RPK-16 Mag";	
displayNameShort = "Tracer (Green)";
lastRoundsTracer = 95;
picture = "\A3RO_Vanilla\Textures\UI\icon_95Rnd_545x39_GT_Mag_F_ca.paa";
tracersEvery = 1;
};
class 95Rnd_545x39_RPK16_Arid_Mag_Tracer_F : 95Rnd_545x39_RPK16_Mag_Tracer_F
{
displayName = "5.45x39 95Rnd Tracer (Green) RPK-16 Arid Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_95Rnd_545x39_GT_Arid_Mag_F_ca.paa";
};
class 95Rnd_545x39_RPK16_Lush_Mag_Tracer_F : 95Rnd_545x39_RPK16_Mag_Tracer_F
{
displayName = "5.45x39 95Rnd Tracer (Green) RPK-16 Lush Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};	
picture = "\A3RO_Vanilla\Textures\UI\icon_95Rnd_545x39_GT_Lush_Mag_F_ca.paa";
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
picture = "\A3RO_Vanilla\Textures\UI\icon_95Rnd_545x39_GT4_Mag_F_ca.paa";
tracersEvery = 4;
};
class 95Rnd_545x39_RPK16_Arid_Mag_T4_F : 95Rnd_545x39_RPK16_Mag_T4_F
{
displayName = "5.45x39 95Rnd Tracer Every 4 (Green) RPK-16 Arid Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_95Rnd_545x39_GT4_Arid_Mag_F_ca.paa";
};
class 95Rnd_545x39_RPK16_Lush_Mag_T4_F : 95Rnd_545x39_RPK16_Mag_T4_F
{
displayName = "5.45x39 95Rnd Tracer Every 4 (Green) RPK-16 Lush Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};	
picture = "\A3RO_Vanilla\Textures\UI\icon_95Rnd_545x39_GT4_Lush_Mag_F_ca.paa";
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
initSpeed = 913.4856;
mass = 46.4285;
picture = "\A3RO_Vanilla\Textures\UI\icon_90Rnd_556x45_Mag_GRT_F_ca.paa";
};
class 90Rnd_556x45_AK_Green_Mag_F : 90Rnd_556x45_AK_Mag_F
{
displayName = "5.56x45 90Rnd Reload Tracer (Green) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_90Rnd_556x45_Mag_GRT_Green_F_ca.paa";
};

// Tracer
class 90Rnd_556x45_AK_Mag_Tracer_F : 90Rnd_556x45_AK_Mag_F
{
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 90<br />Tracers: Every Round<br />Used in: AK-19, WASR-3";
displayName = "5.56x45 90Rnd Tracer (Green) AK Mag";	
displayNameShort = "Tracer (Green)";
lastRoundsTracer = 90;
picture = "\A3RO_Vanilla\Textures\UI\icon_90Rnd_556x45_Mag_GT_F_ca.paa";
tracersEvery = 1;
};
class 90Rnd_556x45_AK_Green_Mag_Tracer_F : 90Rnd_556x45_AK_Mag_Tracer_F
{
displayName = "5.56x45 90Rnd Tracer (Green) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_90Rnd_556x45_Mag_GT_Green_F_ca.paa";
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
picture = "\A3RO_Vanilla\Textures\UI\icon_90Rnd_556x45_Mag_GT4_F_ca.paa";
tracersEvery = 4;
};
class 90Rnd_556x45_AK_Green_Mag_T4_F : 90Rnd_556x45_AK_Mag_T4_F
{
displayName = "5.56x45 90Rnd Tracer Every 4 (Green) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_90Rnd_556x45_Mag_GT4_Green_F_ca.paa";
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
picture = "\A3RO_Vanilla\Textures\UI\icon_90Rnd_556x45_Mag_YRT_F_ca.paa";
};
class 90Rnd_223REM_AK_Green_Mag_F : 90Rnd_223REM_AK_Mag_F
{
displayName = ".223 90Rnd Reload Tracer (Yellow) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_90Rnd_556x45_Mag_YRT_Green_F_ca.paa";
};

// Tracer
class 90Rnd_223REM_AK_Mag_Tracer_F : 90Rnd_223REM_AK_Mag_F
{
descriptionShort = "Calibre: .223 Remington<br />Rounds: 90<br />Tracers: Every Round<br />Used in: TR3 .223, WASR-3, AK-19";	
displayName = ".223 90Rnd Tracer (Yellow) AK Mag";	
displayNameShort = "Tracer (Yellow)";
lastRoundsTracer = 90;
picture = "\A3RO_Vanilla\Textures\UI\icon_90Rnd_556x45_Mag_YT_F_ca.paa";
tracersEvery = 1;
};
class 90Rnd_223REM_AK_Green_Mag_Tracer_F : 90Rnd_223REM_AK_Mag_Tracer_F
{
displayName = ".223 90Rnd Tracer (Yellow) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_90Rnd_556x45_Mag_YT_Green_F_ca.paa";
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
picture = "\A3RO_Vanilla\Textures\UI\icon_90Rnd_556x45_Mag_YT4_F_ca.paa";
tracersEvery = 4;
};
class 90Rnd_223REM_AK_Green_Mag_T4_F : 90Rnd_223REM_AK_Mag_T4_F
{
displayName = ".223 90Rnd Tracer Every 4 (Yellow) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_90Rnd_556x45_Mag_YT4_Green_F_ca.paa";
};

// IR-DIM
// 5.56
class 90Rnd_556x45_AK_Mag_IRT_F : 90Rnd_556x45_AK_Mag_Tracer_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 90Rnd Tracer (IR-DIM) AK Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_90Rnd_556x45_Mag_IRT_F_ca.paa";
};
class 90Rnd_556x45_AK_Green_Mag_IRT_F : 90Rnd_556x45_AK_Mag_IRT_F
{
displayName = "5.56x45 90Rnd Tracer (IR-DIM) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_90Rnd_556x45_Mag_IRT_Green_F_ca.paa";
};

// IR-DIM T4
// 5.56
class 90Rnd_556x45_AK_Mag_IRT4_F : 90Rnd_556x45_AK_Mag_T4_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56x45 90Rnd Tracer Every 4 (IR-DIM) AK Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_90Rnd_556x45_Mag_IRT4_F_ca.paa";
};
class 90Rnd_556x45_AK_Green_Mag_IRT4_F : 90Rnd_556x45_AK_Mag_IRT4_F
{
displayName = "5.56x45 90Rnd Tracer Every 4 (IR-DIM) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_90Rnd_556x45_Mag_IRT4_Green_F_ca.paa";
};