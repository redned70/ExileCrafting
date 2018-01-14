// [CiC]red_ned 2017
// Sniper Rifle crafting

class arifle_MXM_F: Exile_AbstractCraftingRecipe
{
	name = "Craft MXM_F";
	pictureItem = "arifle_MXM_F";
	requiresFire = 1;
    requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "arifle_MXM_F"}
    };
     components[] =
	{
    	{1, "Exile_Item_JunkMetal"},
    	{2, "Exile_Item_WeaponParts"},
    	{1, "hgun_Rook40_F"},
		{2, "Exile_Item_Can_Empty"}
    };
	tools[] = 	{
				"Exile_Item_Grinder", 
				"Exile_Item_Pliers",
				"Exile_Item_Hammer"
				};
	category = "Sniper Rifle";
};