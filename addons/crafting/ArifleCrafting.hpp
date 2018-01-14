// [CiC]red_ned 2017
// Assault Rifle Crafting

class arifle_Katiba_F: Exile_AbstractCraftingRecipe
{
	name = "Craft Katiba_F";
	pictureItem = "arifle_Katiba_F";
	requiresFire = 1;
    requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "arifle_Katiba_F"}
    };
     components[] =
	{
    	{1, "Exile_Item_JunkMetal"},
    	{1, "Exile_Item_WeaponParts"},
    	{1, "hgun_ACPC2_F"},
		{2, "Exile_Item_Can_Empty"}
    };
	tools[] = 	{
				"Exile_Item_Grinder", 
				"Exile_Item_Pliers",
				"Exile_Item_Hammer"
				};
	category = "Assault Rifle";
};
   