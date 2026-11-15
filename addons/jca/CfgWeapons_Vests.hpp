class Vest_Camo_Base;
class JCA_V_CarrierRigKBT_01_base_F: Vest_Camo_Base {
    class ItemInfo;
};
class JCA_V_CarrierRigKBT_01_holster_base_F: JCA_V_CarrierRigKBT_01_base_F {
    class ItemInfo: ItemInfo {
        containerClass = "Supply10";
        // This could be fixme when we standardize the weights of magazines more
        // 12rnd mk23 mag is mass 8 while 30rnd 5.56 mag is 8.5
        // for WS glock its 17rnd mag + flash of inventory and no pistol can carry 2 mags
    };
};
