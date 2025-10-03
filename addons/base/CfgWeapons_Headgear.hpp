// Beanie
class HelmetBase;
class H_Watchcap_blk: HelmetBase {
    displayName = "Beanie (Dirty)";
};
class H_Watchcap_sgg: H_Watchcap_blk {
    class ItemInfo;
};
class H_Watchcap_sgg_hs: H_Watchcap_sgg {
    displayName = "Beanie (Sage, Headset)";
    BEANIE_HEADSET;
};

// Boonie Hat
class H_Booniehat_khk: HelmetBase {
    displayName = "Boonie Hat (Khaki)";
};
class H_Booniehat_khk_hs: H_Booniehat_khk {
    displayName = "Boonie Hat (Khaki, Headset)";
};
class H_Booniehat_tan: H_Booniehat_khk {
    displayName = "Boonie Hat (Sand)";
    class ItemInfo;
};
class H_Booniehat_tan_hs: H_Booniehat_tan {
    displayName = "Boonie Hat (Sand, Headset)";
    BOONIEHAT_HEADSET;
};
class H_Booniehat_dgtl: H_Booniehat_khk {
    displayName = "Boonie Hat (DAP Green)";
};
class H_Booniehat_mgrn: H_Booniehat_khk {
    displayName = "Boonie Hat (Ranger Green)";
};
class H_Booniehat_mcamo: H_Booniehat_khk {
    displayName = "Boonie Hat (MTP)";
};
class H_Booniehat_oli: H_Booniehat_khk {
    displayName = "Boonie Hat (Olive)";
};
class H_Booniehat_taiga: H_Booniehat_khk {
    displayName = "Boonie Hat (Hex Taiga)";
};
class H_Booniehat_tna_F: H_Booniehat_khk {
    displayName = "Boonie Hat (Tropic)";
};
class H_Booniehat_wdl: H_Booniehat_khk {
    displayName = "Boonie Hat (Woodland)";
};

class H_TurbanO_blk: HelmetBase {
    scope = 1;
    scopeArsenal = 1;
};

// Beret
class H_Beret_blk;
class H_Beret_02: H_Beret_blk {
    displayName = "Beret Officer [IEA] (Black, Blue Ensign)";
};
class H_Beret_Colonel: H_Beret_02 {
    displayName = "Beret Officer [IEA] (Black, Yellow Ensign)";
};
class H_Beret_gen_F: H_Beret_02 {
    displayName = "Beret Officer (Gendarmerie)";
};
class H_Beret_blk_POLICE: H_Beret_blk {
    displayName = "Beret (Navy)";
};
class H_Beret_brn_SF: H_Beret_02 {
    displayName = "Beret Officer (SAS)";
    scope = 1;
    scopeArsenal = 1;
};
class H_Beret_grn_SF: H_Beret_02 {
    displayName = "Beret Officer (SF)";
    scope = 1;
    scopeArsenal = 1;
};
class H_Beret_ocamo: H_Beret_02 {
    displayName = "Beret Officer [CSAT] (Brown)";
};
class H_Beret_CSAT_01_F: H_Beret_02 {
    displayName = "Beret Officer [CSAT] (Red)";
};
class H_Beret_EAF_01_F: H_Beret_blk {
    displayName = "Beret Officer [LDF] (Navy)";
};

// Cap
class H_Cap_red;
class H_Cap_blk: H_Cap_red {
    displayName = "Cap (Dark)";
};
class H_Cap_White_IDAP_F: H_Cap_red {
    displayName = "Cap [IDAP] (White)";
};
class H_Cap_Black_IDAP_F: H_Cap_White_IDAP_F {
    displayName = "Cap [IDAP] (Black)";
};
class H_Cap_Orange_IDAP_F: H_Cap_White_IDAP_F {
    displayName = "Cap [IDAP] (Orange)";
};
class H_Cap_blk_CMMG: H_Cap_red {
    displayName = "Cap [CMMG] (Dark)";
};
class H_Cap_brn_SPECOPS: H_Cap_red {
    displayName = "Cap (Hex Ochre)";
};
class H_Cap_blk_ION: H_Cap_red {
    displayName = "Cap [ION] (Dark)";
};
class H_Cap_Lyfe: H_Cap_red {
    displayName = "Cap [LYFE] (Black)";
};
class H_Cap_police: H_Cap_red {
    displayName = "Cap [Police] (Navy)";
};
class H_Cap_press: H_Cap_red {
    displayName = "Cap [Press] (Black)";
};
class H_Cap_tan: H_Cap_red {
    displayName = "Cap (Sand)";
};
class H_Cap_khaki_specops_UK: H_Cap_red {
    displayName = "Cap [UK] (Olive)";
    scope = 1;
    scopeArsenal = 1;
};
class H_Cap_usblack: H_Cap_red {
    displayName = "Cap [US] (Black)";
    scope = 1;
    scopeArsenal = 1;
};
class H_Cap_tan_specops_US: H_Cap_red {
    displayName = "Cap [US] (MTP)";
    scope = 1;
    scopeArsenal = 1;
};
class H_Cap_blk_Raven: H_Cap_red {
    displayName = "Cap (DAP Green)";
};

// Rangemaster Cap
class H_Cap_headphones: HelmetBase {
    displayName = "Rangemaster Cap (Olive)";
    class ItemInfo;
};
class H_Cap_headphones_rvs: H_Cap_headphones {
    displayName = "Rangemaster Cap (Olive, Reversed)";
    RANGEMASTER_REVERSED;
};
class H_Cap_marshal: H_Cap_headphones {
    displayName = "Rangemaster Cap (Red)";
};

// Military Cap
class H_MilCap_ocamo: HelmetBase {
    displayName = "Military Cap (Hex Ochre, Headset)";
};
class lxWS_H_MilCap_desert: H_MilCap_ocamo {
    displayName = "Military Cap (Desert, Headset)";
};
class H_MilCap_gen_F: H_MilCap_ocamo {
    displayName = "Military Cap (Gendarmerie, Headset)";
};
class H_MilCap_blue: H_MilCap_ocamo {
    displayName = "Military Cap (Navy, Headset)";
};
class H_MilCap_ghex_F: H_MilCap_ocamo {
    displayName = "Military Cap (Hex Tropic, Headset)";
};
class H_MilCap_grn: H_MilCap_ocamo {
    displayName = "Military Cap (Green, Headset)";
};
class H_MilCap_gry: H_MilCap_ocamo {
    displayName = "Military Cap (Grey, Headset)";
};
class H_MilCap_mcamo: H_MilCap_ocamo {
    displayName = "Military Cap (MTP, Headset)";
};
class H_MilCap_taiga: H_MilCap_ocamo {
    displayName = "Military Cap (Hex Taiga, Headset)";
};
class H_MilCap_tna_F: H_MilCap_ocamo {
    displayName = "Military Cap (Tropic, Headset)";
};
class H_MilCap_oucamo: H_MilCap_ocamo {
    displayName = "Military Cap (Hex Urban, Headset)";
};
class H_MilCap_wdl: H_MilCap_ocamo {
    displayName = "Military Cap (Pantera, Headset)";
};
class H_MilCap_dgtl: H_MilCap_oucamo {
    displayName = "Military Cap (DAP Green, Headset)";
};
class H_MilCap_eaf: H_MilCap_ocamo {
    displayName = "Military Cap (Geo Woodland, Headset)";
};

// Parade Cap
class H_ParadeDressCap_01_base_F;
class H_ParadeDressCap_01_CSAT_F: H_ParadeDressCap_01_base_F {
    displayName = "Parade Cap [CSP]";
};
class H_ParadeDressCap_01_US_F: H_ParadeDressCap_01_base_F {
    displayName = "Parade Cap [IEA]";
};

// Shemagh
class H_Shemag_khk: HelmetBase {
    displayName = "Shemagh (Khaki)";
};
class H_Shemag_olive: H_Shemag_khk {
    displayName = "Shemagh (Olive)";
};
class H_Shemag_olive_hs: H_Shemag_olive {
    displayName = "Shemagh (Olive, Headset)";
};
class H_ShemagOpen_tan: HelmetBase {
    displayName = "Shemagh (Tan)";
};
class H_ShemagOpen_khk: H_ShemagOpen_tan {
    displayName = "Shemagh (White)";
};

// Straw Hat
class H_StrawHat: HelmetBase {
    displayName = "Straw Hat (Light)";
};

// Hard Hat
class H_Construction_headset_base_F;
class H_Construction_headset_black_F: H_Construction_headset_base_F {
    displayName = "Hard Hat (Black, Headphones)";
};
class H_Construction_headset_orange_F: H_Construction_headset_base_F {
    displayName = "Hard Hat (Orange, Headphones)";
};
class H_Construction_headset_red_F: H_Construction_headset_base_F {
    displayName = "Hard Hat (Red, Headphones)";
};
class H_Construction_headset_white_F: H_Construction_headset_base_F {
    displayName = "Hard Hat (White, Headphones)";
};
class H_Construction_headset_yellow_F: H_Construction_headset_base_F {
    displayName = "Hard Hat (Yellow, Headphones)";
};
class H_Construction_basic_base_F;
class H_Construction_basic_vrana_F: H_Construction_basic_base_F {
    displayName = "Hard Hat [Vrana] (White)";
};
class H_Construction_earprot_base_F;
class H_Construction_earprot_vrana_F: H_Construction_earprot_base_F {
    displayName = "Hard Hat [Vrana] (White, Ear Protectors)";
};
class H_Construction_headset_vrana_F: H_Construction_headset_base_F {
    displayName = "Hard Hat [Vrana] (White, Headphones)";
};

// Headphones
class H_HeadSet_base_F;
class H_HeadSet_black_F: H_HeadSet_base_F {
    displayName = "Headphones (Black)";
};
class H_HeadSet_orange_F: H_HeadSet_base_F {
    displayName = "Headphones (Orange)";
};
class H_HeadSet_red_F: H_HeadSet_base_F {
    displayName = "Headphones (Red)";
};
class H_HeadSet_white_F: H_HeadSet_base_F {
    displayName = "Headphones (White)";
};
class H_HeadSet_yellow_F: H_HeadSet_base_F {
    displayName = "Headphones (Yellow)";
};
