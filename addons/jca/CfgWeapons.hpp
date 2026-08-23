class asdg_SlotInfo;
class asdg_OpticRail: asdg_SlotInfo {
    class compatibleItems;
};
class asdg_OpticRail1913: asdg_OpticRail {
    class compatibleItems: compatibleItems {};
};

class asdg_OpticRailJCA: asdg_OpticRail {
    class compatibleItems {
        JCA_optic_MPO_black = 1;
        JCA_optic_PRO_black = 1;
    };
};

// add small JCA sights to railed pistols
class asdg_PistolOpticRail1913: asdg_OpticRail {
    class compatibleItems: compatibleItems {
        JCA_optic_CRO_black = 1;
        JCA_optic_CRO_olive = 1;
        JCA_optic_CRO_sand = 1;
        JCA_optic_ARO_black = 1;
        JCA_optic_ARO_olive = 1;
        JCA_optic_ARO_sand = 1;
        JCA_optic_MRO_black = 1;
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
