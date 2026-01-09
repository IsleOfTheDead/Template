class CfgPatches
{
	class Template_Items_Class
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "DZ_Data", "DZ_Items_Class" };
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class TemplateItem: Inventory_Base
	{
		scope=2;
		displayName="Template Item";
		descriptionShort="An item to hold place in the template.";
		repairableWithKits[]={};
		repairCosts[]={};
	};
};
