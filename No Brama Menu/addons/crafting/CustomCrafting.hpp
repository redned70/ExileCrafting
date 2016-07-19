// custom crafting
class Exile_Melee_Axe: Exile_AbstractCraftingRecipe
{
	name = "Craft Axe";								//Names in the Recipe
	pictureItem = "Exile_Melee_Axe";           		//What Picture the item will use
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";	//Must have a work bench in order to build it 
	returnedItems[] =
	{
		{1, "Exile_Melee_Axe"}						//What item is returned
	};
     components[] =
	{
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_WoodLog"}
	};
};
 class Exile_Item_CanOpener: Exile_AbstractCraftingRecipe
 {
	name = "Craft CanOpener";								//Names in the Recipe
	pictureItem = "Exile_Item_CanOpener";           		//What Picture the item will use
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CanOpener"}						//What item is returned
	};
     components[] =
	{
		{10, "Exile_Item_Can_Empty"}
	};
};
  class Exile_Item_CookingPot: Exile_AbstractCraftingRecipe
 {
	name = "Craft CookingPot";								//Names in the Recipe
	pictureItem = "Exile_Item_CookingPot";           		//What Picture the item will use
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CookingPot"}						//What item is returned
	};
     components[] =
	{
		{15, "Exile_Item_Can_Empty"}
	};
};
 class CraftVishpirin: Exile_AbstractCraftingRecipe //New class name (Craft Vishpirin)
 {
	name = "Craft Vishpirin";
	pictureItem = "Exile_Item_Vishpirin";
	returnedItems[] =
	{
		{1, "Exile_Item_Vishpirin"}
	};
	components[] =
	{
		{5, "Exile_Item_Bandage"}
	};
};
 class CraftInstaDoc: Exile_AbstractCraftingRecipe
 {
    name = "Craft InstaDoc";
    pictureItem = "Exile_Item_InstaDoc";
	requiresFire = 1;
    requiredInteractionModelGroup = "WorkBench";  // This one requires a fire and a work bench
    returnedItems[] = 
	{
		{1, "Exile_Item_InstaDoc"}
	};
     components[] =
    { 
		{4, "Exile_Item_Vishpirin"}   
   };
};
class Exile_Item_SafeKit: Exile_AbstractCraftingRecipe
 {
	name = "Craft Safe";
	pictureItem = "Exile_Item_SafeKit";
	requiresFire = 1;
     requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "Exile_Item_SafeKit"}
    };
     components[] =
	{
    	{2, "Exile_Item_MetalPole"},
    	{4, "Exile_Item_MetalBoard"},
    	{1, "Exile_Item_Codelock"}
    };
	tools[] = {"Exile_Item_Grinder"};
}; 

class Exile_Item_CamoTentKit: Exile_AbstractCraftingRecipe
 {
	name = "Craft Camo Tent";
	pictureItem = "Exile_Item_CamoTentKit";
	requiresFire = 1;
     requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "Exile_Item_CamoTentKit"}
    };
     components[] =
	{
    	{2, "Exile_Item_DuctTape"},
    	{4, "Exile_Item_WoodPlank"},
    	{2, "Exile_Item_Rope"},
    	{2, "Exile_Item_ZipTie"}
    };
};  
 class 10Rnd_93x64_DMR_05_Mag: Exile_AbstractCraftingRecipe
 {
	name = "Craft 15 Cyrus Magazines";
	pictureItem = "10Rnd_93x64_DMR_05_Mag";
     requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{15, "10Rnd_93x64_DMR_05_Mag"}
    };
     components[] =
	{
    	{1, "150Rnd_93x64_Mag"}
    };
	tools[] = {"Exile_Item_Pliers"};
}; 

class 10Rnd_338_Mag: Exile_AbstractCraftingRecipe
 {
	name = "Craft 13 Mar-10 Magazines";
	pictureItem = "10Rnd_338_Mag";
     requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{13, "10Rnd_338_Mag"}
    };
     components[] =
	{
    	{1, "130Rnd_338_Mag"}
    };
	tools[] = {"Exile_Item_Pliers"};
}; 

class 10Rnd_127x54_Mag: Exile_AbstractCraftingRecipe
 {
	name = "Craft 2 Lynx Magazines";
	pictureItem = "5Rnd_127x108_Mag";
     requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{2, "5Rnd_127x108_Mag"}
    };
     components[] =
	{
    	{1, "10Rnd_127x54_Mag"}
    };
	tools[] = {"Exile_Item_Pliers"};
}; 

class 30Rnd_65x39_caseless_mag: Exile_AbstractCraftingRecipe
 {
	name = "Craft 6 MX|MXC|MXM 30er Magazines";
	pictureItem = "30Rnd_65x39_caseless_mag";
     requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{6, "30Rnd_65x39_caseless_mag"}
    };
     components[] =
	{
    	{1, "200Rnd_65x39_cased_Box"}
    };
	tools[] = {"Exile_Item_Pliers"};
}; 

class 20Rnd_762x51_Mag: Exile_AbstractCraftingRecipe
 {
	name = "Craft 7 MK18|MK1|MK14 Magazines";
	pictureItem = "20Rnd_762x51_Mag";
     requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{7, "20Rnd_762x51_Mag"}
    };
     components[] =
	{
    	{1, "150Rnd_762x51_Box"}
    };
	tools[] = {"Exile_Item_Pliers"};
}; 

class 10Rnd_762x54_Mag: Exile_AbstractCraftingRecipe
 {
	name = "Craft 15 Rahim Magazines";
	pictureItem = "10Rnd_762x54_Mag";
     requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{15, "10Rnd_762x54_Mag"}
    };
     components[] =
	{
    	{1, "150Rnd_762x51_Box"}
    };
	tools[] = {"Exile_Item_Pliers"};
}; 

class 5Rnd_127x108_APDS_Mag: Exile_AbstractCraftingRecipe
 {
	name = "Craft 2 Lynx APSD Magazines";
	pictureItem = "5Rnd_127x108_APDS_Mag";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{2, "5Rnd_127x108_APDS_Mag"}
    };
     components[] =
	{
    	{1, "10Rnd_127x54_Mag"},
    	{1, "HandGrenade"}
    };
	tools[] = {"Exile_Item_Pliers"};
}; 

 class muzzle_snds_H: Exile_AbstractCraftingRecipe
 {
	name = "Craft Sound Suppressor (6.5 mm)";
	pictureItem = "muzzle_snds_H";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "muzzle_snds_H"}
    };
     components[] =
	{
    	{1, "Exile_Item_MetalPole"},
    	{1, "Exile_Item_JunkMetal"}
    };
	tools[] = {"Exile_Item_Grinder"};
};
 class muzzle_snds_L: Exile_AbstractCraftingRecipe
 {
	name = "Craft Sound Suppressor (9 mm)";
	pictureItem = "muzzle_snds_L";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "muzzle_snds_L"}
    };
     components[] =
	{
    	{1, "Exile_Item_MetalPole"},
    	{1, "Exile_Item_JunkMetal"}
    };
	tools[] = {"Exile_Item_Grinder"};
};
 class muzzle_snds_M: Exile_AbstractCraftingRecipe
 {
	name = "Craft Sound Suppressor (5.56 mm)";
	pictureItem = "muzzle_snds_M";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "muzzle_snds_M"}
    };
     components[] =
	{
    	{1, "Exile_Item_MetalPole"},
    	{1, "Exile_Item_JunkMetal"}
    };
	tools[] = {"Exile_Item_Grinder"};
};
 class muzzle_snds_B: Exile_AbstractCraftingRecipe
 {
	name = "Craft Sound Suppressor (7.62 mm)";
	pictureItem = "muzzle_snds_B";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "muzzle_snds_B"}
    };
     components[] =
	{
    	{1, "Exile_Item_MetalPole"},
    	{1, "Exile_Item_JunkMetal"}
    };
	tools[] = {"Exile_Item_Grinder"};
};
 class muzzle_snds_H_MG: Exile_AbstractCraftingRecipe
 {
	name = "Craft Sound Suppressor LMG (6.5 mm)";
	pictureItem = "muzzle_snds_H_MG";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "muzzle_snds_H_MG"}
    };
     components[] =
	{
    	{1, "Exile_Item_MetalPole"},
    	{1, "Exile_Item_JunkMetal"}
    };
	tools[] = {"Exile_Item_Grinder"};
};
 class muzzle_snds_H_SW: Exile_AbstractCraftingRecipe
 {
	name = "Craft Sound Suppressor LMG (6.5 mm)";
	pictureItem = "muzzle_snds_H_SW";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "muzzle_snds_H_SW"}
    };
     components[] =
	{
    	{1, "Exile_Item_MetalPole"},
    	{1, "Exile_Item_JunkMetal"}
    };
	tools[] = {"Exile_Item_Grinder"};
}; 

 class ItemWatch: Exile_AbstractCraftingRecipe
 {
	name = "Craft a Watch";
	pictureItem = "ItemWatch";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "ItemWatch"}
    };
     components[] =
	{
    	{1, "Exile_Item_DuctTape"},
    	{1, "Exile_Item_JunkMetal"}
    };
	tools[] = {"Exile_Item_Pliers"};
}; 

class ItemMap: Exile_AbstractCraftingRecipe
 {
	name = "Craft a Map";
	pictureItem = "ItemMap";
	requiresFire = 0;
	returnedItems[] =
	{
    	{1, "ItemMap"}
    };
     components[] =
	{
    	{1, "Exile_Item_Magazine01"},
    	{1, "Exile_Item_Magazine02"},
    	{1, "Exile_Item_Magazine03"}
    };
}; 

 class optic_Arco: Exile_AbstractCraftingRecipe
 {
	name = "Craft Optic Arco";
	pictureItem = "optic_Arco";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "optic_Arco"}
    };
     components[] = 
	{
    	{1, "Exile_Item_MetalPole"},
    	{1, "Exile_Item_LightBulb"}
    };
	tools[] = {"Exile_Item_Screwdriver"};
};
 class optic_Hamr: Exile_AbstractCraftingRecipe
 {
	name = "Craft Optic Hamr";
	pictureItem = "optic_Hamr";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "optic_Hamr"}
    };
     components[] = 
	{
    	{1, "Exile_Item_MetalPole"},
    	{1, "Exile_Item_LightBulb"}
    };
	tools[] = {"Exile_Item_Screwdriver"};
}; 

class optic_Aco: Exile_AbstractCraftingRecipe
 {
	name = "Craft Optic Aco";
	pictureItem = "optic_Aco";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "optic_Aco"}
    };
     components[] = 
	{
    	{1, "Exile_Item_MetalPole"},
    	{1, "Exile_Item_LightBulb"}
    };
	tools[] = {"Exile_Item_Screwdriver"};
};
 class optic_Holosight: Exile_AbstractCraftingRecipe
 {
	name = "Craft Optic Holosight";
	pictureItem = "optic_Holosight";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "optic_Holosight"}
    };
     components[] = 
	{
    	{1, "Exile_Item_MetalPole"},
    	{1, "Exile_Item_LightBulb"}
    };
	tools[] = {"Exile_Item_Screwdriver"};
};
 class optic_SOS: Exile_AbstractCraftingRecipe
 {
	name = "Craft Optic SOS";
	pictureItem = "optic_SOS";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "optic_SOS"}
    };
     components[] = 
	{
    	{1, "Exile_Item_MetalPole"},
    	{1, "Exile_Item_LightBulb"}
    };
	tools[] = {"Exile_Item_Screwdriver"};
};
 class optic_MRCO: Exile_AbstractCraftingRecipe
 {
	name = "Craft Optic MRCO";
	pictureItem = "optic_MRCO";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "optic_MRCO"}
    };
     components[] = 
	{
    	{1, "Exile_Item_MetalPole"},
    	{1, "Exile_Item_LightBulb"}
    };
	tools[] = {"Exile_Item_Screwdriver"};
};
 class optic_DMS: Exile_AbstractCraftingRecipe
 {
	name = "Craft Optic DMS";
	pictureItem = "optic_DMS";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "optic_DMS"}
    };
     components[] = 
	{
    	{1, "Exile_Item_MetalPole"},
    	{1, "Exile_Item_LightBulb"}
    };
	tools[] = {"Exile_Item_Screwdriver"};
};
 class optic_Yorris: Exile_AbstractCraftingRecipe
 {
	name = "Craft Optic Yorris";
	pictureItem = "optic_Yorris";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "optic_Yorris"}
    };
     components[] = 
	{
    	{1, "Exile_Item_MetalPole"},
    	{1, "Exile_Item_LightBulb"}
    };
	tools[] = {"Exile_Item_Screwdriver"};
};
 class optic_MRD: Exile_AbstractCraftingRecipe
 {
	name = "Craft Optic MRD";
	pictureItem = "optic_MRD";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "optic_MRD"}
    };
     components[] = 
	{
    	{1, "Exile_Item_MetalPole"},
    	{1, "Exile_Item_LightBulb"}
    };
	tools[] = {"Exile_Item_Screwdriver"};
};
 class optic_LRPS: Exile_AbstractCraftingRecipe
 {
	name = "Craft Optic LRPS";
	pictureItem = "optic_LRPS";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "optic_LRPS"}
    };
     components[] = 
	{
    	{1, "Exile_Item_MetalPole"},
    	{1, "Exile_Item_LightBulb"}
    };
	tools[] = {"Exile_Item_Screwdriver"};
};
 class optic_AMS: Exile_AbstractCraftingRecipe
 {
	name = "Craft Optic AMS";
	pictureItem = "optic_AMS";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "optic_AMS"}
    };
     components[] = 
	{
    	{1, "Exile_Item_MetalPole"},
    	{1, "Exile_Item_LightBulb"}
    };
	tools[] = {"Exile_Item_Screwdriver"};
};
 class Exile_Item_BaseCameraKit: Exile_AbstractCraftingRecipe
 {
	name = "Craft Camera Base Kit";
	pictureItem = "Exile_Item_BaseCameraKit";
     requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
    	{1, "Exile_Item_BaseCameraKit"}
    };
     components[] = 
	{
    	{1, "Exile_Item_MetalPole"},
    	{2, "Exile_Item_ExtensionCord"},
    	{1, "Exile_Item_JunkMetal"},
    	{1, "Exile_Item_MetalScrews"},
    	{2, "Exile_Item_MetalWire"}
    };
	tools[] = {"Exile_Item_CordlessScrewdriver"};
}; 