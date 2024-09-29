// Remaining MX Magazines. Changing: Name. Description

// 100 Rnd
class 100Rnd_65x39_caseless_mag : CA_Magazine
{
ammo = "B_65x39_Case";	
descriptionShort = "Calibre: 6.5x39mm<br />Rounds: 100<br />Used in: ACR Entry Carbine/Carbine/SPR/HB";	
displayName = "6.5 mm 100Rnd Reload Tracer (Red) Mag";
initSpeed = 859.2312;
tracersEvery = 0;
};
class 100Rnd_65x39_caseless_black_mag : 100Rnd_65x39_caseless_mag
{
displayName = "6.5 mm 100Rnd Reload Tracer (Red) Black Mag";
};
class 100Rnd_65x39_caseless_khaki_mag : 100Rnd_65x39_caseless_mag
{
displayName = "6.5 mm 100Rnd Reload Tracer (Red) Khaki Mag";
};

// 30Rnd
class 30Rnd_65x39_caseless_black_mag : 30Rnd_65x39_caseless_mag 
{
displayName = "6.5 mm 30Rnd Reload Tracer (Red) Black Mag";
};
class 30Rnd_65x39_caseless_khaki_mag : 30Rnd_65x39_caseless_mag
{
displayName = "6.5 mm 30Rnd Reload Tracer (Red) Khaki Mag";
};

// MX 6.5 Tracer Magazines. Changing: Name. Description

// 100Rnd
class 100Rnd_65x39_caseless_mag_Tracer : 100Rnd_65x39_caseless_mag
{
descriptionShort = "Calibre: 6.5x39mm<br />Rounds: 30<br />Used in: ACR Entry Carbine/Carbine/SPR/HB";	
displayName = "6.5 mm 100Rnd Tracer (Red) Mag";
};
class 100Rnd_65x39_caseless_khaki_mag_tracer : 100Rnd_65x39_caseless_mag_Tracer
{
displayName = "6.5 mm 100Rnd Tracer (Red) Khaki Mag";	
};
class 100Rnd_65x39_caseless_black_mag_tracer : 100Rnd_65x39_caseless_mag_Tracer
{
displayName = "6.5 mm 100Rnd Tracer (Red) Black Mag";	
};

// 30Rnd
class 30Rnd_65x39_caseless_mag_Tracer : 30Rnd_65x39_caseless_mag
{
descriptionShort = "Calibre: 6.5x39mm<br />Rounds: 30<br />Used in: ACR Entry Carbine/Carbine/SPR/HB";	
displayName = "6.5 mm 30Rnd Tracer (Red) Mag";
};
class 30Rnd_65x39_caseless_khaki_mag_Tracer : 30Rnd_65x39_caseless_mag_Tracer
{
displayName = "6.5 mm 30Rnd Tracer (Red) Khaki Mag";	
};
class 30Rnd_65x39_caseless_black_mag_Tracer : 30Rnd_65x39_caseless_mag_Tracer
{
displayName = "6.5 mm 30Rnd Tracer (Red) Black Mag";	
};	

// Creating 6.5 tracerless ACR Magazines

// 100Rnd
class 100Rnd_65x39_NT_mag : 100Rnd_65x39_caseless_mag
{
displayName = "6.5 mm 100Rnd Mag";
lastRoundsTracer = 0;
};	
class 100Rnd_65x39_NT_black_mag : 100Rnd_65x39_NT_mag
{
displayName = "6.5 mm 100Rnd Black Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"};
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_CA.paa";
};
class 100Rnd_65x39_NT_khaki_mag : 100Rnd_65x39_NT_mag
{
displayName = "6.5 mm 100Rnd Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"};
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_khaki_mag_CA.paa";
};

// 30Rnd
class 30Rnd_65x39_NT_mag : 30Rnd_65x39_caseless_mag
{
displayName = "6.5 mm 30Rnd Mag";
lastRoundsTracer = 0;
};	
class 30Rnd_65x39_NT_black_mag : 30Rnd_65x39_NT_mag
{
displayName = "6.5 mm 30Rnd Black Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
};
class 30Rnd_65x39_NT_khaki_mag : 30Rnd_65x39_NT_mag
{
displayName = "6.5 mm 30Rnd Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
};

// Creating 6.5 Tracer Every 4 ACR Magazines

// 100Rnd
class 100Rnd_65x39_T4_mag : 100Rnd_65x39_caseless_mag
{
displayName = "6.5 mm 100Rnd Tracer Every 4 (Red) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 4;
};	
class 100Rnd_65x39_T4_black_mag : 100Rnd_65x39_T4_mag
{
displayName = "6.5 mm 100Rnd Tracer Every 4 (Red) Black Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"};
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_CA.paa";
};
class 100Rnd_65x39_T4_khaki_mag : 100Rnd_65x39_T4_mag
{
displayName = "6.5 mm 100Rnd Tracer Every 4 (Red) Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"};
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_khaki_mag_CA.paa";
};

// 30Rnd
class 30Rnd_65x39_T4_mag : 30Rnd_65x39_caseless_mag
{
displayName = "6.5 mm 30Rnd Tracer Every 4 (Red) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 4;
};	
class 30Rnd_65x39_T4_black_mag : 30Rnd_65x39_T4_mag
{
displayName = "6.5 mm 30Rnd Tracer Every 4 (Red) Black Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
};
class 30Rnd_65x39_T4_khaki_mag : 30Rnd_65x39_T4_mag
{
displayName = "6.5 mm 30Rnd Tracer Every 4 (Red) Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
};

// Creating 6.5 IR-DIM Tracer Magazines

// 100Rnd
class 100Rnd_65x39_IRT_Mag : 100Rnd_65x39_caseless_mag_Tracer
{
ammo = "B_65x39_Case_IR";
displayName = "6.5 mm 100Rnd Tracer (IR-DIM) Mag";
};	
class 100Rnd_65x39_IRT_Black_Mag : 100Rnd_65x39_IRT_Mag
{
displayName = "6.5 mm 100Rnd Tracer (IR-DIM) Black Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"};
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_CA.paa";
};
class 100Rnd_65x39_IRT_Khaki_Mag : 100Rnd_65x39_IRT_Mag
{
displayName = "6.5 mm 100Rnd Tracer (IR-DIM) Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"};
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_khaki_mag_CA.paa";
};

// 30Rnd
class 30Rnd_65x39_IRT_Mag : 30Rnd_65x39_caseless_mag_Tracer
{
ammo = "B_65x39_Case_IR";	
displayName = "6.5 mm 30Rnd Tracer (IR-DIM) Mag";
};	
class 30Rnd_65x39_IRT_Black_Mag : 30Rnd_65x39_IRT_Mag
{
displayName = "6.5 mm 30Rnd Tracer (IR-DIM) Black Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
};
class 30Rnd_65x39_IRT_Khaki_Mag : 30Rnd_65x39_IRT_Mag
{
displayName = "6.5 mm 30Rnd Tracer (IR-DIM) Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
};

// IR-DIM T4

// 100Rnd
class 100Rnd_65x39_IRT4_Mag : 100Rnd_65x39_T4_mag
{
ammo = "B_65x39_Case_IR";
displayName = "6.5 mm 100Rnd Tracer Every 4 (IR-DIM) Mag";
};	
class 100Rnd_65x39_IRT4_Black_Mag : 100Rnd_65x39_IRT4_Mag
{
displayName = "6.5 mm 100Rnd Tracer Every 4 (IR-DIM) Black Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"};
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_CA.paa";
};
class 100Rnd_65x39_IRT4_Khaki_Mag : 100Rnd_65x39_IRT4_Mag
{
displayName = "6.5 mm 100Rnd Tracer Every 4 (IR-DIM) Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"};
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_khaki_mag_CA.paa";
};

// 30Rnd
class 30Rnd_65x39_IRT4_Mag : 30Rnd_65x39_T4_mag
{
ammo = "B_65x39_Case_IR";	
displayName = "6.5 mm 30Rnd Tracer Every 4 (IR-DIM) Mag";
};	
class 30Rnd_65x39_IRT4_Black_Mag : 30Rnd_65x39_IRT4_Mag
{
displayName = "6.5 mm 30Rnd Tracer Every 4 (IR-DIM) Black Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
};
class 30Rnd_65x39_IRT4_Khaki_Mag : 30Rnd_65x39_IRT4_Mag
{
displayName = "6.5 mm 30Rnd Tracer Every 4 (IR-DIM) Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
};