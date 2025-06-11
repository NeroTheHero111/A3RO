// Vorona. Changing: Name. Description
class Vorona_HEAT : CA_LauncherMagazine
{
descriptionShort = "Type: Wire-Guided HEAT Missile<br />Rounds: 1<br />Arming Range: 80 Meters<br />Maximum Range: 2000 Meters<br />Used in: 9K115-2 Metis-M1";
displayName = "9M131 HEAT";
displayNameShort = "9M131 HEAT";
initSpeed = 200;
mass = 304.2379;
};
class Vorona_HE : Vorona_HEAT
{
descriptionShort = "Type: Wire-Guided HE Missile<br />Rounds: 1<br />Arming Range: 80 Meters<br />Maximum Range: 2000 Meters<br />Used in: 9K115-2 Metis-M1";
displayName = "9M131 HE";
displayNameShort = "9M131 HE";
initSpeed = 200;
mass = 304.2379;
};

// MAAWS. Changing: Name. Description. As with Ammo, only changing Velocity with ACE loaded because I need its XM157 Framework to make the FCS function properly. The Vanilla Reticule would not align.
class MRAWS_HEAT_F : CA_LauncherMagazine
{
descriptionShort = "Type: Tandem-Warhead HEAT Round<br />Rounds: 1<br />Arming Range: 20 - 40 Meters<br />Effective Range: 700 Meters<br />Used in: M3A1/E1 MAAWS";
displayName = "HEAT 751";
displayNameShort = "HEAT 751";
mass = 83.7756;
};
class MRAWS_HEAT55_F : MRAWS_HEAT_F
{
descriptionShort = "Type: Shaped-Charge HEAT Round<br />Rounds: 1<br />Arming Range: 5 - 8 Meters<br />Effective Range: 700 Meters<br />Used in: M3A1/E1 MAAWS";
displayName = "HEAT 551";
displayNameShort = "HEAT 551";
mass = 70.5479;
};
class MRAWS_HE_F : MRAWS_HEAT_F
{
descriptionShort = "Type: HE Round<br />Rounds: 1<br />Arming Range: 40 - 70 Meters<br />Effective Range: 1300 Meters<br />Used in: M3A1/E1 MAAWS";
displayName = "HE 441D RS";
displayNameShort = "HE 441D RS";
mass = 70.5479;
};

// PCML. Changing: Name. Description
class NLAW_F : CA_LauncherMagazine
{
descriptionShort = "Type: Shaped-Charge HEAT<br />Rounds: 1<br />Arming Range: 20 Meters<br />Effective Range: 20 - 800 Meters<br />Maximum Range: 1000 Meters<br />Used in: NLAW";
displayName = "NLAW HEAT Missile";
displaynameshort = "HEAT";
mass = 275.5778; // Since its supposed to be a disposable, the most amicable solution to this using Vanilla I can think of is to have the entire weight in the Ammo. That way every single Round is a whole "new" Launcher.
};

// RPG-32. Changing: Name. Description
class RPG32_F : CA_LauncherMagazine
{
descriptionShort = "Type: Tandem-Warhead HEAT Round<br />Rounds: 1<br />Arming Range: 20 - 40 Meters<br />Maximum Range: 700 Meters<br />Used in: RPG-32";
displayName = "PG-32V HEAT";
displaynameshort = "PG-32V HEAT";
mass = 273.3732;
};
class RPG32_HE_F : RPG32_F
{
descriptionShort = "Type: HE Round<br />Rounds: 1<br />Arming Range: 20 - 40 Meters<br />Maximum Range: 700 Meters<br />Used in: RPG-32";
displayName = "TBG-32V HE";
displaynameshort = "TBG-32V HE";
mass = 273.3732;
};

// RPG-7. Changing: Name. Description
class RPG7_F : RPG32_F
{
descriptionShort = "Type: Single-Stage HEAT Grenade<br />Rounds: 1<br />Arming Range: 5 Meters<br />Maximum Range: 920 Meters<br />Used in: RPG-7";	
displayName = "PG-7VM HEAT";
displaynameshort = "PG-7VM HEAT";
initSpeed = 140;
mass = 43.4972;
};

// Titan MPRL. Changing: Name. Description
class Titan_AA : CA_LauncherMagazine
{
descriptionShort = "Type: Infrared Homing Anti-Air Missile<br />Rounds: 1<br />Arming Range: 80 Meters<br />Minimum Range: 161 Meters<br />Maximum Range: 4800 Meters<br />Used in: Titan MPRL";	
displayName = "Titan AA";
displaynameshort = "Titan AA";
initSpeed = 20;
mass = 296.8891; // Mass of Stinger + Extra
};

// Titan MPRL Compact. Changing: Name. Description
class Titan_AP : Titan_AA
{
// Turning Titan_AT into AP Missile because this fucking M_Titan_AP won't work with ACE
ammo = "M_Titan_AT";
descriptionShort = "Type: SACLOS/Fire-And-Forget Anti-Personnel Missile<br />Rounds: 1<br />Arming Range: 50 Meters<br />Effective Range: 200 - 1200 Meters<br />Maximum Range: 1500 Meters<br />Used in: Mini-Spike";	
displayName = "MS-AP";
displaynameshort = "Anti-Personnel";
initSpeed = 20; // 18 is such a weird number.
mass = 88.1849;
};
class Titan_AT : Titan_AA
{
ammo = "M_Titan_AT_2";
descriptionShort = "Type: Fire-And-Forget Anti-Tank Missile<br />Rounds: 1<br />Arming Range: 50 Meters<br />Effective Range: 200 - 1200 Meters<br />Maximum Range: 1500 Meters<br />Used in: Mini-Spike";	
displayName = "MS-AT";
displaynameshort = "Anti-Tank";
initSpeed = 20;
mass = 176.3698; // Doubling to balance
scope = 2; // Mini-Spike was only developed with an Anti-Personell Warhead. an AT Warhead was planned but theres no evidence. However, Removing it would break faction balancing.
};