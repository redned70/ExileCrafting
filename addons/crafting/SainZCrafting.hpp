// Custom Medical Recipes
// http://www.exilemod.com/topic/24655-exile-scavenge-framework-07-beta-23102017/?page=1
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

        {2, "Exile_Item_ToiletPaper"}
        
    };
};
	
class CraftVishpirin: Exile_AbstractCraftingRecipe
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
    returnedItems[] =
    {
        {1, "Exile_Item_InstaDoc"}
    };
    components[] =
    {

        {4, "Exile_Item_Vishpirin"}
        
    };
};
//Can Opener
class CraftCanOpener: Exile_AbstractCraftingRecipe
{
    name = "Craft Can Opener";
    pictureItem = "Exile_Item_CanOpener";
    returnedItems[] =
    {
        {1, "Exile_Item_CanOpener"}
    };
    components[] =
    {

        {1, "Exile_Item_Can_Empty"}
        
    };
};

// Restraints (so the user can make restaints "zipties" out of objects you could restrain someone with

class TiefromRope: Exile_AbstractCraftingRecipe
{
    name = "Craft Restraint";
    pictureItem = "Exile_Item_ZipTie";
    returnedItems[] =
    {
        {1, "Exile_Item_ZipTie"}
    };
    components[] =
    {
        {1, "Exile_Item_Rope"}
    };
};

class TiefromTape: Exile_AbstractCraftingRecipe
{
    name = "Craft Restraint";
    pictureItem = "Exile_Item_ZipTie";
    returnedItems[] =
    {
        {1, "Exile_Item_ZipTie"}
    };
    components[] =
    {
        {1, "Exile_Item_DuctTape"}
    };
};

// Goes BOOM!
class IEDLandSmall_Remote_Mag: Exile_AbstractCraftingRecipe
{
    name = "Small Crafted IED";
    pictureItem = "IEDLandSmall_Remote_Mag";
    returnedItems[] =
    {
        {1, "IEDLandSmall_Remote_Mag"}
    };
    components[] =
    {
        {2, "Exile_Item_Metalboard"},
        {2, "Exile_Item_JunkMetal"},
        {1, "Exile_Item_FuelCanisterFull"},
        {1, "Exile_Item_ExtensionCord"},
        {1, "Exile_Item_DuctTape"}
    };
};
class IEDLandbig_Remote_Mag: Exile_AbstractCraftingRecipe
{
    name = "Large Crafted IED";
    pictureItem = "IEDLandBig_Remote_Mag";
    returnedItems[] =
    {
        {1, "IEDLandBig_Remote_Mag"}
    };
    components[] =
    {
        {1, "Exile_Item_FuelCanisterEmpty"},
        {5, "Exile_Item_JunkMetal"},
        {1, "Exile_Item_FuelCanisterFull"},
        {2, "Exile_Item_ExtensionCord"},
        {2, "Exile_Item_DuctTape"}
    };
};
// Misc Crafting
class Exile_Item_CookingPot: Exile_AbstractCraftingRecipe
{
    name = "Craft Cookingpot";
    pictureItem = "Exile_Item_CookingPot";
    returnedItems[] =
    {
        {1, "Exile_Item_CookingPot"}
    };
    components[] =
    {
        {1, "Exile_Item_JunkMetal"}
    };
};

class Exile_melee_Axe: Exile_AbstractCraftingRecipe
{
    name = "Craft Axe";
    pictureItem = "Exile_melee_Axe";
    returnedItems[] =
    {
        {1, "Exile_melee_Axe"}
    };
    components[] =
    {
        {2, "Exile_Item_JunkMetal"},
        {1, "Exile_Item_metalboard"}
    };
};
// Make sure your cost for each component item isn't too low so people can abuse for poptabs
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
        {4, "Exile_Item_Metalboard"},
        {4, "Exile_Item_MetalBoard"},
        {1, "Exile_Item_Codelock"}
    };
};
//Doesn't work...figure out why and ill give you a cookie :)
/*
class Exile_Item_Camo_TentKit: Exile_AbstractCraftingRecipe
{
    name = "Craft Camo Tent";
    pictureItem = "Exile_Item_Camo_TentKit";
    returnedItems[] =
    {
        {1, "Exile_Item_Camo_TentKit"}
    };
    components[] =
    {
        {2, "Exile_Item_DuctTape"},
        {4, "Exile_Item_WoodPlank"},
        {2, "Exile_Item_Rope"}
    };
};
*/
// When you need a laser designator and all you have is junk
class Laserdesignator: Exile_AbstractCraftingRecipe
{
    name = "Craft Laserdesignator";
    pictureItem = "Laserdesignator";
    returnedItems[] =
    {
        {1, "Laserdesignator"}
    };
    components[] =
    {
        {2, "Exile_Item_LightBulb"},
        {1, "Exile_Item_JunkMetal"},
        {1, "Exile_Item_Rope"}
    };
};
