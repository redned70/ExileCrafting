// [CiC]red_ned 2017
// Craft Storage items
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
	tools[] = 	{
				"Exile_Item_Grinder", 
				"Exile_Item_Pliers",
				"Exile_Item_Hammer"
				};
	category = "Storage";
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
	tools[] = {"Exile_Item_Knife"};
		category = "Building";
}; 