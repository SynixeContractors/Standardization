class asdg_SlotInfo;
class asdg_OpticRail: asdg_SlotInfo {
    class compatibleItems;
};

// add pistol optics for railed pistol (chiappa rhino and desert eagle)
class asdg_PistolOpticRail1913: asdg_OpticRail {
    class compatibleItems: compatibleItems {
        optic_MRD_black = 1;
        optic_MRD_khk_RF = 1;
        optic_MRD = 1;
        optic_MRD_tan_RF = 1;
    };
};

class CfgWeapons {
    class ItemCore;

    #include "CfgWeapons_Attachments.hpp"
    #include "CfgWeapons_Gear.hpp"
    #include "CfgWeapons_Headgear.hpp"
    #include "CfgWeapons_Helmets.hpp"
    #include "CfgWeapons_Launchers.hpp"
    #include "CfgWeapons_Pistols.hpp"
    #include "CfgWeapons_Rifles.hpp"
    #include "CfgWeapons_Uniforms.hpp"
    #include "CfgWeapons_Vests.hpp"
};
