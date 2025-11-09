// PASGT
class H_PASGT_basic_base_F;
class H_PASGT_basic_black_F: H_PASGT_basic_base_F {
    displayName = "PASGT (Black)";
};
class H_PASGT_basic_blue_F: H_PASGT_basic_base_F {
    displayName = "PASGT (Blue)";
};
class H_PASGT_basic_olive_F: H_PASGT_basic_base_F {
    displayName = "PASGT (Olive)";
};
class H_PASGT_basic_white_F: H_PASGT_basic_base_F {
    displayName = "PASGT (White)";
};
class H_PASGT_basic_blue_press_F: H_PASGT_basic_base_F {
    displayName = "PASGT (Press)";
};
class H_PASGT_neckprot_base_F;
class H_PASGT_neckprot_blue_press_F: H_PASGT_neckprot_base_F {
    displayName = "PASGT (Press, Neck Protector)";
};

// Combat Helmet Platform
class H_HelmetB: ItemCore {
    displayName = "CHP (Olive)";
};
class H_HelmetB_camo: H_HelmetB {
    displayName = "CHP (Olive, Camo)";
};
class H_HelmetB_plain_mcamo: H_HelmetB {
    displayName = "CHP (MTP)";
};
class H_HelmetSpecB: H_HelmetB_plain_mcamo {
    displayName = "CHP (Olive, Enhanced)";
};
class H_HelmetB_black: H_HelmetB {
    displayName = "CHP (Black)";
};
class H_HelmetSpecB_blk: H_HelmetSpecB {
    displayName = "CHP (Black, Enhanced)";
};
class H_HelmetB_desert: H_HelmetB {
    displayName = "CHP (Desert)";
};
class H_HelmetSpecB_paint2: H_HelmetSpecB {
    displayName = "CHP (Desert, Enhanced)";
};
class H_HelmetB_grass: H_HelmetB {
    displayName = "CHP (Grass)";
};
class H_HelmetSpecB_paint1: H_HelmetSpecB {
    displayName = "CHP (Grass, Enhanced)";
};
class H_HelmetB_sand: H_HelmetB {
    displayName = "CHP (Sand)";
};
class H_HelmetSpecB_sand: H_HelmetSpecB {
    displayName = "CHP (Sand, Enhanced)";
};
class H_HelmetB_snakeskin: H_HelmetB {
    displayName = "CHP (Snakeskin)";
};
class H_HelmetSpecB_snakeskin: H_HelmetSpecB {
    displayName = "CHP (Snakeskin, Enhanced)";
};
class H_HelmetB_tna_F: H_HelmetB {
    displayName = "CHP (Tropic)";
};
class H_HelmetB_Enh_tna_F: H_HelmetSpecB {
    displayName = "CHP (Tropic, Enhanced)";
};

// Combat Helmet Platform (Light)
class H_HelmetB_light: H_HelmetB {
    displayName = "CHP-L (Olive)";
};
class H_HelmetB_light_black: H_HelmetB_light {
    displayName = "CHP-L (Black)";
};
class H_HelmetB_light_desert: H_HelmetB_light {
    displayName = "CHP-L (Desert)";
};
class H_HelmetB_light_grass: H_HelmetB_light {
    displayName = "CHP-L (Grass)";
};
class H_HelmetB_light_sand: H_HelmetB_light {
    displayName = "CHP-L (Sand)";
};
class H_HelmetB_light_snakeskin: H_HelmetB_light {
    displayName = "CHP-L (Snakeskin)";
};
class H_HelmetB_Light_tna_F: H_HelmetB_light {
    displayName = "CHP-L (Tropic)";
};
class H_HelmetB_light_wdl: H_HelmetB_light {
    displayName = "CHP-L (Woodland)";
};

// Crew Helmet
class H_HelmetCrew_B;
class H_HelmetCrew_I: H_HelmetCrew_B {
    displayName = "Crew Helmet (Olive)";
};

// Heli Pilot Helmet
class H_PilotHelmetHeli_B: H_HelmetB {
    displayName = "Heli Pilot (Black, Visor)";
};
class H_CrewHelmetHeli_B: H_HelmetB {
    displayName = "Heli Pilot (Black, Visor, Cover)";
};
class H_PilotHelmetHeli_I: H_PilotHelmetHeli_B {
    displayName = "Heli Pilot (DAP Green, Visor)";
};
class H_CrewHelmetHeli_I: H_CrewHelmetHeli_B {
    displayName = "Heli Pilot (DAP Green, Visor, Cover)";
};
class H_PilotHelmetHeli_O: H_PilotHelmetHeli_B {
    displayName = "Heli Pilot (Olive, Visor)";
};
class H_CrewHelmetHeli_O: H_CrewHelmetHeli_B {
    displayName = "Heli Pilot (Olive, Visor, Cover)";
};
class H_PilotHelmetHeli_I_E: H_PilotHelmetHeli_O {
    displayName = "Heli Pilot (Green, Visor Up)";
};
class H_CrewHelmetHeli_I_E: H_CrewHelmetHeli_O {
    displayName = "Heli Pilot (Green, Visor Up, Cover)";
};

// Modular Helmet
class H_HelmetIA: H_HelmetB {
    displayName = "Modular Helmet (DAP Green)";
};

// Modular Crew Helmet
class H_HelmetCrew_O: H_HelmetCrew_B {
    displayName = "Crew Helmet (Hex Ochre)";
};
class H_HelmetCrew_O_ghex_F: H_HelmetCrew_O {
    displayName = "Crew Helmet (Hex Tropic)";
};

// Protector Helmet
class H_HelmetO_ocamo: H_HelmetB {
    displayName = "Protector Helmet (Hex Ochre)";
};
class H_HelmetO_ghex_F: H_HelmetO_ocamo {
    displayName = "Protector Helmet (Hex Tropic)";
};
class H_HelmetO_oucamo: H_HelmetO_ocamo {
    displayName = "Protector Helmet (Hex Urban)";
};

// Assassin Helmet
class H_HelmetSpecO_ocamo: H_HelmetO_ocamo {
    displayName = "Assassin Helmet (Hex Ochre)";
};
class H_HelmetSpecO_ghex_F: H_HelmetSpecO_ocamo {
    displayName = "Assassin Helmet (Hex Tropic)";
};

// Defender Helmet
class H_HelmetLeaderO_ocamo: H_HelmetO_ocamo {
    displayName = "Defender Helmet (Hex Ochre)";
};
class H_HelmetLeaderO_oucamo: H_HelmetLeaderO_ocamo {
    displayName = "Defender Helmet (Hex Urban)";
};
