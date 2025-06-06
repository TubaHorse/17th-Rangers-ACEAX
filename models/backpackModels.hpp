class 17th_asltpk
{
	label="Assault Pack";
	options[]={"camo","patch"};
	class camo
	{
		values[]={"MC","RGR","M81"};
	};
	class patch
	{
		label="Patch";
		values[]={"Flag","Medic A","Medic B"};
		alwaysSelectable=1;
		changeInGame=0;
	};
};

class 17th_kitbag
{
	label="Kitbag";
	options[]={"patch"};
	class patch
	{
		label="Patch";
		values[]={"None","Medic","SOF Medic","SOF","Army 1","Army 2"};
	};
};

class 17th_ILBE
{
	label="[17BN] Radio Bag";
	options[]={"camo","antenna"};
	class camo
	{
		values[]={"M81","MC"};
	};
	class antenna
	{
		label="Antenna";
		values[]={"Blade","VHF/UHF","Whip"};
		alwaysSelectable=1;
		changeInGame=0;
	};
};

class 17th_bergen
{
	label="[TFA] Bergen Backpack";
	options[]={"camo"};
	class camo
	{
		values[]={"CYT","MC","RGR"};
	};
};

class 17th_fatpk: 17th_bergen
{
	label="[TFA] Fatpack";
};

class 17th_eagle
{
	label="Eagle Backpack";
	options[]={"camo"};
	class camo
	{
		values[]={"BLK","M81","MC","TGR"};
	};
};

class 17th_raven
{
	label="Eagle A-III (Raven)";
	options[]={"camo"};
	class camo
	{
		values[]={"BLK","M81","TGR"};
	};
};

class 17th_patrol
{
	label="[TFA] Patrol Backpack";
	options[]={"camo"};
	class camo
	{
		values[]={"MC","RGR","KHK"};
	};
};

class 17th_ASIP
{
	label="[17BN] ASIP";
	options[]={"camo","satcom","style"};
	class camo
	{
		values[]={"MC","M81"};
	};
	class satcom: yesNoBase
	{
		label="SATCOM";
	};
	class style
	{
		label="Style";
		values[]={"A","B","C","Flat"};
		alwaysSelectable=0;
		changeInGame=0;
	};
};

class 17th_carryall
{
	label="Carryall Backpack";
	options[]={"camo"};
	class camo
	{
		values[]={"M81","MC"};
	};
};

class 17th_legstrap: 17th_carryall
{
	label="[17BN] Legstrap";
};

class 17th_backpanel
{
	label="[TFA] Backpanel";
	options[]={"camo","role"};
	class camo
	{
		values[]={"CYT","MC","RGR"};
	};
	class role
	{
		label="Role";
		values[]={"Breacher","Hydration","Pointman","Tomahawk"};
		alwaysSelectable=1;
		changeInGame=0;
	};
};