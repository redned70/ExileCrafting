// [CiC]red_ned 2017
//	Craft Ammo
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
			category = "Ammo";
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
			category = "Ammo";
	}; 

class 130Rnd_338_Mag: Exile_AbstractCraftingRecipe
{
		name = "SPMG .338 - 130 Round Mag";
		pictureItem = "130Rnd_338_Mag";
		requiredInteractionModelGroup = "WorkBench";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "130Rnd_338_Mag"}
		};
			components[] =
		{
			{5, "30Rnd_65x39_caseless_mag"}
		};
		tools[] = {"Exile_Item_Pliers", "Exile_Item_Foolbox"};
			category = "Ammo";
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
			category = "Ammo";
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
			category = "Ammo";
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
			category = "Ammo";
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
			category = "Ammo";
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
			category = "Ammo";
	}; 