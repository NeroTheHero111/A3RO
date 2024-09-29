// AKM 30Rnd Mags. Changing: Description
class 30Rnd_762x39_Mag_F : CA_Magazine
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 30<br />Used in: AK-15, AK-15K, AKM";
initSpeed = 715;
};
class 30Rnd_762x39_Mag_Green_F : 30Rnd_762x39_Mag_F
{
displayName = "7.62 mm 30Rnd Reload Tracer (Green) AKM Mag";
};
class 30Rnd_762x39_Mag_Tracer_F;
class 30Rnd_762x39_Mag_Tracer_Green_F : 30Rnd_762x39_Mag_Tracer_F
{
displayName = "7.62 mm 30Rnd Tracer (Green) AKM Mag";
};

// AKM 75Rnd Mags. Changing: Name. Description
class 75Rnd_762x39_Mag_F : 30Rnd_762x39_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 75<br />Used in: AK-15, AK-15K, AKM";	
displayName = "7.62 mm 75Rnd Reload Tracer (Yellow) AKM Mag";
};
class 75Rnd_762x39_Mag_Tracer_F : 75Rnd_762x39_Mag_F
{
displayName = "7.62 mm 75Rnd Tracer (Yellow) AKM Mag";	
};

// AKS-74U 30Rnd Mags. Changing: Description
class 30Rnd_545x39_Mag_F : CA_Magazine
{
descriptionShort = "Calibre: 5.45x39mm<br />Rounds: 30<br />Used in: AK-12, AK-12K, AKS-74U";
initSpeed = 890;
};

// Vanilla AK12 Mags. Changing: Name. Description.

// 30Rnd
class 30Rnd_762x39_AK12_Mag_F : 30Rnd_762x39_Mag_F
{
displayName = "7.62 mm 30Rnd Reload Tracer (Green) AK-15 Mag";	
};
class 30rnd_762x39_AK12_Arid_Mag_F : 30Rnd_762x39_AK12_Mag_F 
{
displayName = "7.62 mm 30Rnd Reload Tracer (Green) AK-15 Sand Mag";	
};
class 30rnd_762x39_AK12_Lush_Mag_F : 30Rnd_762x39_AK12_Mag_F 
{
displayName = "7.62 mm 30Rnd Reload Tracer (Green) AK-15 Khaki Mag";	
};
class 30Rnd_762x39_AK12_Mag_Tracer_F : 30Rnd_762x39_AK12_Mag_F
{
displayName = "7.62 mm 30Rnd Tracer (Green) AK-15 Mag";	
};
class 30rnd_762x39_AK12_Arid_Mag_Tracer_F : 30Rnd_762x39_AK12_Mag_Tracer_F 
{	
displayName = "7.62 mm 30Rnd Tracer (Green) AK-15 Sand Mag";	
};
class 30rnd_762x39_AK12_Lush_Mag_Tracer_F : 30Rnd_762x39_AK12_Mag_Tracer_F 
{
displayName = "7.62 mm 30Rnd Tracer (Green) AK-15 Khaki Mag";	
};

// 75Rnd
class 75rnd_762x39_AK12_Mag_F : 30Rnd_762x39_AK12_Mag_F
{
descriptionShort = "Calibre: 7.62x39mm<br />Rounds: 75<br />Used in: AK-15, AK-15K, AKM";	
displayName = "7.62 mm 75Rnd Reload Tracer (Green) AK-15 Mag";
};
class 75rnd_762x39_AK12_Arid_Mag_F : 75rnd_762x39_AK12_Mag_F
{
displayName = "7.62 mm 75Rnd Reload Tracer (Green) AK-15 Arid Mag";		
};
class 75rnd_762x39_AK12_Lush_Mag_F : 75rnd_762x39_AK12_Mag_F
{
displayName = "7.62 mm 75Rnd Reload Tracer (Green) AK-15 Lush Mag";	
};
class 75rnd_762x39_AK12_Mag_Tracer_F : 75rnd_762x39_AK12_Mag_F
{
displayName = "7.62 mm 75Rnd Tracer (Green) AK-15 Mag";		
};
class 75rnd_762x39_AK12_Arid_Mag_Tracer_F : 75rnd_762x39_AK12_Mag_Tracer_F
{
displayName = "7.62 mm 75Rnd Tracer (Green) Arid AK-15 Mag";		
};
class 75rnd_762x39_AK12_Lush_Mag_Tracer_F : 75rnd_762x39_AK12_Mag_Tracer_F
{
displayName = "7.62 mm 75Rnd Tracer (Green) Lush AK-15 Mag";	
};

// Creating AKM 7.62 Tracer Every 4 and tracerless Magazines

// 30Rnd
class 30Rnd_762x39_T4_Mag_F : 30Rnd_762x39_Mag_F
{
displayName = "7.62 mm 30Rnd Tracer Every 4 (Yellow) AKM Mag";
displayNameShort = "Tracer";
picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_Tracer_F_ca.paa";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 30Rnd_762x39_T4_G_Mag_F : 30Rnd_762x39_T4_Mag_F
{
ammo = "B_762x39_Ball_Green_F";
displayName = "7.62 mm 30Rnd Tracer Every 4 (Green) AKM Mag";
picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_Tracer_Green_F_ca.paa";
};
class 30Rnd_762x39_NT_Mag_F : 30Rnd_762x39_Mag_F
{
displayName = "7.62 mm 30Rnd AKM Mag";
lastRoundsTracer = 0;
};

// 75Rnd
class 75Rnd_762x39_T4_Mag_F : 75Rnd_762x39_Mag_F
{
displayName = "7.62 mm 75Rnd Tracer Every 4 (Yellow) AKM Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 75Rnd_762x39_NT_Mag_F : 75Rnd_762x39_Mag_F
{
displayName = "7.62 mm 75Rnd AKM Mag";
lastRoundsTracer = 0;
};

// Creating AKM 75Rnd Green Drums using hidden Texture
class 75Rnd_762x39_Green_Mag_F : 75Rnd_762x39_Mag_F
{
displayName = "7.62 mm 75Rnd Reload Tracer (Yellow) Green AKM Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Green_F_ca.paa";
};
class 75Rnd_762x39_NT_Green_Mag_F : 75Rnd_762x39_Green_Mag_F
{
displayName = "7.62 mm 75Rnd Green AKM Mag";
lastRoundsTracer = 0;
};
class 75Rnd_762x39_Green_Mag_Tracer_F : 75Rnd_762x39_Green_Mag_F
{
displayName = "7.62 mm 75Rnd Tracer (Yellow) Green AKM Mag";	
lastRoundsTracer = 0;
tracersEvery = 1;
};
class 75Rnd_762x39_Mag_T4_Green_F : 75Rnd_762x39_Green_Mag_Tracer_F
{
displayName = "7.62 mm 75Rnd Tracer Every 4 (Yellow) Green AKM Mag";	
tracersEvery = 4;
};

// Creating AK-15 7.62 Tracer every 4 and tracerless AK-15 Magazines

// 30Rnd
class 30Rnd_762x39_AK12_T4_Mag_F : 30Rnd_762x39_AK12_Mag_F
{
displayName = "7.62 mm 30Rnd Tracer Every 4 (Green) AK-15 Mag";	
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 30Rnd_762x39_AK12_T4_Arid_Mag_F : 30Rnd_762x39_AK12_T4_Mag_F 
{	
displayName = "7.62 mm 30Rnd Tracer Every 4 (Green) AK-15 Sand Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_camo_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Arid_Mag_F_CA.paa";
};
class 30Rnd_762x39_AK12_T4_Lush_Mag_F : 30Rnd_762x39_AK12_T4_Mag_F 
{
displayName = "7.62 mm 30Rnd Tracer Every 4 (Green) AK-15 Khaki Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_Khaki_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Lush_Mag_F_CA.paa";	
};
class 30Rnd_762x39_AK12_NT_Mag_F : 30Rnd_762x39_AK12_Mag_F
{
displayName = "7.62 mm 30Rnd AK-15 Mag";	
lastRoundsTracer = 0;
};
class 30rnd_762x39_AK12_NT_Arid_Mag_F : 30Rnd_762x39_AK12_NT_Mag_F 
{	
displayName = "7.62 mm 30Rnd AK-15Sand Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_camo_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Arid_Mag_F_CA.paa";
};
class 30rnd_762x39_AK12_NT_Lush_Mag_F : 30Rnd_762x39_AK12_NT_Mag_F 
{
displayName = "7.62 mm 30Rnd AK-15 Khaki Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_Khaki_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Lush_Mag_F_CA.paa";	
};

// 75Rnd
class 75rnd_762x39_AK12_T4_Mag_F : 75rnd_762x39_AK12_Mag_F
{
displayName = "7.62 mm 75Rnd Tracer Every 4 (Green) AK-15 Mag";	
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 75rnd_762x39_AK12_T4_Arid_Mag_F : 75rnd_762x39_AK12_T4_Mag_F 
{	
displayName = "7.62 mm 75Rnd Tracer Every 4 (Green) AK-15 Sand Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_F_CA.paa";
};
class 75rnd_762x39_AK12_T4_Lush_Mag_F : 75rnd_762x39_AK12_T4_Mag_F 
{
displayName = "7.62 mm 75Rnd Tracer Every 4 (Green) AK-15 Khaki Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_F_CA.paa";
};
class 75rnd_762x39_AK12_NT_Mag_F : 75rnd_762x39_AK12_Mag_F
{
displayName = "7.62 mm 75Rnd AK-15 Mag";
lastRoundsTracer = 0;
};
class 75rnd_762x39_AK12_NT_Arid_Mag_F : 75rnd_762x39_AK12_NT_Mag_F 
{	
displayName = "7.62 mm 75Rnd Sand AK-15 Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_F_CA.paa";
};
class 75rnd_762x39_AK12_NT_Lush_Mag_F : 75rnd_762x39_AK12_NT_Mag_F 
{
displayName = "7.62 mm 75Rnd Khaki AK-15 Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_F_CA.paa";
};

// Creating AKS-74U 30Rnd 5.45 Tracer Every 4 and tracerless Magazines
class 30Rnd_545x39_Mag_T4_F : 30Rnd_545x39_Mag_F
{
displayName = "5.45 mm 30Rnd Tracer Every 4 (Yellow) Mag";	
displayNameShort = "Tracer";
lastRoundsTracer = 0;
picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_Tracer_F_ca.paa";
tracersEvery = 4;
};
class 30Rnd_545x39_Mag_T4_Green_F : 30Rnd_545x39_Mag_T4_F
{
ammo = "B_545x39_Ball_Green_F";
displayName = "5.45 mm 30Rnd Tracer Every 4 (Green) Mag";	
displayNameShort = "Tracer";
picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_Tracer_Green_F_ca.paa";
};
class 30Rnd_545x39_Mag_NT_F : 30Rnd_545x39_Mag_F
{
displayName = "5.45 mm 30Rnd Mag";	
lastRoundsTracer = 0;
};

// Creating 5.45 95Rnd Magazines

// Reload Tracer
class 95rnd_545x39_RPK16_Mag_F : 75rnd_762x39_AK12_Mag_F
{
ammo = "B_545x39_Ball_Green_F";
count = 95;
descriptionShort = "Calibre: 5.45x39mm<br />Rounds: 95<br />Used in: RPK-16";	
displayName = "5.45 mm 95Rnd Reload Tracer (Green) RPK-16 Mag";	
initSpeed = 890;
mass = 43;
};
class 95rnd_545x39_RPK16_Arid_Mag_F : 95rnd_545x39_RPK16_Mag_F
{
displayName = "5.45 mm 95Rnd Reload Tracer (Green) RPK-16 Arid Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_F_CA.paa";
};
class 95rnd_545x39_RPK16_Lush_Mag_F : 95rnd_545x39_RPK16_Mag_F
{
displayName = "5.45 mm 95Rnd Reload Tracer (Green) RPK-16 Lush Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_F_CA.paa";
};

// Tracer
class 95rnd_545x39_RPK16_Mag_Tracer_F : 95rnd_545x39_RPK16_Mag_F
{
displayName = "5.45 mm 95Rnd Tracer (Green) RPK-16 Mag";	
displayNameShort = "Tracer";
lastRoundsTracer = 95;
tracersEvery = 1;
};
class 95rnd_545x39_RPK16_Arid_Mag_Tracer_F : 95rnd_545x39_RPK16_Mag_Tracer_F
{
displayName = "5.45 mm 95Rnd Tracer (Green) RPK-16 Arid Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_F_CA.paa";
};
class 95rnd_545x39_RPK16_Lush_Mag_Tracer_F : 95rnd_545x39_RPK16_Mag_Tracer_F
{
displayName = "5.45 mm 95Rnd Tracer (Green) RPK-16 Lush Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};	
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_F_CA.paa";
};

// Tracerless
class 95rnd_545x39_RPK16_Mag_NT_F : 95rnd_545x39_RPK16_Mag_F
{
displayName = "5.45 mm 95Rnd RPK-16 Mag";
lastRoundsTracer = 0;
};
class 95rnd_545x39_RPK16_Arid_Mag_NT_F : 95rnd_545x39_RPK16_Mag_NT_F
{
displayName = "5.45 mm 95Rnd RPK-16 Arid Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_F_CA.paa";
};
class 95rnd_545x39_RPK16_Lush_Mag_NT_F : 95rnd_545x39_RPK16_Mag_NT_F
{
displayName = "5.45 mm 95Rnd RPK-16 Lush Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};	
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_F_CA.paa";
};

// Tracer Every 4
class 95rnd_545x39_RPK16_Mag_T4_F : 95rnd_545x39_RPK16_Mag_Tracer_F
{
displayName = "5.45 mm 95Rnd Tracer Every 4 (Green) RPK-16 Mag";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 95rnd_545x39_RPK16_Arid_Mag_T4_F : 95rnd_545x39_RPK16_Mag_T4_F
{
displayName = "5.45 mm 95Rnd Tracer Every 4 (Green) RPK-16 Arid Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_F_CA.paa";
};
class 95rnd_545x39_RPK16_Lush_Mag_T4_F : 95rnd_545x39_RPK16_Mag_T4_F
{
displayName = "5.45 mm 95Rnd Tracer Every 4 (Green) RPK-16 Lush Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};	
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_F_CA.paa";
};

// Creating 5.56 90Rnd Magazines

// Reload Tracer
class 90Rnd_556x45_AK_Mag_F : 75Rnd_762x39_Mag_F
{
ammo = "B_556x45_Ball_Tracer_Green";
count = 90;
descriptionShort = "Calibre: 5.56x45mm NATO<br />Rounds: 90<br />Used in: AK-19, WASR-3";	
displayName = "5.56 mm 9Rnd AK Reload Tracer (Green) Mag";	
initSpeed = 943.9656;
mass = 46.706760;
};
class 90Rnd_556x45_AK_Green_Mag_F : 90Rnd_556x45_AK_Mag_F
{
displayName = "5.56 mm 90Rnd AK Reload Tracer (Green) Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Green_F_ca.paa";
};

// Tracer
class 90Rnd_556x45_AK_Mag_Tracer_F : 90Rnd_556x45_AK_Mag_F
{
displayName = "5.56 mm 90Rnd AK Tracer (Green) Mag";	
displayNameShort = "Tracer";
lastRoundsTracer = 90;
tracersEvery = 1;
};
class 90Rnd_556x45_AK_Green_Mag_Tracer_F : 90Rnd_556x45_AK_Mag_Tracer_F
{
displayName = "5.56 mm 90Rnd AK Tracer (Green) Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Green_F_ca.paa";
};

// Tracerless
class 90Rnd_556x45_AK_Mag_NT_F : 90Rnd_556x45_AK_Mag_F
{
displayName = "5.56 mm 90Rnd AK Mag";
lastRoundsTracer = 0;
};
class 90Rnd_556x45_AK_Green_Mag_NT_F : 90Rnd_556x45_AK_Mag_NT_F
{
displayName = "5.56 mm 90Rnd AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Green_F_ca.paa";
};

// Tracer Every 4
class 90Rnd_556x45_AK_Mag_T4_F : 90Rnd_556x45_AK_Mag_Tracer_F
{
displayName = "5.56 mm 90Rnd Tracer Every 4 (Green) AK Mag";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 90Rnd_556x45_AK_Green_Mag_T4_F : 90Rnd_556x45_AK_Mag_T4_F
{
displayName = "5.56 mm 90Rnd Tracer Every 4 (Green) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Green_F_ca.paa";
};

// Creating .223 Remington 90Rnd Magazines

// Reload Tracer
class 90Rnd_223Rem_AK_Mag_F : 75Rnd_762x39_Mag_F
{
ammo = "B_223Rem_Ball";
count = 90;
descriptionShort = "Calibre: .223 Remington<br />Rounds: 90<br />Used in: TR3 .223, WASR-3, AK-19";	
displayName = ".223 90Rnd Reload Tracer (Yellow) AK Mag";	
initSpeed = 1007.669;
mass = 45.714680;
};
class 90Rnd_223Rem_AK_Green_Mag_F : 90Rnd_223Rem_AK_Mag_F
{
displayName = ".223 90Rnd Reload Tracer (Yellow) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Green_F_ca.paa";
};

// Tracer
class 90Rnd_223Rem_AK_Mag_Tracer_F : 90Rnd_223Rem_AK_Mag_F
{
displayName = ".223 90Rnd Tracer (Yellow) AK Mag";	
displayNameShort = "Tracer";
lastRoundsTracer = 90;
tracersEvery = 1;
};
class 90Rnd_223Rem_AK_Green_Mag_Tracer_F : 90Rnd_223Rem_AK_Mag_Tracer_F
{
displayName = ".223 90Rnd Tracer (Yellow) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Green_F_ca.paa";
};

// Tracerless
class 90Rnd_223Rem_AK_Mag_NT_F : 90Rnd_223Rem_AK_Mag_F
{
displayName = ".223 90Rnd AK Mag";
lastRoundsTracer = 0;
};
class 90Rnd_223Rem_AK_Green_Mag_NT_F : 90Rnd_223Rem_AK_Mag_NT_F
{
displayName = ".223 90Rnd AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Green_F_ca.paa";
};

// Tracer Every 4
class 90Rnd_223Rem_AK_Mag_T4_F : 90Rnd_223Rem_AK_Mag_Tracer_F
{
displayName = ".223 90Rnd Tracer Every 4 (Yellow) AK Mag";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 90Rnd_223Rem_AK_Green_Mag_T4_F : 90Rnd_223Rem_AK_Mag_T4_F
{
displayName = ".223 90Rnd Tracer Every 4 (Yellow) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Green_F_ca.paa";
};

// IR-DIM
// 5.45
class 30Rnd_545x39_Mag_Tracer_F;
class 30Rnd_545x39_Mag_IRT_F : 30Rnd_545x39_Mag_Tracer_F
{
ammo = "B_545x39_Ball_IR";	
displayName = "5.45 mm 30Rnd Tracer (IR-DIM) Mag";	
};

class 95rnd_545x39_RPK16_Mag_IRT_F : 95rnd_545x39_RPK16_Mag_Tracer_F
{
ammo = "B_545x39_Ball_IR";	
displayName = "5.45 mm 95Rnd Tracer (IR-DIM) RPK-16 Mag";
};
class 95rnd_545x39_RPK16_Arid_Mag_IRT_F : 95rnd_545x39_RPK16_Mag_IRT_F
{
displayName = "5.45 mm 95Rnd Tracer (IR-DIM) RPK-16 Arid Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_F_CA.paa";
};
class 95rnd_545x39_RPK16_Lush_Mag_IRT_F : 95rnd_545x39_RPK16_Mag_IRT_F
{
displayName = "5.45 mm 95Rnd Tracer (IR-DIM) RPK-16 Lush Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};	
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_F_CA.paa";
};

// 7.62
class 30Rnd_762x39_Mag_IRT_F : 30Rnd_762x39_Mag_Tracer_F
{
ammo = "B_762x39_Ball_IR";	
displayName = "7.62 mm 30Rnd Tracer (IR-DIM) AKM Mag";
};

class 30Rnd_762x39_AK12_Mag_IRT_F : 30Rnd_762x39_AK12_Mag_Tracer_F
{
ammo = "B_762x39_Ball_IR";	
displayName = "7.62 mm 30Rnd Tracer (IR-DIM) AK-15 Mag";	
};
class 30rnd_762x39_AK12_Arid_Mag_IRT_F : 30Rnd_762x39_AK12_Mag_IRT_F 
{	
displayName = "7.62 mm 30Rnd Tracer (IR-DIM) AK-15 Sand Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_camo_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Arid_Mag_F_CA.paa";
};
class 30rnd_762x39_AK12_Lush_Mag_IRT_F : 30Rnd_762x39_AK12_Mag_IRT_F 
{
displayName = "7.62 mm 30Rnd Tracer (IR-DIM) AK-15 Khaki Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_Khaki_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Lush_Mag_Tracer_F_CA.paa";
};

class 75rnd_762x39_AK12_Mag_IRT_F : 75rnd_762x39_AK12_Mag_Tracer_F
{
ammo = "B_762x39_Ball_IR";
displayName = "7.62 mm 75Rnd Tracer (IR-DIM) AK-15 Mag";
};
class 75rnd_762x39_AK12_Arid_Mag_IRT_F : 75rnd_762x39_AK12_Mag_IRT_F
{
displayName = "7.62 mm 75Rnd Tracer (IR-DIM) AK-15 Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_F_CA.paa";
};
class 75rnd_762x39_AK12_Lush_Mag_IRT_F : 75rnd_762x39_AK12_Mag_IRT_F
{
displayName = "7.62 mm 75Rnd Tracer (IR-DIM) AK-15 Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_F_CA.paa";
};

//75Rnd
class 75Rnd_762x39_Mag_IRT_F : 75Rnd_762x39_Mag_Tracer_F
{
ammo = "B_762x39_Ball_IR";
displayName = "7.62 mm 75Rnd Tracer (IR-DIM) AKM Mag";
};
// Creating AKM 75Rnd Green Drums using hidden Texture
class 75Rnd_762x39_Green_Mag_IRT_F : 75Rnd_762x39_Mag_IRT_F
{
displayName = "7.62 mm 75Rnd Tracer (IR-DIM) Green AKM Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Green_F_ca.paa";
};

// .223

// 90Rnd
class 90Rnd_223Rem_AK_Mag_IRT_F : 90Rnd_223Rem_AK_Mag_Tracer_F
{
ammo = "B_223Rem_Ball_IR";
displayName = ".223 90Rnd Tracer (IR-DIM) AK Mag";	
};
class 90Rnd_223Rem_AK_Green_Mag_IRT_F : 90Rnd_223Rem_AK_Mag_IRT_F
{
displayName = ".223 90Rnd Tracer (IR-DIM) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Green_F_ca.paa";
};

// 5.56
class 90Rnd_556x45_AK_Mag_IRT_F : 90Rnd_556x45_AK_Mag_Tracer_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56 mm 90Rnd Tracer (IR-DIM) AK Mag";	
};
class 90Rnd_556x45_AK_Green_Mag_IRT_F : 90Rnd_556x45_AK_Mag_IRT_F
{
displayName = "5.56 mm 90Rnd Tracer (IR-DIM) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Green_F_ca.paa";
};

// IR-DIM T4
// 5.45
class 30Rnd_545x39_Mag_IRT4_F : 30Rnd_545x39_Mag_T4_F
{
ammo = "B_545x39_Ball_IR";	
displayName = "5.45 mm 30Rnd Tracer Every 4 (IR-DIM) Mag";	
};

class 95rnd_545x39_RPK16_Mag_IRT4_F : 95rnd_545x39_RPK16_Mag_T4_F
{
ammo = "B_545x39_Ball_IR";	
displayName = "5.45 mm 95Rnd Tracer Every 4 (IR-DIM) RPK-16 Mag";
};
class 95rnd_545x39_RPK16_Arid_Mag_IRT4_F : 95rnd_545x39_RPK16_Mag_IRT4_F
{
displayName = "5.45 mm 95Rnd Tracer Every 4 (IR-DIM) RPK-16 Arid Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_F_CA.paa";
};
class 95rnd_545x39_RPK16_Lush_Mag_IRT4_F : 95rnd_545x39_RPK16_Mag_IRT4_F
{
displayName = "5.45 mm 95Rnd Tracer Every 4 (IR-DIM) RPK-16 Lush Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};	
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_F_CA.paa";
};

// 7.62
class 30Rnd_762x39_Mag_IRT4_F : 30Rnd_762x39_T4_Mag_F
{
ammo = "B_762x39_Ball_IR";	
displayName = "7.62 mm 30Rnd Tracer Every 4 (IR-DIM) AKM Mag";
};

class 30Rnd_762x39_AK12_IRT4_Mag_F : 30Rnd_762x39_AK12_T4_Mag_F
{
ammo = "B_762x39_Ball_IR";	
displayName = "7.62 mm 30Rnd Tracer Every 4 (IR-DIM) AK-15 Mag";	
};
class 30rnd_762x39_AK12_Arid_Mag_IRT4_F : 30Rnd_762x39_AK12_IRT4_Mag_F 
{	
displayName = "7.62 mm 30Rnd Tracer Every 4 (IR-DIM) AK-15 Sand Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_camo_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Arid_Mag_F_CA.paa";
};
class 30rnd_762x39_AK12_Lush_Mag_IRT4_F : 30Rnd_762x39_AK12_IRT4_Mag_F 
{
displayName = "7.62 mm 30Rnd Tracer Every 4 (IR-DIM) AK-15 Khaki Mag";	
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_Khaki_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Lush_Mag_Tracer_F_CA.paa";
};

class 75rnd_762x39_AK12_IRT4_Mag_F : 75rnd_762x39_AK12_T4_Mag_F
{
ammo = "B_762x39_Ball_IR";
displayName = "7.62 mm 75Rnd Tracer Every 4 (IR-DIM) AK-15 Mag";
};
class 75rnd_762x39_AK12_Arid_Mag_IRT4_F : 75rnd_762x39_AK12_IRT4_Mag_F
{
displayName = "7.62 mm 75Rnd Tracer Every 4 (IR-DIM) AK-15 Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_F_CA.paa";
};
class 75rnd_762x39_AK12_Lush_Mag_IRT4_F : 75rnd_762x39_AK12_IRT4_Mag_F
{
displayName = "7.62 mm 75Rnd Tracer Every 4 (IR-DIM) AK-15 Mag";
hiddenSelectionsMaterials[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_F_CA.paa";
};

// 75Rnd
class 75Rnd_762x39_Mag_IRT4_F : 75Rnd_762x39_T4_Mag_F
{
ammo = "B_762x39_Ball_IR";
displayName = "7.62 mm 75Rnd Tracer Every 4 (IR-DIM) AKM Mag";
};
// Creating AKM 75Rnd Green Drums using hidden Texture
class 75Rnd_762x39_Green_Mag_IRT4_F : 75Rnd_762x39_Mag_IRT4_F
{
displayName = "7.62 mm 75Rnd Tracer Every 4 (IR-DIM) Green AKM Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Green_F_ca.paa";
};

// .223

// 90Rnd
class 90Rnd_223Rem_AK_Mag_IRT4_F : 90Rnd_223Rem_AK_Mag_T4_F
{
ammo = "B_223Rem_Ball_IR";
displayName = ".223 90Rnd Tracer Every 4 (IR-DIM) AK Mag";	
};
class 90Rnd_223Rem_AK_Green_Mag_IRT4_F : 90Rnd_223Rem_AK_Mag_IRT4_F
{
displayName = ".223 90Rnd Tracer Every 4 (IR-DIM) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Green_F_ca.paa";
};

// 5.56
class 90Rnd_556x45_AK_Mag_IRT4_F : 90Rnd_556x45_AK_Mag_T4_F
{
ammo = "B_556x45_Ball_IR";
displayName = "5.56 mm 90Rnd Tracer Every 4 (IR-DIM) AK Mag";	
};
class 90Rnd_556x45_AK_Green_Mag_IRT4_F : 90Rnd_556x45_AK_Mag_IRT4_F
{
displayName = "5.56 mm 90Rnd Tracer Every 4 (IR-DIM) AK Green Mag";
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\MagazineProxies\data\magazine_drum_green_co.paa"};
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Green_F_ca.paa";
};