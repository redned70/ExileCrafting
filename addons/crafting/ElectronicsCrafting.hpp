// [CiC]red_ned 2017
// Craft Electronics
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
	tools[] = 	{
				"Exile_Item_Pliers",
				"Exile_Item_Screwdriver"
				};
		category = "Electronics";
}; 
