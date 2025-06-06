class 17th_belt
{
	label="[TFA] Battlebelt";
	options[]={"camo","type"};
	class camo
	{
		values[]={"COY","MC","RGR"};
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
		values[]={"CYT","MC","RGR"};
	};
	class type
	{
		label="Type";
		values[]={"Comms","Fast","Light","Team Lead","Weapons"};
		alwaysSelectable=1;
		changeInGame=0;
	};
	class patch
	{
		label="Patch";
		values[]={"None","JTAC","SOTACC","IR Flag","Worn IR","Medic","EOD"};
		alwaysSelectable=0;
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
	options[]={"camo","type","belt"};
	class camo
	{
		values[]={"CYT","MC","RGR"};
	};
	class type
	{
		label="Type";
		values[]={"Assaulter","Grenadier","Gunner","Light","Marksman","Medic","Team Lead"};
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
	options[]={"camo","type","belt"};
};

class 17th_LBT
{
	label="[TFA] LBT";
	options[]={"camo","type"};
	class camo
	{
		values[]={"CYT","OLI","MC"};
	};
	class type
	{
		label="Type";
		values[]={"Clean","Comms","Light","Medic","Operator","Team Lead","Weapons"};
		alwaysSelectable=1;
		changeInGame=0;
	};
};