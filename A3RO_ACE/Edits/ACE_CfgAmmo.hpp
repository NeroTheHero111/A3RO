
// Adjusting New Ammo with ACE Ballistic Balancing taken into account. Adding ACE Parameters

class B_9x21_Ball : BulletBase // Based off of 124 Gr FMJ Precision Delta. Sources are the C.I.P. , Gun Forums, Wiki and most importantly Websites like http://www.ballisticsbytheinch.com/ or https://rifleshooter.com
{
ACE_caliber = 9.03;  
ACE_ballisticCoefficients[] = {0.152}; // Blatantly taken from S&B Ammo
ACE_bulletLength = 16.1; 
ACE_bulletMass = 8.03506;
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ICAO";
ACE_dragModel = 1;
ACE_muzzleVelocities[] = {355.092,362,405,364.236}; // Glock 19, CZ Shadow 2, Baretta PMXs, Beretta CX4
ACE_barrelLengths[] = {102,120,185,422.5};
};

class B_9x18_Ball_Green : BulletBase // 95 Gr Hornady XTP
{
ACE_caliber = 9.27;
ACE_ballisticCoefficients[] = {0.135};
ACE_bulletLength = 10.541; 
ACE_bulletMass = 5.1559;
ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619}; // Using ACE 9x21
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ICAO";
ACE_dragModel = 1;
ACE_muzzleVelocities[] = {253.2888, 271.272, 294.132, 296.5704, 301.1424, 313.3344, 317.2968, 321.2592, 324.0024, 325.5264, 329.4888, 327.9648, 337.1088, 335.28, 338.9376, 329.7936, 327.66};
ACE_barrelLengths[] = {50.8, 76.2, 101.6, 127, 152.4, 177.8, 203.2, 228.6, 254, 279.4, 304.8, 330.2, 355.6, 381, 406.4, 431.8, 457.2};
airFriction = -0.00216673;
};

class B_9x19_Ball_Green : BulletBase // Based off 124gr Federal JHP
{
ACE_caliber = 9.03;
ACE_ballisticCoefficients[] = {0.150};
ACE_bulletLength = 16.1; 
ACE_bulletMass = 8.03506;
ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ICAO";
ACE_dragModel = 1;
ACE_muzzleVelocities[] = {274.32, 301.1424, 323.3928, 339.852, 344.7288, 353.8728, 359.664, 369.4176, 369.1128, 369.4176, 373.38, 378.2568, 379.1712, 378.8664, 381, 375.2088};
ACE_barrelLengths[] = {50.8, 76.2, 101.6, 127, 152.4, 177.8, 203.2, 228.6, 254, 279.4, 304.8, 330.2, 355.6, 381, 406.4, 431.8, 457.2};
airFriction = -0.00211064;
};

class B_460x30_Ball : BulletBase // Based of 31gr DM31
{
ACE_ballisticCoefficients[] = {0.141};
ACE_bulletLength = 14.38; // No luck finding this. Voodoo Magic.
ACE_bulletMass = 2;
ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ICAO";
ACE_dragModel = 7;
ACE_muzzleVelocities[] = {628, 680, 716.28}; // HK UCP (Made that one up), MP7, CMMG Banshee
ACE_barrelLengths[] = {130, 180, 203.2};
airFriction = -0.00264206;
};

class B_570x28_Ball : BulletBase // SS190 AP FMJ
{
ACE_ballisticCoefficients[] = {0.151};
ACE_bulletLength = 21.0566;
ACE_muzzleVelocities[] = {431, 506, 573, 641, 677, 745, 810};
ACE_barrelLengths[] = {55, 77, 109, 162, 204, 322, 526};
};

class B_10mmA_Ball_Red : BulletBase // 180gr FMJ Federal
{
ACE_caliber = 10.17;
ACE_ballisticCoefficients[] = {0.170};
ACE_bulletLength = 17.399; 
ACE_bulletMass = 12.9598;
ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ASM";
ACE_dragModel = 1;
ACE_muzzleVelocities[] = {256.3368, 314.5536, 328.2696, 345.3384, 357.8352, 360.8832, 362.712, 367.5888, 376.1232, 373.38, 386.1816, 386.7912, 390.144, 386.1816, 383.1336, 378.8664, 384.048};
ACE_barrelLengths[] = {50.8, 76.2, 101.6, 127, 152.4, 177.8, 203.2, 228.6, 254, 279.4, 304.8, 330.2, 355.6, 381, 406.4, 431.8, 457.2};
airFriction = -0.00237709;
};

class B_45ACP_Ball : BulletBase // 185 Gr Buffalo Bore JHP. Editing ACES Values
{
ACE_caliber = 11.48;
ACE_ballisticCoefficients[] = {0.174};
ACE_bulletLength = 17.06; 
ACE_bulletMass = 11.9878;
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ASM";
ACE_dragModel = 1;
ACE_muzzleVelocities[] = {324.0024, 345.948, 364.5408, 376.7328 , 383.1336, 391.9728, 398.6784, 404.1648, 413.6136, 426.4152, 438.3024, 426.1104};
ACE_barrelLengths[] = {76.2, 101.6, 127, 152.4, 177.8, 203.2, 228.6, 254, 279.4, 304.8, 330.2, 355.6, 381, 406.4, 431.8, 457.2};
};

class B_380Auto_Ball_Yellow : BulletBase // 90 Gr Hornady HP / XPT FPD
{
ACE_caliber = 9.04;
ACE_ballisticCoefficients[] = {0.099};
ACE_bulletLength = 10.8458; 
ACE_bulletMass = 5.8319;
ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ICAO";
ACE_dragModel = 1;
ACE_muzzleVelocities[] = {237.744, 262.128, 276.4536, 285.2928, 292.608, 298.0944, 308.1528, 311.5056, 312.7248, 313.0296, 345.6432, 308.7624, 319.4304, 351.4344, 321.8688, 319.7352, 317.6016};
ACE_barrelLengths[] = {50.8, 76.2, 101.6, 127, 152.4, 177.8, 203.2, 228.6, 254, 279.4, 304.8, 330.2, 355.6, 381, 406.4, 431.8, 457.2};
airFriction = -0.00211297;
};

class B_40SW_Ball_Green : BulletBase // 180 Gr Federal JHP
{
ACE_caliber = 10.17;
ACE_ballisticCoefficients[] = {0.14};
ACE_bulletLength = 15.1384; 
ACE_bulletMass = 11.6638;
ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ASM";
ACE_dragModel = 1;
ACE_muzzleVelocities[] = {275.844, 293.2176, 309.6768, 319.1256, 325.2216, 330.4032, 336.4992, 339.2424, 342.2904, 342.5952, 341.376, 349.9104, 352.3488, 355.092, 348.0816, 364.5408, 355.092};
ACE_barrelLengths[] = {50.8, 76.2, 101.6, 127, 152.4, 177.8, 203.2, 228.6, 254, 279.4, 304.8, 330.2, 355.6, 381, 406.4, 431.8, 457.2};
airFriction = -0.00237709;
};

class B_357M_Ball_Yellow : BulletBase // 158 Gr Federal JHP
{
ACE_caliber = 9.12;
ACE_ballisticCoefficients[] = {0.206};
ACE_bulletLength = 16.3068; 
ACE_bulletMass = 10.2382;
ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ICAO";
ACE_dragModel = 1;
ACE_muzzleVelocities[] = {278.5872, 341.9856, 405.9936, 427.3296, 452.628, 468.1728, 485.5464, 483.4128, 499.2624, 509.3208, 511.7592, 514.1976, 522.732, 523.6464, 530.6568, 521.8176, 524.5608};
ACE_barrelLengths[] = {50.8, 76.2, 101.6, 127, 152.4, 177.8, 203.2, 228.6, 254, 279.4, 304.8, 330.2, 355.6, 381, 406.4, 431.8, 457.2};
airFriction = -0.00213167;
};

class B_45Colt_Ball : BulletBase // Cor Bon 225 Gr DPX
{
ACE_caliber = 11.58;
ACE_ballisticCoefficients[] = {0.14};
ACE_bulletLength = 13.4366; 
ACE_bulletMass = 14.5798;
ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ASM";
ACE_dragModel = 1;
ACE_muzzleVelocities[] = {237.1344, 285.2928, 333.1464, 352.6536, 368.808, 389.5344, 408.432, 413.3088, 422.7576, 428.5488, 432.816, 436.1688, 443.1792, 455.3712, 452.0184, 446.2272, 451.7136};
ACE_barrelLengths[] = {50.8, 76.2, 101.6, 127, 152.4, 177.8, 203.2, 228.6, 254, 279.4, 304.8, 330.2, 355.6, 381, 406.4, 431.8, 457.2};
airFriction = -0.00270666;
};

class B_410bore_Pellets_Submunition_000_Buck_Deploy : BulletBase
{
caliber = 0.2452;
hit = 1.910;
};

class B_410bore_Pellets_Submunition_4_Shot_Deploy : B_410bore_Pellets_Submunition_000_Buck_Deploy
{
hit = 0.097;
};

class B_410bore_Pellets_Submunition_000_Buck : BulletBase
{
caliber = 0.2452;
hit = 9.5544;
};

class B_410bore_Pellets_Submunition_4_Shot : B_410bore_Pellets_Submunition_000_Buck
{
hit = 3.011;
};

class B_12Gauge_Slug_NoCartridge;
class B_410bore_Slug : B_12Gauge_Slug_NoCartridge
{
caliber = 0.5984;
};

class B_556x45_Ball : BulletBase // Winchester 62 Gr M855 
{
ACE_caliber = 5.7;
ACE_ballisticCoefficients[] = {0.304};
ACE_bulletLength = 23.4; 
ACE_bulletMass = 4.01753;
ACE_muzzleVelocities[] = {595.884 650.748, 699.8208, 732.4344, 758.6472, 786.0792, 806.5008,  821.1312, 855.8784, 911.9616, 905.8656, 930.2496, 932.688, 943.9656, 950.0616, 962.5584, 965.9112, 971.7024, 984.1992, 999.744};
ACE_barrelLengths[] = {152.4, 177.8, 203.2, 228.6, 254, 279.4, 304.8, 330.2, 355.6, 419.1, 431.8, 457.2, 482.6, 508, 533.4, 558.8, 584.2, 609.6, 635, 660.4};
};

class B_223Rem_Ball : BulletBase // Federal 55 Gr M193/55
{
airFriction = -0.00130094;
ACE_caliber = 5.7;
ACE_ballisticCoefficients[] = {0.371};
ACE_bulletLength = 19.17;
ACE_bulletMass = 3.56394;
ACE_ammoTempMuzzleVelocityShifts[] = {-27.2,-26.44,-23.76,-21,-17.54,-13.1,-7.95,-1.62,6.24,15.48,27.75}; // Using 5.56 ACE Default
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ASM";
ACE_dragModel = 1;
ACE_muzzleVelocities[] = {671.1696, 734.568, 768.096, 811.3776, 843.3816, 863.8032, 889.7112, 906.4752, 926.2872, 971.3976, 960.4248, 975.9696, 993.3432, 1007.669, 1007.364, 1025.957, 1021.08, 1039.063, 1044.245, 1045.769};
ACE_barrelLengths[] = {152.4, 177.8, 203.2, 228.6, 254, 279.4, 304.8, 330.2, 355.6, 419.1, 431.8, 457.2, 482.6, 508, 533.4, 558.8, 584.2, 609.6, 635, 660.4};
};

class B_65x39_Caseless;
class B_65x39_Case : B_65x39_Caseless // Hornady 120 Gr A-MAX
{
ACE_bulletMass = 7.77587;
};

class B_762x51_Ball : BulletBase // IMI Samson 150 Gr M80 FMJ
{
ACE_caliber = 7.85;
ACE_ballisticCoefficients[] = {0.2};
ACE_bulletLength = 26.46; 
ACE_bulletMass = 9.71984;
ACE_muzzleVelocities[] = {780.5928, 785.4696, 790.956, 802.8432, 816.5592, 817.7784, 828.4464, 836.3712, 843.0768, 843.9912, 853.7448, 853.44, 860.4504};
ACE_barrelLengths[] = {419.1, 431.8, 457.2, 482.6, 508, 533.4, 558.8, 584.2, 609.6, 635, 660.4, 685.8, 711.2}; 
airFriction = -0.00154871;
};

class B_308WIN_Ball : BulletBase // Winchester 147 Gr FMJ
{
ACE_caliber = 7.85;
ACE_ballisticCoefficients[] = {0.204};
ACE_bulletLength = 29.591; 
ACE_bulletMass = 9.52544;
ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ICAO";
ACE_dragModel = 7;
ACE_muzzleVelocities[] = {817.4736, 825.0936, 834.8472, 840.3336, 854.6592, 855.5736, 864.7176, 876.9096, 886.6632, 889.1016, 900.684, 902.8176, 903.732};
ACE_barrelLengths[] = {419.1, 431.8, 457.2, 482.6, 508, 533.4, 558.8, 584.2, 609.6, 635, 660.4, 685.8, 711.2}; 
airFriction = -0.00154871;
};

class B_300WM_Ball : BulletBase // Federal 190 Gr Gold Medal Sierra MatchKing
{
ACE_caliber = 7.85;
ACE_ballisticCoefficients[] = {0.275};
ACE_bulletLength = 38.1; // Length of 200 Gr Bullet
ACE_bulletMass = 12.3118;
ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19}; // Using 7.62 ACE Default
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ICAO";
ACE_dragModel = 7;
ACE_muzzleVelocities[] = {784.86, 804.672, 821.7408, 831.1896, 838.8096, 850.0872, 849.1728, 868.9848, 881.4816};
ACE_barrelLengths[] = {412.75, 438.15, 463.55, 488.95, 514.35, 539.75, 565.15, 590.55, 615.95};
airFriction = -0.00055470;
};

class B_338_Ball : BulletBase // Sierra 250 Gr MatchKing
{
ACE_caliber = 8.61;
ACE_ballisticCoefficients[] = {0.318};
ACE_bulletLength = 39.497;
ACE_bulletMass = 16.2;
ACE_muzzleVelocities[] = {776.3256, 793.0896, 804.3672, 817.4736, 826.3128, 838.5048, 848.868, 859.536, 868.0704, 874.1664, 881.1768, 889.7112, 892.4544, 896.7216};
ACE_barrelLengths[] = {431.8, 457.2, 482.6, 508, 533.4, 558.8, 584.2, 609.6, 635, 660.4, 685.8, 711.2, 736.6, 762};
};

class B_375_Ball : BulletBase // Desertech 352 Gr Premium Match
{
ACE_caliber = 9.52;
ACE_ballisticCoefficients[] = {0.408};
ACE_bulletLength = 50.8508; 
ACE_bulletMass = 22.8092;
ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ICAO";
ACE_dragModel = 7;
ACE_muzzleVelocities[] = {938.784};
ACE_barrelLengths[] = {736.6};
airFriction = -0.00042499;
};

class B_408_Ball : BulletBase // Deserttech 446 Gr Premium Match
{
ACE_caliber = 10.36;
ACE_ballisticCoefficients[] = {0.572};
ACE_bulletLength = 57.3024; // Of a 450Gr Bullet
ACE_bulletMass = 28.9003;
ACE_muzzleVelocities[] = {832.104}; // Imagine thinking other 408 Rifles would have their muzzle Velocity listed somewhere smh
ACE_barrelLengths[] = {736.6};
airFriction = -0.00046249;
};

class B_127x108_Ball;
class B_127x108_APDS : B_127x108_Ball // Changing to 681 Gr 
{
ACE_bulletMass = 44.12805771;
};

// Keep in mind due to its fictional Nature I am simply using 2058 as about 2/3rds of the T100X projetile Velocity.
class Sh_75mm_Railgun_APFSDS;
class B_20mm_Railgun_APFSDS : Sh_75mm_Railgun_APFSDS
{
ACE_caliber = 20.02;
ACE_ballisticCoefficients[] = {1.652};
ACE_bulletLength = 80; 
ACE_bulletMass = 200;
ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19}; // Using 7.62 ACE Default
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ICAO";
ACE_dragModel = 7;
ACE_muzzleVelocities[] = {2058};
ACE_barrelLengths[] = {508};
airFriction = -0.00089373;
};

// Adding TypicalSpeed to 556 ACE Ammo Config. Inproving Coefficient.
class ACE_556x45_Ball_M995_AP : B_556x45_Ball
{
ACE_ballisticCoefficients[] = {0.260};
typicalSpeed = 875;
};
class ACE_556x45_Ball_Mk262 : B_556x45_Ball
{
ACE_ballisticCoefficients[] = {0.362};
typicalSpeed = 832;
};
class ACE_556x45_Ball_Mk318 : B_556x45_Ball
{
typicalSpeed = 923;
ACE_ballisticCoefficients[] = {0.307};
};

// Improving Coefficient and fixing Drag Models
class ACE_762x51_Ball_M118LR : B_762x51_Ball
{
ACE_ballisticCoefficients[] = {0.252};
};
class ACE_762x51_Ball_M993_AP : B_762x51_Ball
{
ACE_ballisticCoefficients[] = {0.176};
ACE_dragModel = 7;
};
class ACE_762x51_Ball_Mk316_Mod_0 : B_762x51_Ball
{
ACE_ballisticCoefficients[] = {0.252};
};
class ACE_762x51_Ball_Mk319_Mod_0 : B_762x51_Ball
{
ACE_ballisticCoefficients[] = {0.277};
ACE_dragModel = 7;
};
class B_762x54_Ball : B_762x51_Ball // 7N1
{
ACE_ballisticCoefficients[] = {0.411};
};