#define MAGS_556 magazineWell[] += {"STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"}

class JCA_arifle_HK433_base_F: Rifle_Base_F {
    MAGS_556;
};
class JCA_arifle_HK433_black_F: JCA_arifle_HK433_base_F {
    displayName = "HK433 (Black)";
};
class JCA_arifle_HK433_olive_F: JCA_arifle_HK433_base_F {
    displayName = "HK433 (Olive)";
};
class JCA_arifle_HK433_sand_F: JCA_arifle_HK433_base_F {
    displayName = "HK433 (Sand)";
};
class JCA_arifle_HK433_short_base_F;
class JCA_arifle_HK433_short_black_F: JCA_arifle_HK433_short_base_F {
    displayName = "HK433 CQB (Black)";
};
class JCA_arifle_HK433_short_olive_F: JCA_arifle_HK433_short_base_F {
    displayName = "HK433 CQB (Olive)";
};
class JCA_arifle_HK433_short_sand_F: JCA_arifle_HK433_short_base_F {
    displayName = "HK433 CQB (Sand)";
};

class JCA_arifle_HK437_AFG_base_F;
class JCA_arifle_HK437_AFG_black_F: JCA_arifle_HK437_AFG_base_F {
    displayName = "HK437 AFG (Black)";
};
class JCA_arifle_HK437_AFG_olive_F: JCA_arifle_HK437_AFG_base_F {
    displayName = "HK437 AFG (Olive)";
};
class JCA_arifle_HK437_AFG_sand_F: JCA_arifle_HK437_AFG_base_F {
    displayName = "HK437 AFG (Sand)";
};
class JCA_arifle_HK437_VFG_base_F;
class JCA_arifle_HK437_VFG_black_F: JCA_arifle_HK437_VFG_base_F {
    displayName = "HK437 VFG (Black)";
};
class JCA_arifle_HK437_VFG_olive_F: JCA_arifle_HK437_VFG_base_F {
    displayName = "HK437 VFG (Olive)";
};
class JCA_arifle_HK437_VFG_sand_F: JCA_arifle_HK437_VFG_base_F {
    displayName = "HK437 VFG (Sand)";
};

class JCA_srifle_M107_base_F;
class JCA_srifle_M107_black_F: JCA_srifle_M107_base_F {
    displayName = "M107A1 (Black)";
};
class JCA_srifle_M107_olive_F: JCA_srifle_M107_base_F {
    displayName = "M107A1 (Olive)";
};
class JCA_srifle_M107_sand_F: JCA_srifle_M107_base_F {
    displayName = "M107A1 (Sand)";
};

class JCA_srifle_AWM_base_F;
class JCA_srifle_AWM_black_F: JCA_srifle_AWM_base_F {
    displayName = "M115A3 (Black)";
};
class JCA_srifle_AWM_olive_F: JCA_srifle_AWM_base_F {
    displayName = "M115A3 (Olive)";
};
class JCA_srifle_AWM_sand_F: JCA_srifle_AWM_base_F {
    displayName = "M115A3 (Sand)";
};

class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail {
    class compatibleItems;
};
class JCA_arifle_M16A4_base_F: Rifle_Base_F {
    MAGS_556;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        class CowsSlot: asdg_OpticRail1913 {
            class compatibleItems: compatibleItems {
                #include "IncompatibleScopes.hpp"
            };
        };
    };
};
class JCA_arifle_M16A4_black_F: JCA_arifle_M16A4_base_F {
    displayName = "M16A4 (Black)";
};
class JCA_arifle_M16A4_olive_F: JCA_arifle_M16A4_base_F {
    displayName = "M16A4 (Olive)";
};
class JCA_arifle_M16A4_sand_F: JCA_arifle_M16A4_base_F {
    displayName = "M16A4 (Sand)";
};
class JCA_arifle_M16A4_FG_base_F;
class JCA_arifle_M16A4_FG_black_F: JCA_arifle_M16A4_FG_base_F {
    displayName = "M16A4 FG (Black)";
};
class JCA_arifle_M16A4_FG_olive_F: JCA_arifle_M16A4_FG_base_F {
    displayName = "M16A4 FG (Olive)";
};
class JCA_arifle_M16A4_FG_sand_F: JCA_arifle_M16A4_FG_base_F {
    displayName = "M16A4 FG (Sand)";
};
class JCA_arifle_M16A4_GL_base_F;
class JCA_arifle_M16A4_GL_black_F: JCA_arifle_M16A4_GL_base_F {
    displayName = "M16A4 GL (Black)";
};
class JCA_arifle_M16A4_GL_olive_F: JCA_arifle_M16A4_GL_base_F {
    displayName = "M16A4 GL (Olive)";
};
class JCA_arifle_M16A4_GL_sand_F: JCA_arifle_M16A4_GL_base_F {
    displayName = "M16A4 GL (Sand)";
};

class JCA_arifle_M4A1_base_F: Rifle_Base_F {
    MAGS_556;
};
class JCA_arifle_M4A1_black_F: JCA_arifle_M4A1_base_F {
    displayName = "M4A1 (Black)";
};
class JCA_arifle_M4A1_olive_F: JCA_arifle_M4A1_base_F {
    displayName = "M4A1 (Olive)";
};
class JCA_arifle_M4A1_sand_F: JCA_arifle_M4A1_base_F {
    displayName = "M4A1 (Sand)";
};
class JCA_arifle_M4A1_short_base_F;
class JCA_arifle_M4A1_short_black_F: JCA_arifle_M4A1_short_base_F {
    displayName = "M4A1 CQB (Black)";
};
class JCA_arifle_M4A1_short_olive_F: JCA_arifle_M4A1_short_base_F {
    displayName = "M4A1 CQB (Olive)";
};
class JCA_arifle_M4A1_short_sand_F: JCA_arifle_M4A1_short_base_F {
    displayName = "M4A1 CQB (Sand)";
};
class JCA_arifle_M4A1_GL_base_F;
class JCA_arifle_M4A1_GL_black_F: JCA_arifle_M4A1_GL_base_F {
    displayName = "M4A1 GL (Black)";
};
class JCA_arifle_M4A1_GL_olive_F: JCA_arifle_M4A1_GL_base_F {
    displayName = "M4A1 GL (Olive)";
};
class JCA_arifle_M4A1_GL_sand_F: JCA_arifle_M4A1_GL_base_F {
    displayName = "M4A1 GL (Sand)";
};

class JCA_arifle_M4A4_base_F: Rifle_Base_F {
    MAGS_556;
};

class JCA_arifle_M4A4_AFG_base_F;
class JCA_arifle_M4A4_AFG_black_F: JCA_arifle_M4A4_AFG_base_F {
    displayName = "M4A4 AFG (Black)";
};
class JCA_arifle_M4A4_AFG_olive_F: JCA_arifle_M4A4_AFG_base_F {
    displayName = "M4A4 AFG (Olive)";
};
class JCA_arifle_M4A4_AFG_sand_F: JCA_arifle_M4A4_AFG_base_F {
    displayName = "M4A4 AFG (Sand)";
};
class JCA_arifle_M4A4_GL_base_F;
class JCA_arifle_M4A4_GL_black_F: JCA_arifle_M4A4_GL_base_F {
    displayName = "M4A4 GL (Black)";
};
class JCA_arifle_M4A4_GL_olive_F: JCA_arifle_M4A4_GL_base_F {
    displayName = "M4A4 GL (Olive)";
};
class JCA_arifle_M4A4_GL_sand_F: JCA_arifle_M4A4_GL_base_F {
    displayName = "M4A4 GL (Sand)";
};
class JCA_arifle_M4A4_VFG_base_F;
class JCA_arifle_M4A4_VFG_black_F: JCA_arifle_M4A4_VFG_base_F {
    displayName = "M4A4 VFG (Black)";
};
class JCA_arifle_M4A4_VFG_olive_F: JCA_arifle_M4A4_VFG_base_F {
    displayName = "M4A4 VFG (Olive)";
};
class JCA_arifle_M4A4_VFG_sand_F: JCA_arifle_M4A4_VFG_base_F {
    displayName = "M4A4 VFG (Sand)";
};

class JCA_arifle_SR25_base_F: Rifle_Base_F {
    magazineWell[] += {"CBA_762x51_HK417","CBA_762x51_HK417_L","CBA_762x51_HK417_XL"};
};
class JCA_arifle_SR25_black_F: JCA_arifle_SR25_base_F {
    displayName = "SR25 (Black)";
};
class JCA_arifle_SR25_olive_F: JCA_arifle_SR25_base_F {
    displayName = "SR25 (Olive)";
};
class JCA_arifle_SR25_sand_F: JCA_arifle_SR25_base_F {
    displayName = "SR25 (Sand)";
};
class JCA_muzzle_snds_SR25_base;
class JCA_muzzle_snds_SR25_black: JCA_muzzle_snds_SR25_base {
    displayName = "SR25 Suppressor (Black)";
};
class JCA_muzzle_snds_SR25_olive: JCA_muzzle_snds_SR25_base {
    displayName = "SR25 Suppressor (Olive)";
};
class JCA_muzzle_snds_SR25_sand: JCA_muzzle_snds_SR25_base {
    displayName = "SR25 Suppressor (Sand)";
};

class JCA_smg_MP5_FL_base_F;
class JCA_smg_MP5_FL_black_F: JCA_smg_MP5_FL_base_F {
    displayName = "MP5A5 (Black)";
};
class JCA_smg_MP5_FL_olive_F: JCA_smg_MP5_FL_base_F {
    displayName = "MP5A5 (Olive)";
};
class JCA_smg_MP5_FL_sand_F: JCA_smg_MP5_FL_base_F {
    displayName = "MP5A5 (Sand)";
};
class JCA_smg_MP5_AFG_base_F;
class JCA_smg_MP5_AFG_black_F: JCA_smg_MP5_AFG_base_F {
    displayName = "MP5A5 AFG (Black)";
};
class JCA_smg_MP5_AFG_olive_F: JCA_smg_MP5_AFG_base_F {
    displayName = "MP5A5 AFG (Olive)";
};
class JCA_smg_MP5_AFG_sand_F: JCA_smg_MP5_AFG_base_F {
    displayName = "MP5A5 AFG (Sand)";
};
class JCA_smg_MP5_VFG_base_F;
class JCA_smg_MP5_VFG_black_F: JCA_smg_MP5_VFG_base_F {
    displayName = "MP5A5 VFG (Black)";
};
class JCA_smg_MP5_VFG_olive_F: JCA_smg_MP5_VFG_base_F {
    displayName = "MP5A5 VFG (Olive)";
};
class JCA_smg_MP5_VFG_sand_F: JCA_smg_MP5_VFG_base_F {
    displayName = "MP5A5 VFG (Sand)";
};

class JCA_arifle_SR10_AFG_base_F;
class JCA_arifle_SR10_AFG_black_F: JCA_arifle_SR10_AFG_base_F {
    displayName = "SR10 AFG (Black)";
};
class JCA_arifle_SR10_AFG_olive_F: JCA_arifle_SR10_AFG_base_F {
    displayName = "SR10 AFG (Olive)";
};
class JCA_arifle_SR10_AFG_sand_F: JCA_arifle_SR10_AFG_base_F {
    displayName = "SR10 AFG (Sand)";
};
class JCA_arifle_SR10_VFG_base_F;
class JCA_arifle_SR10_VFG_black_F: JCA_arifle_SR10_VFG_base_F {
    displayName = "SR10 VFG (Black)";
};
class JCA_arifle_SR10_VFG_olive_F: JCA_arifle_SR10_VFG_base_F {
    displayName = "SR10 VFG (Olive)";
};
class JCA_arifle_SR10_VFG_sand_F: JCA_arifle_SR10_VFG_base_F {
    displayName = "SR10 VFG (Sand)";
};

class JCA_smg_UMP_base_F;
class JCA_smg_UMP_black_F: JCA_smg_UMP_base_F {
    displayName = "UMP45 (Black)";
};
class JCA_smg_UMP_olive_F: JCA_smg_UMP_base_F {
    displayName = "UMP45 (Olive)";
};
class JCA_smg_UMP_sand_F: JCA_smg_UMP_base_F {
    displayName = "UMP45 (Sand)";
};
class JCA_smg_UMP_AFG_base_F;
class JCA_smg_UMP_AFG_black_F: JCA_smg_UMP_AFG_base_F {
    displayName = "UMP45 AFG (Black)";
};
class JCA_smg_UMP_AFG_olive_F: JCA_smg_UMP_AFG_base_F {
    displayName = "UMP45 AFG (Olive)";
};
class JCA_smg_UMP_AFG_sand_F: JCA_smg_UMP_AFG_base_F {
    displayName = "UMP45 AFG (Sand)";
};
class JCA_smg_UMP_VFG_base_F;
class JCA_smg_UMP_VFG_black_F: JCA_smg_UMP_VFG_base_F {
    displayName = "UMP45 VFG (Black)";
};
class JCA_smg_UMP_VFG_olive_F: JCA_smg_UMP_VFG_base_F {
    displayName = "UMP45 VFG (Olive)";
};
class JCA_smg_UMP_VFG_sand_F: JCA_smg_UMP_VFG_base_F {
    displayName = "UMP45 VFG (Sand)";
};
