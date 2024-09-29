// 7.62x51 NATO 20Rnd Magazine. Changing: Description
class 20Rnd_762x51_Mag : CA_Magazine
{
ammo = "B_762x51_Tracer_Yellow";	
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR, RFB";
initSpeed = 843.0768;
};

// Creating 7.62x51 NATO 20Rnd Tracer, Tracer Every 4 and Reload Tracer Magazines
class 20Rnd_762x51_Tracer_Mag : 20Rnd_762x51_Mag
{
displayName = "7.62 mm 20Rnd Tracer (Yellow) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 20;
tracersEvery = 1;
};
class 20Rnd_762x51_T4_Mag : 20Rnd_762x51_Tracer_Mag
{
displayName = "7.62 mm 20Rnd Tracer Every 4 (Yellow) Mag";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 20Rnd_762x51_RT_Mag : 20Rnd_762x51_Mag
{
displayName = "7.62 mm 20Rnd Reload Tracer (Yellow) Mag";
lastRoundsTracer = 4;
};

// 7.62x51 NATO 10Rnd Magazine. Changing: Description
class 10Rnd_Mk14_762x51_Mag : 20Rnd_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Used in: M21 SWS, M25 SWS, Mk 14 Mod 0 EBR, RFB";
displayName = "7.62 mm 10Rnd Mag";
};

// Creating 7.62x51 NATO 10Rnd Tracer Magazine
class 10Rnd_Mk14_762x51_Tracer_Mag : 10Rnd_Mk14_762x51_Mag
{
displayName = "7.62 mm 10Rnd Tracer (Yellow) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 10;
tracersEvery = 1;
};

// Creating .308 Winchester Tracer, Tracer Every 4, Reload Tracer and tracerless Magazines
class 20Rnd_308WIN_Mag : CA_Magazine
{
ammo = "B_308WIN_Ball";
count = 20;
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Used in: M1A ACLS, MR308 A3-28 20''";
displayName = ".308 20Rnd Mag";
initSpeed = 886.6632;
mass = 12;
modelSpecial = "a3\Weapons_F_Mark\MagazineProxies\mag_762x51_mk14_20rnd";
modelSpecialIsProxy = 1;
picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_20Rnd_762x51_Mag_ca.paa";
scope = 2;
};
class 20Rnd_308WIN_Tracer_Mag : 20Rnd_308WIN_Mag
{
displayName = ".308 20Rnd Tracer (Red) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 20;
tracersEvery = 1;
};
class 20Rnd_308WIN_T4_Mag : 20Rnd_308WIN_Tracer_Mag
{
displayName = ".308 20Rnd Tracer Every 4 (Red) Mag";
lastRoundsTracer = 0;
tracersEvery = 4;
};
class 20Rnd_308WIN_RT_Mag : 20Rnd_308WIN_Mag
{
displayName = ".308 20Rnd Reload Tracer (Red) Mag";
lastRoundsTracer = 4;
};

// Creating .308 Winchester Tracer and tracerless 10Rnd Magazines
class 10Rnd_308WIN_Mag : 20Rnd_308WIN_Mag
{
count = 10;
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 10<br />Used in: M1A ACLS, MR308 A3-28 20''";
displayName = ".308 10Rnd Mag";
mass = 6;
modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_762x51_mk14_10rnd";
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_10Rnd_Mk14_762x51_Mag_ca.paa";
};
class 10Rnd_308WIN_Tracer_Mag : 10Rnd_308WIN_Mag
{
displayName = ".308 10Rnd Tracer (Red) Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 10;
tracersEvery = 1;
};

// Creating AK-308 7.62x51 Magazines
class 20Rnd_762x51_AK_Mag_RT_F : 20Rnd_762x51_Mag
{
descriptionShort = "Calibre: 7.62x51mm NATO<br />Rounds: 20<br />Used in: AK-308";
displayName = "7.62 mm 20Rnd Reload Tracer (Green) AK Mag";
modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_65x39c_msbs_30rnd.p3d";
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_msbs_mag_CA.paa";
};
class 20Rnd_762x51_AK_Mag_Tracer_F : 20Rnd_762x51_AK_Mag_RT_F
{
displayName = "7.62 mm 20Rnd Tracer (Green) AK Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_msbs_mag_Tracer_CA.paa";
};
class 20Rnd_762x51_AK_Mag_T4_F : 20Rnd_762x51_AK_Mag_Tracer_F
{
displayName = "7.62 mm 20Rnd Tracer Every 4 (Green) AK Mag";
tracersEvery = 4;	
};
class 20Rnd_762x51_AK_Mag_NT_F : 20Rnd_762x51_AK_Mag_RT_F
{
displayName = "7.62 mm 20Rnd AK Mag";   
lastRoundsTracer = 0;
};

// Creating AK-308 .308 Winchester Magazines
class 20Rnd_308WIN_AK_Mag_RT_F : 20Rnd_308WIN_Mag
{
descriptionShort = "Calibre: .308 Winchester<br />Rounds: 20<br />Used in: AK-308";
displayName = ".308 20Rnd Reload Tracer (Green) AK Mag";
modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_65x39c_msbs_30rnd.p3d";
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_msbs_mag_CA.paa";
};
class 20Rnd_308WIN_AK_Mag_Tracer_F : 20Rnd_308WIN_AK_Mag_RT_F
{
displayName = ".308 20Rnd Tracer (Green) AK Mag";
displayNameShort = "Tracer";
lastRoundsTracer = 0;
tracersEvery = 1;
picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_msbs_mag_Tracer_CA.paa";
};
class 20Rnd_308WIN_AK_Mag_T4_F : 20Rnd_308WIN_AK_Mag_Tracer_F
{
displayName = ".308 20Rnd Tracer Every 4 (Green) AK Mag";
tracersEvery = 4;	
};
class 20Rnd_308WIN_AK_Mag_NT_F : 20Rnd_308WIN_AK_Mag_RT_F
{
displayName = ".308 20Rnd AK Mag";   
lastRoundsTracer = 0;
};

// IR-DIM
class 20Rnd_308WIN_AK_Mag_IRT_F : 20Rnd_308WIN_AK_Mag_Tracer_F
{
ammo = "B_308WIN_Ball_IR";
displayName = ".308 20Rnd Tracer (IR-DIM) AK Mag";	
};
class 20Rnd_762x51_AK_Mag_IRT_F : 20Rnd_762x51_AK_Mag_Tracer_F
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62 mm 20Rnd Tracer (IR-DIM) AK Mag";	
};
class 10Rnd_308WIN_IRT_Mag : 10Rnd_308WIN_Tracer_Mag
{
ammo = "B_308WIN_Ball_IR";
displayName = ".308 10Rnd Tracer (IR-DIM) Mag";
};
class 20Rnd_308WIN_IRT_Mag : 20Rnd_308WIN_Tracer_Mag
{
ammo = "B_308WIN_Ball_IR";
displayName = ".308 20Rnd Tracer (IR-DIM) Mag";
};
class 10Rnd_Mk14_762x51_IRT_Mag : 10Rnd_Mk14_762x51_Tracer_Mag
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62 mm 10Rnd Tracer (IR-DIM) Mag";
};
class 20Rnd_762x51_IRT_Mag : 20Rnd_762x51_Tracer_Mag
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62 mm 20Rnd Tracer (IR-DIM) Mag";
};

// IR-DIM T4
class 20Rnd_308WIN_AK_Mag_IRT4_F : 20Rnd_308WIN_AK_Mag_T4_F
{
ammo = "B_308WIN_Ball_IR";
displayName = ".308 20Rnd Tracer Every 4 (IR-DIM) AK Mag";
};
class 20Rnd_762x51_AK_Mag_IRT4_F : 20Rnd_762x51_AK_Mag_T4_F
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62 mm 20Rnd Tracer Every 4 (IR-DIM) AK Mag";	
};
class 20Rnd_308WIN_IRT4_Mag : 20Rnd_308WIN_T4_Mag
{
ammo = "B_308WIN_Ball_IR";
displayName = ".308 20Rnd Tracer Every 4 (IR-DIM) Mag";
};
class 20Rnd_762x51_IRT4_Mag : 20Rnd_762x51_T4_Mag
{
ammo = "B_762x51_Ball_IR";
displayName = "7.62 mm 20Rnd Tracer Every 4 (IR-DIM) Mag";
};