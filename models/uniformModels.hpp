class 17th_G3
{
	label="[17RBN] Crye G3";
	options[]={"camo","second","tee","shirt","sleeves","dive","war"};
	class camo
	{
		values[]={"BLK","M81","MC","MCB","TSD","TSW","GRY","TAN","RGR","CAD","FLCK"};
	};
	class second
	{
		label="Secondary";
		values[]={};
		changeInGame=0;
		alwaysSelectable=1;	
	};
	class tee
	{
		label="T-Shirt";
		values[]={"None","BLK","GRY","RGR","TAN"};
		alwaysSelectable=1;
		changeInGame=0;
	};
	class shirt
	{
		label="Overshirt";
		values[]={"None","GRY","KHK","OLI"};
		alwaysSelectable=1;
		changeInGame=0;
	};
	class sleeves: sleevesBase
	{
		values[]={"Half","Full"};
	};
	class dive: yesNoBase
	{
		label="Diving Gear";
	};
	class war: yesNoBase
	{
		label="Warlord Logo";
	};
};

class 17th_CBRN
{
	label="[17RBN] CBRN";
	options[]={"camo"};
	class camo
	{
		values[]={"TSD","TSW","M81","MC","MCB","CAD","FLCK"};
	};
};