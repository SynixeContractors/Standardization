class Vest_NoCamo_Base;
class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
    scope = 1;
    scopeCurator = 1;
};
class V_PlateCarrier1_rgr_noflag_F: V_PlateCarrier1_rgr {
    displayName = "Carrier Lite (Green)";
    scope = 2;
    scopeCurator = 2;
};
class V_PlateCarrier1_blk;
class V_PlateCarrier1_tna_F: V_PlateCarrier1_blk {
    scope = 1;
    scopeCurator = 1;
};
class V_PlateCarrier1_wdl: V_PlateCarrier1_blk {
    scope = 1;
    scopeCurator = 1;
};

class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
    scope = 1;
    scopeCurator = 1;
};
class V_PlateCarrier2_rgr_noflag_F: V_PlateCarrier2_rgr {
    displayName = "Carrier Rig (Green)";
    scope = 2;
    scopeCurator = 2;
};
class V_PlateCarrier2_blk;
class V_PlateCarrier2_wdl: V_PlateCarrier2_blk {
    scope = 1;
    scopeCurator = 1;
};
class V_PlateCarrier2_tna_F: V_PlateCarrier2_blk {
    scope = 1;
    scopeCurator = 1;
};

class V_EOD_base_F;
class V_EOD_IDAP_blue_F: V_EOD_base_F {
    displayName = "EOD Vest [IDAP] (Blue)";
};

class V_HarnessOGL_brn;
class V_HarnessOGL_ghex_F: V_HarnessOGL_brn {
    displayName = "LBV Grenadier Harness (Hex Tropic)";
};
class V_HarnessO_brn;
class V_HarnessO_gry: V_HarnessO_brn {
    displayName = "LBV Harness (Hex Urban)";
};
class V_HarnessOGL_gry: V_HarnessO_gry {
    displayName = "LBV Grenadier Harness (Hex Urban)";
};
class V_HarnessOGL_oicamo: V_HarnessOGL_brn {
    displayName = "LBV Grenadier Harness (Hex Ochre)";
};
class V_HarnessO_oicamo: V_HarnessO_gry {
    displayName = "LBV Harness (Hex Ochre)";
};

// Rebreather
class Vest_Camo_Base;
class V_RebreatherB: Vest_Camo_Base {
    displayName = "Rebreather (Black)";
};
class V_RebreatherIA: V_RebreatherB {
    displayName = "Rebreather (Green)";
};
class V_RebreatherIR: V_RebreatherB {
    displayName = "Rebreather (Olive)";
};
class V_Rebreather: V_RebreatherB {
    displayName = "Rebreather (Hex)";
};

// Slash Bandolier
class V_BandollierB_khk;
class V_BandollierB_ghex_F: V_BandollierB_khk{
    displayName = "Slash Bandolier (Hex Tropic)";
};

// Tactical Vest
class V_TacVest_camo: Vest_Camo_Base {
    displayName = "Tactical Vest (Woodland)";
};

class V_PlateCarrier_Kerry: V_PlateCarrier1_rgr {
    scope = 1;
    scopeCurator = 1;
};

class V_PlateCarrierIA1_dgtl: Vest_NoCamo_Base {
    displayName = "GA Carrier Lite (DAP Green)";
};
class V_PlateCarrierIA2_dgtl: V_PlateCarrierIA1_dgtl {
    displayName = "GA Carrier Rig (DAP Green)";
};
class V_PlateCarrierIAGL_dgtl: V_PlateCarrierIA2_dgtl {
    displayName = "GA Carrier GL Rig (DAP Green)";
};
