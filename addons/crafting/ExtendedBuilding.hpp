/* not added to my server uncomment to use
class ConcreteMixer: Exile_AbstractCraftingRecipe
{
	name = "Concrete Mixer";
	pictureItem = "Exile_ConcreteMixer_Kit";
	returnedItems[] = 
	{
		{1, "Exile_ConcreteMixer_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"},
		{3, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalWire"},
		{2, "Exile_Item_DuctTape"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "EBM Misc";
};
*/
class FlagCSAT: Exile_AbstractCraftingRecipe
{
	name = "Flag CSAT";
	pictureItem = "Flag_CSAT_F_Kit";
	returnedItems[] = 
	{
		{1, "Flag_CSAT_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_DuctTape"},
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};
	category = "EBM Signs";
};

class GarbageContainer: Exile_AbstractCraftingRecipe
{
	name = "Garbage Container";
	pictureItem = "Land_GarbageContainer_closed_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_GarbageContainer_closed_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "EBM Misc";
};

class MetalRack4Layers: Exile_AbstractCraftingRecipe
{
	name = "Metal Rack 4 Layers";
	pictureItem = "Land_Metal_rack_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Metal_rack_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "EBM Misc";
};

class WaterSink: Exile_AbstractCraftingRecipe
{
	name = "Water Sink";
	pictureItem = "Land_Sink_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sink_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "EBM Misc";
};

class PavementWideCorner: Exile_AbstractCraftingRecipe
{
	name = "Pavement Wide Corner";
	pictureItem = "Land_Pavement_wide_corner_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pavement_wide_corner_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "EBM Misc";
};

class PavementWide: Exile_AbstractCraftingRecipe
{
	name = "Pavement Wide";
	pictureItem = "Land_Pavement_wide_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pavement_wide_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "EBM Misc";
};

class PavementNarrowCorner: Exile_AbstractCraftingRecipe
{
	name = "Pavement Narrow Corner";
	pictureItem = "Land_Pavement_narrow_corner_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pavement_narrow_corner_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	
	category = "EBM Misc";
};

class PavementNarrow: Exile_AbstractCraftingRecipe
{
	name = "Pavement Narrow";
	pictureItem = "Land_Pavement_narrow_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pavement_narrow_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "EBM Misc";
};

class AltisMap: Exile_AbstractCraftingRecipe
{
	name = "Altis Map";
	pictureItem = "MapBoard_altis_F_Kit";
	returnedItems[] = 
	{
		{1, "MapBoard_altis_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WoodPlank"},
	};
	tools[] =
	{
		"Exile_Item_Handsaw"
	};
	category = "EBM Misc";
};

class CampingTable: Exile_AbstractCraftingRecipe
{
	name = "Camping Table";
	pictureItem = "Land_CampingTable_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CampingTable_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "EBM Misc";
};

class CampingLight: Exile_AbstractCraftingRecipe
{
	name = "Campinglight";
	pictureItem = "Land_Camping_Light_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Camping_Light_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "EBM Lamps";
};

class CampingChairV2: Exile_AbstractCraftingRecipe
{
	name = "Camping Chair V2";
	pictureItem = "Land_CampingChair_V2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CampingChair_V2_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	
	category = "EBM Misc";
};

class CampingChairV1: Exile_AbstractCraftingRecipe
{
	name = "Camping Chair V1";
	pictureItem = "Land_CampingChair_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CampingChair_V1_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "EBM Misc";
};

class SmallStone2: Exile_AbstractCraftingRecipe
{
	name = "Small Stone 2";
	pictureItem = "Land_Small_Stone_02_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Small_Stone_02_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	requiresConcreteMixer = 1;
	
	category = "EBM Flora";
};

class SolarPanel2: Exile_AbstractCraftingRecipe
{
	name = "Solar Panel 2";
	pictureItem = "Land_spp_Panel_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_spp_Panel_F_Kit"},
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};	
	category = "EBM Buildings";
};

class SolarPanel: Exile_AbstractCraftingRecipe
{
	name = "Solar Panel";
	pictureItem = "Land_SolarPanel_2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_SolarPanel_2_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};	
	category = "EBM Buildings";
};

class SleepingBag: Exile_AbstractCraftingRecipe
{
	name = "Sleeping Bag";
	pictureItem = "Land_Sleeping_bag_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sleeping_bag_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_Rope"},
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};	
	category = "EBM Misc";
};

class SharpStone2: Exile_AbstractCraftingRecipe
{
	name = "Sharp Stone 2";
	pictureItem = "Land_SharpStone_02_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_SharpStone_02_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};	
	requiresConcreteMixer = 1;
	category = "EBM Flora";
};

class SharpStone1: Exile_AbstractCraftingRecipe
{
	name = "Sharp Stone 1";
	pictureItem = "Land_SharpStone_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_SharpStone_01_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};	
	requiresConcreteMixer = 1;
	category = "EBM Flora";
};

class Pier1: Exile_AbstractCraftingRecipe
{
	name = "Long Pier";
	pictureItem = "Land_nav_pier_m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_nav_pier_m_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};	
	requiresConcreteMixer = 1;
	category = "EBM Buildings";
};

class Bush: Exile_AbstractCraftingRecipe
{
	name = "Bush";
	pictureItem = "Exile_Plant_GreenBush_Kit";
	returnedItems[] = 
	{
		{1, "Exile_Plant_GreenBush_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{5, "Exile_Item_Woodlog"},
	};
	
	tools[] =
	{
		"Exile_Item_Pliers"
	};	
	category = "EBM Flora";
};

class TransmissionTower: Exile_AbstractCraftingRecipe
{
	name = "Transmission Tower";
	pictureItem = "Land_TTowerSmall_1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TTowerSmall_1_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"},
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};	
	category = "EBM Buildings";
};

class SignUnexplodedAmmo: Exile_AbstractCraftingRecipe
{
	name = "Unexploded Ammo Sign";
	pictureItem = "Land_Sign_WarningUnexplodedAmmo_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sign_WarningUnexplodedAmmo_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Screwdriver"
	};	
	category = "EBM Signs";
};

class CastleTower: Exile_AbstractCraftingRecipe
{
	name = "Castle Tower";
	pictureItem = "Land_Castle_01_tower_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Castle_01_tower_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};	
	requiresConcreteMixer = 1;
	category = "EBM Buildings";
};

class BeachBooth: Exile_AbstractCraftingRecipe
{
	name = "Beach Booth";
	pictureItem = "Land_BeachBooth_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BeachBooth_01_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_Woodlog"},
		{1, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};	
	category = "EBM Misc";
};

class Barracks: Exile_AbstractCraftingRecipe
{
	name = "Barracks";
	pictureItem = "Land_i_Barracks_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_i_Barracks_V1_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "EBM Buildings";
};

class AirportTower: Exile_AbstractCraftingRecipe
{
	name = "Airport Tower";
	pictureItem = "Land_Airport_Tower_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Airport_Tower_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_Woodlog"},
		{2, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "EBM Buildings";
};

class Shabbylamp: Exile_AbstractCraftingRecipe
{
	name = "Shabby Lamp";
	pictureItem = "Land_LampShabby_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_LampShabby_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{8, "Exile_Item_Woodlog"},
		{2, "Exile_Item_ExtensionCord"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_LightBulb"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Handsaw"
	};
	category = "EBM Lamps";
};

class Sunshade: Exile_AbstractCraftingRecipe
{
	name = "Sunshade";
	pictureItem = "Land_Sunshade_04_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sunshade_04_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Woodlog"},
		{1, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "EBM Misc";
};

class Sunchair: Exile_AbstractCraftingRecipe
{
	name = "Sunchair";
	pictureItem = "Land_Sun_chair_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sun_chair_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Woodlog"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "EBM Misc";
};

class SolarTower: Exile_AbstractCraftingRecipe
{
	name = "Solar Tower";
	pictureItem = "Land_spp_Tower_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_spp_Tower_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_Cement"},
		{4, "Exile_Item_LightBulb"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
		"Exile_Item_Grinder"
	};
	category = "EBM Buildings";
};

class MetalShed: Exile_AbstractCraftingRecipe
{
	name = "Metal Shed";
	pictureItem = "Land_Metal_Shed_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Metal_Shed_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_Woodlog"},
		{4, "Exile_Item_MetalWire"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "EBM Buildings";
};

class AirplaneHangar: Exile_AbstractCraftingRecipe
{
	name = "Airplane Hangar";
	pictureItem = "Land_Hangar_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Hangar_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalWire"},
		{4, "Exile_Item_DuctTape"},
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "EBM Buildings";
};

class BigDome: Exile_AbstractCraftingRecipe
{
	name = "Big Dome";
	pictureItem = "Land_Dome_Big_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Dome_Big_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalWire"},
		{4, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "EBM Buildings";
};

class StreetLamp: Exile_AbstractCraftingRecipe
{
	name = "Street Lamp";
	pictureItem = "Land_LampStreet_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_LampStreet_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_ExtensionCord"},
		{1, "Exile_Item_LightBulb"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "EBM Lamps";
};

class TavernMiddle: Exile_AbstractCraftingRecipe
{
	name = "Tavern middle";
	pictureItem = "Land_i_Addon_03mid_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_i_Addon_03mid_V1_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{10, "Exile_Item_WoodPlank"},
		{5, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	category = "EBM Buildings";
};

class Tavern: Exile_AbstractCraftingRecipe
{
	name = "Tavern";
	pictureItem = "Land_i_Addon_03_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_i_Addon_03_V1_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{10, "Exile_Item_WoodPlank"},
		{5, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	
	category = "EBM Buildings";
};

class SeaWall: Exile_AbstractCraftingRecipe
{
	name = "Sea Wall";
	pictureItem = "Land_Sea_Wall_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sea_Wall_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Flora";
};

class Industryfence3pts: Exile_AbstractCraftingRecipe
{
	name = "Industryfence 3pts";
	pictureItem = "Land_IndFnc_9_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_IndFnc_9_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Walls";
};

class Industryfence: Exile_AbstractCraftingRecipe
{
	name = "Industryfence";
	pictureItem = "Land_IndFnc_3_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_IndFnc_3_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Walls";
};	

class CargoContainerSmall: Exile_AbstractCraftingRecipe
{
	name = "Cargo Container Small";
	pictureItem = "Land_CargoBox_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CargoBox_V1_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "EBM Container";
};	

class BlockConcrete: Exile_AbstractCraftingRecipe
{
	name = "Concrete Block";
	pictureItem = "BlockConcrete_F_Kit";
	returnedItems[] = 
	{
		{1, "BlockConcrete_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Misc";
};	

class Chair: Exile_AbstractCraftingRecipe
{
	name = "Chair";
	pictureItem = "Land_ChairWood_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ChairWood_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	category = "EBM Misc";
};	

class Pierbox: Exile_AbstractCraftingRecipe
{
	name = "Pierbox";
	pictureItem = "Land_Pier_Box_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pier_Box_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{4, "Exile_Item_Sand"},
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Buildings";
};	

class Toiletbox: Exile_AbstractCraftingRecipe
{
	name = "Toiletbox";
	pictureItem = "Land_ToiletBox_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ToiletBox_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	category = "EBM Misc";
};	
		
class Table: Exile_AbstractCraftingRecipe
{
	name = "Table";
	pictureItem = "Land_TableDesk_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TableDesk_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{10, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	category = "EBM Misc";
};			

class Slumplane: Exile_AbstractCraftingRecipe
{
	name = "Slumplane";
	pictureItem = "Land_Cargo_addon02_V2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Cargo_addon02_V2_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{4, "Exile_Item_Woodlog"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};	
	category = "EBM Buildings";
};		

class Radarsmall: Exile_AbstractCraftingRecipe
{
	name = "Small Radar";
	pictureItem = "Land_Radar_Small_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Radar_Small_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{5, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};	
	category = "EBM Buildings";
};
		
class Floodlightdouble: Exile_AbstractCraftingRecipe
{
	name = "Floodlight double";
	pictureItem = "Land_PortableLight_double_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_PortableLight_double_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{6, "Exile_Item_LightBulb"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};	
	category = "EBM Lamps";
};

class CncWallSmall8m: Exile_AbstractCraftingRecipe
{
	name = "Small concrete wall 8m";
	pictureItem = "Land_Concrete_SmallWall_8m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Concrete_SmallWall_8m_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Walls";
};

class CncWallSmall4m: Exile_AbstractCraftingRecipe
{
	name = "Small concrete wall 4m";
	pictureItem = "Land_Concrete_SmallWall_4m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Concrete_SmallWall_4m_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Walls";
};

class MilitaryVehicle: Exile_AbstractCraftingRecipe
{
	name = "Military Vehicle Sign";
	pictureItem = "Land_Sign_WarningMilitaryVehicles_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sign_WarningMilitaryVehicles_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "EBM Signs";
};

class MilSignSmall: Exile_AbstractCraftingRecipe
{
	name = "Military Sign Small";
	pictureItem = "Land_Sign_WarningMilAreaSmall_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sign_WarningMilAreaSmall_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "EBM Signs";
};

class Watersource: Exile_AbstractCraftingRecipe
{
	name = "Watersource";
	pictureItem = "Land_Water_source_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Water_source_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Misc";
};

class TouristShelter: Exile_AbstractCraftingRecipe
{
	name = "Tourist Shelter";
	pictureItem = "Land_TouristShelter_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TouristShelter_01_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_Cement"},
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Buildings";
};

class BigShed: Exile_AbstractCraftingRecipe
{
	name = "Big Shed";
	pictureItem = "Land_Shed_Big_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Shed_Big_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Foolbox"
	};
	category = "EBM Buildings";
};

class crashbarrier: Exile_AbstractCraftingRecipe
{
	name = "Crashbarrier";
	pictureItem = "Land_Crash_barrier_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Crash_barrier_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
	};
	category = "EBM Buildings";
};

class cncbarriermedium: Exile_AbstractCraftingRecipe
{
	name = "CNC Barrier Medium";
	pictureItem = "Land_CncBarrierMedium_F_Kit";
	returnedItems[] = 
	{
		{2, "Land_CncBarrierMedium_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Walls";
};

class cncbarrier1: Exile_AbstractCraftingRecipe
{
	name = "CNC Barrier 1";
	pictureItem = "Land_CncWall1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CncWall1_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Walls";
};

class Airportlamp: Exile_AbstractCraftingRecipe
{
	name = "Airportlamp";
	pictureItem = "Land_LampAirport_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_LampAirport_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_ExtensionCord"},
		{4, "Exile_Item_LightBulb"},
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
	};
	category = "EBM Lamps";
};

class LampHalogen: Exile_AbstractCraftingRecipe
{
	name = "Halogen Base Lamp";
	pictureItem = "Land_LampHalogen_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_LampHalogen_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{10, "Exile_Item_LightBulb"},
		{5, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
	};
	category = "EBM Lamps";
};

class TentHangar: Exile_AbstractCraftingRecipe
{
	name = "Tent Hangar";
	pictureItem = "Land_TentHangar_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TentHangar_V1_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_Woodlog"},
		{2, "Exile_Item_MetalPole"},
		{3, "Exile_Item_Rope"},
		{5, "Exile_Item_DuctTape"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Handsaw",
		"Exile_Item_Screwdriver"
	};
	category = "EBM Buildings";
};

class TentDome: Exile_AbstractCraftingRecipe
{
	name = "Tent Dome";
	pictureItem = "Land_TentDome_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TentDome_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_Woodlog"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_DuctTape"},
	};
	
	category = "EBM Misc";
};

class Platform: Exile_AbstractCraftingRecipe
{
	name = "Platform";
	pictureItem = "Land_GH_Platform_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_GH_Platform_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Buildings";
};

class Garage: Exile_AbstractCraftingRecipe
{
	name = "Garage";
	pictureItem = "Land_i_Garage_V2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_i_Garage_V2_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_Cement"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
		"Exile_Item_Screwdriver"
	};
	requiresConcreteMixer = 1;
	category = "EBM Buildings";
};

class CNCStairs: Exile_AbstractCraftingRecipe
{
	name = "CNC Stairs";
	pictureItem = "Land_GH_Stairs_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_GH_Stairs_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Buildings";
};

class CargoContainerSandSmall: Exile_AbstractCraftingRecipe
{
	name = "Cargo container Sand Small";
	pictureItem = "Land_Cargo20_sand_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Cargo20_sand_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
	};
	category = "EBM Container";
};

class Brokenshed: Exile_AbstractCraftingRecipe
{
	name = "Broken Shed";
	pictureItem = "Land_u_Addon_01_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_u_Addon_01_V1_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"},
		{4, "Exile_Item_Cement"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	category = "EBM Buildings";
};

class Razorwire: Exile_AbstractCraftingRecipe
{
	name = "Razorwire";
	pictureItem = "Land_Razorwire_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Razorwire_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{6, "Exile_Item_MetalWire"},
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Grinder"
	};
	category = "EBM Walls";
};

class SmallShed: Exile_AbstractCraftingRecipe
{
	name = "Small Shed";
	pictureItem = "Land_Shed_Small_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Shed_Small_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	category = "EBM Buildings";
};

class FuelstationShed: Exile_AbstractCraftingRecipe
{
	name = "Fuelstation Shed";
	pictureItem = "Land_FuelStation_Shed_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_FuelStation_Shed_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_WoodPlank"},
		{4, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "EBM Buildings";
};

class CNCWallType2: Exile_AbstractCraftingRecipe
{
	name = "CNC Wall Type 2";
	pictureItem = "Land_CncWall4_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CncWall4_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Walls";
};

class CNCWall: Exile_AbstractCraftingRecipe
{
	name = "CNC Wall";
	pictureItem = "Land_Wall_IndCnc_2deco_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Wall_IndCnc_2deco_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Walls";
};


class CNCShelter: Exile_AbstractCraftingRecipe
{
	name = "CNC Shelter";
	pictureItem = "Land_CncShelter_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CncShelter_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Walls";
};


class SlumContainer: Exile_AbstractCraftingRecipe
{
	name = "Slum Container";
	pictureItem = "Land_cargo_house_slum_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_cargo_house_slum_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "EBM Buildings";
};

class HugeContainer: Exile_AbstractCraftingRecipe
{
	name = "Huge Container";
	pictureItem = "Land_Cargo40_light_green_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Cargo40_light_green_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{6, "Exile_Item_JunkMetal"},
		{6, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "EBM Container";
};

class CargoHouse: Exile_AbstractCraftingRecipe
{
	name = "Military Cargo House";
	pictureItem = "Land_Cargo_House_V2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Cargo_House_V2_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_JunkMetal"},
		{6, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "EBM Buildings";
};

class ShootingPos: Exile_AbstractCraftingRecipe
{
	name = "Shooting Pos";
	pictureItem = "ShootingPos_F_Kit";
	returnedItems[] = 
	{
		{1, "ShootingPos_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{4, "Exile_Item_Woodlog"},
	};
	
	category = "EBM Misc";
};

class BagBunkerBig: Exile_AbstractCraftingRecipe
{
	name = "Bag Bunker Big";
	pictureItem = "Land_BagBunker_Large_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BagBunker_Large_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_Sand"},
		{5, "Exile_Item_MetalWire"},
		{4, "Exile_Item_WoodPlank"},
	};
	tools[] =
	{
		"Exile_Item_Pliers",
	};
	category = "EBM Buildings";
};

class Pumpstation: Exile_AbstractCraftingRecipe
{
	name = "Pumpstation";
	pictureItem = "Land_FuelStation_Feed_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_FuelStation_Feed_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_WaterBarrelKit"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
	};
	category = "EBM Misc";
};

class CargoTowerBig: Exile_AbstractCraftingRecipe
{
	name = "Cargo Tower Big";
	pictureItem = "Land_Cargo_Tower_V2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Cargo_Tower_V2_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{6, "Exile_Item_MetalBoard"},
		{1, "Land_Cargo_House_V2_F_Kit"},
		{6, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
	};
	category = "EBM Buildings";
};

class MetalShelf: Exile_AbstractCraftingRecipe
{
	name = "Metal Shelf";
	pictureItem = "Land_ShelvesMetal_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ShelvesMetal_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_WoodPlank"},
		{5, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
	};
	category = "EBM Container";
};

class RustyTank: Exile_AbstractCraftingRecipe
{
	name = "RustyTank";
	pictureItem = "Land_Tank_rust_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Tank_rust_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_WaterBarrelKit"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
	};
	category = "EBM Misc";
};

class Steelfence: Exile_AbstractCraftingRecipe
{
	name = "Steelfence";
	pictureItem = "Land_Wall_Tin_4_Kit";
	returnedItems[] = 
	{
		{1, "Land_Wall_Tin_4_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
	};
	category = "EBM Misc";
};

class Pier: Exile_AbstractCraftingRecipe
{
	name = "Pier";
	pictureItem = "Land_Pier_small_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pier_small_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{10, "Exile_Item_Woodlog"},
		{5, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	category = "EBM Buildings";
};

class LandCargoPatrol: Exile_AbstractCraftingRecipe
{
	name = "Land Cargo Patrol";
	pictureItem = "Land_Cargo_Patrol_V2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Cargo_Patrol_V2_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
	};
	category = "EBM Buildings";
};

class CncWallMil4M: Exile_AbstractCraftingRecipe
{
	name = "Concrete Wall Military 4m";
	pictureItem = "Land_Mil_WallBig_4m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Mil_WallBig_4m_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Walls";
};

class MilitaryArea: Exile_AbstractCraftingRecipe
{
	name = "Military Area";
	pictureItem = "Land_Sign_WarningMilitaryArea_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sign_WarningMilitaryArea_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
	};
	category = "EBM Signs";
};


class Icebox: Exile_AbstractCraftingRecipe
{
	name = "Icebox";
	pictureItem = "Land_Icebox_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Icebox_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{10, "Exile_Item_PlasticBottleEmpty"},
		{1, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers",
	};
	category = "EBM Container";
};

class Bargate: Exile_AbstractCraftingRecipe
{
	name = "Bar Gate";
	pictureItem = "Land_BarGate_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BarGate_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
	};
	category = "EBM Misc";
};

class Citygate: Exile_AbstractCraftingRecipe
{
	name = "City Gate";
	pictureItem = "Land_City_Gate_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_City_Gate_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
		"Exile_Item_Screwdriver",
	};
	requiresConcreteMixer = 1;
	category = "EBM Buildings";
};

class Rack: Exile_AbstractCraftingRecipe
{
	name = "A Shelf";
	pictureItem = "Land_Rack_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Rack_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	category = "EBM Container";
};


class HeliPad: Exile_AbstractCraftingRecipe
{
	name = "Helipad";
	pictureItem = "Land_HelipadCivil_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_HelipadCivil_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_Cement"},
	};
	tools[] =
	{
		"Exile_Item_CookingPot",
	};
	category = "EBM Misc";
};

class ConcreteWall8m: Exile_AbstractCraftingRecipe
{
	name = "Concrete Wall 8m";
	pictureItem = "Land_City2_8m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_City2_8m_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Walls";
};

class ConcreteWall4m: Exile_AbstractCraftingRecipe
{
	name = "Concrete Wall 4m";
	pictureItem = "Land_City2_4m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_City2_4m_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Walls";
};

class ConcreteWall1: Exile_AbstractCraftingRecipe
{
	name = "Concrete Wall";
	pictureItem = "Land_Wall_IndCnc_4_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Wall_IndCnc_4_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Walls";
};

class ConcreteRamp: Exile_AbstractCraftingRecipe
{
	name = "Concrete Ramp";
	pictureItem = "Land_RampConcrete_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_RampConcrete_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Walls";
};

class SandbagBarrierBigCorner: Exile_AbstractCraftingRecipe
{
	name = "Sandbag Barrier Big Corner";
	pictureItem = "Land_HBarrierWall_corner_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_HBarrierWall_corner_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalWire"},
	};
	tools[] =
	{
		"Exile_Item_Pliers",
	};
	category = "EBM Walls";
};

class BunkerHuge: Exile_AbstractCraftingRecipe
{
	name = "Bunker HUGE";
	pictureItem = "Land_Bunker_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Bunker_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Land_Cargo40_light_green_F_Kit"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Container";
};


class BagBunkerSmall: Exile_AbstractCraftingRecipe
{
	name = "Bag Bunker Small";
	pictureItem = "Land_BagBunker_Small_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BagBunker_Small_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_Cement"},
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Buildings";
};

class MetalWoodenRack: Exile_AbstractCraftingRecipe
{
	name = "Metal Wooden Shelf";
	pictureItem = "Land_Metal_wooden_rack_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Metal_wooden_rack_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "EBM Container";
};

class SandbagTower: Exile_AbstractCraftingRecipe
{
	name = "Sandbag Tower";
	pictureItem = "Land_HBarrierTower_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_HBarrierTower_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalWire"},
	};
	tools[] =
	{
		"Exile_Item_Pliers",
	};
	category = "EBM Buildings";
};

class SandbagsLong: Exile_AbstractCraftingRecipe
{
	name = "Sandbags Long";
	pictureItem = "Land_BagFence_Long_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BagFence_Long_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Sand"},
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	category = "EBM Walls";
};

class SandbagCorner: Exile_AbstractCraftingRecipe
{
	name = "Sandbag Corner";
	pictureItem = "Land_BagFence_Corner_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BagFence_Corner_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Sand"},
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	category = "EBM Walls";
};

class LandContainer: Exile_AbstractCraftingRecipe
{
	name = "LandContainer";
	pictureItem = "Land_Cargo20_military_green_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Cargo20_military_green_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{6, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	category = "EBM Container";
};

class Ammobox: Exile_AbstractCraftingRecipe
{
	name = "Ammobox";
	pictureItem = "Land_Pallet_MilBoxes_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pallet_MilBoxes_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_StorageCrateKit"},
		{2, "Exile_Item_JunkMetal"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Foolbox",
	};
	category = "EBM Container";
};

class Watercooler: Exile_AbstractCraftingRecipe
{
	name = "Water Cooler";
	pictureItem = "Land_WaterCooler_01_new_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_WaterCooler_01_new_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_WaterBarrelKit"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
	};
	category = "EBM Misc";
};

class CncBarrier: Exile_AbstractCraftingRecipe
{
	name = "Concrete Barrier";
	pictureItem = "Land_CncBarrier_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CncBarrier_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Walls";
};

class Stonewall: Exile_AbstractCraftingRecipe
{
	name = "Stone Wall";
	pictureItem = "Land_Stone_4m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Stone_4m_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "EBM Walls";
};

class Stonegate: Exile_AbstractCraftingRecipe
{
	name = "Stone Gate";
	pictureItem = "Land_Stone_Gate_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Stone_Gate_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
	};
	tools[] =
	{
		"Exile_Item_Shovel",
		"Exile_Item_Grinder"
	};
	requiresConcreteMixer = 1;
	category = "EBM Walls";
};

class PierLadder: Exile_AbstractCraftingRecipe
{
	name = "Ladder";
	pictureItem = "PierLadder_F_Kit";
	returnedItems[] = 
	{
		{1, "PierLadder_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_MetalPole"},
		{2, "Exile_Item_JunkMetal"},
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};
	category = "EBM Misc";
};

class CamoNetOPFORopen: Exile_AbstractCraftingRecipe
{
	name = "CamoNet OPFOR open";
	pictureItem = "CamoNet_OPFOR_open_F_Kit";
	returnedItems[] = 
	{
		{1, "CamoNet_OPFOR_open_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_MetalWire"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	category = "EBM Buildings";
};

class CamoNetINDPopen: Exile_AbstractCraftingRecipe
{
	name = "CamoNet INDP open";
	pictureItem = "CamoNet_INDP_open_F_Kit";
	returnedItems[] = 
	{
		{1, "CamoNet_INDP_open_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_MetalWire"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	category = "EBM Buildings";
};

class CamoNetBLUFORopen: Exile_AbstractCraftingRecipe
{
	name = "CamoNet BLUFOR open";
	pictureItem = "CamoNet_BLUFOR_open_F_Kit";
	returnedItems[] = 
	{
		{1, "CamoNet_BLUFOR_open_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_MetalWire"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	category = "EBM Buildings";
};



class Barrier1: Exile_AbstractCraftingRecipe  //thank you MrDynamite for sharing better Receipideas :)
{
    name = "Barrier";
    pictureItem = "Land_HBarrier_1_F_Kit";
    returnedItems[] =
    {
        {1, "Land_HBarrier_1_F_Kit"}
    };
    requiresFire = 0;
    requiredInteractionModelGroup = "WorkBench";
    components[] =
    {
        {2, "Exile_Item_Sand"}, // Change
		{1, "Exile_Item_MetalWire"},
    };
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "EBM Walls";
};

class Barrier3: Exile_AbstractCraftingRecipe
{
    name = "Barrier3";
    pictureItem = "Land_HBarrier_3_F_Kit";
    returnedItems[] =
    {
        {1, "Land_HBarrier_3_F_Kit"}
    };
    requiresFire = 0;
    requiredInteractionModelGroup = "WorkBench";
    components[] =
    {
        {1, "Land_HBarrier_1_F_Kit"},
		{1, "Exile_Item_Sand"}, // Change
		{1, "Exile_Item_MetalWire"},
    };
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "EBM Walls";
};
/* in Exile - Exile_Item_HBarrier5Kit
class Barrier5: Exile_AbstractCraftingRecipe
{
    name = "Barrier5";
    pictureItem = "Land_HBarrier_5_F_Kit";
    returnedItems[] =
    {    
        {1, "Land_HBarrier_5_F_Kit"}
    };
    requiresFire = 0;
    requiredInteractionModelGroup = "WorkBench";
    components[] =
    {
        {1, "Land_HBarrier_3_F_Kit"},
		{1, "Exile_Item_Sand"}, // Change
		{1, "Exile_Item_MetalWire"},
    };
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "EBM Walls";
};
*/
class SandbagBarrierBig4m: Exile_AbstractCraftingRecipe
{
    name = "Sandbag Barrier Big 4m";
    pictureItem = "Land_HBarrierWall4_F_Kit";
    returnedItems[] =
    {
        {1, "Land_HBarrierWall4_F_Kit"}
    };
    requiresFire = 0;
    requiredInteractionModelGroup = "WorkBench";
    components[] =
    {
        {1, "Land_HBarrier_3_F_Kit"},
		{2, "Exile_Item_Sand"}, // Change
		{2, "Exile_Item_MetalWire"},
    };
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "EBM Walls";
};

class SandbagBarrierBig6m: Exile_AbstractCraftingRecipe
{
    name = "Sandbag Barrier Big 6m";
    pictureItem = "Land_HBarrierWall6_F_Kit";
    returnedItems[] =
    {
        {1, "Land_HBarrierWall6_F_Kit"}
    };
    requiresFire = 0;
    requiredInteractionModelGroup = "WorkBench";
    components[] =
    {
        {1, "Land_HBarrierWall4_F_Kit"},
		{2, "Exile_Item_Sand"}, // Change
		{2, "Exile_Item_MetalWire"},
    };
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "EBM Walls";
};


class BagBunker: Exile_AbstractCraftingRecipe
{
	name = "BagBunker";
	pictureItem = "Land_BagBunker_Tower_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BagBunker_Tower_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WoodPlank"},
		{5, "Exile_Item_MetalWire"},
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "EBM Buildings";
};