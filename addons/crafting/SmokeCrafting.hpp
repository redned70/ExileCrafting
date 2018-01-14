// [CiC]red_ned 2017
// Craft Smoke from Chemlights
class SmokeShellBlue: Exile_AbstractCraftingRecipe
{
	name = "Craft Blue Smoke";
	pictureItem = "SmokeShellBlue";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "SmokeShellBlue"}
    };
     components[] =
	{
    	{1, "SmokeShell"},
    	{1, "Chemlight_blue"}
    };
		tools[] = {"Exile_Item_Pliers"};
		category = "Smoke";
};

class SmokeShellGreen: Exile_AbstractCraftingRecipe
{
	name = "Craft Green Smoke";
	pictureItem = "SmokeShellGreen";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "SmokeShellGreen"}
    };
     components[] =
	{
    	{1, "SmokeShell"},
    	{1, "Chemlight_green"}
    };
		tools[] = {"Exile_Item_Pliers"};
		category = "Smoke";
};

class SmokeShellRed: Exile_AbstractCraftingRecipe
{
	name = "Craft Red Smoke";
	pictureItem = "SmokeShellRed";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "SmokeShellRed"}
    };
     components[] =
	{
    	{1, "SmokeShell"},
    	{1, "Chemlight_red"}
    };
		tools[] = {"Exile_Item_Pliers"};
		category = "Smoke";
};

class SmokeShellYellow: Exile_AbstractCraftingRecipe
{
	name = "Craft Yellow Smoke";
	pictureItem = "SmokeShellYellow";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "SmokeShellYellow"}
    };
     components[] =
	{
    	{1, "SmokeShell"},
    	{1, "Chemlight_yellow"}
    };
		tools[] = {"Exile_Item_Pliers"};
		category = "Smoke";
};

// Compound Colours - Craft 2 at a time
class SmokeShellOrange: Exile_AbstractCraftingRecipe
{
	name = "Craft 2 Orange Smoke";
	pictureItem = "SmokeShellOrange";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{2, "SmokeShellOrange"}
    };
     components[] =
	{
    	{2, "SmokeShell"},
    	{1, "Chemlight_yellow"},
    	{1, "Chemlight_red"}
	};
		tools[] = {"Exile_Item_Pliers"};
		category = "Smoke";
};

class SmokeShellPurple: Exile_AbstractCraftingRecipe
{
	name = "Craft 2 Purple Smoke";
	pictureItem = "SmokeShellPurple";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{2, "SmokeShellPurple"}
    };
     components[] =
	{
    	{2, "SmokeShell"},
    	{1, "Chemlight_blue"},
    	{1, "Chemlight_red"}
	};
		tools[] = {"Exile_Item_Pliers"};
		category = "Smoke";
};

// Smoke Rounds
class 1Rnd_SmokeBlue_Grenade_shell: Exile_AbstractCraftingRecipe
{
	name = "Craft Blue Smoke Round";
	pictureItem = "1Rnd_SmokeBlue_Grenade_shell";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "1Rnd_SmokeBlue_Grenade_shell"}
    };
     components[] =
	{
    	{1, "1Rnd_Smoke_Grenade_shell"},
    	{1, "Chemlight_blue"}
	};
		tools[] = {"Exile_Item_Pliers"};
		category = "Smoke";
};

class 1Rnd_SmokeGreen_Grenade_shell: Exile_AbstractCraftingRecipe
{
	name = "Craft Green Smoke Round";
	pictureItem = "1Rnd_SmokeGreen_Grenade_shell";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "1Rnd_SmokeGreen_Grenade_shell"}
    };
     components[] =
	{
    	{1, "1Rnd_Smoke_Grenade_shell"},
    	{1, "Chemlight_green"}
	};
		tools[] = {"Exile_Item_Pliers"};
		category = "Smoke";
};

class 1Rnd_SmokeRed_Grenade_shell: Exile_AbstractCraftingRecipe
{
	name = "Craft Red Smoke Round";
	pictureItem = "1Rnd_SmokeRed_Grenade_shell";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "1Rnd_SmokeRed_Grenade_shell"}
    };
     components[] =
	{
    	{1, "1Rnd_Smoke_Grenade_shell"},
    	{1, "Chemlight_red"}
	};
		tools[] = {"Exile_Item_Pliers"};
		category = "Smoke";
};

class 1Rnd_SmokeYellow_Grenade_shell: Exile_AbstractCraftingRecipe
{
	name = "Craft Yellow Smoke Round";
	pictureItem = "1Rnd_SmokeYellow_Grenade_shell";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "1Rnd_SmokeYellow_Grenade_shell"}
    };
     components[] =
	{
    	{1, "1Rnd_Smoke_Grenade_shell"},
    	{1, "Chemlight_yellow"}
	};
		tools[] = {"Exile_Item_Pliers"};
		category = "Smoke";
};

// Compound Colours - Craft 2 rounds at a time
class 1Rnd_SmokeOrange_Grenade_shell: Exile_AbstractCraftingRecipe
{
	name = "Craft 2 Orange Smoke Rounds";
	pictureItem = "1Rnd_SmokeOrange_Grenade_shell";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{2, "1Rnd_SmokeOrange_Grenade_shell"}
    };
     components[] =
	{
    	{2, "1Rnd_Smoke_Grenade_shell"},
    	{1, "Chemlight_yellow"},
    	{1, "Chemlight_red"}
		};
		tools[] = {"Exile_Item_Pliers"};
		category = "Smoke";
};

class 1Rnd_SmokePurple_Grenade_shell: Exile_AbstractCraftingRecipe
{
	name = "Craft 2 Purple Smoke Rounds";
	pictureItem = "1Rnd_SmokePurple_Grenade_shell";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{2, "1Rnd_SmokePurple_Grenade_shell"}
    };
     components[] =
	{
    	{2, "1Rnd_Smoke_Grenade_shell"},
    	{1, "Chemlight_blue"},
    	{1, "Chemlight_red"}
		};
		tools[] = {"Exile_Item_Pliers"};
		category = "Smoke";
};

// Bundle 1 Rnd into 3rnd
class 3Rnd_Smoke_Grenade_shell: Exile_AbstractCraftingRecipe
{
	name = "Craft 3rnd Grenade Shell";
	pictureItem = "3Rnd_Smoke_Grenade_shell";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "3Rnd_Smoke_Grenade_shell"}
    };
     components[] =
	{
    	{3, "1Rnd_Smoke_Grenade_shell"}
	};
		tools[] = {"Exile_Item_Pliers"};
		category = "Smoke";
};

class 3Rnd_SmokeBlue_Grenade_shell: Exile_AbstractCraftingRecipe
{
	name = "Craft 3rnd Blue Grenade Shell";
	pictureItem = "3Rnd_SmokeBlue_Grenade_shell";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "3Rnd_SmokeBlue_Grenade_shell"}
    };
     components[] =
	{
    	{3, "1Rnd_SmokeBlue_Grenade_shell"}
	};
		tools[] = {"Exile_Item_Pliers"};
		category = "Smoke";
};

class 3Rnd_SmokeGreen_Grenade_shell: Exile_AbstractCraftingRecipe
{
	name = "Craft 3rnd Green Grenade Shell";
	pictureItem = "3Rnd_SmokeGreen_Grenade_shell";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "3Rnd_SmokeGreen_Grenade_shell"}
    };
     components[] =
	{
    	{3, "1Rnd_SmokeGreen_Grenade_shell"}
	};
		tools[] = {"Exile_Item_Pliers"};
		category = "Smoke";
};

class 3Rnd_SmokeOrange_Grenade_shell: Exile_AbstractCraftingRecipe
{
	name = "Craft 3rnd Orange Grenade Shell";
	pictureItem = "3Rnd_SmokeOrange_Grenade_shell";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "3Rnd_SmokeOrange_Grenade_shell"}
    };
     components[] =
	{
    	{3, "1Rnd_SmokeOrange_Grenade_shell"}
	};
		tools[] = {"Exile_Item_Pliers"};
		category = "Smoke";
};

class 3Rnd_SmokePurple_Grenade_shell: Exile_AbstractCraftingRecipe
{
	name = "Craft 3rnd Purple Grenade Shell";
	pictureItem = "3Rnd_SmokePurple_Grenade_shell";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "3Rnd_SmokePurple_Grenade_shell"}
    };
     components[] =
	{
    	{3, "1Rnd_SmokePurple_Grenade_shell"}
	};
		tools[] = {"Exile_Item_Pliers"};
		category = "Smoke";
};

class 3Rnd_SmokeRed_Grenade_shell: Exile_AbstractCraftingRecipe
{
	name = "Craft 3rnd Red Grenade Shell";
	pictureItem = "3Rnd_SmokeRed_Grenade_shell";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "3Rnd_SmokeRed_Grenade_shell"}
    };
     components[] =
	{
    	{3, "1Rnd_SmokeRed_Grenade_shell"}
	};
		tools[] = {"Exile_Item_Pliers"};
		category = "Smoke";
};

class 3Rnd_SmokeYellow_Grenade_shell: Exile_AbstractCraftingRecipe
{
	name = "Craft 3rnd Yellow Grenade Shell";
	pictureItem = "3Rnd_SmokeYellow_Grenade_shell";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
    	{1, "3Rnd_SmokeYellow_Grenade_shell"}
    };
     components[] =
	{
    	{3, "SmokeShellYellow"}
	};
		tools[] = {"Exile_Item_Pliers"};
		category = "Smoke";
};