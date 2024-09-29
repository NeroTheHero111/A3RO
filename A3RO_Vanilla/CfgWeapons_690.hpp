// Kozlice Base Class. Changing: Name. Adding CBA Magwell. Adding Description. InitSpeed to Typicalspeed
class sgun_HunterShotgun_01_base_F : Rifle_Long_Base_F
{
descriptionShort = "Over-Under Shotgun<br />Calibre: 12 Gauge";
displayName = "690 Field Base Class";
initSpeed = -1;
magazines[] = {"2Rnd_12Gauge_Pellets"};
magazineWell[] = {"CBA_12g_2rnds","HunterShotgun_01_12GA"};
};

// Kozlice. Changing: Name.
class sgun_HunterShotgun_01_F : sgun_HunterShotgun_01_base_F
{
displayName = "690 Field 28''";	
};

// Kozlice Sawed-Off Base Class. Changing: Name. Initspeed Halved
class sgun_HunterShotgun_01_sawedoff_base_F : sgun_HunterShotgun_01_base_F
{
displayName = "690 Field (Sawed-Off) Base Class";
initSpeed = -0.5;
};

// Kozlice Sawed-Off. Changing: Name
class sgun_HunterShotgun_01_sawedoff_F : sgun_HunterShotgun_01_sawedoff_base_F
{
displayName = "690 Field (Sawed-Off)";	
};