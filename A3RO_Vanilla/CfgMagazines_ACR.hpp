// Remaining MX Magazines. Changing: Name. Description. Ammo Count from 100 to 60

// 100 Rnd
class 100Rnd_65x39_caseless_mag : CA_Magazine
{
ammo = "B_65x39_Case";
count = 60;
descriptionShort = "Calibre: 6.5x39mm<br />Rounds: 60<br />Tracers: Last 4 Rounds<br />Used in: ACR Entry Carbine/Carbine/SPR/HB";	
displayName = "6.5x39 60Rnd Reload Tracer (Red) Sand Mag";
displaynameshort = "Rel. Tr. (Red)";
initSpeed = 786.384;
mass = 26.5235;
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_65x39_caseless_RRT_mag_CA.paa";
tracersEvery = 0;
};
class 100Rnd_65x39_caseless_black_mag : 100Rnd_65x39_caseless_mag
{
displayName = "6.5x39 60Rnd Reload Tracer (Red) Mag";
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_65x39_caseless_RRT_black_mag_CA.paa";
};
class 100Rnd_65x39_caseless_khaki_mag : 100Rnd_65x39_caseless_mag
{
displayName = "6.5x39 60Rnd Reload Tracer (Red) Khaki Mag";
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_65x39_caseless_RRT_khaki_mag_CA.paa";
};

// 30Rnd
class 30Rnd_65x39_caseless_black_mag : 30Rnd_65x39_caseless_mag 
{
displayName = "6.5x39 30Rnd Reload Tracer (Red) Mag";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_RRT4_black_mag_CA.paa";
};
class 30Rnd_65x39_caseless_khaki_mag : 30Rnd_65x39_caseless_mag
{
displayName = "6.5x39 30Rnd Reload Tracer (Red) Khaki Mag";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_RRT_khaki_mag_CA.paa";
};

// MX 6.5 Tracer Magazines. Changing: Name. Description

// 100Rnd
class 100Rnd_65x39_caseless_mag_Tracer : 100Rnd_65x39_caseless_mag
{
descriptionShort = "Calibre: 6.5x39mm<br />Rounds: 30<br />Tracers: Every Round<br />Used in: ACR Entry Carbine/Carbine/SPR/HB";	
displayName = "6.5x39 60Rnd Tracer (Red) Sand Mag";
displayNameShort = "Tracer (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_65x39_caseless_RT_mag_CA.paa";
};
class 100Rnd_65x39_caseless_black_mag_tracer : 100Rnd_65x39_caseless_mag_Tracer
{
displayName = "6.5x39 60Rnd Tracer (Red) Mag";	
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_65x39_caseless_RT_black_mag_CA.paa";
};
class 100Rnd_65x39_caseless_khaki_mag_tracer : 100Rnd_65x39_caseless_mag_Tracer
{
displayName = "6.5x39 60Rnd Tracer (Red) Khaki Mag";
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_65x39_caseless_RT_khaki_mag_CA.paa";
};


// 30Rnd
class 30Rnd_65x39_caseless_mag_Tracer : 30Rnd_65x39_caseless_mag
{
descriptionShort = "Calibre: 6.5x39mm<br />Rounds: 30<br />Tracers: Every Round<br />Used in: ACR Entry Carbine/Carbine/SPR/HB";	
displayName = "6.5x39 30Rnd Tracer (Red) Sand Mag";
displayNameShort = "Tracer (Red)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_RT_mag_CA.paa";
};
class 30Rnd_65x39_caseless_black_mag_Tracer : 30Rnd_65x39_caseless_mag_Tracer
{
displayName = "6.5x39 30Rnd Tracer (Red) Mag";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_RT_black_mag_CA.paa";
};	
class 30Rnd_65x39_caseless_khaki_mag_Tracer : 30Rnd_65x39_caseless_mag_Tracer
{
displayName = "6.5x39 30Rnd Tracer (Red) Khaki Mag";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_RT_khaki_mag_CA.paa";
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
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_65x39_caseless_RT4_mag_CA.paa";
tracersEvery = 4;
};	
class 100Rnd_65x39_T4_black_mag : 100Rnd_65x39_T4_mag
{
displayName = "6.5x39 60Rnd Tracer Every 4 (Red) Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_65x39_caseless_RT4_black_mag_CA.paa";
};
class 100Rnd_65x39_T4_khaki_mag : 100Rnd_65x39_T4_mag
{
displayName = "6.5x39 60Rnd Tracer Every 4 (Red) Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_65x39_caseless_RT4_khaki_mag_CA.paa";
};

// 30Rnd
class 30Rnd_65x39_T4_mag : 30Rnd_65x39_caseless_mag
{
descriptionShort = "Calibre: 6.5x39mm<br />Rounds: 30<br />Tracers: Every 4th Round<br />Used in: ACR Entry Carbine/Carbine/SPR/HB";
displayName = "6.5x39 30Rnd Tracer Every 4 (Red) Sand Mag";
displaynameshort = "Tr. 1 In 4 (Red)";
lastRoundsTracer = 0;
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_RT4_mag_CA.paa";
tracersEvery = 4;
};	
class 30Rnd_65x39_T4_black_mag : 30Rnd_65x39_T4_mag
{
displayName = "6.5x39 30Rnd Tracer Every 4 (Red) Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_RT4_black_mag_CA.paa";
};
class 30Rnd_65x39_T4_khaki_mag : 30Rnd_65x39_T4_mag
{
displayName = "6.5x39 30Rnd Tracer Every 4 (Red) Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_RT4_khaki_mag_CA.paa";
};

// Creating 6.5 IR-DIM Tracer Magazines
// 100Rnd
class 100Rnd_65x39_IRT_Mag : 100Rnd_65x39_caseless_mag_Tracer
{
ammo = "B_65x39_Case_IR";
displayName = "6.5x39 60Rnd Tracer (IR-DIM) Sand Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_65x39_caseless_IRT_mag_CA.paa";
};	
class 100Rnd_65x39_IRT_Black_Mag : 100Rnd_65x39_IRT_Mag
{
displayName = "6.5x39 60Rnd Tracer (IR-DIM) Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_65x39_caseless_IRT_black_mag_CA.paa";
};
class 100Rnd_65x39_IRT_Khaki_Mag : 100Rnd_65x39_IRT_Mag
{
displayName = "6.5x39 60Rnd Tracer (IR-DIM) Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_65x39_caseless_IRT_khaki_mag_CA.paa";
};

// 30Rnd
class 30Rnd_65x39_IRT_Mag : 30Rnd_65x39_caseless_mag_Tracer
{
ammo = "B_65x39_Case_IR";	
displayName = "6.5x39 30Rnd Tracer (IR-DIM) Sand Mag";
displayNameShort = "Tracer (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_IRT_mag_CA.paa";
};	
class 30Rnd_65x39_IRT_Black_Mag : 30Rnd_65x39_IRT_Mag
{
displayName = "6.5x39 30Rnd Tracer (IR-DIM) Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_IRT_black_mag_CA.paa";
};
class 30Rnd_65x39_IRT_Khaki_Mag : 30Rnd_65x39_IRT_Mag
{
displayName = "6.5x39 30Rnd Tracer (IR-DIM) Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_IRT_khaki_mag_CA.paa";
};

// IR-DIM T4
// 100Rnd
class 100Rnd_65x39_IRT4_Mag : 100Rnd_65x39_T4_mag
{
ammo = "B_65x39_Case_IR";
displayName = "6.5x39 60Rnd Tracer Every 4 (IR-DIM) Sand Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_65x39_caseless_IRT4_mag_CA.paa";
};	
class 100Rnd_65x39_IRT4_Black_Mag : 100Rnd_65x39_IRT4_Mag
{
displayName = "6.5x39 60Rnd Tracer Every 4 (IR-DIM) Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_65x39_caseless_IRT4_black_mag_CA.paa";
};
class 100Rnd_65x39_IRT4_Khaki_Mag : 100Rnd_65x39_IRT4_Mag
{
displayName = "6.5x39 60Rnd Tracer Every 4 (IR-DIM) Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_100Rnd_65x39_caseless_IRT4_khaki_mag_CA.paa";
};

// 30Rnd
class 30Rnd_65x39_IRT4_Mag : 30Rnd_65x39_T4_mag
{
ammo = "B_65x39_Case_IR";	
displayName = "6.5x39 30Rnd Tracer Every 4 (IR-DIM) Sand Mag";
displaynameshort = "Tr. 1 In 4 (IR-DIM)";
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_IRT4_mag_CA.paa";
};	
class 30Rnd_65x39_IRT4_Black_Mag : 30Rnd_65x39_IRT4_Mag
{
displayName = "6.5x39 30Rnd Tracer Every 4 (IR-DIM) Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_IRT4_black_mag_CA.paa";
};
class 30Rnd_65x39_IRT4_Khaki_Mag : 30Rnd_65x39_IRT4_Mag
{
displayName = "6.5x39 30Rnd Tracer Every 4 (IR-DIM) Khaki Mag";
hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
picture = "\A3RO_Vanilla\Textures\UI\icon_30Rnd_65x39_caseless_IRT4_khaki_mag_CA.paa";
};