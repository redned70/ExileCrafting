// [CiC]red_ned 2017
// Craft Items

class Exile_Item_Foolbox: Exile_AbstractCraftingRecipe
{
	name = "Foolbox";
	pictureItem = "Exile_Item_Foolbox";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Foolbox"}
	};
		components[] =
	{
		{1, "Exile_Item_CordlessScrewdriver"},
		{1, "Exile_Item_Screwdriver"},
		{1, "Exile_Item_Pliers"},
		{1, "Exile_Item_Handsaw"},
		{1, "Exile_Item_Hammer"},
		{1, "Exile_Item_Wrench"},
		{1, "Exile_Item_Storagecreatekit"}
	};
	tools[] = {"Exile_Item_Grinder"};
		category = "Items";
};

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
	tools[] = {"Exile_Item_Pliers"};
		category = "Items";
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
	tools[] = {"Exile_Item_Pliers"};
		category = "Items";
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
	tools[] = {"Exile_Item_Pliers"};
		category = "Items";
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
		category = "Items";
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
    	{1, "Exile_Item_Can_Empty"}
    };
	tools[] = {"Exile_Item_Pliers"};
		category = "Items";
};