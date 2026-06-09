
// Adjusting New Ammo with ACE Ballistic Balancing taken into account. Adding ACE Parameters

class B_9x21_Ball : BulletBase // Based off of 124 Gr FMJ Precision Delta. Sources are the C.I.P. , Gun Forums, Wiki and most importantly Websites like http://www.ballisticsbytheinch.com/ or https://rifleshooter.com
{
ACE_caliber = 9.03;  
ACE_ballisticCoefficients[] = {0.152}; // Blatantly taken from S&B Ammo
ACE_bulletLength = 16.1; 
ACE_bulletMass = 8.0351;
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ICAO";
ACE_dragModel = 1;
ACE_muzzleVelocities[] = {355.092, 362.1024, 405.0791, 364.236}; // Glock 19, CZ Shadow 2, Baretta PMXs, Beretta CX4
ACE_barrelLengths[] = {102, 120, 185, 422.5};
};

class B_9x18_Ball_Green : BulletBase // 95 Gr Hornady XTP
{
ACE_caliber = 9.27;
ACE_ballisticCoefficients[] = {0.135};
ACE_bulletLength = 10.541; 
ACE_bulletMass = 6.1559;
ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619}; // Using ACE 9x21
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ICAO";
ACE_dragModel = 1;
ACE_muzzleVelocities[] = {253.2888, 271.272, 294.132, 296.5704, 301.1424, 313.3344, 317.2968, 321.2592, 324.0024, 325.5264, 329.4888, 327.9648, 337.1088, 335.28, 338.9376, 329.7936, 327.66};
ACE_barrelLengths[] = {50.8, 76.2, 101.6, 127, 152.4, 177.8, 203.2, 228.6, 254, 279.4, 304.8, 330.2, 355.6, 381, 406.4, 431.8, 457.2};
airFriction = -0.00216673;
};

class B_9x19_Ball_Green : BulletBase // 124 Gr Sellier Bellot FMJ
{
ACE_caliber = 9.03;
ACE_ballisticCoefficients[] = {0.152};
ACE_bulletLength = 16.1; 
ACE_bulletMass = 8.0351;
ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619};
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ICAO";
ACE_dragModel = 1;
ACE_muzzleVelocities[] = {274.32, 301.1424, 323.3928, 339.852, 344.7288, 353.8728, 359.664, 369.4176, 369.1128, 369.4176, 373.38, 378.2568, 379.1712, 378.8664, 381, 375.2088};
ACE_barrelLengths[] = {50.8, 76.2, 101.6, 127, 152.4, 177.8, 203.2, 228.6, 254, 279.4, 304.8, 330.2, 355.6, 381, 406.4, 431.8, 457.2};
airFriction = -0.00211064;
};

class B_460x30_Ball : BulletBase // RWS 40 Gr FMJ
{
ACE_ballisticCoefficients[] = {0.27};
ACE_bulletLength = 14.38; // No luck finding this. Voodoo Magic.
ACE_bulletMass = 2.5927;
ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619};
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ICAO";
ACE_dragModel = 1;
ACE_muzzleVelocities[] = {627.888, 680.0088, 716.28}; // HK UCP (Made that one up), MP7, CMMG Banshee
ACE_barrelLengths[] = {130, 180, 203.2};
airFriction = -0.00264206;
};

class B_570x28_Ball : BulletBase // SS190 FMJ 31 Gr
{
ACE_ballisticCoefficients[] = {0.151};
ACE_bulletLength = 21.0566;
ACE_bulletMass = 2.0088;
ACE_muzzleVelocities[] = {431.9016, 506.8824, 573.024, 640.9944, 676.9608, 744.9312, 809.8536};
ACE_barrelLengths[] = {55, 77, 109, 162, 204, 322, 526};
};

class B_10mmA_Ball_Red : BulletBase // 180gr FMJ Federal
{
ACE_caliber = 10.17;
ACE_ballisticCoefficients[] = {0.170};
ACE_bulletLength = 17.399; 
ACE_bulletMass = 11.6639;
ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619};
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
ACE_bulletMass = 5.8320;
ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619};
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ICAO";
ACE_dragModel = 1;
ACE_muzzleVelocities[] = {237.744, 262.128, 276.1488, 285.2928, 292.608, 298.0944, 308.1528, 311.5056, 312.7248, 313.0296, 345.6432, 308.7624, 319.4304, 351.4344, 321.8688, 319.7352, 317.6016};
ACE_barrelLengths[] = {50.8, 76.2, 101.6, 127, 152.4, 177.8, 203.2, 228.6, 254, 279.4, 304.8, 330.2, 355.6, 381, 406.4, 431.8, 457.2};
airFriction = -0.00211297;
};

class B_40SW_Ball_Green : BulletBase // 180 Gr Federal JHP
{
ACE_caliber = 10.17;
ACE_ballisticCoefficients[] = {0.191};
ACE_bulletLength = 15.1384; 
ACE_bulletMass = 11.6639;
ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619};
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
ACE_bulletMass = 10.2383;
ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619};
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
ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619};
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ASM";
ACE_dragModel = 1;
ACE_muzzleVelocities[] = {237.1344, 285.2928, 333.1464, 352.6536, 368.808, 389.5344, 408.432, 413.3088, 422.7576, 428.5488, 432.816, 436.1688, 443.1792, 455.3712, 452.0184, 446.2272, 451.7136};
ACE_barrelLengths[] = {50.8, 76.2, 101.6, 127, 152.4, 177.8, 203.2, 228.6, 254, 279.4, 304.8, 330.2, 355.6, 381, 406.4, 431.8, 457.2};
airFriction = -0.00270666;
};

class B_545x39_Ball_F : BulletBase // 7N6 FMJ 54 Gr
{
ACE_bulletLength = 25.03; 
ACE_bulletMass = 3.4992;
ACE_muzzleVelocities[] = {559.0032, 611.124, 665.988, 688.848, 737.9208, 790.956, 843.0768, 866.8512, 917.1432, 965.9112, 1018.032};
ACE_barrelLengths[] = {118, 142, 174, 190, 230, 286, 355, 394, 489, 612, 782};
};

class B_556x45_Ball : BulletBase // Winchester 62 Gr M855 
{
ACE_caliber = 5.7;
ACE_ballisticCoefficients[] = {0.168};
ACE_bulletLength = 23.4; 
ACE_bulletMass = 4.0176;
ACE_muzzleVelocities[] = {595.884, 650.748, 699.8208, 732.4344, 758.6472, 786.0792, 806.5008,  821.1312, 855.8784, 911.9616, 905.8656, 930.2496, 932.688, 943.9656, 950.0616, 962.5584, 965.9112, 971.7024, 984.1992, 999.744};
ACE_barrelLengths[] = {152.4, 177.8, 203.2, 228.6, 254, 279.4, 304.8, 330.2, 355.6, 419.1, 431.8, 457.2, 482.6, 508, 533.4, 558.8, 584.2, 609.6, 635, 660.4};
};

class B_223REM_Ball : BulletBase // Federal 55 Gr M193/55
{
airFriction = -0.00130094;
ACE_caliber = 5.7;
ACE_ballisticCoefficients[] = {0.371};
ACE_bulletLength = 19.17;
ACE_bulletMass = 3.5640;
ACE_ammoTempMuzzleVelocityShifts[] = {-27.2, -26.44, -23.76, -21, -17.54, -13.1, -7.95, -1.62, 6.24, 15.48, 27.75}; // Using 5.56 ACE Default
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ASM";
ACE_dragModel = 1;
ACE_muzzleVelocities[] = {671.1696, 9734.568, 768.096, 811.3776, 843.3816, 863.8032, 889.7112, 906.4752, 926.2872, 971.3976, 960.4248, 975.9696, 993.3432, 1007.6688, 1007.364, 1025.9568, 1021.08, 1039.0632, 1044.2448, 1045.7688};
ACE_barrelLengths[] = {152.4, 177.8, 203.2, 228.6, 254, 279.4, 304.8, 330.2, 355.6, 419.1, 431.8, 457.2, 482.6, 508, 533.4, 558.8, 584.2, 609.6, 635, 660.4};
};

class B_65x39_Caseless;
class B_65x39_Case : B_65x39_Caseless // Hornady 123 Gr FMJ Frontier®
{
ACE_ballisticCoefficients[] = {0.420};
ACE_caliber = 6.7056;
ACE_dragModel = 1;
ACE_bulletLength = 31.496; // From 123 Gr A-Max
ACE_bulletMass = 7.9703;
ACE_muzzleVelocities[] = {729.996, 733.044, 755.904, 780.8976, 787.908, 798.576, 809.8536, 806.196, 829.9704}; // Combining Default ACE with findings as new values are not enough to fully replace ACE
ACE_barrelLengths[] = {254, 368.3, 406.4, 495.3, 508, 609.6, 660.4, 711.2, 762};
};

class B_65x39_Minigun_Caseless : SubmunitionBullet // Adding ACE Cased Stats
{
ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
ACE_ballisticCoefficients[] = {0.263};
ACE_bulletLength = 33.9598;
ACE_bulletMass = 7.9703;
ACE_caliber = 6.7056;
ACE_damageType = "bullet";
ACE_dragModel = 7;
ACE_muzzleVelocities[] = {729.996, 733.044, 755.904, 780.8976, 787.908, 798.576, 809.8536, 806.196, 829.9704};
ACE_barrelLengths[] = {254, 368.3, 406.4, 495.3, 508, 609.6, 660.4, 711.2, 762};
ACE_standardAtmosphere = "ICAO";
ace_vehicle_damage_incendiary = 0.1;
ACE_velocityBoundaries[] = {};
airFriction = -0.00077363;
};

class B_65x39_Minigun_Caseless_Red_splash : B_65x39_Caseless // Changing to Cased Stats
{
ACE_bulletLength = 33.9598;
ACE_bulletMass = 7.9703;
ACE_caliber = 6.7056;
ACE_muzzleVelocities[] = {729.996, 733.044, 755.904, 780.8976, 787.908, 798.576, 809.8536, 806.196, 829.9704};
ACE_barrelLengths[] = {254, 368.3, 406.4, 495.3, 508, 609.6, 660.4, 711.2, 762};
};

class B_762x39_Ball_F : BulletBase // 57-N-231
{
ACE_bulletLength = 25.2476; 
ACE_bulletMass = 7.899;
ACE_muzzleVelocities[] = {701.3448, 702.2592, 703.4784, 706.8312, 719.6328, 724.5096, 732.7392, 747.9792, 730.9104};
ACE_barrelLengths[] = {419.1, 431.8, 457.2, 482.6, 508, 533.4, 558.8, 584.2, 609.6}; 
};

class B_762x51_Ball : BulletBase // IMI Samson 150 Gr M80 FMJ
{
ACE_caliber = 7.85;
ACE_ballisticCoefficients[] = {0.2};
ACE_bulletLength = 26.46; 
ACE_bulletMass = 9.7199;
ACE_muzzleVelocities[] = {780.5928, 785.4696, 790.956, 802.8432, 816.5592, 817.7784, 828.4464, 836.3712, 843.0768, 843.9912, 853.7448, 853.44, 860.4504};
ACE_barrelLengths[] = {419.1, 431.8, 457.2, 482.6, 508, 533.4, 558.8, 584.2, 609.6, 635, 660.4, 685.8, 711.2};
airFriction = -0.00154871;
};

class B_762x51_Minigun_Tracer_Red : SubmunitionBullet // Adding 7.62 ACE Stats 
{
ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
ACE_ballisticCoefficients[] = {0.2};
ACE_bulletLength = 26.46;
ACE_bulletMass = 9.7199;
ACE_caliber = 7.85;
ACE_damageType = "bullet";
ACE_dragModel = 7;
ACE_muzzleVelocities[] = {780.5928, 785.4696, 790.956, 802.8432, 816.5592, 817.7784, 828.4464, 836.3712, 843.0768, 843.9912, 853.7448, 853.44, 860.4504};
ACE_barrelLengths[] = {419.1, 431.8, 457.2, 482.6, 508, 533.4, 558.8, 584.2, 609.6, 635, 660.4, 685.8, 711.2};
ACE_standardAtmosphere = "ICAO";
ace_vehicle_damage_incendiary = 0.1;
ACE_velocityBoundaries[] = {};
airFriction = -0.00154871;
};

class B_308WIN_Ball : BulletBase // Winchester 147 Gr FMJ
{
ACE_caliber = 7.85;
ACE_ballisticCoefficients[] = {0.204};
ACE_bulletLength = 29.591; 
ACE_bulletMass = 9.5255;
ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ICAO";
ACE_dragModel = 7;
ACE_muzzleVelocities[] = {817.4736, 825.0936, 834.8472, 840.3336, 854.6592, 855.5736, 864.7176, 876.9096, 886.6631, 889.1016, 900.684, 902.8176, 903.732};
ACE_barrelLengths[] = {419.1, 431.8, 457.2, 482.6, 508, 533.4, 558.8, 584.2, 609.6, 635, 660.4, 685.8, 711.2}; 
airFriction = -0.00154871;
};

class B_300WM_Ball : BulletBase // Federal 180 Gr Power-Shok
{
ACE_caliber = 7.85;
ACE_ballisticCoefficients[] = {0.267};
ACE_bulletLength = 28.96;
ACE_bulletMass = 12.3117;
ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19}; // Using 7.62 ACE Default
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ICAO";
ACE_dragModel = 7;
ACE_muzzleVelocities[] = {869.5944, 892.1496, 929.64, 959.5104};
ACE_barrelLengths[] = {508, 558.8, 660.4, 762};
airFriction = -0.00055470;
};

class B_762x54_Ball : B_762x51_Ball // 7-N-323S 148.2 Gr
{
ACE_caliber = 7.92;
ACE_ballisticCoefficients[] = {0.187};
ACE_bulletLength = 32.385;
ACE_bulletMass = 9.6032;
ACE_dragModel = 7;
ACE_muzzleVelocities[] = {809.8536, 825.0936, 829.9704, 825.0936}; // UK vz. 59L, PKM vz. 59, M84/PKP,
ACE_barrelLengths[] = {550, 605, 650, 658};
airFriction = -0.00156252;
};
class B_762x54_7N14_Ball : B_762x54_Tracer_Green // 7N1(4) 151.2 Gr
{
ACE_ballisticCoefficients[] = {0.216};
ACE_bulletLength = 32.385;
ACE_bulletMass = 9.7976;
ACE_muzzleVelocities[] = {800.1, 809.8536, 829.9704, 819.912}; // SVDM, SvDS, SVD/SVCh, SV98
ACE_barrelLengths[] = {550, 565, 620, 650};
};

class B_93x64_Ball : BulletBase // 7N33 (254Gr), using Rhino Penetrator (250Gr) Data for Bullet Length/Coef
{
ACE_caliber = 9.3;
ACE_ballisticCoefficients[] = {0.52};
ACE_bulletLength = 33.528;
ACE_bulletMass = 16.5892;
ACE_muzzleVelocities[] = {779.9831}; // No other Rifle with data on it.
ACE_barrelLengths[] = {620};
airFriction = -0.00065716;
};

class B_338_Ball : BulletBase // Sierra 250 Gr MatchKing
{
ACE_caliber = 8.61;
ACE_ballisticCoefficients[] = {0.295};
ACE_bulletLength = 39.497;
ACE_bulletMass = 16.1998;
ACE_barrelLengths[] = {431.9016, 457.2, 482.4984, 508.1016, 533.4, 558.6984, 584.3016, 609.6, 634.8984, 660.5016, 685.8, 711.0983, 736.7016, 762};
ACE_muzzleVelocities[] = {776.3256, 793.0896, 804.3672, 817.4736, 826.3128, 838.5048, 848.868, 859.536, 868.0704, 874.1664, 881.177, 889.7112, 892.4544, 896.7216};
};

class B_338_NM_Ball : BulletBase // Norma 300 Gr Match King
{
ACE_caliber = 8.6;
ACE_ballisticCoefficients[] = {0.384};
ACE_bulletLength = 43.18;
ACE_bulletMass = 19.4397;
ACE_muzzleVelocities[] = {790.0416, 807.72, 809.8536}; // Very sparse info. There are rifles with different lengths but ofcourse no velocity data...
ACE_barrelLengths[] = {508, 609.6, 660.4};
};

class B_375_Ball : BulletBase // Desertech 352 Gr Premium Match
{
ACE_caliber = 9.52;
ACE_ballisticCoefficients[] = {0.408};
ACE_bulletLength = 50.8508; 
ACE_bulletMass = 22.8099;
ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
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
ACE_bulletMass = 28.9020;
ACE_muzzleVelocities[] = {832.104}; // Imagine thinking other 408 Rifles would have their muzzle Velocity listed somewhere smh
ACE_barrelLengths[] = {736.6};
airFriction = -0.00046249;
};

class B_127x54_Ball : BulletBase // STs-130VPS 1173 Gr. Using 900 Gr .510 Whisper for Coef / Length
{
ACE_ballisticCoefficients[] = {0.71};
ACE_bulletLength = 65.532; 
ACE_bulletMass = 76.0099;
ACE_muzzleVelocities[] = {299.9232};
ACE_barrelLengths[] = {450};
airFriction = -0.00058079;
};

class B_127x99_Ball : BulletBase // M33 Ball 706.7 Gr
{
ACE_caliber = 12.98;
ACE_ballisticCoefficients[] = {0.64};
ACE_bulletLength = 58.67;
ACE_bulletMass = 45.7942;
ACE_muzzleVelocities[] = {681.5328, 692.2008, 702.8688, 713.5368, 724.2048, 734.8728, 745.5408, 756.2088, 766.8768, 777.5448, 788.2128, 798.8808, 809.5488, 815.9496, 822.3504, 828.7512, 835.152, 841.5528, 847.9536, 854.3544, 860.7552, 867.156, 873.5568};
ACE_barrelLengths[] = {431.8, 457.2, 482.6, 508, 533.4, 558.8, 584.2, 609.6, 635, 660.4, 685.8, 711.2, 736.6, 762, 787.4, 812.8, 838.2, 863.6, 889, 914.4, 939.8, 965.2, 990.6};
};

class B_127x99_SLAP : B_127x99_Ball // M903 SLAP 360 Gr Sabot Penetrator
{
ACE_caliber = 7.62; // Penetrator Diameter
ACE_ballisticCoefficients[] = {0.2}; // Of 7.62x51
ACE_bulletLength = 36.98;
ACE_bulletMass = 23.3277;
ACE_dragModel = 7;
ACE_muzzleVelocities[] = {1219.2};
ACE_barrelLengths[] = {1143};
airFriction = -0.00034447;
};

class B_50BW_Ball_F : BulletBase // Alexander Arms 400Gr Hawk JSP
{
ACE_caliber = 12.75;
ACE_ballisticCoefficients[] = {0.202};
ACE_bulletLength = 55.372;
ACE_bulletMass = 25.9204;
ACE_muzzleVelocities[] = {518.16, 548.64, 571.5}; // Beowulf Statsheet from Alexander Arms
ACE_barrelLengths[] = {304.8, 406.4, 609.6};
airFriction = -0.00298013;
};

class B_127x108_Ball : BulletBase // 745 Gr 57-BZ-542 API
{
// No info on BC. Keeping 0.63
ACE_bulletLength = 64;
ACE_bulletMass = 48.2785; // Max 4 Decimal Places. 48.27518795 gets rounded down
ACE_caliber = 12.98;
ACE_muzzleVelocities[] = {860.1456};
ACE_barrelLengths[] = {1070}; // Kord
ace_vehicle_damage_incendiary = 0.333;
airFriction = -0.00065098;
};
class B_127x108_APDS : B_127x108_Ball // 680 Gr Tulammo Hunting 
{
ACE_ballisticCoefficients[] = {0.728};
ACE_bulletLength = 108;
ACE_bulletMass = 44.0676; // Numbers close to 680 kept getting round down grr
ACE_caliber = 12.98;
ACE_dragModel = 1;
ACE_muzzleVelocities[] = {922.9344};
ACE_barrelLengths[] = {1000}; // KSVK
ACE_standardAtmosphere = "ICAO";
ace_vehicle_damage_incendiary = 0.1;
airFriction = -0.00057945;
};
// Creating new 12.7x108 Sniper Ammo
class B_127x108_7N34_Ball : B_127x108_APDS // 914 Gr 7N34
{
ACE_ballisticCoefficients[] = {0.978}; // Warrior Sniper Rifle G1 close to 1 Claim, +250 to Hunting Cartridge
ACE_bulletMass = 59.2321;
ACE_muzzleVelocities[] = {784.86};
};

// API
class ACE_127x99_API : B_127x99_Ball
{
ACE_bulletMass = 42.9326;
ACE_muzzleVelocities[] = {886.968};
audibleFire = 120.24;
hit = 36.09;
typicalSpeed = 886.968;
};

// AMAX
class ACE_127x99_Ball_AMAX : B_127x99_Ball
{
ACE_bulletMass = 48.6035;
ACE_muzzleVelocities[] = {868.68};
audibleFire = 117.76;
hit = 35.35;
typicalSpeed = 868.68;
};

// Keep in mind due to its fictional Nature I am simply using 2058 as about 2/3rds of the T100X projetile Velocity.
class Sh_75mm_Railgun_APFSDS;
class B_20mm_Railgun_APFSDS : Sh_75mm_Railgun_APFSDS
{
ACE_caliber = 20.02;
ACE_ballisticCoefficients[] = {1.652};
ACE_bulletLength = 80; 
ACE_bulletMass = 200;
ACE_damageType = "bullet";
ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19}; // Using 7.62 ACE Default
ACE_velocityBoundaries[] = {};
ACE_standardAtmosphere = "ICAO";
ACE_dragModel = 7;
ACE_muzzleVelocities[] = {2058.0096};
ACE_muzzleVelocityVariationSD = 0.2;
ACE_barrelLengths[] = {508};
ACE_transonicStabilityCoef = 1;
ace_vehicle_damage_incendiary = 0.3;
airFriction = -0.00089373;
};

// Adding TypicalSpeed to 556 ACE Ammo Config. Inproving Coefficient.
class ACE_556x45_Ball_M995_AP : B_556x45_Ball
{
ACE_ballisticCoefficients[] = {0.260};
ACE_bulletMass = 3.3702;
ACE_muzzleVelocities[] = {1029.9192};
ACE_barrelLengths[] = {508};
audibleFire = 38.02;
hit = 9.77;
typicalSpeed = 1029.92;
};
class ACE_556x45_Ball_Mk262 : B_556x45_Ball
{
ACE_ballisticCoefficients[] = {0.373};
ACE_muzzleVelocities[] = {827.532, 848.2584, 862.584, 899.7696};
ACE_barrelLengths[] = {368.3, 406.4, 508, 609.6};
audibleFire = 31.84;
hit = 8.18;
typicalSpeed = 862.584;
};
class ACE_556x45_Ball_Mk318 : B_556x45_Ball
{
ACE_ballisticCoefficients[] = {0.306};
ACE_muzzleVelocities[] = {819.912, 891.54, 944.88};
ACE_barrelLengths[] = {261.62, 406.4, 457.2};
audibleFire = 34.88;
hit = 8.97;
typicalSpeed = 944.88;
};

// Improving Coefficient and fixing Drag Models etc.
class ACE_762x51_Ball_M118LR : B_762x51_Ball
{
ACE_ballisticCoefficients[] = {0.252};
typicalSpeed = 786.384;
};
class ACE_762x51_Ball_M993_AP : B_762x51_Ball
{
ACE_ballisticCoefficients[] = {0.176};
ACE_bulletMass = 8.2036;
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
class ACE_762x51_Ball_Subsonic : B_762x51_Ball
{
typicalSpeed = 324.917;
};
class ACE_762x67_Ball_Mk248_Mod_0 : B_762x51_Ball
{
ACE_ballisticCoefficients[] = {0.273};
typicalSpeed = 883.92;
};
class ACE_762x67_Ball_Mk248_Mod_1 : B_762x51_Ball
{
typicalSpeed = 868.68;
};
class ACE_762x67_Ball_Berger_Hybrid_OTM : B_762x51_Ball
{
typicalSpeed = 867.766;
};
class ACE_338_Ball_API526 : B_338_Ball
{
ACE_ballisticCoefficients[] = {0.269};
ACE_muzzleVelocities[] = {894.8928};
ACE_barrelLengths[] = {680};
audibleFire = 81.24;
hit = 16.24;
typicalSpeed = 894.893;
};
class ACE_338_Ball : B_338_Ball // 300 Gr
{
ACE_muzzleVelocities[] = {759.5616, 770.8392, 790.956, 798.576, 819.912, 825.3984, 832.7136, 841.248, 850.392, 853.1352, 858.9264, 864.108, 875.0808, 863.4984};
ACE_barrelLengths[] = {431.8, 457.2, 482.6, 508, 533.4, 558.8, 584.2, 609.6, 635, 660.4, 685.8, 711.2, 736.6, 762};
audibleFire = 117.76;
hit = 35.35;
typicalSpeed = 819.912;
};

class B_580x42_Ball_F;
class ACE_580x42_DBP88_Ball : B_580x42_Ball_F
{
ACE_bulletMass = 4.9902;
ACE_muzzleVelocities[] = {869.8991, 896.112};
ACE_barrelLengths[] = {557, 640.08};
audibleFire = 38.54;
hit = 9.05;
typicalSpeed = 896.112;
};

// Adjusting Shotgun Ammo
// Vanilla 00 Buck
class B_12Gauge_Pellets_Submunition : BulletBase // Federal #00 Buck
{
hit = 28.245;
submunitionConeAngle = 0.79;
};
class B_12Gauge_Pellets_Submunition_Deploy : BulletBase
{
hit = 3.138;
airFriction = -0.004203;
};
// Adjusting new 410 Bore
class B_410bore_Pellets_Submunition_000_Buck_Deploy : B_12Gauge_Pellets_Submunition_Deploy
{
caliber = 0.2472;
hit = 1.910;
};

class B_410bore_Pellets_Submunition_4_Shot_Deploy : B_410bore_Pellets_Submunition_000_Buck_Deploy
{
hit = 0.097;
};

class B_410bore_Pellets_Submunition_000_Buck : BulletBase
{
caliber = 0.2472;
hit = 9.5544;
};

class B_410bore_Pellets_Submunition_4_Shot : B_410bore_Pellets_Submunition_000_Buck
{
hit = 3.011;
};

class B_12Gauge_Slug_NoCartridge;
class B_410bore_Slug : B_12Gauge_Slug_NoCartridge
{
caliber = 0.6032;
};

// ACE Ammo. For some reason Air Friction Physics was inverted here.
class ACE_12Gauge_Pellets_Submunition_No0_Buck : B_12Gauge_Pellets_Submunition // Remington Express
{
hit = 26.212;
submunitionConeType[] = {"poissondisc",12};
submunitionInitSpeed = 388.62;
typicalSpeed = 388.62;
};
class ACE_12Gauge_Pellets_Submunition_No0_Buck_Deploy : B_12Gauge_Pellets_Submunition_Deploy
{
hit = 2.184;
airFriction = -0.004054;
};
class ACE_12Gauge_Pellets_Submunition_No1_Buck : B_12Gauge_Pellets_Submunition // Federal #1 Buck
{
hit = 25.531;
submunitionConeType[] = {"poissondisc",16};
submunitionInitSpeed = 403.86;
typicalSpeed = 403.86;
};
class ACE_12Gauge_Pellets_Submunition_No1_Buck_Deploy : B_12Gauge_Pellets_Submunition_Deploy
{
airFriction = -0.003800;
hit = 1.595;
};
//class ACE_12Gauge_Pellets_Submunition_No2_Buck // #2 Buck is not a readily available 12 Gauge Loading. Forums recommend Handloading lol.
class ACE_12Gauge_Pellets_Submunition_No2_Buck_Deploy : B_12Gauge_Pellets_Submunition_Deploy
{
airFriction = -0.003406;
};
//class ACE_12Gauge_Pellets_Submunition_No3_Buck // Same issue as #2 Buck
class ACE_12Gauge_Pellets_Submunition_No3_Buck_Deploy : B_12Gauge_Pellets_Submunition_Deploy
{
airFriction = -0.003101;
// Not bothering with Hit calc because I can't even find a 12 GA Shell for sale in #2 or #3
};
class ACE_12Gauge_Pellets_Submunition_No4_Bird : B_12Gauge_Pellets_Submunition // Federal HI-BIRD #4 Shot
{
submunitionConeType[] = {"poissondisc",85}; // Halved for Performane
submunitionInitSpeed = 405.384;
typicalSpeed = 405.384;
hit = 10.930;
timeToLive = 5;
};
class ACE_12Gauge_Pellets_Submunition_No4_Bird_Deploy : B_12Gauge_Pellets_Submunition_Deploy
{
airFriction = -0.001620;
hit = 0.12859;
timeToLive = 5;
};
class ACE_12Gauge_Pellets_Submunition_No4_Buck : B_12Gauge_Pellets_Submunition // Federal #4 Buck
{
hit = 16.939;    
submunitionConeType[] = {"poissondisc",41};
submunitionInitSpeed = 335.28;
typicalSpeed = 335.28;
};
class ACE_12Gauge_Pellets_Submunition_No4_Buck_Deploy : B_12Gauge_Pellets_Submunition_Deploy
{
airFriction = -0.003037;
hit = 0.413; 
};

// Creating new 000 Buck Ammo.
class ACE_12Gauge_Pellets_Submunition_No000_Buck_Deploy : B_12Gauge_Pellets_Submunition_Deploy
{
airFriction = -0.004558;
caliber = 0.55;
hit = 2.831;
};
class ACE_12Gauge_Pellets_Submunition_No000_Buck : B_12Gauge_Pellets_Submunition // Federal #000 Buck
{
caliber = 0.55;
hit = 28.312;
submunitionAmmo = "ACE_12Gauge_Pellets_Submunition_No000_Buck_Deploy";
submunitionConeAngle = 0.77;
submunitionConeType[] = {"poissondisc",10};
submunitionInitSpeed = 373.38;
typicalSpeed = 373.38;
};

// Applying ACE Values to regular Flares
class F_40mm_White : FlareBase
{
coefGravity = 0.25;
intensity = 1.25e+06;
};

// Adjusting ACE Flares
class ACE_40mm_Flare_white : F_40mm_White
{
timeToLive = 44+random 4.001;
};
// Pike
class ace_missile_clgp_pike_launch : SubmunitionBase
{
caliber = 2;
hit = 4; // Bonk (Lucky)
fuseDistance = 10.001; // To make sure it doesn't trigger before swapping to the guidance munition
submunitionInitSpeed = 60;
triggerTime = 0.05; // I would rather use triggerDistance but triggerTime overwrites it. Would have to make a new class without it.
typicalSpeed = 60;
};

class ace_missile_clgp_pike_guidance : MissileBase
{
ace_frag_charge = 132; // Extrapolated from VG-40TB as thats filled to the brim probably not unlike this warhead
ace_frag_metal = 270;
caliber = 2; // 1 > 2 Like HE
fuseDistance = 7.001; // To achieve Fuse Distance of 10
indirectHit = 11; // 8 > 11 since HE is stronger now awell.
indirectHitRange = 10; // 6 > 10 Kill Radius
maxSpeed = 173.1354839; // 150 > maxV at 2km
thrust = 7.083584229; // Calculated to travel 1997m (3m travel before deployment) in 15 Seconds, with 75% of travel at 100% thrust, then linear decline. For total range of 2k. For some reason Arma makes it travel ~300m more than calculated, so I have taken that into account
thrustTime = 15;
timeToLive = 15; // Max Range 2km. No Self Destruct Mechanism Mentioned. A little extra time to account for Launch/Corrective Movement
    class ace_missileguidance
    {
    seekerAngle = 135; // 90 > 135 To catch Lasers even when its launched steep 
    };
};

// Dragon II
class Rocket_03_AP_F;
class ace_dragon_dragonBase : Rocket_03_AP_F
{
class ace_missileguidance;
};
class ace_dragon_super : ace_dragon_dragonBase
{
fuseDistance = 65.001;
indirectHit = 10;
indirectHitRange = 2;
maxSpeed = 199.949;
maxControlRange = 1000;
timeToLive = 10.6;
typicalSpeed = 199.949;
    class ace_missileguidance : ace_missileguidance
    {
    dragonSpeed = 199.949;
    seekerAngle = 30;
    seekerMaxRange = 1000;
    serviceChargeAcceleration = 6;
    };
};
class ammo_Penetrator_Base;
class ace_dragon_penetrator_super : ammo_Penetrator_Base
{
fuseDistance = 0.001;
};

// Vorona Warheads
class M_Vorona_HEAT;
class M_Vorona_HE : M_Vorona_HEAT
{
ace_frag_charge = 5476;
ace_frag_gurney_c = 2800;
ace_frag_metal = 12047;
ace_vehicle_damage_incendiary = 0.3;
};

// Changing ACE Metis to be the Modern version aswell.
class ace_metis_HEAT : M_Vorona_HEAT
{
    class ace_missileguidance : ace_missileguidance_type_Metis
    {
    correctionDistance = 1;
    lineGainD = 10.44; // This Setting Seems to implement reactiveness but also skittishness to Input. Left to Default
    lineGainP = 4; // This Setting Seems to implement Wobble and Overall Inaccuracy. Reduced from 16 to 4
    seekerAngle = 60; // My point is having the Metis be handheld is already a crutch in and of itself, so the Missile should atleast hit where you aim.
    seekerMaxRange = 2000;
    };
};
class ace_metis_HE : M_Vorona_HE
{
    class ace_missileguidance : ace_missileguidance_type_Metis
    {
    correctionDistance = 1;
    lineGainP = 4;
    seekerAngle = 60; // Based on missileManualControlCone Setting
    seekerMaxRange = 2000;
    };
};

// M3 MAAWS Warheads.
class R_MRAAWS_HEAT_F : RocketBase
{
// maxSpeed = 210;  XM157 Framework does not work with Launchers (Currently). I will have to live with this.
ace_frag_gurney_c = 2790; // Unable to find info on Octol 70/30 besides a document stating they have almost the same characteristics. Using 75/25.
ace_frag_metal = 2900;
};
class R_MRAAWS_HEAT55_F : R_MRAAWS_HEAT_F
{
// maxSpeed = 253.899;
ace_frag_metal = 2400;
};
/*class R_MRAAWS_HE_F : R_MRAAWS_HEAT_F // HE 441D
{
maxSpeed = 240;
};*/

// Mini-Spike. Taking MAAWS For reference and downscaling appropriately as Israel is not keen on giving out freebies when it comes to Weapon Information. Theres a joke in there somewhere.
class M_Titan_AT : MissileBase
{
initTime = 0.5;
manualControl = 0;
timeToLive = 24.2; // Doubling to account for the extremely steep Attack profile.
    class ace_missileguidance
    {
    attackProfiles[] = {"DIR"};
    canVanillaLock = 0;
    defaultAttackProfile = "DIR";
    defaultNavigationType = "SPIKE";
    defaultSeekerLockMode = "LOAL";
    defaultSeekerType = "SPIKE";
    enabled = 1;
    navigationTypes[] = {"SPIKE","ZeroEffortMiss"};
    onFired = "ace_spike_fnc_onFired";
    pitchRate = 40;
    seekerAccuracy = 1;
    seekerAngle = 20;
    seekerLockModes[] = {"LOAL"};
    seekerMaxRange = 1500; // Max
    seekerMinRange = 50;
    seekerTypes[] = {"SPIKE"};
    seekLastTargetPos = 0;
    useModeForAttackProfile = 0;
    yawRate = 40;
        class camera
        {
        alwaysDesignate = 0;
        canStopDesignating = 0;
        enabled = 1;
        enabledThermalTypes[] = {"white_hot_black_cold","black_hot_white_cold"};
        fovChangeTime = 1;
        fovLevels[] = {0.2,0.05};
        initialFOV = 0.2;
        initialThermalType = "white_hot_black_cold";
        lerpFOV = 0;
        switchOnFire = 1;
            class gimbal
            {
            designateWhenStationary = 0;
            enabled = 1;
            fovGimbalSpeedModifiers[] = {1,0.1};
            gimbalAngleX = 25;
            gimbalAngleY = 60;
            gimbalInitOffsetX = 0;
            gimbalInitOffsetY = -20;
            gimbalSpeedX = 20;
            gimbalSpeedY = 20;
            stabilizeWhenMoving = 1;
            trackLockedPosition = 1;      
            };
            class reticle
            {
            bottomGate = 243100;
            centerReticle = 242000;
            controlsToAppearOnLock[] = {243101,243201,243301};
            controlsToDisappearOnLock[] = {241000};
            leftGate = 243200;
            reticleMovesWithTrack = 1;
            rightGate = 243300;
            titleRsc = "ACE_guidance_spike";
            topGate = 0;
            uiNamespaceDialogVariable = "ACE_guidance_camera_reticle";
            };
        };
        class navigationStates
        {
        states[] = {"initial","terminal"};
            class initial
            {
            navigationType = "SPIKE";
            transitionCondition = "ace_spike_fnc_midCourseTransition";
            };
            class terminal
            {
            navigationType = "ZeroEffortMiss";
            transitionCondition = "";
            };
        };
    };
};

// RPG-32
class R_PG32V_F;
class R_TBG32V_F : R_PG32V_F
{
ace_frag_charge = 2286;
ace_frag_metal = 8912;
ace_vehicle_damage_incendiary = 0.4;
};

// RPG-7
class R_PG7_F : RocketBase
{
ace_frag_charge = 375;
ace_frag_force = 1;
ace_frag_metal = 1600;
ace_vehicle_damage_incendiary = 0.7;
};

// FIM-92F
class ace_missile_manpad_stinger : M_70mm_SAAMI // FIM-92F Missile
{
ace_frag_charge = 1000;
ace_frag_metal = 3000;
fuseDistance = 80.001; // 1/2 of Min Range. No Info.
maxControlRange = 4800;
maxSpeed = 744.932;
missileLockMaxDistance = 4800;
missileLockMinDistance = 161;
timeToLive = 13.9;
typicalSpeed = 744.932;
    class ace_missileguidance : ace_missileguidance_type_Stinger 
    {
    seekerMaxRange = 4800;
    seekerMinRange = 161;
    };
};
// Titan MPRL / Like FIM-92F
class M_Titan_AA : MissileBase
{
ace_frag_charge = 1000;
ace_frag_gurney_c = 2700;
ace_frag_metal = 3000;
};

// Vanilla Grenades
class GrenadeBase;
class G_40mm_HE : GrenadeBase
{
ace_frag_metal = 171.1177; // x0.75 of Total Weight (Pls giv Info)
};
class G_40mm_HEDP : G_40mm_HE
{
ace_frag_gurney_c = 2781.6048; // Comp A5
ace_frag_metal = 172.4782;
ace_vehicle_damage_incendiary = 0.5; // >0.8 
};
// New Grenades
class SmokeShell;
class G_40mm_Smoke : SmokeShell
{
ace_frag_charge = 0;
ace_frag_classes[] = {""};
ace_frag_force = 0;
ace_frag_gurney_c = 0;
ace_frag_gurney_k = 0;
ace_frag_metal = 0;
ace_frag_skip = 1;
};
class G_40mm_UGL_HE_Airburst : G_40mm_HE
{
ace_frag_gurney_c = 2800; // Octol
ace_frag_metal = 173.4990; 
ace_frag_gurney_k = 0.6;
};
// class G_40mm_UGL_Practice : G_40mm_Smoke
class G_40mm_UGL_Practice_Poof : G_40mm_Smoke
{
ace_frag_charge = 1;
};
class G_40mm_Pellets_Submunition_Deploy : B_12Gauge_Pellets_Submunition_Deploy
{
airFriction = -0.00257322;
caliber = 0.8523;
};
class G_40mm_UGL_Buckshot : B_12Gauge_Pellets_Submunition
{
caliber = 0.8523;
};
class G_40mm_CrowdDispersal_Submunition_Deploy : B_12Gauge_Pellets_Submunition_Deploy
{
airFriction = -0.00608000;
};
// class G_40mm_UGL_CrowdDispersal : G_40mm_UGL_Buckshot Mo edit required
class G_40mm_UGL_LessLethal : G_40mm_HE
{
ace_frag_charge = 0;
ace_frag_classes[] = {""};
ace_frag_force = 0;
ace_frag_gurney_c = 0;
ace_frag_gurney_k = 0;
ace_frag_metal = 0;
ace_frag_skip = 1;
ace_vehicle_damage_incendiary = 0;
};

// GP-25 40mmCL
class G_40mm_GP25_VOG25M : G_40mm_HE
{
ace_frag_charge = 68;
ace_frag_gurney_c = 2856.1; // A-IX-1. Detonation Rate 8450. So
ace_frag_gurney_k = 0.6;
ace_frag_metal = 273;
};
class G_40mm_GP25_VOG25PM : G_40mm_GP25_VOG25M
{
ace_frag_charge = 56;
ace_frag_gurney_k = 0.5;
};
class G_40mm_GP25_VOG25PM_Boing : G_40mm_HE
{
ace_frag_charge = 56;
ace_frag_gurney_c = 2856.1;
ace_frag_gurney_k = 0.5;
ace_frag_metal = 278;
};
class G_40mm_GP25_VG40TB : G_40mm_GP25_VOG25M
{
ace_frag_charge = 125;
ace_frag_classes[] = {"ACE_frag_small","ace_frag_small_HD"};
ace_frag_gurney_c = 3000; // No idea.
ace_frag_metal = 254;
};
// class G_40mm_GP25_VUS25 : G_40mm_Smoke
class G_40mm_GP25_VUS25_Poof : G_40mm_Smoke
{
ace_frag_charge = 1;
};
class G_40mm_GP25_RLV_HEDP : G_40mm_GP25_VOG25M
{
ace_frag_charge = 40; // Guess
ace_frag_gurney_c = 2856.1; // A-IX-1
ace_frag_gurney_k = 0.5;
ace_frag_metal = 275;
};
// class G_40mm_GP25_VDG25 : G_40mm_Smoke

// QLG-10A 35mmCL
class G_35mm_QLG10A_DFS10 : G_40mm_HE
{
ace_frag_charge = 52.0625; // x0,875 of VOG
ace_frag_gurney_c = 2856.1; // VOG Values
ace_frag_gurney_k = 0.6;
ace_frag_metal = 169;
};
class G_35mm_QLG10A_DFS10A : G_35mm_QLG10A_DFS10
{
ace_frag_charge = 49;
ace_frag_gurney_k = 0.5;
};
class G_35mm_QLG10A_DFS10A_Boing : G_40mm_HE
{
ace_frag_charge = 49;
ace_frag_gurney_c = 2856.1;
ace_frag_gurney_k = 0.5;
ace_frag_metal = 172; // Rounded
};
class G_35mm_QLG10A_DFJ10 : G_35mm_QLG10A_DFS10
{
ace_frag_charge = 35;
ace_frag_gurney_c = 2856.1;
ace_frag_gurney_k = 0.5;
ace_frag_metal = 170;
};
// class G_35mm_QLG10A_DFX10 : G_40mm_Smoke
// class G_35mm_QLG10A_DFD10_White : G_40mm_Smoke
// class G_35mm_QLG10A_DFP10 : G_40mm_Smoke
class G_35mm_QLG10A_DFP10_Poof : G_40mm_Smoke
{
ace_frag_charge = 1;
};

// Handgrenades
// AN-M14
class ACE_G_M14 : SmokeShell
{
aiAmmoUsageFlags = 64;
explosionTime = 0.7+random 1.301;
hit = 1;
suppressionRadiusHit = 18;
timeToLive = 30+random 15.001;
typicalspeed = 16;
};

// Chemlights
class ACE_G_Chemlight_IR_3H : ACE_G_Chemlight_IR
{
timeToLive = 10800;
};

// Flashbangs
class ACE_G_M84 : SmokeShell
{
deflecting = 10;
explosionTime = 1.0+random 1.301;
hit = 2;
timeToLive = 5;
typicalSpeed = 23;
};
class ACE_G_CTS9 : ACE_G_M84
{
ace_grenades_flashbangIntervalMaxDeviation = 0.3;
explosionTime = 1.2+random 0.601;
hit = 2;
timeToLive = 9;
typicalSpeed = 21;
};

// Hand Flares
class ACE_G_Handflare_White : SmokeShell
{
aiAmmoUsageFlags = "1 + 2";
explosionTime = 5+random 1.001;
timeToLive = 30;
typicalSpeed = 21;
};
class ACE_G_Handflare_Green : ACE_G_Handflare_White
{
timeToLive = 60;
};
class ACE_G_Handflare_Red : ACE_G_Handflare_White
{
timeToLive = 60;
};

// Frags
class GrenadeHand : Grenade
{
ace_frag_charge = 186.1713;
ace_frag_gurney_c = 2700;
ace_frag_gurney_k = 0.6;
ace_frag_metal = 396.8933;
};
class mini_Grenade : GrenadeHand
{
ace_frag_charge = 63.7937; // Basing proportion off of M67
ace_frag_gurney_c = 2700; // ?
ace_frag_gurney_k = 0.6;
ace_frag_metal = 136;
};

// Mines
class APERSMine_Range_Ammo : MineBase
{
ace_frag_charge = 36.8543;
ace_frag_gurney_c = 2830;
ace_frag_gurney_k = 0.6;
ace_frag_metal = 175.767;
};
// class ATMine_Range_Ammo : MineBase Frag Skip
class APERSBoundingMine_Range_Ammo : BoundingMineBase
{
ace_frag_charge = 170.0971;
ace_frag_gurney_c = 2700;
ace_frag_gurney_k = 0.5;
ace_frag_metal = 997.9032;
};
// class SLAMDirectionalMine_Wire_Ammo : DirectionalBombBase
class ClaymoreDirectionalMine_Remote_Ammo : DirectionalBombBase
{
ace_frag_charge = 500; // ?
ace_frag_fragCount = 500;
ace_frag_gurney_c = 2700;
ace_frag_gurney_k = 0.6;
ace_frag_metal = 529.191;
};
class APERSTripMine_Wire_Ammo : DirectionalBombBase // Circumvented
{
ace_frag_charge = 410;
ace_frag_gurney_c = 2440;
ace_frag_gurney_k = 0.5;
ace_frag_metal = 2000;
};
class APERSTripMine_Wire_Ammo_Deploy : GrenadeHand
{
ACE_damageType = "explosive";
ace_explosives_defuseObjectPosition[] = {-1.415,0,0.12};
ace_frag_charge = 410;
ace_frag_gurney_c = 2440;
ace_frag_gurney_k = 0.5;
ace_frag_metal = 2000;
ace_minedetector_detectable = 1;
};
class APERSTripMine_Wire_Ammo_Init : APERSTripMine_Wire_Ammo
{
defaultMagazine = "APERSTripMine_Wire_Mag";
ace_frag_skip = 1;
};
class IEDLandBig_Remote_Ammo : PipeBombBase
{
ace_frag_charge = 10466.6667;
ace_frag_gurney_c = 2840;
ace_frag_gurney_k = 0.6;
ace_frag_metal = 29040;
};
class IEDLandSmall_Remote_Ammo : PipeBombBase
{
ace_frag_charge = 7850;
ace_frag_gurney_c = 2840;
ace_frag_gurney_k = 0.6;
ace_frag_metal = 21780;
};
class IEDUrbanBig_Remote_Ammo : PipeBombBase
{
ace_frag_charge = 15350;
ace_frag_gurney_c = 2840;
ace_frag_gurney_k = 0.6;
ace_frag_metal = 29880;
};
class IEDUrbanSmall_Remote_Ammo : PipeBombBase
{
ace_frag_charge = 7500;
ace_frag_gurney_c = 2440;
ace_frag_gurney_k = 0.6;
ace_frag_metal = 8100;
};
// Rake
class RakeMine_Ammo : APERSMineDispenser_Ammo
{
ACE_damageType = "punch";
ace_explosives_defuseTime = 1;
ace_explosives_explodeOnDefuseChance = 0;
};
class ACE_APERSMine_ToePopper_Ammo : APERSMine_Range_Ammo
{
ace_explosives_explodeOnDefuseChance = 1;
ace_frag_charge = 22;
ace_frag_gurney_c = 2830;
ace_frag_gurney_k = 0.6;
ace_frag_metal = 204.1166;
hit = 8;
indirectHit = 8;
};
// Throwables
class ACE_SatchelCharge_Remote_Ammo_Thrown : Grenade
{
explosionTime = 10;
mineInconspicuousness = 5;
timeToLive = 15;
deflectionSlowDown = 1;
};
class ACE_DemoCharge_Remote_Ammo_Thrown : ACE_SatchelCharge_Remote_Ammo_Thrown
{
explosionTime = 5;
hit = 770;
indirectHit = 770;
mineInconspicuousness = 15;
timeToLive = 10;
};
class GrenadeHand_stone : GrenadeHand
{
ace_grenades_pullPinSound[] = {""};
};