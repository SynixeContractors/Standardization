class CfgWeapons {
    #include "CfgWeapons_Helmets.hpp"
    #include "CfgWeapons_Launchers.hpp"
    #include "CfgWeapons_Rifles.hpp"
    #include "CfgWeapons_Uniforms.hpp"

    class ItemCore;
    class Vest_Camo_Base: ItemCore {
        class ItemInfo;
    };
    class V_CarrierRigKBT_01_base_F: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            containerClass = "Supply0";
        };
    };
};
