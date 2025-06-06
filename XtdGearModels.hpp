class XtdGearModels
{   
    class yesNoBase // Call this class for yes/no options to avoid repetition 
    {
        values[]={"Yes","No"};
        alwaysSelectable=1;
        changeInGame=0;
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