// Vorona. Changing: Name. Description
class Vorona_HEAT : CA_LauncherMagazine
{
descriptionShort = "Type: Wire-Guided HEAT Missile<br />Rounds: 1<br />Used in: 9K115-2 Metis-M1";
displayName = "9M131 HEAT";
};
class Vorona_HE : Vorona_HEAT
{
descriptionShort = "Type: Wire-Guided HE Missile<br />Rounds: 1<br />Used in: 9K115-2 Metis-M1";
displayName = "9M131 HE";
};

// MAAWS. Changing: Name. Description
class MRAWS_HEAT_F : CA_LauncherMagazine
{
descriptionShort = "Type: Tandem-Warhead HEAT Round<br />Rounds: 1<br />Used in: M3A1/E1 MAAWS";
displayName = "FFV751 HEAT";	
};
class MRAWS_HEAT55_F : MRAWS_HEAT_F
{
descriptionShort = "Type: RAP HEAT Round<br />Rounds: 1<br />Used in: M3A1/E1 MAAWS";
displayName = "FFV551 HEAT";	
};
class MRAWS_HE_F : MRAWS_HEAT_F
{
descriptionShort = "Type: HE Round<br />Rounds: 1<br />Used in: M3A1/E1 MAAWS";
displayName = "FFV441 HE";	
};

// PCML. Changing: Name. Description
class NLAW_F : CA_LauncherMagazine
{
descriptionShort = "Type: Shaped-Charge HEAT Round<br />Rounds: 1<br />Used in: NLAW";
displayName = "NLAW Warhead";	
displaynameshort = "HEAT";
};

// RPG-32. Changing: Name. Description
class RPG32_F : CA_LauncherMagazine
{
descriptionShort = "Type: Tandem-Warhead HEAT Round<br />Rounds: 1<br />Used in: RPG-32";
displayName = "PG-32V HEAT";
displaynameshort = "HEAT";
};
class RPG32_HE_F : RPG32_F
{
descriptionShort = "Type: HE Round<br />Rounds: 1<br />Used in: RPG-32";
displayName = "TBG-32V HE";
};

// RPG-7. Changing: Name. Description
class RPG7_F : RPG32_F
{
descriptionShort = "Type: Single-Stage HEAT Grenade<br />Rounds: 1<br />Used in: RPG-7";	
displayName = "PG-7VM HEAT";
};

// Titan MPRL. Changing: Name. Description
class Titan_AA : CA_LauncherMagazine
{
descriptionShort = "Type: Infrared Homing Anti-Air Missile<br />Rounds: 1<br />Used in: Titan MPRL";	
displayName = "Titan AA";
};

// Titan MPRL Compact. Changing: Name. Description
class Titan_AP : Titan_AA
{
descriptionShort = "Type: SACLOS-Guided Anti-Personnel Missile<br />Rounds: 1<br />Used in: Titan MPRL Compact";	
displayName = "Titan AP";
};
class Titan_AT : Titan_AA
{
descriptionShort = "Type: S/ACLOS-Guided Anti-Tank Missile<br />Rounds: 1<br />Used in: Titan MPRL Compact";	
displayName = "Titan AT";
};