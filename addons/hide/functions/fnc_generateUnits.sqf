#include "..\script_component.hpp"

GVAR(factions) = [
    "Aegis_CIV_ARG_F",
    "Aegis_CIV_GEN_F",
    "Aegis_CIV_HI_F",
    "Aegis_CIV_LIV_F",
    "Aegis_CIV_MA_F",

    "Atlas_BLU_A_ard_F",
    "Atlas_BLU_A_F",
    "Atlas_BLU_A_trp_F",
    "Atlas_BLU_G_ard_F",
    "Atlas_BLU_G_F",
    "Atlas_BLU_H_F",
    "Atlas_BLU_I_F",
    "Atlas_BLU_K_F",
    "Atlas_BLU_L_F",
    "Atlas_BLU_M_F",
    "Atlas_IND_AR_F",
    "Atlas_IND_C_F",
    "Atlas_IND_I_F",
    "Atlas_IND_R_F",
    "Atlas_IND_UNO_F",
    "Atlas_IND_UNO_wdl_F",
    "Atlas_OPF_PLANMC_F",
    "Atlas_OPF_T_F",
    "Atlas_OPF_V_F",
    "Atlas_OPF_V_wdl_F",
    "Atlas_OPF_W_F",

    "BLU_A_F",
    "BLU_A_tna_F",
    "BLU_A_wdl_F",
    "BLU_CTRG_F",
    "BLU_CTRG_tna_F",
    "BLU_EAF_ard_F",
    "BLU_EAF_F",
    "BLU_F",
    "BLU_G_F",
    "BLU_GEN_F",
    "BLU_ION_F",
    "BLU_ION_lxWS",
    "BLU_NATO_lxWS",
    "BLU_NATO_LXWS",
    "BLU_T_F",
    "BLU_TURA_lxWS",
    "BLU_UN_lxWS",
    "BLU_W_F",
    "CIV_F",
    "CIV_IDAP_F",
    "IND_C_F",
    "IND_E_ard_F",
    "IND_E_F",
    "IND_F",
    "IND_G_F",
    "IND_ION_lxWS",
    "IND_L_F",
    "IND_P_F",
    "IND_Raven_F",
    "IND_SFIA_lxWS",
    "IND_TURA_lxWS",
    "IND_UN_lxWS",
    "MU_islam_F",
    "MU_LIVP_F",
    "MU_MERCS_F",
    "MU_MILITIA_F",
    "OPF_A_F",
    "Opf_BLU_P_F",
    "OPF_CD_F",
    "OPF_F",
    "OPF_G_F",
    "OPF_GEN_F",
    "Opf_IND_I_F",
    "Opf_IND_P_F",
    "Opf_IND_R_F",
    "OPF_ION_lxWS",
    "Opf_OPF_I_F",
    "Opf_OPF_L_F",
    "Opf_OPF_P_F",
    "Opf_OPF_R_F",
    "Opf_OPF_S_F",
    "OPF_R_ard_F",
    "OPF_R_F",
    "OPF_Raven_F",
    "OPF_SFIA_lxWS",
    "OPF_T_F",
    "OPF_TURA_lxWS",
    "OPF_V_F",
    "OPF_V_tna_F",

    "tacs_BLU",
    "tacs_IND",

    "WSLV_Exp"
];

private _root = configFile >> "CfgVehicles";
private _units = QUOTE(getText (_x >> ""faction"") in GVAR(factions)) configClasses _root;

diag_log format ["Found %1 units", count _units];

private _bases = [];
private _defined = [];

{
    private _parent = configName inheritsFrom _x;
    _bases pushBackUnique _parent;
    _defined pushBackUnique configName _x;
    "ace" callExtension ["clipboard:append", [format ["%1:%2;%3", configName _x, _parent, endl]]];
} forEach _units;

"ace" callExtension ["clipboard:complete", []];
