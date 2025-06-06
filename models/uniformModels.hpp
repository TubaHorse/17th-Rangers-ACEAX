class 17th_G3
{
	label="[17BN] Crye G3";
	options[]={"camo","tee","shirt","sleeves","dive","war"};
	class camo
	{
		values[]={"M81","MC","TGR"};
	};
	class tee
	{
		label="T-Shirt";
		values[]={"None","BLK","GRY","OLI","KHK"};
		alwaysSelectable=1;
		changeInGame=0;
	};
	class shirt
	{
		label="Overshirt";
		values[]={"None","GRY","KHK","OLI"};
		alwaysSelectable=0;
		changeInGame=0;
	};
	class sleeves
	{
		label="Sleeves";
		values[]={"Down","Up"};
		alwaysSelectable=1;
		changeInGame=0;
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