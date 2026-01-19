class 17th_belt
{
	label="[TFA] Battlebelt";
	options[]={"camo","type"};
	class camo
	{
		values[]={"BLK","CYT","MC","RGR"};
	};
	class type
	{
		label="Type";
		values[]={"Assault","Heavy Gunner","Pistol"};
		alwaysSelectable=1;
		changeInGame=0;
	};
};

class 17th_CPC
{
	label="[TFA] CPC";
	options[]={"camo","type","patch","belt"};
	class camo
	{
		values[]={"BLK","CYT","MC","RGR"};
	};
	class type
	{
		label="Type";
		values[]={"Comms","EOD","JTAC","Light","Medic","Team Lead","Weapons"};
		alwaysSelectable=1;
		changeInGame=0;
	};
	class patch: patchBase
	{
		label="Patch";
		values[]={"None", "ONI", "WRLD"};
		alwaysSelectable=1;
		changeInGame=0;
	};
	class belt: yesNoBase
	{
		label="Belt";
		alwaysSelectable=0;
		changeInGame=0;
	};
};

class 17th_JPC
{
	label="[TFA] JPC";
	options[]={"camo","type","patch","belt"};
	class camo
	{
		values[]={"BLK","CYT","MC","RGR"};
	};
	class type
	{
		label="Type";
		values[]={"Assaulter","Grenadier","Gunner","Light","Marksman","Medic","Team Lead"};
		alwaysSelectable=1;
		changeInGame=0;
	};
	class patch: patchBase
	{
		label="Patch";
		values[]={"None", "ONI", "WRLD"};
		alwaysSelectable=1;
		changeInGame=0;
	};
	class belt: yesNoBase
	{
		label="Belt";
		alwaysSelectable=0;
		changeInGame=0;
	};
};

class 17th_MMAC: 17th_JPC
{
	label="[TFA] MMAC";
	options[]={"camo","type","patch","belt"};
};

class 17th_LBT
{
	label="[TFA] LBT";
	options[]={"camo","type","patch"};
	class camo
	{
		values[]={"BLK","CYT","OLI","MC"};
	};
	class type
	{
		label="Type";
		values[]={"Clean","Comms","Light","Medic","Operator","Team Lead","Weapons"};
		alwaysSelectable=1;
		changeInGame=0;
	};
	class patch: patchBase
	{
		label="Patch";
		values[]={"None", "ONI", "WRLD"};
		alwaysSelectable=1;
		changeInGame=0;
	};
};