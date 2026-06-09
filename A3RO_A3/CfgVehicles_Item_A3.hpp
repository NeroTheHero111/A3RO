// Binoculars
// MK VIIE
class Item_Laserdesignator_02_ghex_F : Item_Base_F
{
displayName = "Mark VIIE (Green Hex)";
};
class Item_Laserdesignator_02 : Item_Base_F
{
displayName = "Mark VIIE (Hex)";
};
// JIM Compact
class Item_Laserdesignator_01_khk_F : Item_Base_F
{
displayName = "Laser Designator (Khaki)";
};
class Item_Laserdesignator_03 : Item_Base_F
{
displayName = "Laser Designator (Olive)";
};
class Item_Laserdesignator : Item_Base_F
{
displayName = "JIM Compact (Sand)";
};
// Creating Cadet Grey
class Item_Laserdesignator_01_grey_F : Item_Base_F
{
displayName = "JIM Compact (Cadet Grey)";
model = "\A3\Weapons_F\DummyBinoc.p3d";
scope = 2;
scopeCurator = 2;
vehicleClass = "Items";
	class TransportItems
	{
		class Laserdesignator_01_grey_F
		{
		count = 1;
		name = "Laserdesignator_01_grey_F";
		};
	};
};
class MineBase;
// M22
class Item_Binocular : Item_Base_F
{
displayName = "M22 7x50";
};
// TRIGR
class Item_Rangefinder : Item_Base_F
{
displayName = "TRIGR®";
};
// Radio 
class Item_ItemRadio : Item_Base_F
{
displayName = "MOTOTRBO Ion 2";
};
// Mines
class APERSBoundingMine : MineBase 
{
displayName = "M26";
};
class Claymore_F : MineBase
{
displayName = "MM-1";
};
class DemoCharge_F : MineBase
{
displayName = "M112 (4x)";
};
class SLAMDirectionalMine : MineBase
{
displayName = "M4 SLAM (Side-Attack)";
};
class APERSMine : MineBase
{
displayName = "VS-50";
};
class APERSTripMine : MineBase
{
displayName = "PMR-3";
};
class ATMine : MineBase
{
displayName = "M15";
};
class SatchelCharge_F : MineBase
{
displayName = "M183";
};
class IEDLandBig_F : MineBase
{
displayName = "IED (Dug-In, Large)";
};
class IEDUrbanBig_F : MineBase
{
displayName = "IED (Urban, Large)";
};
class UnderwaterMineAB : MineBase
{
displayName = "MN-103 Manta";
};
class UnderwaterMine : MineBase
{
displayName = "Mark 6";
};
class UnderwaterMinePDM : MineBase
{
displayName = "PDM-1M";
};
class IEDLandSmall_F : MineBase
{
displayName = "IED (Dug-In, Medium)";
};
class IEDUrbanSmall_F : MineBase
{
displayName = "IED (Urban, Small)";
};
class APERSMineDispenser_F : SatchelCharge_F
{
displayName = "M8 Tarantula (Dispenser)";
};
class APERSMineDispenser_Mine_F : APERSMine
{
displayName = "M8 Tarantula (Mine)";
};
// class TrainingMine_01_F
// Creating Mines
class FlareTripMine_F : MineBase
{
_generalMacro = "FlareTripMine_F";
ammo = "FlareTripMine_Wire_Ammo_Init";
author = "Bohemia Interactive";
displayName = "M50A1";
editorPreview = "\A3RO_A3\Textures\UI\gear_mine_flare_tripwire_icon.jpg";
icon = "iconExplosiveAP";
mapSize = 3.06;
model = "\A3\Weapons_F\explosives\Flare_tripwire";
picture = "\A3\Weapons_F\Data\clear_empty.paa";
scope = 2;
};
class RakeMine_F : MineBase
{
_generalMacro = "RakeMine_F";
ammo = "RakeMine_Ammo";
author = "Bohemia Interactive";
displayName = "Rake";
editorPreview = "\A3RO_A3\Textures\UI\gear_mine_Rake_icon.jpg";
icon = "iconExplosiveAP";
mapSize = 3.06;
model = "\A3\Weapons_F\mines\rake";
picture = "\A3\Weapons_F\Data\clear_empty.paa";
scope = 2;
};
// Adding New Mines to Zeus Minefield Module
class ModuleMine_FlareTripMine_F : ModuleMine_F
{
_generalMacro = "ModuleMine_FlareTripMine_F";
author = "Bohemia Interactive";
displayName = "M50A1";
explosive = "FlareTripMine_Wire_Ammo_Init";
icon = "iconExplosiveAP";
scopeCurator = 2;
};
class ModuleMine_RakeMine_F : ModuleMine_F
{
_generalMacro = "ModuleMine_RakeMine_F";
author = "Bohemia Interactive";
displayName = "Rake";
explosive = "RakeMine_Ammo";
icon = "iconExplosiveAP";
scopeCurator = 2;
};
// Editing Name in existing Mine Module Entries
class ModuleMine_APERSBoundingMine_F : ModuleMine_F
{
displayName = "M26";
};
class ModuleMine_APERSMine_F : ModuleMine_F
{
displayName = "VS-50";
};
class ModuleMine_APERSTripMine_F : ModuleMine_F
{
displayName = "PMR-3";
};
class ModuleMine_ATMine_F : ModuleMine_F
{
displayName = "M15";
};
class ModuleMine_SLAMDirectionalMine_F : ModuleMine_F
{
displayName = "M4 SLAM (Side-Attack)";	
};
class ModuleMine_UnderwaterMine_F : ModuleMine_F
{
displayName = "Mark 6 (Naval Mine)"; // Adding descriptor
};
class ModuleMine_UnderwaterMineAB_F : ModuleMine_F
{
displayName = "MN-103 Manta (Naval Mine)";
};
class ModuleMine_UnderwaterMinePDM_F : ModuleMine_F
{
displayName = "PDM-1M (Naval Mine)";
};
class ModuleTrainingMine_01_F : ModuleMine_APERSMine_F
{
displayName = "Training Mine";
};
class ModuleExplosive_APERSMineDispenser_F : ModuleMine_APERSMine_F
{
displayName = "M8 Tarantula (Dispenser)";
};
class ModuleAPERSMineDispenser_Mine_F : ModuleMine_APERSMine_F
{
displayName = "M8 Tarantula (Mine)";
};
// Adding Mines to Minefield 3DEN Module, editing existing names.
class Site_Minefield : Site_F
{
	class Arguments
	{
		class minesType
		{
			class values
			{
				class APERSBoundingMine
				{
				default = 0;
				name = "M26";
				value = "APERSBoundingMine";
				};
				class APERSMine
				{
				default = 1; // Changing to Default
				name = "VS-50";
				value = "APERSMine";
				};			
				class APERSTripMine
				{
				default = 0;
				name = "PMR-3";
				value = "APERSTripMine";
				};
				class ATMine
				{
				default = 0;
				name = "M15";
				value = "ATMine";
				};
				class SLAMDirectionalMine
				{
				default = 0;
				name = "M4 SLAM (Side-Attack)";
				value = "SLAMDirectionalMine";
				};
				class TrainingMine_01_F
				{
				default = 0;
				name = "Training Mine";
				value = "TrainingMine_01_F";
				};
				class UnderwaterMine
				{
				default = 0;
				name = "Mark 6 (Naval Mine)";
				value = "UnderwaterMine";
				};
				class UnderwaterMineAB
				{
				default = 0;
				name = "MN-103 Manta (Naval Mine)";
				value = "UnderwaterMineAB";
				};
				class UnderwaterMinePDM // Missing
				{
				default = 0;
				name = "PDM-1M (Naval Mine)";
				value = "UnderwaterMinePDM";
				};
				class FlareTripMine_F
				{
				default = 0;
				name = "M50A1";
				value = "FlareTripMine_F";
				};
				class RakeMine // Now THATS funny
				{
				default = 0;
				name = "Rake";
				value = "UnderwaterMineAB";
				};
				class APERSMineDispenser_F // Adding these two
				{
				default = 0;
				name = "M8 Tarantula (Dispenser)";
				value = "APERSMineDispenser_F";
				};
				class APERSMineDispenser_Mine_F
				{
				default = 0;
				name = "M8 Tarantula (Mine)";
				value = "APERSMineDispenser_Mine_F";
				};
			};
		};
	};
};