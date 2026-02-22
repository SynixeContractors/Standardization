#include "\x\cba\addons\main\script_macros_common.hpp"

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define ACE_HEARING_PELTOR ace_hearing_hasEHP = 1;ace_hearing_protection = 0.75;ace_hearing_lowerVolume = 0
#define BEANIE_HEADSET model = "\A3\Characters_F\Civil\headgear_beaniehat01.p3d";ACE_HEARING_PELTOR;class ItemInfo: ItemInfo {uniformModel = "\A3\Characters_F\Civil\headgear_beaniehat01.p3d";}
#define BOONIEHAT_HEADSET model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";ACE_HEARING_PELTOR;class ItemInfo: ItemInfo {uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";}
#define RANGEMASTER_REVERSED model = "\lxws\characters_f_lxws\headgear\a3\capb_headphones_lxWS.p3d";ACE_HEARING_PELTOR;class ItemInfo: ItemInfo {uniformModel = "\lxws\characters_f_lxws\headgear\a3\capb_headphones_lxWS.p3d";}

#define TINT_SHADES  ACE_Resistance = 1;ACE_TintAmount = 16.0
#define TINT_TACTICAL \
    ACE_Resistance = 1; \
    ACE_TintAmount = 8.0; \
    ACE_Color[] = {0, 0, -1.5}

#define HIDE_UNIFORM(CLASS) class CLASS: Uniform_Base { scope = 1; scopeArsenal = 1; }
