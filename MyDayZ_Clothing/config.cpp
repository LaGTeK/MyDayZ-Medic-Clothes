class CfgPatches
{
	class MyDayZ_Clothing
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Characters_Headgear",
			"DZ_Characters_Masks",
			"DZ_Characters_Shoes",
			"DZ_Characters_Gloves",
			"DZ_Characters_Vests",
			"DZ_Gear_Containers",
			"DZ_Data"
		};
	};
};

class cfgVehicles
{
	class Sweater_ColorBase;
	class HighCapacityVest_ColorBase;
	class Hoodie_ColorBase;
	class Armband_ColorBase;
	class M65Jacket_ColorBase;
	class PressVest_ColorBase;
	class PoliceVest;
	class BallisticHelmet_ColorBase;
	class NBCGloves_ColorBase;
	class NBCJacketBase;
	class NBCPantsBase;
	class NBCBootsBase;
	class NBCHoodBase;
	class HunterPants_ColorBase;
	class AliceBag_ColorBase;


	//Sweater
	class sweater_md_chalkstone_co: Sweater_ColorBase	{
		displayName="MyDayZ Sweater White";
		descriptionShort="A MyDayz sweater by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Clothes\sweater_md_chalkstone_co.paa",
			"MyDayZ_Clothing\Data\Clothes\sweater_md_chalkstone_co.paa",
			"MyDayZ_Clothing\Data\Clothes\sweater_md_chalkstone_co.paa"
		};
	};
	class sweater_md_loden_co: Sweater_ColorBase	{
		displayName="MyDayZ Sweater Green";
		descriptionShort="A MyDayz sweater by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Clothes\sweater_md_loden_co.paa",
			"MyDayZ_Clothing\Data\Clothes\sweater_md_loden_co.paa",
			"MyDayZ_Clothing\Data\Clothes\sweater_md_loden_co.paa"
		};
	};
	class sweater_md_navy_co: Sweater_ColorBase	{
		displayName="MyDayZ Sweater Blue";
		descriptionShort="A MyDayz sweater by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Clothes\sweater_md_navy_co.paa",
			"MyDayZ_Clothing\Data\Clothes\sweater_md_navy_co.paa",
			"MyDayZ_Clothing\Data\Clothes\sweater_md_navy_co.paa"
		};
	};

	//Hoodies
	class Hoodie_md_black_co: Hoodie_ColorBase	{
		displayName="MyDayZ Hoodie Black";
		descriptionShort="A MyDayz Hoodie by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"MyDayZ_Clothing\Data\Clothes\Hoodie_md_black_co.paa",
			"MyDayZ_Clothing\Data\Clothes\Hoodie_md_black_co.paa",
			"MyDayZ_Clothing\Data\Clothes\Hoodie_md_black_co.paa"
		};
	};
	class hoodie_md_blue_co: Hoodie_ColorBase	{
		displayName="MyDayZ Hoodie Blue";
		descriptionShort="A MyDayz Hoodie by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"MyDayZ_Clothing\Data\Clothes\hoodie_md_blue_co.paa",
			"MyDayZ_Clothing\Data\Clothes\hoodie_md_blue_co.paa",
			"MyDayZ_Clothing\Data\Clothes\hoodie_md_blue_co.paa"
		};
	};
	class Hoodie_md_brown_co: Hoodie_ColorBase	{
		displayName="MyDayZ Hoodie Brown";
		descriptionShort="A MyDayz Hoodie by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"MyDayZ_Clothing\Data\Clothes\Hoodie_md_brown_co.paa",
			"MyDayZ_Clothing\Data\Clothes\Hoodie_md_brown_co.paa",
			"MyDayZ_Clothing\Data\Clothes\Hoodie_md_brown_co.paa"
		};
	};
	class Hoodie_md_green_co: Hoodie_ColorBase	{
		displayName="MyDayZ Hoodie Green";
		descriptionShort="A MyDayz Hoodie by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"MyDayZ_Clothing\Data\Clothes\Hoodie_md_green_co.paa",
			"MyDayZ_Clothing\Data\Clothes\Hoodie_md_green_co.paa",
			"MyDayZ_Clothing\Data\Clothes\Hoodie_md_green_co.paa"
		};
	};
	class Hoodie_md_grey_co: Hoodie_ColorBase	{
		displayName="MyDayZ Hoodie Grey";
		descriptionShort="A MyDayz Hoodie by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"MyDayZ_Clothing\Data\Clothes\Hoodie_md_grey_co.paa",
			"MyDayZ_Clothing\Data\Clothes\Hoodie_md_grey_co.paa",
			"MyDayZ_Clothing\Data\Clothes\Hoodie_md_grey_co.paa"
		};
	};

	//Armbends
	class armbends_md_black_co: Armband_ColorBase	{
		displayName="MyDayZ Armband Black";
		descriptionShort="A MyDayz Armband by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Armbend\armbends_md_black_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_black_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_black_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_black_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_black_co.paa"
		};
	};
	class armbends_md_pink_co: Armband_ColorBase	{
		displayName="MyDayZ Armband Pink";
		descriptionShort="A MyDayz Armband by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Armbend\armbends_md_pink_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_pink_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_pink_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_pink_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_pink_co.paa"
		};
	};
	class armbends_md_blue_co: Armband_ColorBase	{
		displayName="MyDayZ Armband Blue";
		descriptionShort="A MyDayz Armband by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Armbend\armbends_md_blue_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_blue_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_blue_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_blue_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_blue_co.paa"
		};
	};
	class armbends_md_co: Armband_ColorBase	{
		displayName="MyDayZ Armband Orange";
		descriptionShort="A MyDayz Armband by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Armbend\armbends_md_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_co.paa"
		};
	};
	class armbends_md_green_co: Armband_ColorBase	{
		displayName="MyDayZ Armband Green";
		descriptionShort="A MyDayz Armband by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Armbend\armbends_md_green_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_green_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_green_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_green_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_green_co.paa"
		};
	};
	class armbends_md_red_co: Armband_ColorBase	{
		displayName="MyDayZ Armband Red";
		descriptionShort="A MyDayz Armband by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Armbend\armbends_md_red_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_red_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_red_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_red_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_red_co.paa"
		};
	};
	class armbends_md_white_co: Armband_ColorBase	{
		displayName="MyDayZ Armband White";
		descriptionShort="A MyDayz Armband by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Armbend\armbends_md_white_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_white_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_white_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_white_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_white_co.paa"
		};
	};
	class armbends_md_yellow_co: Armband_ColorBase	{
		displayName="MyDayZ Armband Yellow";
		descriptionShort="A MyDayz Armband by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Armbend\armbends_md_yellow_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_yellow_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_yellow_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_yellow_co.paa",
			"MyDayZ_Clothing\Data\Armbend\armbends_md_yellow_co.paa"
		};
	};

	//Medic clothes
	class M65_Jacket_md_medic_tan_co: M65Jacket_ColorBase	{
        displayName="MyDayz M65 Jacket Tan Medic";
		descriptionShort="A MyDayz M65 by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Medic\M65_Jacket_md_tan_co.paa",
			"MyDayZ_Clothing\Data\Medic\M65_Jacket_md_tan_co.paa",
			"MyDayZ_Clothing\Data\Medic\M65_Jacket_md_tan_co.paa"
		};
	};
	class M65_Jacket_md_medic_black_co: M65Jacket_ColorBase	{
        displayName="MyDayz M65 Jacket Black Medic";
		descriptionShort="A MyDayz M65 by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Medic\M65_Jacket_md_black_co.paa",
			"MyDayZ_Clothing\Data\Medic\M65_Jacket_md_black_co.paa",
			"MyDayZ_Clothing\Data\Medic\M65_Jacket_md_black_co.paa"
		};
	};
	class armbends_md_medic_white_co: Armband_ColorBase	{
		displayName="MyDayZ Medic White Armband";
		descriptionShort="A MyDayz Armband by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Medic\armbends_md_medic_white_co.paa",
			"MyDayZ_Clothing\Data\Medic\armbends_md_medic_white_co.paa",
			"MyDayZ_Clothing\Data\Medic\armbends_md_medic_white_co.paa",
			"MyDayZ_Clothing\Data\Medic\armbends_md_medic_white_co.paa",
			"MyDayZ_Clothing\Data\Medic\armbends_md_medic_white_co.paa"
		};
	};
	class pressvest_md_medic_black_co: PressVest_ColorBase	{
	    displayName="MyDayZ Medic Vest";
		descriptionShort="A MyDayz vest by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		color="Black";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Medic\pressvest_md_black_co.paa",
			"MyDayZ_Clothing\Data\Medic\pressvest_md_black_co.paa",
			"MyDayZ_Clothing\Data\Medic\pressvest_md_black_co.paa"
		};
	};
	class policevest_md_medic_co: PoliceVest	{
	  displayName="MyDayZ Medic Vest";
		descriptionShort="A MyDayz vest by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		color="Black";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Medic\policevest_md_medic_co.paa",
			"MyDayZ_Clothing\Data\Medic\policevest_md_medic_co.paa",
			"MyDayZ_Clothing\Data\Medic\policevest_md_medic_co.paa"
		};
	};
	class BallisticHelmet_Medic: BallisticHelmet_ColorBase	{
	  displayName="MyDayZ Medic Helmet";
		descriptionShort="A MyDayz helmet for medic by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		visibilityModifier=0.69999999;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Medic\helmetmich_md_bk_co.paa",
			"MyDayZ_Clothing\Data\Medic\helmetmich_md_bk_co.paa",
			"MyDayZ_Clothing\Data\Medic\helmetmich_md_bk_co.paa"
		};
	};

	//NBC Items Black
	class NBC_Gloves_MyDayZ_Black: NBCGloves_ColorBase	{
		displayName="NBC Black Gloves";
		descriptionShort="A MyDayz NBC Black Gloves to protect from radiation by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\MyDayZ_Clothing\Data\NBC\nbc_md_gloves_black_co.paa",
			"\MyDayZ_Clothing\Data\NBC\nbc_md_gloves_black_co.paa",
			"\MyDayZ_Clothing\Data\NBC\nbc_md_gloves_black_co.paa"
		};
	};
	class NBC_Gloves_MyDayZ_Yellow: NBCGloves_ColorBase	{
		displayName="MD NBC Yellow Gloves";
		descriptionShort="A MyDayz NBC Black Gloves to protect from radiation by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\MyDayZ_Clothing\Data\NBC\yellow_nbc_md_gloves.paa",
			"\MyDayZ_Clothing\Data\NBC\yellow_nbc_md_gloves.paa",
			"\MyDayZ_Clothing\Data\NBC\yellow_nbc_md_gloves.paa"
		};
	};
	class NBC_Jacket_MyDayZ_Black: NBCJacketBase	{
		displayName="NBC Black Jacket";
		descriptionShort="A MyDayz NBC Black Joacket to protect from radiation by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		visibilityModifier=0.69999999;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\MyDayZ_Clothing\Data\NBC\nbc_md_jacket_black_co.paa",
			"\MyDayZ_Clothing\Data\NBC\nbc_md_jacket_black_co.paa",
			"\MyDayZ_Clothing\Data\NBC\nbc_md_jacket_black_co.paa"
		};
	};
	class NBC_Jacket_MyDayZ_Yellow: NBCJacketBase	{
		displayName="NBC Yellow Jacket";
		descriptionShort="A MyDayz NBC Yellow Joacket to protect from radiation by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		visibilityModifier=0.69999999;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\MyDayZ_Clothing\Data\NBC\yellow_nbc_md_jacket.paa",
			"\MyDayZ_Clothing\Data\NBC\yellow_nbc_md_jacket.paa",
			"\MyDayZ_Clothing\Data\NBC\yellow_nbc_md_jacket.paa"
		};
	};
	class NBC_Jacket_MyDayZ_Camo: NBCJacketBase	{
		displayName="NBC Camo Jacket";
		descriptionShort="A MyDayz NBC Yellow Joacket to protect from radiation by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		visibilityModifier=0.69999999;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\MyDayZ_Clothing\Data\NBC\nbc_md_jacket_camo.paa",
			"\MyDayZ_Clothing\Data\NBC\nbc_md_jacket_camo.paa",
			"\MyDayZ_Clothing\Data\NBC\nbc_md_jacket_camo.paa"
		};
	};
	class NBC_Pants_MyDayZ_Black: NBCPantsBase	{
		displayName="NBC Black Pant";
		descriptionShort="A MyDayz NBC Black Pant to protect from radiation by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\MyDayZ_Clothing\Data\NBC\nbc_md_pants_black_co.paa",
			"\MyDayZ_Clothing\Data\NBC\nbc_md_pants_black_co.paa",
			"\MyDayZ_Clothing\Data\NBC\nbc_md_pants_black_co.paa"
		};
	};
	class NBC_Pants_MyDayZ_Yellow: NBCPantsBase	{
		displayName="NBC Yellow Pant";
		descriptionShort="A MyDayz NBC Yellow Pant to protect from radiation by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\MyDayZ_Clothing\Data\NBC\yellow_nbc_md_pants.paa",
			"\MyDayZ_Clothing\Data\NBC\yellow_nbc_md_pants.paa",
			"\MyDayZ_Clothing\Data\NBC\yellow_nbc_md_pants.paa"
		};
	};
	class NBC_Pants_MyDayZ_Camo: NBCPantsBase	{
		displayName="NBC Yellow Pant";
		descriptionShort="A MyDayz NBC Yellow Pant to protect from radiation by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\MyDayZ_Clothing\Data\NBC\nbc_md_pants_camo.paa",
			"\MyDayZ_Clothing\Data\NBC\nbc_md_pants_camo.paa",
			"\MyDayZ_Clothing\Data\NBC\nbc_md_pants_camo.paa"
		};
	};
	class NBC_Boots_MyDayZ_Black: NBCBootsBase	{
		displayName="NBC Black Shoes";
		descriptionShort="A MyDayz NBC Black Shoes to protect from radiation by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\MyDayZ_Clothing\Data\NBC\nbc_md_boots_black_co.paa",
			"\MyDayZ_Clothing\Data\NBC\nbc_md_boots_black_co.paa",
			"\MyDayZ_Clothing\Data\NBC\nbc_md_boots_black_co.paa"
		};
	};
	class NBC_Boots_MyDayZ_Yellow: NBCBootsBase	{
		displayName="NBC Yellow Shoes";
		descriptionShort="A MyDayz NBC Yellow Shoes to protect from radiation by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\MyDayZ_Clothing\Data\NBC\yellow_nbc_md_boots.paa",
			"\MyDayZ_Clothing\Data\NBC\yellow_nbc_md_boots.paa",
			"\MyDayZ_Clothing\Data\NBC\yellow_nbc_md_boots.paa"
		};
	};
	class NBC_Boots_MyDayZ_Camo: NBCBootsBase	{
		displayName="NBC Camo Shoes";
		descriptionShort="A MyDayz NBC Yellow Shoes to protect from radiation by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\MyDayZ_Clothing\Data\NBC\nbc_md_boots_camo.paa",
			"\MyDayZ_Clothing\Data\NBC\nbc_md_boots_camo.paa",
			"\MyDayZ_Clothing\Data\NBC\nbc_md_boots_camo.paa"
		};
	};	
	class NBC_Hood_MyDayZ_Black: NBCHoodBase	{
		displayName="NBC Black Hood";
		descriptionShort="A MyDayz NBC Black Hood to protect from radiation by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\MyDayZ_Clothing\Data\NBC\nbc_md_hood_black_co.paa",
			"\MyDayZ_Clothing\Data\NBC\nbc_md_hood_black_co.paa",
			"\MyDayZ_Clothing\Data\NBC\nbc_md_hood_black_co.paa"
		};
	};
	class NBC_Hood_MyDayZ_Yellow: NBCHoodBase	{
		displayName="NBC Yellow Hood";
		descriptionShort="A MyDayz NBC Yellow Hood to protect from radiation by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\MyDayZ_Clothing\Data\NBC\yellow_nbc_md_hood.paa",
			"\MyDayZ_Clothing\Data\NBC\yellow_nbc_md_hood.paa",
			"\MyDayZ_Clothing\Data\NBC\yellow_nbc_md_hood.paa"
		};
	};
	class NBC_Hood_MyDayZ_Camo: NBCHoodBase	{
		displayName="NBC camo Hood";
		descriptionShort="A MyDayz NBC Yellow Hood to protect from radiation by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\MyDayZ_Clothing\Data\NBC\nbc_md_hood_camo.paa",
			"\MyDayZ_Clothing\Data\NBC\nbc_md_hood_camo.paa",
			"\MyDayZ_Clothing\Data\NBC\nbc_md_hood_camo.paa"
		};
	};

	//Camo Gear
	//Camo Suit1
	class policevest_md_camo_co: PressVest_ColorBase	{
		displayName="Mydayz Police Vest Camo";
		descriptionShort="A MyDayz Police vest by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Camo1Suit\policevest_md_camo_co.paa",
			"MyDayZ_Clothing\Data\Camo1Suit\policevest_md_camo_co.paa",
			"MyDayZ_Clothing\Data\Camo1Suit\policevest_md_camo_co.paa"
		};
	};
	class AliceBag_MD_Camo: AliceBag_ColorBase	{
		displayName="MyDayz AliceBag Camo";
		descriptionShort="A MyDayz Alice Backpack by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {
			"MyDayZ_Clothing\Data\Camo1Suit\alicebackpack_camo1_co.paa",
			"MyDayZ_Clothing\Data\Camo1Suit\alicebackpack_camo1_co.paa",
			"MyDayZ_Clothing\Data\Camo1Suit\alicebackpack_camo1_co.paa"
		};
	};
	class HighCapacityVest_MD_Police: HighCapacityVest_ColorBase	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\TacticalVest\tacticalvest_md_police_co.paa",
			"MyDayZ_Clothing\Data\TacticalVest\tacticalvest_md_police_co.paa",
			"MyDayZ_Clothing\Data\TacticalVest\tacticalvest_md_police_co.paa"
		};
	};
	class HighCapacityVest_MD_Camo_Police: HighCapacityVest_ColorBase	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Camo1Suit\tacticalvest_md_camo_police_co.paa",
			"MyDayZ_Clothing\Data\Camo1Suit\tacticalvest_md_camo_police_co.paa",
			"MyDayZ_Clothing\Data\Camo1Suit\tacticalvest_md_camo_police_co.paa"
		};
	};
	class pressvest_md_police_black_co: PressVest_ColorBase	{
		displayName="Mydayz Police Vest";
		descriptionShort="A MyDayz Police pressvest by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Camo1Suit\policevest_md_black_co.paa",
			"MyDayZ_Clothing\Data\Camo1Suit\policevest_md_black_co.paa",
			"MyDayZ_Clothing\Data\Camo1Suit\policevest_md_black_co.paa"
		};
	};
	class policevest_md_camobis_co: PressVest_ColorBase	{
		displayName="Mydayz Police Camo 2";
		descriptionShort="A MyDayz Police vest by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		color="Black";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Camo1Suit\policevest_md_camobis_co.paa",
			"MyDayZ_Clothing\Data\Camo1Suit\policevest_md_camobis_co.paa",
			"MyDayZ_Clothing\Data\Camo1Suit\policevest_md_camobis_co.paa"
		};
	};

	//Camo Suit2
	class FieldPants_Camo2: HunterPants_ColorBase	{
		displayName="Field Pants Camo";
		descriptionShort="Field Pants by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		itemsCargoSize[]={6,6};
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Camo2Suit\HunterPants_Camo1_co.paa",
			"MyDayZ_Clothing\Data\Camo2Suit\HunterPants_Camo1_co.paa",
			"MyDayZ_Clothing\Data\Camo2Suit\HunterPants_Camo1_co.paa"
		};
	};
	class HighCapacityVest_Camo2: HighCapacityVest_ColorBase	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Camo2Suit\tacticalvest_camo1_co.paa",
			"MyDayZ_Clothing\Data\Camo2Suit\tacticalvest_camo1_co.paa",
			"MyDayZ_Clothing\Data\Camo2Suit\tacticalvest_camo1_co.paa"
		};
	};
	class M65_Jacket_Camo2: M65Jacket_ColorBase	{
        displayName="MyDayz M65 Jacket Medic";
		descriptionShort="A MyDayz M65 jacket Camo by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Camo2Suit\M65_Jacket_camo1_co.paa",
			"MyDayZ_Clothing\Data\Camo2Suit\M65_Jacket_camo1_co.paa",
			"MyDayZ_Clothing\Data\Camo2Suit\M65_Jacket_camo1_co.paa"
		};
	};
	class BallisticHelmet_Camo2: BallisticHelmet_ColorBase	{
	  displayName="Ballistic Helmet Camo";
		descriptionShort="A MyDayz helmet Camo by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Camo2Suit\helmetmich_camo1_co.paa",
			"MyDayZ_Clothing\Data\Camo2Suit\helmetmich_camo1_co.paa",
			"MyDayZ_Clothing\Data\Camo2Suit\helmetmich_camo1_co.paa"
		};
	};
		//Camo Suit3
	class FieldPants_Camo3: HunterPants_ColorBase	{
		displayName="Field Pants Camo";
		descriptionShort="Field Pants by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		itemsCargoSize[]={6,6};
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Camo3Suit\HunterPants_Camo3_co.paa",
			"MyDayZ_Clothing\Data\Camo3Suit\HunterPants_Camo3_co.paa",
			"MyDayZ_Clothing\Data\Camo3Suit\HunterPants_Camo3_co.paa"
		};
	};
	class HighCapacityVest_Camo3: HighCapacityVest_ColorBase	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Camo3Suit\tacticalvest_camo3_co.paa",
			"MyDayZ_Clothing\Data\Camo3Suit\tacticalvest_camo3_co.paa",
			"MyDayZ_Clothing\Data\Camo3Suit\tacticalvest_camo3_co.paa"
		};
	};
	class M65_Jacket_Camo3: M65Jacket_ColorBase	{
    displayName="MyDayz M65 Jacket Camo";
		descriptionShort="A MyDayz M65 jacket Camo by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Camo3Suit\M65_Jacket_Camo3_co.paa",
			"MyDayZ_Clothing\Data\Camo3Suit\M65_Jacket_Camo3_co.paa",
			"MyDayZ_Clothing\Data\Camo3Suit\M65_Jacket_Camo3_co.paa"
		};
	};
	class BallisticHelmet_Camo3: BallisticHelmet_ColorBase	{
	  displayName="Ballistic Helmet Camo";
		descriptionShort="A MyDayz helmet Camo by LaGTeK - Our DISCORD: https://discord.gg/KAgNn6K";
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"MyDayZ_Clothing\Data\Camo3Suit\helmetmich_camo3_co.paa",
			"MyDayZ_Clothing\Data\Camo3Suit\helmetmich_camo3_co.paa",
			"MyDayZ_Clothing\Data\Camo3Suit\helmetmich_camo3_co.paa"
		};
	};
};
