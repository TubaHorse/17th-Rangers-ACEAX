class XtdGearModels
{   
    class sleevesBase;
    class yesNoBase // Call this class for yes/no options to avoid repetition 
    {
        values[]={"Yes","No"};
        alwaysSelectable=1;
        changeInGame=0;
    };
    class patchBase
    {
        label="Patch";
        icon="";
        changeInGame=0;
        values[]={};
        class None
        {
            label="None";
            image="";
        };
        class ONI
        {
            label="Oni";
            image="\17th_rgrs_aceaxcompat\src\patch_oni.paa";
        };
        class WRLD
        {
            label="Warlord";
            image="\17th_rgrs_aceaxcompat\src\patch_warlord_red.paa";
        };
    };
    class CfgWeapons
    {
        #include "models\vestModels.hpp"
        #include "models\uniformModels.hpp"
        #include "models\headwearModels.hpp"
    };
    class CfgVehicles
    {
        #include "models\backpackModels.hpp"
    };
    class CfgGlasses
	{
        #include "models\facewearModels.hpp"
	};
};