class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail {
    class compatibleItems;
};

class asdg_OpticRailJCA: asdg_OpticRail {
    class compatibleItems {
        JCA_optic_MPO_black = 1;
        JCA_optic_PRO_black = 1;
    };
};

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
    };
    class Pistol;
    class Pistol_Base_F: Pistol {
        class WeaponSlotsInfo;
    };

    #include "CfgWeapons_Headgear.hpp"
    #include "CfgWeapons_Helmets.hpp"
    #include "CfgWeapons_Pistols.hpp"
    #include "CfgWeapons_Rifles.hpp"
    #include "CfgWeapons_Sights.hpp"
    #include "CfgWeapons_Vests.hpp"
};
