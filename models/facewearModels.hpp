class 17th_pitvip
{
	label="[17BN] Pit Vipers";
	options[]={"style","alt"};
	class style
	{
		label="Style";
		values[]={"1993","Blacking Out","Cosmos","Gold Standard","Hot Tropics","LA Brights","Merika","Test"};
		alwaysSelectable=1;
		changeInGame=0;
	};
	class alt
	{
		label="Alternate";
		values[]={"STD","ALT"};
		alwaysSelectable=0;
		changeInGame=0;
	};
};

class threeOptions
{
	values[]={"None","A","B"};
	alwaysSelectable=1;
	changeInGame=0;
};
class 17th_facewear
{
	label="[17BN] Facewear";
	options[]={"mframe","ess","shemag"};
	class mframe: threeOptions
	{
		label="M+Frame";
		values[]+={"C","D"};
	};
	class ess: threeOptions
	{
		label="ESS Goggles";
	};
	class shemag: threeOptions
	{
		label="Shemag";
	};
};