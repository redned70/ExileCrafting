// [CiC]red_ned 2017
// Assault Rifle Part Reclaiming

class Exile_Item_WeaponPartsAR1: Exile_AbstractCraftingRecipe
{
	name = "Reclaim Weaponparts";
	pictureItem = "Exile_Item_WeaponParts";
	requiresFire = 1;
    requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "Exile_Item_JunkMetal"},
    	{2, "Exile_Item_WeaponParts"},
		{2, "Exile_Item_Can_Empty"}
    };
     components[] =
	{
    	{1, "arifle_Katiba_F"}
    };
	tools[] = 	{
				"Exile_Item_Grinder", 
				"Exile_Item_Pliers",
				"Exile_Item_Hammer"
				};
	category = "Reclaim Assault Parts";
};
