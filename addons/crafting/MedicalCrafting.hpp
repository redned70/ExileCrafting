// [CiC]red_ned 2017
//	Medical Crafting
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
			category = "Medical";
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
			category = "Medical";
	};

	class CraftBandage: Exile_AbstractCraftingRecipe
	{
		name = "Craft Bandage";
		pictureItem = "Exile_Item_Bandage";
		returnedItems[] =
		{
			{1, "Exile_Item_Bandage"}
		};
		components[] = 
		{
			{4, "Exile_Item_ToiletPaper"}
		};
			category = "Medical";
	};