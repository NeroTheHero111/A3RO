// 3den Editor Items

// MX. Changing: Name.
class Weapon_arifle_MX_F: Weapon_Base_F
{
displayName = "ACR Carbine (Sand)";
};
class Weapon_arifle_MX_Black_F: Weapon_Base_F
{
displayName = "ACR Carbine";
};	
class Weapon_arifle_MX_khk_F: Weapon_Base_F
{
displayName = "ACR Carbine (Khaki)";
};

// MX 3GL. Changing: Name.
class Weapon_arifle_MX_GL_F: Weapon_Base_F
{
displayName = "ACR Carbine 3GL (Sand)";
};		
class Weapon_arifle_MX_GL_Black_F: Weapon_Base_F
{
displayName = "ACR Carbine 3GL";
};
class Weapon_arifle_MX_GL_khk_F: Weapon_Base_F
{
displayName = "ACR Carbine 3GL (Khaki)";
};

// MX SW. Changing: Name
class Weapon_arifle_MX_SW_F: Weapon_Base_F
{
displayName = "ACR HB (Sand)";
	class TransportMagazines
	{
        delete 100Rnd_65x39_caseless_mag_Tracer;
		class 100Rnd_65x39_T4_mag
		{
		magazine = "100Rnd_65x39_T4_mag";
		count = 1;
		};
	};	
};		
class Weapon_arifle_MX_SW_Black_F: Weapon_Base_F
{
displayName = "ACR HB";
	class TransportMagazines
	{
        delete 100Rnd_65x39_caseless_black_mag_tracer;
		class 100Rnd_65x39_T4_black_mag
		{
		magazine = "100Rnd_65x39_T4_black_mag";
		count = 1;
		};
	};	
};
class Weapon_arifle_MX_SW_khk_F: Weapon_Base_F
{
displayName = "ACR HB (Khaki)";
	class TransportMagazines
	{
        delete 100Rnd_65x39_caseless_khaki_mag_tracer;
		class 100Rnd_65x39_T4_khaki_mag
		{
		magazine = "100Rnd_65x39_T4_khaki_mag";
		count = 1;
		};
	};	
};	

// MXM. Changing: Name. Subcategory.
class Weapon_arifle_MXM_F: Weapon_Base_F
{
displayName = "ACR SPR (Sand)";
editorSubcategory = "EdSubcat_SniperRifles";
	class TransportMagazines
	{
        delete 30Rnd_65x39_caseless_mag;
		class 30Rnd_65x39_NT_mag
		{
		magazine = "30Rnd_65x39_NT_mag";
		count = 1;
		};
	};	
};	
class Weapon_arifle_MXM_Black_F: Weapon_Base_F
{
displayName = "ACR SPR";
editorSubcategory = "EdSubcat_SniperRifles";
	class TransportMagazines
	{
        delete 30Rnd_65x39_caseless_black_mag;
		class 30Rnd_65x39_NT_black_mag
		{
		magazine = "30Rnd_65x39_NT_black_mag";
		count = 1;
		};
	};	
};	
class Weapon_arifle_MXM_khk_F: Weapon_Base_F
{
displayName = "ACR SPR (Khaki)";
editorSubcategory = "EdSubcat_SniperRifles";
	class TransportMagazines
	{
        delete 30Rnd_65x39_caseless_khaki_mag;
		class 30Rnd_65x39_NT_khaki_mag
		{
		magazine = "30Rnd_65x39_NT_khaki_mag";
		count = 1;
		};
	};	
};

// MXC. Changing: Name
class Weapon_arifle_MXC_F: Weapon_Base_F
{
displayName = "ACR Entry Carbine (Sand)";
};
class Weapon_arifle_MXC_Black_F: Weapon_Base_F
{
displayName = "ACR Entry Carbine";
};		
class Weapon_arifle_MXC_khk_F: Weapon_Base_F
{
displayName = "ACR Entry Carbine (Khaki)";
};