class 17th_beret
{
	label="[17BN] Beret";
	options[]={"company","rank"};
	class company
	{
		label="Company";
		values[]={"Alpha","Echo","HHC","Tabbed"};
		alwaysSelectable=1;
		changeInGame=0;
	};
	class rank
	{
		label="Rank";
		values[]={"Enlisted","1","2","3","4","5"};
		alwaysSelectable=0;
		changeInGame=0;
	};
};

class 17th_HGU
{
	label="[17BN] HGU-56"
	options[]={"camo","patch"};
	class camo
	{
		values[]={"BLK","OLI","TAN"};
	};
	class patch
	{
		label="Patch";
		values[]={"Cowabunga","Chief","Dickbutt","Medic","UFO"};
		alwaysSelectable=1;
		changeInGame=0;
	};
};

class 17th_MICH
{
	label="[17BN] MICH 2000";
	options[]={"camo","patch"};
	class camo
	{
		values[]={"BLK","M81","MC","OD","TAN"};
		alwaysSelectable=1;
	};
	class patch
	{
		label="Patch";
		values[]={"None","USA","Medic"};
		alwaysSelectable=1;
		changeInGame=0;
	};
};

class 17th_opcfst
{
	label="[17BN] Opscore FAST MT";
	options[]={"camo"};
	class camo
	{
		values[]={"BLK","OLI","TAN"};
	};
};

class 17th_opscXP
{
	label="[17BN] Opscore XP";
	options[]={"camo","cover","style","patch"};
	class camo
	{
		values[]={"BLK","CYT","M81","MC","RGR"};
	};
	class style
	{
		label="Style";
		values[]={"a","b","c","d","e","f"};
		alwaysSelectable=0;
		changeInGame=0;
	};
	class cover: yesNoBase
	{
		label="Cover";
	};
	class patch
	{
		label="Patch";
		values[]={"None","Warlord","Kingpin","Ranger","Praetor","Medic"};
		alwaysSelectable=0;
		changeInGame=0;
	};
};