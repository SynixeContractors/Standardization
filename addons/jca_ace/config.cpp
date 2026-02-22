class CfgPatches
{
    class ld3k_jca_ia_compat_ace3
    {
        requiredAddons[]=
        {
            "ace_main",
            "Weapons_F_JCA_IA",
            "Weapons_F_JCA_IA_Accessories",
            "Weapons_F_JCA_IA_LongRangeRifles_AWM",
            "Weapons_F_JCA_IA_LongRangeRifles_M107",
            "Weapons_F_JCA_IA_Pistols_P226",
            "Weapons_F_JCA_IA_Pistols_P320",
            "Weapons_F_JCA_IA_Pistols_Mk23",
            "Weapons_F_JCA_IA_Rifles_HK433",
            "Weapons_F_JCA_IA_Rifles_HK437",
            "Weapons_F_JCA_IA_Rifles_M4A1",
            "Weapons_F_JCA_IA_Rifles_M4A4",
            "Weapons_F_JCA_IA_Rifles_M16A4",
            "Weapons_F_JCA_IA_Rifles_SR10",
            "Weapons_F_JCA_IA_Rifles_SR25",
            "Weapons_F_JCA_IA_SMGs_MP5",
            "Weapons_F_JCA_IA_SMGs_UMP",
            "Weapons_F_JCA_Pistols_M9A1",
            "Weapons_F_JCA_HF_Explosives"
        };
        skipWhenMissingDependencies = 1;
        requiredversion=0.1;
        units[]={};
        weapons[]={};
    };
};
class CfgAmmo
{
    class BulletBase;
    class B_338_Ball;
    class GrenadeHand;
    // JCA Bullets inherited from vanilla class B_9x21_Ball. To avoid all conflict with other mod, all JCA bullets with JCA as prefixe.
    // class B_9x21_Ball: BulletBase official BI tool All-in-one Config Arma3 2.17.152041 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    class JCA_B_9x19_Ball_P320C_FMJ: BulletBase // M1152 Sig Sauer 9x19mm 115gr Full Metal Jacket FMJ https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" 9mm 115gr Elite Ball FMJ https://www.sigsauer.com/9mm-115gr-elite-ball-fmj.html
        ACE_bulletMass=7.452; // 115gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10 (Ammo Temp MV Curve Tables by TiborasaurusRex). Muzzle velocity shift 0m/s 70°F (21°C), -1m/s 15°C
        ACE_ballisticCoefficients[]={0.159}; // ICAO G1 BC from exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={362}; // Muzzle Velocities 70°F (21°C) +1m/s, 361m/s (1185fps, 3.9") ICAO conditions (15°C, 1013.25hPa, 0%) according to JCA_P320 initSpeed, 1185fps barrel length 4.0" ± 1/16" (± 3.9375", 4.0625") https://www.sigsauer.com/9mm-115gr-elite-ball-fmj.html
        ACE_barrelLengths[]={99}; // 3.9" P320 Compact barrel length https://www.sigsauer.com/p320-compact.html
        hit=4.4; // Full Metal Jacket, 486 Joules, B_9x21_Ball 5
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_9mm";
        cost=100;
        typicalSpeed=361; // JCA_15Rnd_9x19_P320C_FMJ_Mag initSpeed
        airFriction=-0.00187745; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=1.2; // Full Metal Jacket
        deflecting=25;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock=1;
        tracerScale=0.5;
        tracerStartTime=0.05;
        tracerEndTime=1;
        nvgOnly=0; // B_9x21_Ball 1
        audibleFire=30;
        aiAmmoUsageFlags=64;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
    };
    class JCA_B_9x19_Ball_P320C_JHP: JCA_B_9x19_Ball_P320C_FMJ // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
    {
        ACE_bulletLength=14.859; // 0.585" 9mm 147gr Elite V-Crown JHP https://www.sigsauer.com/9mm-147gr-elite-v-crown-jhp-20ct.html
        ACE_bulletMass=9.525; // 147gr
        ACE_ballisticCoefficients[]={0.176}; // ICAO G1 BC from exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_muzzleVelocities[]={301}; // Muzzle Velocities 70°F (21°C) +1m/s, 300m/s (985fps, 3.9") ICAO conditions (15°C, 1013.25hPa, 0%) according to JCA_P320 initSpeed, 985fps barrel length 4.0" ± 1/16" (± 3.9375", 4.0625") https://www.sigsauer.com/9mm-147gr-elite-v-crown-jhp-20ct.html
        hit=6.9; // Jacketed Hollow Point, 429 Joules, B_9x21_Ball 5
        typicalSpeed=300; // JCA_15Rnd_9x19_P320C_JHP_Mag initSpeed
        airFriction=-0.00115136; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=0.72; // Jacketed Hollow Point, B_9x21_Ball 1.2
        visibleFire=1; // Subsonic, B_127x54_Ball, BulletBase 3
        audibleFire=5; // Subsonic, B_127x54_Ball, B_9x21_Ball 30
    };
    class JCA_B_9x19_Ball_P320C_Tracer_Green: JCA_B_9x19_Ball_P320C_FMJ
    {
        visibleFire=5; // B_9x21_Ball 3, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_9x19_Ball_P320C_Tracer_Red: JCA_B_9x19_Ball_P320C_Tracer_Green
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Red";
    };
    class JCA_B_9x19_Ball_P320C_Tracer_Yellow: JCA_B_9x19_Ball_P320C_Tracer_Green
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
    };
    class JCA_B_9x19_Ball_P320C_Tracer_IR: JCA_B_9x19_Ball_P320C_FMJ
    {
        nvgOnly=1;
    };
    class JCA_B_9x19_Ball_P226_FMJ: BulletBase // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" https://www.sigsauer.com/9mm-p-124gr-elite-ball-m17-fmj-box-50.html
        ACE_bulletMass=8.035; // 124gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10 (Ammo Temp MV Curve Tables by TiborasaurusRex). Muzzle velocity shift 0m/s 70°F (21°C), -1m/s 15°C
        ACE_ballisticCoefficients[]={0.194}; // ICAO G1 BC from exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_barrelLengths[]={101.6,127,228.6}; // default ACE3 4", 5", 9" barrel lengths
        ACE_muzzleVelocities[]={366,398,430}; // Muzzle Velocities 70°F (21°C) +1m/s, 378m/s (1240fps) 4.4" (112mm) ICAO conditions (15°C, 1013.25hPa, 0%) according to JCA_P226 initSpeed
        hit=4.8; // Full Metal Jacket, 574 Joules, B_9x21_Ball 5
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_9mm";
        cost=100;
        typicalSpeed=378; // JCA_15Rnd_9x19_P226_FMJ_Mag and JCA_15Rnd_9x19_P226_JHP_Mag initSpeed
        airFriction=-0.0016589; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=1.2; // Full Metal Jacket
        deflecting=25;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock=1;
        tracerScale=0.5;
        tracerStartTime=0.05;
        tracerEndTime=1;
        nvgOnly=0; // B_9x21_Ball 1
        audibleFire=30;
        aiAmmoUsageFlags=64;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
    };
    class JCA_B_9x19_Ball_P226_JHP: JCA_B_9x19_Ball_P226_FMJ // M17 Sig Sauer NATO 9x19mm +P 124gr V-Crown https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_ballisticCoefficients[]={0.166}; // ICAO G1 BC from exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        hit=8; // Jacketed Hollow Point, 574 Joules, B_9x21_Ball 5
        airFriction=-0.00193931; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=0.72; // Jacketed Hollow Point, B_9x21_Ball 1.2
    };
    class JCA_B_9x19_Ball_P226_SUB: JCA_B_9x19_Ball_P226_FMJ // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
    {
        ACE_bulletLength=14.859; // 0.585" 9mm 147gr Elite V-Crown JHP https://www.sigsauer.com/9mm-147gr-elite-v-crown-jhp-20ct.html
        ACE_bulletMass=9.525; // 147gr
        ACE_ballisticCoefficients[]={0.193}; // ICAO G1 BC from exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_muzzleVelocities[]={301,327,354}; // Muzzle Velocities 70°F (21°C) +1m/s, 311m/s (1020fps) 4.4" (112mm) ICAO conditions (15°C, 1013.25hPa, 0%) according to JCA_P226 initSpeed
        hit=7.2; // Jacketed Hollow Point, 461 Joules, B_9x21_Ball 5
        typicalSpeed=311; // JCA_15Rnd_9x19_P226_SUB_Mag initSpeed
        airFriction=-0.00114081; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=0.72; // Jacketed Hollow Point, B_9x21_Ball 1.2
        visibleFire=1; // Subsonic, B_127x54_Ball, BulletBase 3
        audibleFire=5; // Subsonic, B_127x54_Ball, B_9x21_Ball 30
    };
    class JCA_B_9x19_Ball_P226_Tracer_Green: JCA_B_9x19_Ball_P226_FMJ
    {
        visibleFire=5; // B_9x21_Ball 3, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_9x19_Ball_P226_Tracer_Red: JCA_B_9x19_Ball_P226_Tracer_Green
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Red";
    };
    class JCA_B_9x19_Ball_P226_Tracer_Yellow: JCA_B_9x19_Ball_P226_Tracer_Green
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
    };
    class JCA_B_9x19_Ball_P226_Tracer_IR: JCA_B_9x19_Ball_P226_FMJ
    {
        nvgOnly=1;
    };
    class JCA_B_9x19_Ball_M9A1_FMJ: BulletBase // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" https://www.sigsauer.com/9mm-p-124gr-elite-ball-m17-fmj-box-50.html
        ACE_bulletMass=8.035; // 124gr
        ACE_ammoTempMuzzleVelocityShifts[]={-1.87,-1.82,-1.66,-1.4,-1.04,-0.57,0,0.68,1.46,2.34,3.33}; // Same curve default ACE_ammoTempMuzzleVelocityShifts, values /10. Muzzle velocity shift 0m/s ICAO conditions (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.212}; // ICAO G1 BC from exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_barrelLengths[]={101.6,127,228.6}; // default ACE3 4", 5", 9" barrel lengths
        ACE_muzzleVelocities[]={365,397,429}; // 365m/s (1198fps) barrel length 4", 394m/s (1293fps) barrel length 4.9" (125mm) ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_15Rnd_9x19_M9A1 magazines initSpeed
        hit=5; // Full Metal Jacket, 624 Joules, B_9x21_Ball 5
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_9mm";
        cost=100;
        typicalSpeed=394; // JCA_15Rnd_9x19_M9A1_FMJ_Mag and JCA_15Rnd_9x19_M9A1_JHP_Mag initSpeed
        airFriction=-0.0016017; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=1.2; // Full Metal Jacket
        deflecting=25;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock=1;
        tracerScale=0.5;
        tracerStartTime=0.05;
        tracerEndTime=1;
        nvgOnly=0; // B_9x21_Ball 1
        audibleFire=30;
        aiAmmoUsageFlags=64;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
    };
    class JCA_B_9x19_Ball_M9A1_JHP: JCA_B_9x19_Ball_M9A1_FMJ // M17 Sig Sauer NATO 9x19mm +P 124gr V-Crown https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_ballisticCoefficients[]={0.181}; // ICAO G1 BC from exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        hit=8.3; // Jacketed Hollow Point, 624 Joules, B_9x21_Ball 5
        airFriction=-0.00187711; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=0.72; // Jacketed Hollow Point, B_9x21_Ball 1.2
    };
    class JCA_B_9x19_Ball_M9A1_SUB: JCA_B_9x19_Ball_M9A1_FMJ // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
    {
        ACE_bulletMass=9.525; // 147gr
        ACE_ballisticCoefficients[]={0.217}; // ICAO G1 BC from exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_muzzleVelocities[]={300,326,353}; // 300m/s (985fps) barrel length 4", 324m/s (1063fps) barrel length 4.9" (125mm) ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_15Rnd_9x19_M9A1 magazines initSpeed
        hit=7.5; // Jacketed Hollow Point, 500 Joules, B_9x21_Ball 5
        typicalSpeed=324; // JCA_15Rnd_9x19_M9A1_SUB_Mag initSpeed
        airFriction=-0.001106; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=0.72; // Jacketed Hollow Point, B_9x21_Ball 1.2
        visibleFire=1; // Subsonic, B_127x54_Ball, BulletBase 3
        audibleFire=5; // Subsonic, B_127x54_Ball, B_9x21_Ball 30
    };
    class JCA_B_9x19_Ball_M9A1_Tracer_Green: JCA_B_9x19_Ball_M9A1_FMJ
    {
        visibleFire=5; // B_9x21_Ball 3, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_9x19_Ball_M9A1_Tracer_Red: JCA_B_9x19_Ball_M9A1_Tracer_Green
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Red";
    };
    class JCA_B_9x19_Ball_M9A1_Tracer_Yellow: JCA_B_9x19_Ball_M9A1_Tracer_Green
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
    };
    class JCA_B_9x19_Ball_M9A1_Tracer_IR: JCA_B_9x19_Ball_M9A1_FMJ
    {
        nvgOnly=1;
    };
    class JCA_B_9x19_Ball_MP5_FMJ: BulletBase // M17 Sig Sauer NATO 9x19mm +P 124gr FMJ https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" https://www.sigsauer.com/9mm-p-124gr-elite-ball-m17-fmj-box-50.html
        ACE_bulletMass=8.035; // 124gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10 (Ammo Temp MV Curve Tables by TiborasaurusRex). Muzzle velocity shift 0m/s 70°F (21°C), -1m/s 15°C
        ACE_ballisticCoefficients[]={0.235}; // ICAO G1 BC from exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_barrelLengths[]={101.6,127,228.6}; // default ACE3 4", 5", 9" barrel lengths
        ACE_muzzleVelocities[]={366,398,430}; // Muzzle Velocities 70°F (21°C) +1m/s, 365m/s (1198fps, 4"), 428m/s (1404fps) 8.858" (225mm) ICAO conditions (15°C, 1013.25hPa, 0%) according to JCA_MP5A5 initSpeed
        hit=5.4; // Full Metal Jacket, 736 Joules, B_9x21_Ball 5
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_9mm";
        cost=100;
        typicalSpeed=428; // JCA_30Rnd_9x19_MP5_FMJ_Mag and JCA_30Rnd_9x19_MP5_JHP_Mag initSpeed
        airFriction=-0.0015693; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=1.2; // Full Metal Jacket
        deflecting=25;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock=1;
        tracerScale=0.5;
        tracerStartTime=0.05;
        tracerEndTime=1;
        nvgOnly=0; // B_9x21_Ball 1
        audibleFire=30;
        aiAmmoUsageFlags=64;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
    };
    class JCA_B_9x19_Ball_MP5_JHP: JCA_B_9x19_Ball_MP5_FMJ // M17 Sig Sauer NATO 9x19mm +P 124gr V-Crown https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_ballisticCoefficients[]={0.204}; // ICAO G1 BC from exterior ballistic app "EBC V2" based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        hit=9; // Jacketed Hollow Point, 736 Joules, B_9x21_Ball 5
        airFriction=-0.00180949; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=0.72; // Jacketed Hollow Point, B_9x21_Ball 1.2
    };
    class JCA_B_9x19_Ball_MP5_Tracer_Green: JCA_B_9x19_Ball_MP5_FMJ
    {
        visibleFire=5; // B_9x21_Ball 3, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_9x19_Ball_MP5_Tracer_Red: JCA_B_9x19_Ball_MP5_Tracer_Green
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Red";
    };
    class JCA_B_9x19_Ball_MP5_Tracer_Yellow: JCA_B_9x19_Ball_MP5_Tracer_Green
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
    };
    class JCA_B_9x19_Ball_MP5_Tracer_IR: JCA_B_9x19_Ball_MP5_FMJ
    {
        nvgOnly=1;
    };
    class JCA_B_45ACP_Ball_Mk23: BulletBase // Winchester Law Enforcement .45 ACP +P 230gr, 990fps (302m/s) barrel length 5" https://winchesterle.com/Ammunition/Products/Handgun/Ranger-T-Series/RA45TP
    {
        ACE_caliber=11.48; // CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/45-auto-en-1.pdf
        ACE_bulletLength=16.99; // 0.669"
        ACE_bulletMass=14.904; // 230gr
        ACE_ammoTempMuzzleVelocityShifts[]={-1.87,-1.82,-1.66,-1.4,-1.04,-0.57,0,0.68,1.46,2.34,3.33}; // Same curve default ACE_ammoTempMuzzleVelocityShifts, values /10. Muzzle velocity shift 0m/s ICAO conditions (15°C, 1013.25hPa, 0%)
        // ACE_ballisticCoefficients[]={0.193}; // 990fps (302m/s) 5", ICAO G1 BC from exterior ballistic app "EBC V2" based on https://winchesterle.com/Ammunition/Products/Handgun/Ranger-T-Series/RA45TP
        // ACE_standardAtmosphere="ICAO";
        // ACE_ballisticCoefficients[]={0.187}; // 990fps (302m/s) 5", ASM G1 BC from exterior ballistic app "EBC V2" based on https://winchesterle.com/Ammunition/Products/Handgun/Ranger-T-Series/RA45TP
        // ACE_standardAtmosphere="ASM";
        ACE_ballisticCoefficients[]={0.209}; // 1020fps (311m/s) 149mm, ICAO G1 BC from exterior ballistic app "EBC V2" based on https://winchesterle.com/Ammunition/Products/Handgun/Ranger-T-Series/RA45TP
        ACE_standardAtmosphere="ICAO";
        // ACE_ballisticCoefficients[]={0.203}; // 1020fps (311m/s) 149mm, ASM G1 BC from exterior ballistic app "EBC V2" based on https://winchesterle.com/Ammunition/Products/Handgun/Ranger-T-Series/RA45TP
        // ACE_standardAtmosphere="ASM";
        ACE_velocityBoundaries[]={};
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={278,302,344}; // 311m/s barrel length 149mm ICAO conditions (15°C, 1013.25 hPa, 0%)
        ACE_barrelLengths[]={101.6,127,228.6}; // 4", 5", 9"
        airLock=1;
        hit=6.2; // 721 Joules, B_45ACP_Ball 5 584 Joules, JCA 7
        indirectHit=0;
        indirectHitRange=0;
        aiAmmoUsageFlags=64;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
        cartridge="FxCartridge_9mm";
        model="\A3\Weapons_f\Data\bullettracer\tracer_white"; // B_45ACP_Ball tracer_red
        caliber=1.4;
        // .45 ACP +P 230gr, bare gelatin total penetration 11.8" velocity 990fps, "meat.bisurf" (bulletPenetrability 350): caliber ~2.8
        deflecting=25;
        visibleFire=1; // Subsonic, B_127x54_Ball, BulletBase 3
        audibleFire=5; // Subsonic, B_127x54_Ball, B_45ACP_Ball 45
        cost=100;
        typicalSpeed=311; // 721 Joules, B_45ACP_Ball 280 584 Joules
        airFriction=-0.00105488; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        tracerScale=0.6;
        tracerStartTime=0.0075;
        tracerEndTime=5;
        nvgOnly=0; // B_45ACP_Ball w/o nvgOnly
    };
    class JCA_B_45ACP_Ball_Mk23_Tracer_Red: JCA_B_45ACP_Ball_Mk23
    {
        visibleFire=5; // B_45ACP_Ball 3, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_45ACP_Ball_Mk23_Tracer_Green: JCA_B_45ACP_Ball_Mk23_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_45ACP_Ball_Mk23_Tracer_Yellow: JCA_B_45ACP_Ball_Mk23_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_B_45ACP_Ball_Mk23_Tracer_IR: JCA_B_45ACP_Ball_Mk23
    {
        nvgOnly=1;
    };
    class JCA_B_45ACP_Ball_UMP45: BulletBase // Winchester Law Enforcement .45 ACP +P 230gr, 990fps (302m/s) barrel length 5" https://winchesterle.com/Ammunition/Products/Handgun/Ranger-T-Series/RA45TP
    {
        ACE_caliber=11.48; // CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/45-auto-en-1.pdf
        ACE_bulletLength=16.99; // 0.669"
        ACE_bulletMass=14.904; // 230gr
        ACE_ammoTempMuzzleVelocityShifts[]={-1.87,-1.82,-1.66,-1.4,-1.04,-0.57,0,0.68,1.46,2.34,3.33}; // Same curve default ACE_ammoTempMuzzleVelocityShifts, values /10. Muzzle velocity shift 0m/s ICAO conditions (15°C, 1013.25hPa, 0%)
        // ACE_ballisticCoefficients[]={0.193}; // 990fps (302m/s) 5", ICAO G1 BC from exterior ballistic app "EBC V2" based on https://winchesterle.com/Ammunition/Products/Handgun/Ranger-T-Series/RA45TP
        // ACE_standardAtmosphere="ICAO";
        // ACE_ballisticCoefficients[]={0.187}; // 990fps (302m/s) 5", ASM G1 BC from exterior ballistic app "EBC V2" based on https://winchesterle.com/Ammunition/Products/Handgun/Ranger-T-Series/RA45TP
        // ACE_standardAtmosphere="ASM";
        ACE_ballisticCoefficients[]={0.261}; // 1089fps (332m/s) 200mm, ICAO G1 BC from exterior ballistic app "EBC V2" based on https://winchesterle.com/Ammunition/Products/Handgun/Ranger-T-Series/RA45TP
        ACE_standardAtmosphere="ICAO";
        // ACE_ballisticCoefficients[]={0.254}; // 1089fps (332m/s) 200mm, ASM G1 BC from exterior ballistic app "EBC V2" based on https://winchesterle.com/Ammunition/Products/Handgun/Ranger-T-Series/RA45TP
        // ACE_standardAtmosphere="ASM";
        ACE_velocityBoundaries[]={};
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={278,302,344}; // 332m/s barrel length 200mm ICAO conditions (15°C, 1013.25 hPa, 0%)
        ACE_barrelLengths[]={101.6,127,228.6}; // 4", 5", 9"
        airLock=1;
        hit=7; // 822 Joules, B_45ACP_Ball 5 584 Joules, JCA
        indirectHit=0;
        indirectHitRange=0;
        aiAmmoUsageFlags=64;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
        cartridge="FxCartridge_9mm";
        model="\A3\Weapons_f\Data\bullettracer\tracer_white"; // B_45ACP_Ball tracer_red
        caliber=1.4;
        // .45 ACP +P 230gr, bare gelatin total penetration 11.8" velocity 990fps, "meat.bisurf" (bulletPenetrability 350): caliber ~2.8
        deflecting=25;
        visibleFire=1; // Subsonic, B_127x54_Ball, BulletBase 3
        audibleFire=5; // Subsonic, B_127x54_Ball, B_45ACP_Ball 45
        cost=100;
        typicalSpeed=332; // 822 Joules, B_45ACP_Ball 280 584 Joules
        airFriction=-0.00096737; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        tracerScale=0.6;
        tracerStartTime=0.0075;
        tracerEndTime=5;
        nvgOnly=0; // B_45ACP_Ball w/o nvgOnly
    };
    class JCA_B_45ACP_Ball_UMP45_Tracer_Red: JCA_B_45ACP_Ball_UMP45
    {
        visibleFire=5; // B_45ACP_Ball 3, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_45ACP_Ball_UMP45_Tracer_Green: JCA_B_45ACP_Ball_UMP45_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_45ACP_Ball_UMP45_Tracer_Yellow: JCA_B_45ACP_Ball_UMP45_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_B_45ACP_Ball_UMP45_Tracer_IR: JCA_B_45ACP_Ball_UMP45
    {
        nvgOnly=1;
    };
    // JCA Bullets inherited from vanilla class B_556x45_Ball. To avoid all conflict with other mods, all JCA bullets with JCA as prefixe.
    // class B_556x45_Ball: BulletBase official BI tool All-in-one Config Arma3 2.17.151913 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    class JCA_B_556x45_Ball: BulletBase // M855, ACE3 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L117
    {
        ACE_caliber=5.70; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/223-rem-170406-en.pdf
        ACE_bulletLength=23.01; // ACE3
        ACE_bulletMass=4.018; // 62gr
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.80,-7.64,-1.53,5.96,15.17,26.19}; // default ACE_ammoTempMuzzleVelocityShifts values (Ammo Temp MV Curve Tables by TiborasaurusRex). Muzzle velocity shift 0m/s 70°F (21°C), -8m/s 15°C
        ACE_ballisticCoefficients[]={0.149}; // US Army's Ballistic Research Laboratory ASM BC 0.151 converted to ICAO 0.149012
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        // ACE_barrelLengths[]={210.82,238.76,269.24,299.72,330.2,360.68,391.16,419.1,449.58,480.06,508,609.6}; // default ACE3 barrel lengths https://en.wikipedia.org/wiki/5.56%C3%9745mm_NATO
        // ACE_muzzleVelocities[]={723,764,796,825,843,866,878,892,906,915,922,900}; // default ACE3 MVs 4m https://en.wikipedia.org/wiki/5.56%C3%9745mm_NATO
        // ACE_muzzleVelocities[]={715,784,832,873,890,912,926,904}; // MVs V0 Strelok Pro 15°C
        // ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508,609.6}; // 8", 10", 12", 14.5", 16", 18", 20", 24" barrels lengths
        ACE_muzzleVelocities[]={723,792,840,881,898,920,934}; // Muzzle Velocities 70°F (21°C) +8m/s, 791m/s (10.3"), 808m/s (11"), 873m/s (14.5"), 926m/s (20") ICAO conditions (15°C, 1013.25hPa, 0%) according to JCA_M4/M16/HK433 initSpeed
        ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508}; // M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm), HK433 CQB 11" (279,4mm),  M4A1, M4A1 EGLM, HK433 14.5" (368.3mm), M16A4 20" (508mm) barrels lengths
        airLock=1;
        hit=9.12; // 1723 Joules, B_556x45_Ball 9 (1701 Joules)
        indirectHit=0;
        indirectHitRange=0;
        cost=1;
        typicalSpeed=926; // B_556x45_Ball 920
        airFriction=-0.00133644; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder, ACE3 0.00130094, B_556x45_Ball 0.0012
        waterFriction=-0.3;
        caliber=0.869565; // B_556x45_Ball, M995 AP3 52gr: 12mm RHA 100m MV 1030m/s https://www.nammo.com, effective perforation in-game 12mm RHA "armour_plate_12mm.bisurf" 100m ~900m/s: caliber ~0.9
        // M855: 1020 steel plate (Hardness=50/70 Rb; thickness=3mm) 570m (MV 910m/s), effective perforation in-game 3mm RHA "armour_plate_3mm.bisurf" 570m ~400m/s: caliber ~0.55
        model="\A3\Weapons_f\Data\bullettracer\tracer_white"; // B_762x51_Ball, B_556x45_Ball tracer_yellow
        tracerScale=1;
        tracerStartTime=0.17; // Visible 140m 600m (typically 800m) 4g MV 920m/s ICAO according to https://www.nammo.com,  ToF 140m 0.17s (Strelok Pro), B_556x45_Ball 0.05
        tracerEndTime=1.62; // Visible 140m 600m (typically 800m) 4g MV 920m/s ICAO according to https://www.nammo.com, ToF 800m 1.62s (Strelok Pro), B_556x45_Ball 1
        nvgOnly=0; // B_556x45_Ball w/o nvgOnly
        audibleFire=35;
        dangerRadiusBulletClose=8;
        dangerRadiusHit=12;
        suppressionRadiusBulletClose=6;
        suppressionRadiusHit=8;
        aiAmmoUsageFlags=64;
        class CamShakeExplode
        {
            power=2.23607;
            duration=0.4;
            frequency=20;
            distance=6.7082;
        };
        class CamShakeHit
        {
            power=5;
            duration=0.2;
            frequency=20;
            distance=1;
        };
    };
    class JCA_B_556x45_Ball_M855A1: JCA_B_556x45_Ball // M855A1 Lake City Army Ammunition Plant, 2022/23 article https://www.ar15.com/forums/AR-15/M855A1-Accuracy-and-Velocity-updated-/16-783286/
    {
        ACE_bulletLength=25.4; // 1"
        ACE_ballisticCoefficients[]={0.149}; // average ICAO G7 BC 0.149 from "Ballistic Performance of Rifle Bullets" by Bryan Litz, (average ICAO G1 BC 0.291)
        // 76°F (24°C rounded to 25°C for ACE3), 1019mB, 47%, barrel length 20": 3131fps (954m/s - 954m/s in-game), barrel length 14.5": average 2951fps (899m/s - 900m/s in-game) from 2022/23 article values https://www.ar15.com/forums/AR-15/M855A1-Accuracy-and-Velocity-updated-/16-783286/
        ACE_muzzleVelocities[]={734,804,853,894,911,934,948}; // Muzzle Velocities 70°F (21°C) +8m/s, 803m/s (10.3"), 821m/s (11"), 886m/s (14.5"), 940m/s (20") ICAO conditions (15°C, 1013.25hPa, 0%) according to JCA_M4/M16/HK433 initSpeed
        hit=9.39; // 1775 Joules
        typicalSpeed=940; // B_556x45_Ball 920
        airFriction=-0.00132981; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=1; // B_556x45_Ball 0.869565
    };
    class JCA_B_556x45_Ball_M193: JCA_B_556x45_Ball // M193 RUAG Ammotec AG
    {
        ACE_bulletLength=19; // average value
        ACE_bulletMass=3.6; // 55gr
        ACE_ballisticCoefficients[]={0.280}; // M193 RUAG Ammotec AG
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={772,846,898,941,960,983,998}; // Muzzle Velocities 70°F (21°C) +8m/s, 846m/s (10.3"), 864m/s (11"), 933m/s (14.5"), 990m/s (20") ICAO conditions (15°C, 1013.25hPa, 0%) according to JCA_M4/M16/HK433 initSpeed
        hit=9.33; // 1764 Joules
        typicalSpeed=990; // B_556x45_Ball 920
        airFriction=-0.00139457; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_556x45_Ball_Mk262: JCA_B_556x45_Ball // ACE_556x45_Ball_Mk262 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L141
    {
        ACE_bulletLength=25.25; // 0.994" Strelok Pro
        ACE_bulletMass=4.99; // 77gr
        ACE_ballisticCoefficients[]={0.356}; // ASM BC 0.361 converted to ICAO 0.356247
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={655,717,761,798,813,833,846}; // Muzzle Velocities 70°F (21°C) +8m/s, 716m/s (10.3"), 731m/s (11"), 790m/s (14.5"), 838m/s (20") ICAO conditions (15°C, 1013.25hPa, 0%) according to JCA_M4/M16/HK433 initSpeed
        hit=9.27; // 1752 Joules
        typicalSpeed=838; // B_556x45_Ball 920
        airFriction=-0.00114664; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_556x45_Ball_Mk318: JCA_B_556x45_Ball // ACE_556x45_Ball_Mk318 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L155
    {
        ACE_bulletLength=23.67; // Mod 1 0.932"
        ACE_bulletMass=4.018; // 62gr
        ACE_ballisticCoefficients[]={0.303}; // ASM BC 0.307 converted to ICAO 0.302958
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={742,812,862,904,921,944,958}; // Muzzle Velocities 70°F (21°C) +8m/s, 812m/s (10.3"), 829m/s (11"), 896m/s (14.5"), 950m/s (20") ICAO conditions (15°C, 1013.25hPa, 0%) according to JCA_M4/M16/HK433 initSpeed
        hit=9.59; // 1813 Joules
        typicalSpeed=950; // B_556x45_Ball 920
        airFriction=-0.00130202; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_556x45_Ball_M995AP: JCA_B_556x45_Ball // ACE_556x45_Ball_M995_AP https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L168
    {
        ACE_bulletLength=22.7; // AP4, AP3 20.6
        ACE_bulletMass=4.536; // 70gr AP4, AP3 52gr
        ACE_ballisticCoefficients[]={0.306}; // ASM BC 0.310 converted to ICAO 0.305919
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={687,753,799,838,854,875,888}; // Muzzle Velocities 70°F (21°C) +8m/s, 752m/s (10.3"), 768m/s (11"), 830m/s (14.5"), 880m/s (20") ICAO conditions (15°C, 1013.25hPa, 0%) according to JCA_M4/M16/HK433 initSpeed
        hit=9.3; // 1757 Joules
        typicalSpeed=880; // B_556x45_Ball 920
        airFriction=-0.00131582; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        caliber=1.2; // ACE_556x45_Ball_M995_AP 1.6, B_556x45_Ball 0.869565
        // M995 AP4 69gr: 7mm RHA 200m MV 900m/s https://www.nammo.com, effective perforation in-game 7mm RHA "armour_plate_7mm.bisurf" 200m ~700m/s: caliber ~0.7
        // M995 AP3 52gr: 12mm RHA 100m MV 1030m/s https://www.nammo.com, effective perforation in-game 12mm RHA "armour_plate_12mm.bisurf" 100m ~900m/s: caliber ~0.9
    };
    /*class B_556x45_dual: B_556x45_Ball // official BI tool All-in-one Config Arma3 2.17.151913 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        cartridge="FxCartridge_65";
        audibleFire=20;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
        typicalSpeed=270;
        airFriction=-0.02;
        waterFriction=-0.01;
        effectFly="AmmoUnderwater";
        nvgOnly=1;
        aiAmmoUsageFlags="64 + 32";
    };*/
    class JCA_B_556x45_Ball_Dual: JCA_B_556x45_Ball // 5.56mm underwater subsonic DSG Technology https://dsgtec.com https://www.youtube.com/@DSGTechnology/videos https://www.thefirearmblog.com/blog/2017/04/20/dsg-technology-underwater-ammo
    {
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10 (Ammo Temp MV Curve Tables by TiborasaurusRex). Muzzle velocity shift 0m/s 70°F (21°C), -1m/s 15°C
        ACE_muzzleVelocities[]={220,241,255,268,273,280,284}; // Muzzle Velocities 70°F (21°C) +1m/s, 242m/s (10.3"), 247m/s (11"), 267m/s (14.5"), 283m/s (20") ICAO conditions (15°C, 1013.25hPa, 0%) according to JCA_M4/M16/HK433 initSpeed
        // cartridge="FxCartridge_65";
        visibleFire=1; // B_127x54_Ball, BulletBase 3
        audibleFire=5; // B_127x54_Ball, B_556x45_Ball 35, B_556x45_dual 20
        dangerRadiusBulletClose=4; // B_556x45_Ball 8
        dangerRadiusHit=8; // B_556x45_Ball 12
        suppressionRadiusBulletClose=2; // B_556x45_Ball 6
        suppressionRadiusHit=4; // B_556x45_Ball 8
        typicalSpeed=283; // B_556x45_dual 270
        airFriction=-0.0005713; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder, https://github.com/acemod/ACE3/pull/7982
        waterFriction=-0.01;
        effectFly="AmmoUnderwater";
        nvgOnly=1;
        aiAmmoUsageFlags="96";
    };
    class JCA_B_556x45_Ball_Tracer_Red: JCA_B_556x45_Ball
    {
        visibleFire=5; // B_556x45_Ball 3, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5, BulletBase 3, BulletCore 16
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_556x45_Ball_Tracer_Green: JCA_B_556x45_Ball_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_556x45_Ball_Tracer_Yellow: JCA_B_556x45_Ball_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_B_556x45_Ball_IR_Dim_Tracer: JCA_B_556x45_Ball
    {
        tracerScale=0.5; // IR dim tracer, B_556x45_Ball 1
        tracerStartTime=0.01; // Visible 13m 600m (typically 950m) 3.9g MV 930m/s ICAO according to https://www.nammo.com, ToF 13m 0.01s (Strelok Pro), B_556x45_Ball 0.05
        tracerEndTime=2.12; // Visible 13m 600m (typically 950m) 3.9g MV 930m/s ICAO according to https://www.nammo.com, ToF 950m 2.12s (Strelok Pro), B_556x45_Ball 1
        nvgOnly=1;
    };
    class JCA_B_300BLK_Ball: BulletBase // JCA default config, Hornady Law Enforcement .300 Blackout 190gr SUB-X TAP according to HK437 Handbook https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
    {
        ACE_caliber=7.85; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/300-aac-blackout-180801-en.pdf
        ACE_bulletLength=33.73; // 1.328" https://static.hornady.media/presscenter/docs/1410995739-300-Blackout-Subsonic-190gr-SUB-X-TAP1681486905.pdf
        ACE_bulletMass=12.312; // 190gr
        // ACE_muzzleVelocityVariationSD=0.3; // ACE3 default value https://github.com/acemod/ACE3/blob/master/addons/advanced_ballistics/script_component.hpp#L32, effective standart deviation in-game ~1, ~2m/s (as IRL, series of muzzle velocity measurements in-game with standart deviation formula), should be ~3, ~5m/s for manufactured ammunitions
        ACE_ammoTempMuzzleVelocityShifts[]={-1.87,-1.82,-1.66,-1.4,-1.04,-0.57,0,0.68,1.46,2.34,3.33}; // Same curve default ACE_ammoTempMuzzleVelocityShifts /10. Muzzle velocity shift 0m/s ICAO conditions (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.437}; // https://static.hornady.media/presscenter/docs/1410995739-300-Blackout-Subsonic-190gr-SUB-X-TAP1681486905.pdf
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO"; // https://www.hornady.com
        ACE_dragModel=1;
        ACE_barrelLengths[]={228.6}; // 9", HK437 official site https://www.heckler-koch.com/en/Products/Military%20and%20Law%20Enforcement/Assault%20rifles/HK437?section=variants&s=true
        ACE_muzzleVelocities[]={290}; // 290m/s 9" ICAO conditions (15°C, 1013.25hPa, 0%), HK437 Handbook https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
        hit=7.6; // Subsonic Polymer tipped expanding, 518 Joules, B_762x51_Ball 11.6, B_762x39_Ball_F 11, JCA 12
        visibleFire=1; // B_127x54_Ball, B_762x51_Ball 3
        audibleFire=5; // B_127x54_Ball, B_762x51_Ball 45
        dangerRadiusBulletClose=4; // B_127x54_Ball, B_762x51_Ball 8
        suppressionRadiusBulletClose=2; // B_127x54_Ball, B_762x51_Ball 6
        typicalSpeed=290; // B_762x51_Ball 800, 518 Joules
        caliber=0.96; // Subsonic Polymer tipped expanding, B_762x51_Ball 1.6, B_762x39_Ball_F 1.2
        // .300 Blackout 190gr SUB-X TAP, bare gelatin total penetration 17" velocity 998fps, "meat.bisurf" (bulletPenetrability 350): caliber ~4
        tracerStartTime=0.18; // Visible 140m 775m (typically 900m) 9g 820m/s ICAO according to https://www.nammo.com, ToF 140m 0.18s (Strelok Pro), B_762x51_Ball 0.0075
        tracerEndTime=1.87; // Visible 140m 775m (typically 900m) 9g 820m/s ICAO according to https://www.nammo.com, ToF 900m 1.87s (Strelok Pro), B_762x51_Ball 5
        airFriction=-0.00044673; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        class CamShakeExplode
        {
            power=2.23607; // B_127x54_Ball, B_762x51_Ball 2.82843
            duration=0.4; // B_127x54_Ball, B_762x51_Ball 0.6
            frequency=20; // B_127x54_Ball ,B_762x51_Ball 20
            distance=6.7082; // B_127x54_Ball, B_762x51_Ball 8.48528
        };
    };
    class JCA_B_300BLK_Ball_Tracer_Red: JCA_B_300BLK_Ball
    {
        visibleFire=5; // B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5, BulletBase 3, BulletCore 16
    };
    class JCA_B_300BLK_Ball_Tracer_Green: JCA_B_300BLK_Ball
    {
        visibleFire=5; // B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5, BulletBase 3, BulletCore 16
    };
    class JCA_B_300BLK_Ball_Tracer_Yellow: JCA_B_300BLK_Ball
    {
        visibleFire=5; // B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5, BulletBase 3, BulletCore 16
    };
    class JCA_B_300BLK_Ball_Tracer_IR: JCA_B_300BLK_Ball
    {
        tracerScale=0.5; // IR dim tracer, B_556x45_Ball 1, B_65x39_Caseless 1, B_762x39_Ball_F 1, B_762x51_Ball 0.6
        tracerStartTime=0.02; // Visible 13m 775m (typically 1250m) 9g 840m/s ICAO according to https://www.nammo.com, ToF 13m 0.02s (Strelok Pro), B_762x51_Ball 0.0075
        tracerEndTime=3.03; // Visible 13m 775m (typically 1250m) 9g 840m/s ICAO according to https://www.nammo.com, ToF 1250m 3.03s (Strelok Pro), B_762x51_Ball 5
    };
    class JCA_B_300BLK_Ball_110gr: JCA_B_300BLK_Ball // Hornady Law Enforcement .300 Blackout 110gr TAP Urban according to HK437 Handbook https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
    {
        ACE_bulletLength=29.97; // 1.180" https://static.hornady.media/presscenter/docs/1410998618-300-Blackout-110gr-TAP-Urban.pdf
        ACE_bulletMass=7.128; // 110gr
        ACE_transonicStabilityCoef=1; // AB range card issue w/o, ACE3 default value 0.5 https://github.com/acemod/ACE3/blob/24e57825f7e75822e936282b36a3929bae189338/addons/advanced_ballistics/functions/fnc_readAmmoDataFromConfig.sqf#L40
        ACE_ammoTempMuzzleVelocityShifts[]={-3.74,-3.64,-3.32,-2.8,-2.08,-1.14,0,1.36,2.92,4.68,6.66}; // Same curve default ACE_ammoTempMuzzleVelocityShifts /5. Muzzle velocity shift 0m/s ICAO conditions (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.290}; // https://www.hornadyle.com/rifle-ammunition/110-gr-tap-urban-300-blackout#!/
        ACE_muzzleVelocities[]={630}; // 630m/s 9" ICAO conditions (15°C, 1013.25hPa, 0%), HK437 Handbook https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
        hit=9.5; // Polymer tipped frangible, 1415 Joules, B_762x51_Ball 11.6, B_762x39_Ball_F 11
        visibleFire=3;
        audibleFire=45;
        dangerRadiusBulletClose=8;
        dangerRadiusHit=12;
        suppressionRadiusBulletClose=6;
        typicalSpeed=630; // B_762x51_Ball 800, 1415 Joules
        caliber=1.28; // Polymer tipped frangible, B_762x51_Ball 1.6, B_762x39_Ball_F 1.2
        // .300 Blackout 110gr TAP Urban, bare gelatin total penetration 12.75" velocity 2175fps (2025 Hornady Law Enforcement Military Catalog), "meat.bisurf" (bulletPenetrability 350): caliber ~1.4
        airFriction=-0.00151328; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        class CamShakeExplode
        {
            power=2.82843;
            duration=0.6;
            frequency=20;
            distance=8.48528;
        };
    };
    class JCA_B_300BLK_Ball_110gr_Tracer_Red: JCA_B_300BLK_Ball_110gr
    {
        visibleFire=5; // B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5, BulletBase 3, BulletCore 16
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_300BLK_Ball_110gr_Tracer_Green: JCA_B_300BLK_Ball_110gr_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_300BLK_Ball_110gr_Tracer_Yellow: JCA_B_300BLK_Ball_110gr_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_B_300BLK_Ball_110gr_Tracer_IR: JCA_B_300BLK_Ball_110gr
    {
        tracerScale=0.5; // IR dim tracer, B_556x45_Ball 1, B_65x39_Caseless 1, B_762x39_Ball_F 1, B_762x51_Ball 0.6
        tracerStartTime=0.02; // Visible 13m 775m (typically 1250m) 9g 840m/s ICAO according to https://www.nammo.com, ToF 13m 0.02s (Strelok Pro), B_762x51_Ball 0.0075
        tracerEndTime=3.03; // Visible 13m 775m (typically 1250m) 9g 840m/s ICAO according to https://www.nammo.com, ToF 1250m 3.03s (Strelok Pro), B_762x51_Ball 5
        nvgOnly=1;
    };
    // JCA Bullets inherited from vanilla class B_762x51_Ball. To avoid all conflict with other mods, all JCA bullets with JCA as prefixe
    // class B_762x51_Ball: BulletBase official BI tool All-in-one Config Arma3 2.17.151913 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    class JCA_B_762x51_Ball: BulletBase // ACE_762x51_Ball_Mk316_Mod_0 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L317
    {
        ACE_caliber=7.85; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/tabical-en-page125.pdf
        ACE_bulletLength=31.5; // Strelok Pro, Applied Ballistics
        ACE_bulletMass=11.34; // 175gr
        ACE_muzzleVelocityVariationSD=0.3; // ACE3 default value https://github.com/acemod/ACE3/blob/master/addons/advanced_ballistics/script_component.hpp#L32
        // ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.80,-7.64,-1.53,5.96,15.17,26.19}; default ACE3
        // ACE_ammoTempMuzzleVelocityShifts[]={-5.3, -5.1, -4.6, -4.2, -3.4, -2.6, -1.4, -0.3, 1.4, 3.0, 5.2}; default ACE_762x51_Ball_Mk316_Mod_0
        ACE_ammoTempMuzzleVelocityShifts[]={-5.31,-5.094,-4.57,-4.024,-3.396,-2.56,-1.528,-0.306,1.192,3.034,5.238}; // default ACE_ammoTempMuzzleVelocityShifts values /5 (Ammo Temp MV Curve Tables by TiborasaurusRex). Muzzle velocity shift 0m/s 70°F (21°C), -2m/s 15°C
        // ACE_ballisticCoefficients[]={0.243}; // Bryan Litz Applied Ballistics ICAO G7 BC based on Sierra ASM G1 BC 0.505 2800 fps (853m/s) and above
        ACE_ballisticCoefficients[]={0.489}; // ICAO G1 BC 0.48947 converted from Sierra bullet 7.62mm 175 Gr. HPBT MatchKing ASM G1 BC 0.496 between 2800fps (853m/s) and 1800fps (549m/s) https://www.sierrabullets.com/product/30-cal-7-62mm-175-gr-hpbt-matchking/
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={757,767,777,792,807,812}; // Muzzle Velocities 70°F (21°C) +2m/s, 770m/s (14.5"), 790m/s (20") ICAO conditions (15°C, 1013.25hPa, 0%) according to JCA_SR10/SR25 initSpeed
        ACE_barrelLengths[]={254,330.2,406.4,508,609.6,660.4}; // SR10 14.5" (368.3mm), SR25 20" (508mm) barrels lengths
        hit=16; // ACE_762x51_Ball_Mk316_Mod_0, 3539 Joules, B_762x51_Ball 11.6 3028 Joules (146gr), 3360 Joules (162gr)
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_762";
        visibleFire=3;
        audibleFire=45;
        dangerRadiusBulletClose=8;
        dangerRadiusHit=12;
        suppressionRadiusBulletClose=6;
        suppressionRadiusHit=8;
        cost=1.2;
        airLock=1;
        typicalSpeed=790; // ACE_762x51_Ball_Mk316_Mod_0, B_762x51_Ball 800
        caliber=1.8; // ACE_762x51_Ball_Mk316_Mod_0, B_762x51_Ball 1.6
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale=1.2; // ACE3, B_762x51_Ball 0.6
        tracerStartTime=0.18; // Visible 140m 775m (typically 900m) 9g 820m/s ICAO according to https://www.nammo.com, ToF 140m 0.18s (Strelok Pro), B_762x51_Ball 0.0075
        tracerEndTime=1.87; // Visible 140m 775m (typically 900m) 9g 820m/s ICAO according to https://www.nammo.com, ToF 900m 1.87s (Strelok Pro), B_762x51_Ball 5
        nvgOnly=0; // B_762x51_Ball w/o nvgOnly
        airFriction=-0.00084907; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        class CamShakeExplode
        {
            power=2.8284299;
            duration=0.60000002;
            frequency=20;
            distance=8.48528;
        };
        class CamShakeHit
        {
            power=5;
            duration=0.2;
            frequency=20;
            distance=1;
        };
    };
    class JCA_B_762x51_Ball_M993AP: JCA_B_762x51_Ball // ACE_762x51_Ball_M993_AP https://www.nammo.comproduct/our-products/ammunition/small-caliber-ammunition/7-62mm-series/7-62-mm-x-51-armor-piercing-8-m993/
    {
        ACE_bulletLength=31.5;
        ACE_bulletMass=8.23; // 127gr
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.80,-7.64,-1.53,5.96,15.17,26.19}; // default ACE_ammoTempMuzzleVelocityShifts values (Ammo Temp MV Curve Tables by TiborasaurusRex). Muzzle velocity shift 0m/s 70°F (21°C), -8m/s 15°C
        ACE_ballisticCoefficients[]={0.359}; // https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L351
        ACE_muzzleVelocities[]={897,909,920,938,958,962}; // Muzzle Velocities 70°F (21°C) +8m/s, 906m/s (14.5"), 930m/s (20") ICAO conditions (15°C, 1013.25hPa, 0%) according to JCA_SR10/SR25 initSpeed
        hit=12; // ACE_762x51_Ball_M993_AP 11, 3560 Joules, B_762x51_Ball 11.6
        typicalSpeed=930; // ACE_762x51_Ball_M993_AP 910
        caliber=2.2; // ACE_762x51_Ball_M993_AP, B_762x51_Ball 1.6
        // M993 AP 128gr: 18mm RHA 100m MV 930m/s https://www.nammo.com, effective perforation in-game 18mm RHA "armour.bisurf" thickness .p3d 18mm 100m ~840m/s: caliber ~1.4
        // M993 AP 128gr: 7mm RHA 500m MV 930m/s https://www.nammo.com, effective perforation in-game 7mm RHA "armour_plate_7mm.bisurf" 500m ~530m/s: caliber ~0.9
        airFriction=-0.00110502; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_762x51_Ball_Subsonic: JCA_B_762x51_Ball // Lapua subsonic B416, 325m/s 16" (406.4mm) barrel (Trajectory charts) https://www.lapua.com/product/308-win-subsonic-fmjbt-tactical-cartridge-13g-200gr-4317340/
    {
        ACE_bulletLength=34.11; // Strelok Pro
        ACE_bulletMass=12.96; // 200 gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10 (Ammo Temp MV Curve Tables by TiborasaurusRex). Muzzle velocity shift 0m/s 70°F (21°C), -1m/s 15°C
        ACE_ballisticCoefficients[]={0.518}; // https://www.lapua.com/product/30-cal-fmjbt-subsonic-bullet-b416-130-g-200-gr/
        ACE_muzzleVelocities[]={318,322,326,332,339,341}; // Muzzle Velocities 70°F (21°C) +1m/s, 323m/s (14.5"), 331m/s (20") ICAO conditions (15°C, 1013.25hPa, 0%) according to JCA_SR10/SR25 initSpeed
        hit=6; // ACE_762x51_Ball_Subsonic, B_762x51_Ball 11.6
        visibleFire=1; // B_127x54_Ball, B_762x51_Ball 3
        audibleFire=5; // B_127x54_Ball, B_762x51_Ball 45
        dangerRadiusBulletClose=4; // B_127x54_Ball, B_762x51_Ball 8
        suppressionRadiusBulletClose=2; // B_127x54_Ball, B_762x51_Ball 6
        typicalSpeed=320; // ACE_762x51_Ball_Subsonic
        caliber=1; // ACE_762x51_Ball_Subsonic, B_762x51_Ball 1.6
        airFriction=-0.00049496; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        class CamShakeExplode
        {
            power=2.23607; // B_127x54_Ball, B_762x51_Ball 2.8284299
            duration=0.4; // B_127x54_Ball, B_762x51_Ball 0.6
            frequency=20; // B_127x54_Ball ,B_762x51_Ball 20
            distance=6.7082; // B_127x54_Ball, B_762x51_Ball 8.48528
        };
    };
    class JCA_B_762x51_Ball_Tracer_Red: JCA_B_762x51_Ball
    {
        visibleFire=5; // B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5, BulletBase 3, BulletCore 16
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_762x51_Ball_Tracer_Green: JCA_B_762x51_Ball_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_762x51_Ball_Tracer_Yellow: JCA_B_762x51_Ball_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_B_762x51_Ball_IR_Dim_Tracer: JCA_B_762x51_Ball
    {
        tracerScale=0.6; // IR dim tracer, B_762x51_Ball
        tracerStartTime=0.02; // Visible 13m 775m (typically 1250m) 9g 840m/s ICAO according to https://www.nammo.com, ToF 13m 0.02s (Strelok Pro), B_762x51_Ball 0.0075
        tracerEndTime=3.03; // Visible 13m 775m (typically 1250m) 9g 840m/s ICAO according to https://www.nammo.com, ToF 1250m 3.03s (Strelok Pro), B_762x51_Ball 5
        nvgOnly=1;
    };
    class JCA_B_338LM_Ball: B_338_Ball // B_338_Ball, Lapua .338 LM Scenar 250gr GB488 https://www.lapua.com/product/338-lapua-mag-tactical-target-cartridge-scenar-162g-250gr-4318017/
    {
        ACE_caliber=8.61; // .338 LM CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/338-lapua-mag-en.pdf
        ACE_bulletLength=39.4; // Strelok Pro .338 LM Lapua Scenar 250gr GB488, 1.551" https://jbmballistics.com
        ACE_bulletMass=16.2; // Lapua .338 LM Scenar 250gr GB488 https://www.lapua.com/product/338-lapua-mag-tactical-target-cartridge-scenar-162g-250gr-4318017/
        ACE_muzzleVelocityVariationSD=0.3; // ACE3 default value https://github.com/acemod/ACE3/blob/master/addons/advanced_ballistics/script_component.hpp#L32
        ACE_ammoTempMuzzleVelocityShifts[]={-5.31,-5.094,-4.57,-4.024,-3.396,-2.56,-1.528,-0.306,1.192,3.034,5.238}; // default ACE_ammoTempMuzzleVelocityShifts values /5 (Ammo Temp MV Curve Tables by TiborasaurusRex). Muzzle velocity shift 0m/s 70°F (21°C), -2m/s 15°C
        ACE_ballisticCoefficients[]={0.648}; // Lapua .338 LM Scenar 250gr GB488 https://www.lapua.com/product/338-lapua-mag-tactical-target-cartridge-scenar-162g-250gr-4318017/
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO"; // ICAO: 15°C, 1013.25 hPa, 0%
        ACE_dragModel=1; // Lapua .338 LM Scenar 250gr GB488 https://www.lapua.com/product/338-lapua-mag-tactical-target-cartridge-scenar-162g-250gr-4318017/
        ACE_muzzleVelocities[]={908}; // Muzzle Velocities 70°F (21°C) +2m/s, 906m/s (27") ICAO conditions (15°C, 1013.25hPa, 0%) according to JCA_5Rnd_338LM_Mag initSpeed
        ACE_barrelLengths[]={685.8}; // 27"
        hit=20; // .338 LM 250gr destroys a ceramic Level IV w/o perforation short range, according to "Level IV" "armor" value, B_338_Ball 16, JCA 18. 16.2g 906m/s 6650 Joules. NIJ Type IV (Armor Piercing Rifle) and NIJ RF3: 30.06 M2 AP bullet 10.8g 878m/s (165.7gr 2880ft/s) 4163 Joules
        caliber=0.45; // effective perforation in-game 5mm RHA "armour_plate_5mm.bisurf" 300m ~750m/s, B_338_Ball 2, JCA 1.8, should be Lapua Scenar penetration 3mm RHA 300m
        typicalSpeed=906; // B_338_Ball 890
        tracerScale=1.2; // no .338 LM tracer data, B_338_Ball, JCA 1.3
        tracerStartTime=0.23; // no .338 LM tracer data, based on 12.7x99 Tracer visible 200m 1500m 43g MV 903m/s ICAO according to https://www.nammo.com, ToF 200m 0.23s (Strelok Pro), B_338_Ball 0.075
        tracerEndTime=2.71; // no .338 LM tracer data, based on 12.7x99 Tracer visible 200m 1500m 43g MV 903m/s ICAO according to https://www.nammo.com, ToF 1500m 2.71s (Strelok Pro), B_338_Ball 1, JCA 3
        airFriction=-0.00061662; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_338LM_AP_Ball: JCA_B_338LM_Ball // Lapua .338 LM 248gr AP485 Armor Piercing https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-armor-piercing-161g-248gr-4318035/
    {
        ACE_bulletLength=35.5; // 1.398" 35.51mm https://jbmballistics.com
        ACE_bulletMass=16.1; // Lapua .338 LM 248gr AP485 Armor Piercing https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-armor-piercing-161g-248gr-4318035/
        ACE_ballisticCoefficients[]={0.564}; // Lapua .338 LM 248gr AP485 Armor Piercing https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-armor-piercing-161g-248gr-4318035/
        ACE_muzzleVelocities[]={908}; // Muzzle Velocities 70°F (21°C) +2m/s, 906m/s (27") ICAO conditions (15°C, 1013.25hPa, 0%) according to JCA_5Rnd_338LM_AP_Mag initSpeed
        caliber=1.35; // effective perforation in-game 12mm RHA "armour_plate_12mm.bisurf" 550m ~610m/s, B_338_Ball 2, should be 12mm 550m Steel plate 400 HB https://www.nammo.com
        hit=20; // according to "Level IV" "armor" value, 16.1g 906m/s 6609 Joules. NIJ Type IV (Armor Piercing Rifle) and NIJ RF3: 30.06 M2 AP bullet 10.8g 878m/s (165.7gr 2880ft/s) 4163 Joules
        typicalSpeed=906; // B_338_Ball 890
        airFriction=-0.00070864; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_338LM_API_Ball: JCA_B_338LM_Ball // Lapua .338 LM 253gr API526 Armor Piercing Incendiary https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-api526-164g-253gr-4318048/
    {
        ACE_bulletLength=39; // 1.535" 38.99mm https://jbmballistics.com
        ACE_bulletMass=16.4; // Lapua .338 LM 253gr API526 Armor Piercing Incendiary https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-api526-164g-253gr-4318048/
        ACE_ballisticCoefficients[]={0.554}; // Lapua .338 LM 253gr API526 https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-api526-164g-253gr-4318048/
        ACE_muzzleVelocities[]={898}; // Muzzle Velocities 70°F (21°C) +2m/s, 896m/s (27") ICAO conditions (15°C, 1013.25hPa, 0%) according to JCA_5Rnd_338LM_API_Mag initSpeed
        ace_vehicle_damage_incendiary=1; // observable flash at hard targets. Ignition of vaporized fuel https://www.nammo.comproduct/our-products/ammunition/small-caliber-ammunition/8-6mm-series-338/8-6-mm-x-70-338-lapua-armor-piercing-incendiary/
        caliber=1.1; // effective perforation in-game 10mm RHA "armour.bisurf" thickness .p3d 10mm 500m ~620m/s, B_338_Ball 2, should be 10mm 500m Steel plate 400 HB https://www.nammo.com
        hit=34.6; // anti-material, 20x1.69x1.024, average ratio anti-material/anti-personal B_127x99_SLAP/B_127x99_Ball and B_127x108_APDS/B_127x108_Ball "hit": 1.69. Energy ratio JCA_B_338LM_API_Ball/B_338_Ball: 1.024
        indirectHit=8; // B_20mm_AP
        indirectHitRange=0.2; // B_20mm_AP
        typicalSpeed=896; // B_338_Ball 890
        airFriction=-0.0007233; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        CraterEffects="ExploAmmoCrater"; // ammo_Penetrator_Base
        class HitEffects // B_30mm_APFSDS. Observable flash at hard targets. Ignition of vaporized fuel https://www.nammo.comproduct/our-products/ammunition/small-caliber-ammunition/8-6mm-series-338/8-6-mm-x-70-338-lapua-armor-piercing-incendiary/
        {
            hitMetal="ImpactMetalSabotSmall";
            hitMetalPlate="ImpactMetalSabotSmall";
            hitBuilding="ImpactConcreteSabotSmall";
            hitConcrete="ImpactConcreteSabotSmall";
            hitGroundSoft="ImpactEffectsGroundSabot";
            hitGroundRed="ImpactEffectsGroundSabot"; // BulletBase ImpactEffectsRed
            hitGroundHard="ImpactEffectsGroundSabot";
            Hit_Foliage_green="ImpactLeavesGreen";
            Hit_Foliage_Dead="ImpactLeavesDead";
            Hit_Foliage_Green_big="ImpactLeavesGreenBig";
            Hit_Foliage_Palm="ImpactLeavesPalm";
            Hit_Foliage_Pine="ImpactLeavesPine";
            hitFoliage="ImpactLeaves";
            hitGlass="ImpactGlass";
            hitGlassArmored="ImpactGlassThin";
            hitWood="ImpactWood";
            hitHay="ImpactHay";
            hitPlastic="ImpactPlastic";
            hitRubber="ImpactRubber";
            hitTyre="ImpactTyre";
            hitMan="ImpactEffectsBlood";
            hitWater="ImpactEffectsWater";
            hitVirtual="ImpactMetal"; // BulletBase
            default_mat="ImpactEffectsGroundSabot";
        };
    };
    class JCA_B_338LM_Ball_Tracer_Red: JCA_B_338LM_Ball
    {
        visibleFire=5; // B_338_Ball 3, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5, BulletBase 3, BulletCore 16
    };
    class JCA_B_338LM_Ball_Tracer_Green: JCA_B_338LM_Ball
    {
        visibleFire=5; // B_338_Ball 3, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5, BulletBase 3, BulletCore 16
    };
    class JCA_B_338LM_Ball_Tracer_Yellow: JCA_B_338LM_Ball
    {
        visibleFire=5; // B_338_Ball 3, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5, BulletBase 3, BulletCore 16
    };
    class JCA_B_338LM_Ball_Tracer_IR: JCA_B_338LM_Ball
    {
        tracerScale=0.6; // IR dim tracer
        tracerStartTime=0.02; // no .338 LM tracer data, based on 7.62x51 IR Dim Tracer visible 13m 775m (typically 1250m) 9g 840m/s ICAO according to https://www.nammo.com, ToF 13m 0.02s (Strelok Pro), B_338_Ball 0.075
        tracerEndTime=3.03; // no .338 LM tracer data, based on 7.62x51 IR Dim Tracer visible 13m 775m (typically 1250m) 9g 840m/s ICAO according to https://www.nammo.com, ToF 1250m 3.03s (Strelok Pro), B_338_Ball 1, JCA 3
    };
    class JCA_B_127x99_Ball_M33: BulletBase // Barrett 661gr M33 Ball https://barrett.net/products/accessories/ammunition/50bmg/
    {
        ACE_caliber=12.98; // CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/50-browning-en.pdf
        ACE_bulletLength=58.42; // 2.3"
        ACE_bulletMass=42.832; // 661gr
        ACE_ammoTempMuzzleVelocityShifts[]={-18.7,-18.2,-16.6,-14,-10.4,-5.7,0,6.8,14.6,23.4,33.3}; // Same curve default ACE_ammoTempMuzzleVelocityShifts. Muzzle velocity shift 0m/s ICAO conditions (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.62}; // 2750fps 29" https://barrett.net/products/accessories/ammunition/50-bmg-archive/
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={762,838,853,871,903}; // 2500, 2750, 2800, 2858, 2961fps https://barrett.net/products/accessories/ammunition/50-bmg-archive/
        ACE_barrelLengths[]={508,736.6,812.8,914.4,1143}; // 20, 29, 32, 36, 45" https://barrett.net/products/accessories/ammunition/50-bmg-archive/
        ace_vehicle_damage_incendiary=0.2; // ACE3
        hit=32.3; // 17465 Joules, B_127x99_Ball 30 16238 Joules
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_127";
        visibleFire=5; // B_408_Ball, B_127x108_Ball, B_127x99_Ball_Tracer_Red 8, BulletBase 3, BulletCore 16
        audibleFire=120;
        dangerRadiusBulletClose=12;
        dangerRadiusHit=16;
        suppressionRadiusBulletClose=8;
        suppressionRadiusHit=12;
        cost=5;
        airLock=1;
        caliber=2.6; // 12.7x99mm AP perforation 22mm 700m ~560m/s (https://www.nammo.com), SD 0.362 lb/in2
        // M33 should be 4mm Steel plate 1200m, effective perforation in-game 5mm RHA "armour_plate_5mm.bisurf" 1200m ~370m/s: caliber ~0.9
        // from data below "Marine Corps Warfighting Publication (MCWP) 3-15.1", 8mm 500m ~610m/s: caliber ~0.9, 4mm 1200m ~370m/s: caliber ~0.7
        typicalSpeed=903; // 17465 Joules, B_127x99_Ball 880 16238 Joules
        timeToLive=10;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale=1.2;
        tracerStartTime=0.23; // Visible 200m 1500m 43g MV 903m/s ICAO according to https://www.nammo.com, ToF 200m 0.23s (Strelok Pro), B_127x99_Ball 0.075
        tracerEndTime=2.71; // Visible 200m 1500m 43g MV 903m/s ICAO according to https://www.nammo.com, ToF 1500m 2.71s (Strelok Pro), B_127x99_Ball 1
        nvgOnly=0; // B_127x99_Ball w/o nvgOnly
        airFriction=-0.00065856; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        class CamShakeExplode
        {
            power=3.60555;
            duration=0.8;
            frequency=20;
            distance=10.8167;
        };
        class CamShakeHit
        {
            power=13;
            duration=0.4;
            frequency=20;
            distance=1;
        };
    };
    class JCA_B_127x99_Ball_M33_Tracer_Red: JCA_B_127x99_Ball_M33
    {
        visibleFire=8; // B_127x99_Ball_Tracer_Red, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_127x99_Ball_M33_Tracer_Green: JCA_B_127x99_Ball_M33_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_127x99_Ball_M33_Tracer_Yellow: JCA_B_127x99_Ball_M33_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_B_127x99_Ball_M33_Tracer_IR: JCA_B_127x99_Ball_M33
    {
        tracerScale=0.6; // IR dim tracer
        tracerStartTime=0.23; // Visible 200m 1000m 43g MV 903m/s ICAO according to https://www.nammo.com, ToF 200m 0.23s (Strelok Pro), B_127x99_Ball 0.075
        tracerEndTime=1.51; // Visible 200m 1000m 43g MV 903m/s ICAO according to https://www.nammo.com, ToF 1000m 1.51s (Strelok Pro), B_127x99_Ball 1
        nvgOnly=1;
    };
    class JCA_B_127x99_Ball_AMAX: JCA_B_127x99_Ball_M33 // https://www.hornady.com/ammunition/rifle/50-bmg-750-gr-a-max-match#!/
    {
        ACE_bulletLength=64.77; // 2.550" https://static.hornady.media/presscenter/docs/1410998610-50-BMG-750gr-AMAX.pdf
        ACE_bulletMass=48.6; // 750gr
        ACE_muzzleVelocityVariationSD=0.2; // ACE3 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L689
        ACE_ballisticCoefficients[]={1.0362}; // ASM BC 1.050 2815fps (36"), ICAO 1.03618 826m/s (29") https://static.hornady.media/presscenter/docs/1410998610-50-BMG-750gr-AMAX.pdf
        ACE_muzzleVelocities[]={751,826,840,858,889}; // 2463, 2709, 2757, 2815, 2917fps
        hit=35.5; // 19208 Joules, B_127x99_Ball 30 16238 Joules
        caliber=3; // SD 0.41 lb/in2, ACE3 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L685, should be caliber ~1
        typicalSpeed=889; // 19208 Joules, B_127x99_Ball 880 16238 Joules
        airFriction=-0.00039574; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_127x99_Ball_M903_SLAP: JCA_B_127x99_Ball_M33 // M903 SLAP, B_127x99_SLAP
    { // Very high M903 SLAP BC 1.101 with data below, change for M962 SLAP-T BC 0.735 more coherent with .30" projectile and 29" barrel muzzle velocity.
        // ACE_caliber=7.7; // 0.303" https://www.1919a4.com/cdn-cgi/image/format=auto,onerror=redirect,width=1920,height=1920,fit=scale-down/https://www.1919a4.com/attachments/4-83-png.134461/
        // ACE_bulletLength=37; // 1.457" https://www.reddit.com/media?url=https%3A%2F%2Fpreview.redd.it%2F89pc3p78cm561.jpg%3Fauto%3Dwebp%26s%3Db42d11b49565e34f7adb561f3fab6821ac34d6b0
        // ACE_bulletMass=22.6; // 348.77gr https://www.1919a4.com/cdn-cgi/image/format=auto,onerror=redirect,width=1920,height=1920,fit=scale-down/https://www.1919a4.com/attachments/4-83-png.134461/
        // ACE_ammoTempMuzzleVelocityShifts[]={-18.7,-18.2,-16.6,-14,-10.4,-5.7,0,6.8,14.6,23.4,33.3}; // Same curve default ACE_ammoTempMuzzleVelocityShifts. Muzzle velocity shift 0m/s ICAO conditions (15°C, 1013.25hPa, 0%)
        // ACE_ballisticCoefficients[]={1.101}; // muzzle velocity 4000fps barrel length 45", ToF 1200m 1.2s, ToF 2500m 3.2s (1.082 ASM) "Marine Corps Warfighting Publication (MCWP) 3-15.1, Machine Guns and Machine Gun Gunnery" https://www.1919a4.com/cdn-cgi/image/format=auto,onerror=redirect,width=1920,height=1920,fit=scale-down/https://www.1919a4.com/attachments/4-83-png.134461/
        // ACE_ballisticCoefficients[]={0.866}; // for test distance in Yards: muzzle velocity 4000fps barrel length 45", ToF 1200yards 1.14s, ToF 2500yards 3.2s (0.851 ASM)
        // ACE_ballisticCoefficients[]={0.703}; // for test distance in Yards: muzzle velocity 4000fps barrel length 45", ToF 1200yards 1.2s, ToF 2500yards 3.74s (0.690 ASM)
        // ACE_velocityBoundaries[]={};
        // ACE_standardAtmosphere="ICAO";
        // ACE_dragModel=1;
        // ACE_muzzleVelocities[]={1029,1132,1152,1177,1219}; // 3377, 3715, 3781, 3860, 4000fps (1219m/s) 45"
        // ACE_barrelLengths[]={508,736.6,812.8,914.4,1143}; // 20, 29, 32, 36, 45"
        // airFriction=-0.00034015; // ICAO conditions (15°C, 1013.25hPa, 0%), B_127x99_SLAP 00036
        ACE_caliber=7.5; // 0.295" https://www.reddit.com/media?url=https%3A%2F%2Fpreview.redd.it%2F89pc3p78cm561.jpg%3Fauto%3Dwebp%26s%3Db42d11b49565e34f7adb561f3fab6821ac34d6b0
        ACE_bulletLength=36.8; // 1.409" https://www.reddit.com/media?url=https%3A%2F%2Fpreview.redd.it%2F89pc3p78cm561.jpg%3Fauto%3Dwebp%26s%3Db42d11b49565e34f7adb561f3fab6821ac34d6b0
        ACE_bulletMass=23.166; // 357.5gr (355, 360gr) "Army Ammunition, Data Sheets Small Caliber Ammunition" https://www.inetres.com/gp/military/infantry/mg/50_ammo.html
        ACE_ballisticCoefficients[]={0.735}; // M962 SLAP-T, ballistic app EBC V2 estimated muzzle velocity 3720fps (1134m/s) (ASM 0.723), ballistic data https://static.wikia.nocookie.net/guns/images/8/83/Slaptrajectory.jpg/revision/latest?cb=20110101063514
        ACE_muzzleVelocities[]={1029,1132,1152,1177,1219}; // 3377, 3715, 3781, 3860, 4000fps (1219m/s) 45"
        ace_vehicle_damage_incendiary=0.8; // ACE3
        hit=51.6; // 17215 Joules, B_127x99_SLAP 50 16684 Joules
        caliber=3.4; // ??? 19mm 1500 Yards (~1400m) ~540m/s https://en.wikipedia.org/wiki/.50_BMG: caliber ~2.35, effective perforation in-game 23mm RHA "armour_plate_23mm.bisurf" 1400m ~540m/s: caliber ~2.8
        // from data above "Marine Corps Warfighting Publication (MCWP) 3-15.1", 34mm 500m ~1040m/s: caliber ~2.2, 23mm 1200m ~830m/s: caliber ~1.85
        typicalSpeed=1219; // 17215 Joules, B_127x99_SLAP 1215 16684 Joules
        airFriction=-0.00051605; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        cost=15;
        class CamShakeExplode
        {
            power=4.47214;
            duration=0.8;
            frequency=20;
            distance=13.4164;
        };
        class CamShakeHit
        {
            power=20;
            duration=0.4;
            frequency=20;
            distance=1;
        };
    };
    class JCA_B_127x99_Ball_M962_SLAP_Tracer_Red: JCA_B_127x99_Ball_M903_SLAP // M962 SLAP-T
    {
        ACE_bulletLength=41.4; // 1.63" https://www.snipershide.com/shooting/threads/slap-rounds.7149881/
        ACE_bulletMass=23.004; // 355gr (350, 360gr) "Army Ammunition, Data Sheets Small Caliber Ammunition" https://www.inetres.com/gp/military/infantry/mg/50_ammo.html
        hit=51.2; // 17094 Joules, B_127x99_SLAP 50 16684 Joules
        visibleFire=8; // B_127x99_Ball_Tracer_Red, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerScale=1; // .30" projectile, B_556x45_Ball 1, B_65x39_Caseless 1, B_762x39_Ball_F 1, B_762x51_Ball 0.6
        tracerStartTime=0.01; // No start tracer, "from muzzle". Visible 13m, ToF 13m 0.01s (Strelok Pro), B_127x99_Ball 0.075
        tracerEndTime=1.62; // "Trace not less than 1370m from muzzle", 1190m/s @24m: 1204m/s @0m ICAO, ToF 1370m 1.62s (Strelok Pro), B_127x99_Ball 1 https://us1.discourse-cdn.com/flex016/uploads/cartridgecollectors/original/3X/7/f/7f02a4d46fdf84650d794110ee26d19f9c119c40.jpeg
    };
    class JCA_B_127x99_Ball_M962_SLAP_Tracer_Green: JCA_B_127x99_Ball_M962_SLAP_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_127x99_Ball_M962_SLAP_Tracer_Yellow: JCA_B_127x99_Ball_M962_SLAP_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_B_127x99_Ball_M962_SLAP_Tracer_IR: JCA_B_127x99_Ball_M962_SLAP_Tracer_Red
    {
        visibleFire=5; // JCA_B_127x99_Ball_M903_SLAP
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        nvgOnly=1;
    };
    class JCA_B_127x99_Ball_Mk211_HEIAP: JCA_B_127x99_Ball_M903_SLAP // Raufoss Mk 211 https://en.wikipedia.org/wiki/Raufoss_Mk_211, Nammo Multipurpose NM140 (Handbook 2018)
    {
        ACE_caliber=12.98; // CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/50-browning-en.pdf
        ACE_bulletLength=58.42; // 2.3"
        ACE_bulletMass=43.48; // 671gr
        ACE_ballisticCoefficients[]={0.651}; // 2715fps 29" ballistic app EBC V2 (ASM 0.64) https://apps.dtic.mil/sti/tr/pdf/ADA367672.pdf#page=52
        ACE_muzzleVelocities[]={752,828,842,860,891}; // 2468, 2715, 2763, 2821, 2923fps
        ace_vehicle_damage_incendiary=1;
        hit=51.7; // 17262 Joules, B_127x99_SLAP 50 16684 Joules
        indirectHit=6; // B_20mm
        indirectHitRange=1.6; // B_20mm
        explosive=0.4; // B_20mm
        explosionSoundEffect="DefaultExplosion"; // B_20mm
        CraterEffects="ExploAmmoCrater"; // B_20mm
        explosionEffects="ExploAmmoExplosion"; // B_20mm
        // caliber=3.4; // ??? Penetration requirement 22mm RHA 0° 200m, perforation 10.6mm steel 321–375 HB 30° 1000m (https://www.nammo.com)
        // effective perforation in-game 23mm RHA "armour_plate_23mm.bisurf" 200m ~735m/s: caliber ~2, effective perforation in-game 12mm RHA "armour_plate_12mm.bisurf" 1000m ~430m/s: caliber ~1.9
        typicalSpeed=891; // 17262 Joules, B_127x99_SLAP 1215 16684 Joules
        airFriction=-0.00062936; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        class CamShakeExplode // B_20mm
        {
            power=4;
            duration=0.8;
            frequency=20;
            distance=43.7771;
        };
        class CamShakeHit // B_20mm
        {
            power=20;
            duration=0.4;
            frequency=20;
            distance=1;
        };
        soundHit1[]= // B_20mm
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01.wss",
            1.7782794,
            1,
            1300
        };
        soundHit2[]= // B_20mm
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02.wss",
            1.7782794,
            1,
            1300
        };
        soundHit3[]= // B_20mm
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03.wss",
            1.7782794,
            1,
            1300
        };
        soundHit4[]= // B_20mm
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04.wss",
            1.7782794,
            1,
            1300
        };
        multiSoundHit[]= // B_20mm
        {
            "soundHit1",
            0.25,
            "soundHit2",
            0.25,
            "soundHit3",
            0.25,
            "soundHit4",
            0.25
        };
        SoundSetExplosion[]= // B_20mm
        {
            "Shell19mm25mm_Exp_SoundSet"
        };
    };
    class JCA_B_127x99_Ball_Mk300_HEIAP_Tracer_Red: JCA_B_127x99_Ball_Mk211_HEIAP // Nammo Multipurpose Mk 300/NM160 (Handbook 2018)
    {
        visibleFire=8; // B_127x99_Ball_Tracer_Red, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_127x99_Ball_MPDT_HEIAP_Tracer_IR: JCA_B_127x99_Ball_Mk211_HEIAP // Nammo Multipurpose MP-DT (IR) (Handbook 2018)
    {
        tracerScale=0.6; // IR dim tracer
        tracerStartTime=0.23; // Visible 200m 1000m 43g MV 903m/s ICAO according to https://www.nammo.com, ToF 200m 0.23s (Strelok Pro), B_127x99_Ball 0.075
        tracerEndTime=1.51; // Visible 200m 1000m 43g MV 903m/s ICAO according to https://www.nammo.com, ToF 1000m 1.51s (Strelok Pro), B_127x99_Ball 1
        nvgOnly=1;
    };
    class JCA_B_127x99_Ball_M8_API: JCA_B_127x99_Ball_M903_SLAP
    {
        ACE_caliber=12.98; // CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/50-browning-en.pdf
        ACE_bulletLength=58.67; // 2.31" "Army Ammunition, Data Sheets Small Caliber Ammunition"
        ACE_bulletMass=40.337; // 622.5 gr "Army Ammunition, Data Sheets Small Caliber Ammunition" https://www.inetres.com/gp/military/infantry/mg/50_ammo.html
        ACE_ballisticCoefficients[]={0.58}; // ballistic app EBC V2 estimated muzzle velocity 2758fps (841m/s) (ASM 0.574), ballistic data https://static.wikia.nocookie.net/guns/images/8/83/Slaptrajectory.jpg/revision/latest?cb=20110101063514
        ACE_muzzleVelocities[]={764,841,856,874,905}; // 2508, 2758, 2807, 2866, 2970fps
        ace_vehicle_damage_incendiary=1;
        hit=49.5; // 16521 Joules, B_127x99_SLAP 50 16684 Joules
        indirectHit=8; // B_20mm_AP
        indirectHitRange=0.2; // B_20mm_AP
        // caliber=3.4; // ??? perforation 22mm RHA 700m (https://www.nammo.com), effective perforation in-game 23mm RHA "armour_plate_23mm.bisurf" 700m ~510m/s: caliber ~3
        typicalSpeed=905; // 16521 Joules, B_127x99_SLAP 1215 16684 Joules
        airFriction=-0.00070327; // ICAO conditions (15°C, 1013.25hPa, 0%), airFrictionAnalysis.txt in docs folder
        CraterEffects="ExploAmmoCrater";
        class HitEffects // B_30mm_APFSDS. Observable flash at hard targets. Ignition of vaporized fuel. Material/light armor targets https://www.nammo.com
        {
            hitMetal="ImpactMetalSabotSmall";
            hitMetalPlate="ImpactMetalSabotSmall";
            hitBuilding="ImpactConcreteSabotSmall";
            hitConcrete="ImpactConcreteSabotSmall";
            hitGroundSoft="ImpactEffectsGroundSabot";
            hitGroundRed="ImpactEffectsGroundSabot"; // BulletBase ImpactEffectsRed
            hitGroundHard="ImpactEffectsGroundSabot";
            Hit_Foliage_green="ImpactLeavesGreen";
            Hit_Foliage_Dead="ImpactLeavesDead";
            Hit_Foliage_Green_big="ImpactLeavesGreenBig";
            Hit_Foliage_Palm="ImpactLeavesPalm";
            Hit_Foliage_Pine="ImpactLeavesPine";
            hitFoliage="ImpactLeaves";
            hitGlass="ImpactGlass";
            hitGlassArmored="ImpactGlassThin";
            hitWood="ImpactWood";
            hitHay="ImpactHay";
            hitPlastic="ImpactPlastic";
            hitRubber="ImpactRubber";
            hitTyre="ImpactTyre";
            hitMan="ImpactEffectsBlood";
            hitWater="ImpactEffectsWater";
            hitVirtual="ImpactMetal"; // BulletBase
            default_mat="ImpactEffectsGroundSabot";
        };
    };
    class JCA_B_127x99_Ball_M20_API_Tracer_Red: JCA_B_127x99_Ball_M8_API
    {
        visibleFire=8; // B_127x99_Ball_Tracer_Red, B_762x51_Ball 3, B_762x51_Minigun_Tracer_Red 5
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_127x99_Ball_Mk257_API_Tracer_IR: JCA_B_127x99_Ball_M8_API
    {
        tracerScale=0.6; // IR dim tracer
        tracerStartTime=0.23; // Visible 200m 1000m 43g MV 903m/s ICAO according to https://www.nammo.com, ToF 200m 0.23s (Strelok Pro), B_127x99_Ball 0.075
        tracerEndTime=1.51; // Visible 200m 1000m 43g MV 903m/s ICAO according to https://www.nammo.com, ToF 1000m 1.51s (Strelok Pro), B_127x99_Ball 1
        nvgOnly=1;
    };
    class JCA_GrenadeAmmo_HandFlare_Base: GrenadeHand
    {
        ace_frag_skip=1;
        ace_frag_force=0;
    };
};
class CfgMagazines
{
    class CA_Magazine;
    class JCA_15Rnd_9x21_M9A1_Mag;
    class JCA_15Rnd_9x21_P226_Mag;
    class JCA_17Rnd_9x21_P320_Mag;
    class JCA_30Rnd_9x21_MP5_Mag;
    class JCA_30Rnd_9x21_MP5_Sand_Mag;
    class JCA_10Rnd_127x99_M107_Mag;
    class JCA_10Rnd_127x99_M107_Sand_Mag;
    class JCA_15Rnd_9x19_P320C_FMJ_Mag: JCA_17Rnd_9x21_P320_Mag // M1152 Sig Sauer 9x19mm 115gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd P320 FMJ Mag";
        ammo="JCA_B_9x19_Ball_P320C_FMJ";
        type=16; // 16Rnd_9x21_Mag
        count=15;
        mass=5.6; // magazine 15 rounds empty 76g + 15x 11.9g, JCA 6
        initSpeed=361; // according to ACE_muzzleVelocities 3.9" barrel (99mm) ICAO conditions (15°C, 1013.25hPa, 0%), JCA 410
        descriptionShort="Caliber: 9x19 mm<br />Rounds: 15<br />Used in: P320 Compact";
        displaynameshort="FMJ";
    };
    class JCA_15Rnd_9x19_P320C_JHP_Mag: JCA_15Rnd_9x19_P320C_FMJ_Mag // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd P320 JHP Mag";
        ammo="JCA_B_9x19_Ball_P320C_JHP";
        mass=6.3; // magazine 15 rounds empty 76g + 15x 13.9g, JCA 6
        initSpeed=300; // according to ACE_muzzleVelocities 3.9" barrel (99mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="JHP";
    };
    class JCA_15Rnd_9x19_P320C_Red_Mag: JCA_15Rnd_9x19_P320C_FMJ_Mag // M1152 Sig Sauer 9x19mm 115gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd P320 Tracer (Red) Mag";
        ammo="JCA_B_9x19_Ball_P320C_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_15Rnd_9x19_P320C_Green_Mag: JCA_15Rnd_9x19_P320C_Red_Mag // M1152 Sig Sauer 9x19mm 115gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd P320 Tracer (Green) Mag";
        ammo="JCA_B_9x19_Ball_P320C_Tracer_Green";
    };
    class JCA_15Rnd_9x19_P320C_Yellow_Mag: JCA_15Rnd_9x19_P320C_Red_Mag // M1152 Sig Sauer 9x19mm 115gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd P320 Tracer (Yellow) Mag";
        ammo="JCA_B_9x19_Ball_P320C_Tracer_Yellow";
    };
    class JCA_15Rnd_9x19_P320C_IR_Mag: JCA_15Rnd_9x19_P320C_Red_Mag // M1152 Sig Sauer 9x19mm 115gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd P320 Tracer (IR) Mag";
        ammo="JCA_B_9x19_Ball_P320C_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_15Rnd_9x19_P226_FMJ_Mag: JCA_15Rnd_9x21_P226_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd P226 FMJ Mag";
        ammo="JCA_B_9x19_Ball_P226_FMJ";
        type=16; // 16Rnd_9x21_Mag
        count=15;
        mass=5.7; // magazine 15 rounds empty 76g + 15x 12.3g, 16Rnd_9x21_Mag 6, JCA 6
        initSpeed=378; // according to ACE_muzzleVelocities barrel length 4.4" (112mm) ICAO conditions (15°C, 1013.25hPa, 0%), JCA 410
        displaynameshort="FMJ";
    };
    class JCA_15Rnd_9x19_P226_JHP_Mag: JCA_15Rnd_9x19_P226_FMJ_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Jacketed Hollow Point JHP
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd P226 JHP Mag";
        ammo="JCA_B_9x19_Ball_P226_JHP";
        displaynameshort="JHP";
    };
    class JCA_15Rnd_9x19_P226_SUB_Mag: JCA_15Rnd_9x19_P226_FMJ_Mag // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd P226 Subsonic Mag";
        ammo="JCA_B_9x19_Ball_P226_SUB";
        mass=6.3; // magazine 15 rounds empty 76g + 15x 13.9g, 16Rnd_9x21_Mag 6, JCA 6
        initSpeed=311; // according to ACE_muzzleVelocities barrel length 4.4" (112mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Subsonic";
    };
    class JCA_15Rnd_9x19_P226_Red_Mag: JCA_15Rnd_9x19_P226_FMJ_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd P226 Tracer (Red) Mag";
        ammo="JCA_B_9x19_Ball_P226_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_15Rnd_9x19_P226_Green_Mag: JCA_15Rnd_9x19_P226_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd P226 Tracer (Green) Mag";
        ammo="JCA_B_9x19_Ball_P226_Tracer_Green";
    };
    class JCA_15Rnd_9x19_P226_Yellow_Mag: JCA_15Rnd_9x19_P226_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd P226 Tracer (Yellow) Mag";
        ammo="JCA_B_9x19_Ball_P226_Tracer_Yellow";
    };
    class JCA_15Rnd_9x19_P226_IR_Mag: JCA_15Rnd_9x19_P226_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd P226 Tracer (IR) Mag";
        ammo="JCA_B_9x19_Ball_P226_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_15Rnd_9x19_M9A1_FMJ_Mag: JCA_15Rnd_9x21_M9A1_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd M9A1 FMJ Mag";
        ammo="JCA_B_9x19_Ball_M9A1_FMJ";
        type=16; // 16Rnd_9x21_Mag
        mass=6.1; // magazine 15 rounds empty 91g + 15x 12.3g, JCA 6
        initSpeed=394; // according to ACE_muzzleVelocities barrel length 4.9" (125mm) ICAO conditions (15°C, 1013.25 hPa, 0%), JCA 410
        descriptionShort="Caliber: 9x19 mm<br />Rounds: 15<br />Used in: M9A1";
        displaynameshort="FMJ";
    };
    class JCA_15Rnd_9x19_M9A1_JHP_Mag: JCA_15Rnd_9x19_M9A1_FMJ_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Jacketed Hollow Point JHP
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd M9A1 JHP Mag";
        ammo="JCA_B_9x19_Ball_M9A1_JHP";
        displaynameshort="JHP";
    };
    class JCA_15Rnd_9x19_M9A1_SUB_Mag: JCA_15Rnd_9x19_M9A1_FMJ_Mag // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd M9A1 Subsonic Mag";
        ammo="JCA_B_9x19_Ball_M9A1_SUB";
        mass=6.6; // magazine 15 rounds empty 91g + 15x 13.9g, JCA 6
        initSpeed=324; // according to ACE_muzzleVelocities barrel length 4.9" (125mm) ICAO conditions (15°C, 1013.25 hPa, 0%)
        displaynameshort="Subsonic";
    };
    class JCA_15Rnd_9x19_M9A1_Red_Mag: JCA_15Rnd_9x19_M9A1_FMJ_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd M9A1 Tracer (Red) Mag";
        ammo="JCA_B_9x19_Ball_M9A1_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_15Rnd_9x19_M9A1_Green_Mag: JCA_15Rnd_9x19_M9A1_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd M9A1 Tracer (Green) Mag";
        ammo="JCA_B_9x19_Ball_M9A1_Tracer_Green";
    };
    class JCA_15Rnd_9x19_M9A1_Yellow_Mag: JCA_15Rnd_9x19_M9A1_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd M9A1 Tracer (Yellow) Mag";
        ammo="JCA_B_9x19_Ball_M9A1_Tracer_Yellow";
    };
    class JCA_15Rnd_9x19_M9A1_IR_Mag: JCA_15Rnd_9x19_M9A1_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 15Rnd M9A1 Tracer (IR) Mag";
        ammo="JCA_B_9x19_Ball_M9A1_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_30Rnd_9x19_MP5_FMJ_Mag: JCA_30Rnd_9x21_MP5_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 FMJ Mag";
        ammo="JCA_B_9x19_Ball_MP5_FMJ";
        mass=10; // 11.9 magazine 30 rounds empty 170g + 30x 12.3g, 30Rnd_9x21_Mag 10, JCA 10
        initSpeed=428; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 370
        descriptionShort="Caliber: 9x19 mm<br />Rounds: 30<br />Used in: MP5A5";
        displaynameshort="FMJ";
    };
    class JCA_30Rnd_9x19_MP5_JHP_Mag: JCA_30Rnd_9x19_MP5_FMJ_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Jacketed Hollow Point JHP
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 JHP Mag";
        ammo="JCA_B_9x19_Ball_MP5_JHP";
        displaynameshort="JHP";
    };
    class JCA_30Rnd_9x19_MP5_Red_Mag: JCA_30Rnd_9x19_MP5_FMJ_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 Reload Tracer (Red) Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Red";
        lastRoundsTracer=4;
    };
    class JCA_30Rnd_9x19_MP5_Green_Mag: JCA_30Rnd_9x19_MP5_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 Reload Tracer (Green) Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Green";
    };
    class JCA_30Rnd_9x19_MP5_Yellow_Mag: JCA_30Rnd_9x19_MP5_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 Reload Tracer (Yellow) Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Yellow";
    };
    class JCA_30Rnd_9x19_MP5_IR_Mag: JCA_30Rnd_9x19_MP5_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 Reload Tracer (IR) Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_IR";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Red_Mag: JCA_30Rnd_9x19_MP5_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 Tracer (Red) Mag";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Green_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 Tracer (Green) Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Green";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 Tracer (Yellow) Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Yellow";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_IR_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 Tracer (IR) Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag: JCA_30Rnd_9x21_MP5_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 FMJ Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_FMJ";
        mass=10; // 11.9 magazine 30 rounds empty 170g + 30x 12.3g, 30Rnd_9x21_Mag 10, JCA 10
        initSpeed=428; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 370
        descriptionShort="Caliber: 9x19 mm<br />Rounds: 30<br />Used in: MP5A5";
        displaynameshort="FMJ";
    };
    class JCA_30Rnd_9x19_MP5_JHP_Sand_Mag: JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Jacketed Hollow Point JHP
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 JHP Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_JHP";
        displaynameshort="JHP";
    };
    class JCA_30Rnd_9x19_MP5_Red_Sand_Mag: JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 Reload Tracer (Red) Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Red";
        lastRoundsTracer=4;
    };
    class JCA_30Rnd_9x19_MP5_Green_Sand_Mag: JCA_30Rnd_9x19_MP5_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 Reload Tracer (Green) Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Green";
    };
    class JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag: JCA_30Rnd_9x19_MP5_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 Reload Tracer (Yellow) Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Yellow";
    };
    class JCA_30Rnd_9x19_MP5_IR_Sand_Mag: JCA_30Rnd_9x19_MP5_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 Reload Tracer (IR) Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_IR";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag: JCA_30Rnd_9x19_MP5_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 Tracer (Red) Sand Mag";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 Tracer (Green) Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Green";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 Tracer (Yellow) Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Yellow";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Laid3acK";
        displayName="9 mm 30Rnd MP5 Tracer (IR) Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_12Rnd_45ACP_Mk23_Mag: CA_Magazine // JCA default config
    {
        // mass=13.6; // Operators Manual Mk23 empty magazine 12rnd 366g + cartridge 21g x12= 618g, 11Rnd_45ACP_Mag 7, JCA 8
        ammo="JCA_B_45ACP_Ball_Mk23";
        initSpeed=311; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 370
    };
    class JCA_12Rnd_45ACP_Mk23_Tracer_Red_Mag: JCA_12Rnd_45ACP_Mk23_Mag
    {
        ammo="JCA_B_45ACP_Ball_Mk23_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_12Rnd_45ACP_Mk23_Tracer_Green_Mag: JCA_12Rnd_45ACP_Mk23_Tracer_Red_Mag
    {
        ammo="JCA_B_45ACP_Ball_Mk23_Tracer_Green";
    };
    class JCA_12Rnd_45ACP_Mk23_Tracer_Yellow_Mag: JCA_12Rnd_45ACP_Mk23_Tracer_Red_Mag
    {
        ammo="JCA_B_45ACP_Ball_Mk23_Tracer_Yellow";
    };
    class JCA_12Rnd_45ACP_Mk23_Tracer_IR_Mag: JCA_12Rnd_45ACP_Mk23_Tracer_Red_Mag
    {
        ammo="JCA_B_45ACP_Ball_Mk23_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_25Rnd_45ACP_UMP_Mag: CA_Magazine // JCA default config
    {
        // mass=15.3; // Operators Manual UMP45 empty magazine 25rnd 170g + cartridge 21g x25= 695g, 30Rnd_45ACP_Mag_SMG_01 10, JCA 10
        ammo="JCA_B_45ACP_Ball_UMP45";
        initSpeed=332; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 370
    };
    class JCA_25Rnd_45ACP_UMP_Red_Mag: JCA_25Rnd_45ACP_UMP_Mag
    {
        ammo="JCA_B_45ACP_Ball_UMP45_Tracer_Red";
    };
    class JCA_25Rnd_45ACP_UMP_Green_Mag: JCA_25Rnd_45ACP_UMP_Red_Mag
    {
        ammo="JCA_B_45ACP_Ball_UMP45_Tracer_Green";
    };
    class JCA_25Rnd_45ACP_UMP_Yellow_Mag: JCA_25Rnd_45ACP_UMP_Red_Mag
    {
        ammo="JCA_B_45ACP_Ball_UMP45_Tracer_Yellow";
    };
    class JCA_25Rnd_45ACP_UMP_IR_Mag: JCA_25Rnd_45ACP_UMP_Red_Mag
    {
        ammo="JCA_B_45ACP_Ball_UMP45_Tracer_IR";
    };
    class JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag: JCA_25Rnd_45ACP_UMP_Red_Mag
    {
        ammo="JCA_B_45ACP_Ball_UMP45_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_25Rnd_45ACP_UMP_Tracer_Green_Mag: JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag
    {
        ammo="JCA_B_45ACP_Ball_UMP45_Tracer_Green";
    };
    class JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Mag: JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag
    {
        ammo="JCA_B_45ACP_Ball_UMP45_Tracer_Yellow";
    };
    class JCA_25Rnd_45ACP_UMP_Tracer_IR_Mag: JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag
    {
        ammo="JCA_B_45ACP_Ball_UMP45_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_25Rnd_45ACP_UMP_Sand_Mag: JCA_25Rnd_45ACP_UMP_Mag
    {
    };
    class JCA_25Rnd_45ACP_UMP_Red_Sand_Mag: JCA_25Rnd_45ACP_UMP_Sand_Mag
    {
        ammo="JCA_B_45ACP_Ball_UMP45_Tracer_Red";
    };
    class JCA_25Rnd_45ACP_UMP_Green_Sand_Mag: JCA_25Rnd_45ACP_UMP_Red_Sand_Mag
    {
        ammo="JCA_B_45ACP_Ball_UMP45_Tracer_Green";
    };
    class JCA_25Rnd_45ACP_UMP_Yellow_Sand_Mag: JCA_25Rnd_45ACP_UMP_Red_Sand_Mag
    {
        ammo="JCA_B_45ACP_Ball_UMP45_Tracer_Yellow";
    };
    class JCA_25Rnd_45ACP_UMP_IR_Sand_Mag: JCA_25Rnd_45ACP_UMP_Red_Sand_Mag
    {
        ammo="JCA_B_45ACP_Ball_UMP45_Tracer_IR";
    };
    class JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag: JCA_25Rnd_45ACP_UMP_Red_Sand_Mag
    {
        ammo="JCA_B_45ACP_Ball_UMP45_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_25Rnd_45ACP_UMP_Tracer_Green_Sand_Mag: JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag
    {
        ammo="JCA_B_45ACP_Ball_UMP45_Tracer_Green";
    };
    class JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Sand_Mag: JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag
    {
        ammo="JCA_B_45ACP_Ball_UMP45_Tracer_Yellow";
    };
    class JCA_25Rnd_45ACP_UMP_Tracer_IR_Sand_Mag: JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag
    {
        ammo="JCA_B_45ACP_Ball_UMP45_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_30Rnd_556x45_PMAG: CA_Magazine // JCA default config
    {
        ammo="JCA_B_556x45_Ball";
        mass=6.6; // 11.2 Polymer magazine 30 rounds (empty) 140g + 30x 12.3g (M855 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 6
        initSpeed=926; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
    };
    class JCA_30Rnd_556x45_M855A1_PMAG: JCA_30Rnd_556x45_PMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd M855A1 PMAG";
        ammo="JCA_B_556x45_Ball_M855A1";
        initSpeed=940; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M855A1";
    };
    class JCA_30Rnd_556x45_M193_PMAG: JCA_30Rnd_556x45_PMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd M193 PMAG";
        ammo="JCA_B_556x45_Ball_M193";
        mass=6.4; // 10.8 Polymer magazine 30 rounds (empty) 140g + 30x 11.6g (M193 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 6
        initSpeed=990; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M193";
    };
    class JCA_30Rnd_556x45_Mk262_PMAG: JCA_30Rnd_556x45_PMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Mk262 PMAG";
        ammo="JCA_B_556x45_Ball_Mk262";
        mass=7; // 11.9 Polymer magazine 30 rounds (empty) 140g + 30x 13.3g (Mk262 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 6
        initSpeed=838; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk262";
    };
    class JCA_30Rnd_556x45_Mk318_PMAG: JCA_30Rnd_556x45_PMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Mk318 PMAG";
        ammo="JCA_B_556x45_Ball_Mk318";
        initSpeed=950; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk318";
    };
    class JCA_30Rnd_556x45_M995AP_PMAG: JCA_30Rnd_556x45_PMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd M995 AP PMAG";
        ammo="JCA_B_556x45_Ball_M995AP";
        mass=6.7; // 11.4 Polymer magazine 30 rounds (empty) 140g + 30x 12.6g (M995 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 6
        initSpeed=880; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M995 AP";
    };
    class JCA_30Rnd_556x45_UW_PMAG: JCA_30Rnd_556x45_PMAG // default Arma3 20Rnd_556x45_UW_mag
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Dual Purpose PMAG";
        ammo="JCA_B_556x45_Ball_Dual";
        initSpeed=283; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="UW";
    };
    class JCA_30Rnd_556x45_Red_PMAG: JCA_30Rnd_556x45_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Red";
    };
    class JCA_30Rnd_556x45_Green_PMAG: JCA_30Rnd_556x45_Red_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Yellow_PMAG: JCA_30Rnd_556x45_Red_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_IR_PMAG: JCA_30Rnd_556x45_Red_PMAG
    {
        ammo="JCA_B_556x45_Ball_IR_Dim_Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Red_PMAG: JCA_30Rnd_556x45_Red_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Green_PMAG: JCA_30Rnd_556x45_Tracer_Red_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Tracer_Yellow_PMAG: JCA_30Rnd_556x45_Tracer_Red_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Tracer_IR_PMAG: JCA_30Rnd_556x45_Tracer_Red_PMAG
    {
        ammo="JCA_B_556x45_Ball_IR_Dim_Tracer";
        displaynameshort="Tracer IR";
    };
    class JCA_30Rnd_556x45_sand_PMAG: JCA_30Rnd_556x45_PMAG
    {
    };
    class JCA_30Rnd_556x45_M855A1_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd M855A1 Sand PMAG";
        ammo="JCA_B_556x45_Ball_M855A1";
        initSpeed=940; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M855A1";
    };
    class JCA_30Rnd_556x45_M193_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd M193 Sand PMAG";
        ammo="JCA_B_556x45_Ball_M193";
        mass=6.4; // 10.8 Polymer magazine 30 rounds (empty) 140g + 30x 11.6g (M193 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 6
        initSpeed=990; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M193";
    };
    class JCA_30Rnd_556x45_Mk262_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Mk262 Sand PMAG";
        ammo="JCA_B_556x45_Ball_Mk262";
        mass=7; // 11.9 Polymer magazine 30 rounds (empty) 140g + 30x 13.3g (Mk262 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 6
        initSpeed=838; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk262";
    };
    class JCA_30Rnd_556x45_Mk318_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Mk318 Sand PMAG";
        ammo="JCA_B_556x45_Ball_Mk318";
        initSpeed=950; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk318";
    };
    class JCA_30Rnd_556x45_M995AP_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd M995 AP Sand PMAG";
        ammo="JCA_B_556x45_Ball_M995AP";
        mass=6.7; // 11.4 Polymer magazine 30 rounds (empty) 140g + 30x 12.6g (M995 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 6
        initSpeed=880; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M995 AP";
    };
    class JCA_30Rnd_556x45_UW_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG // default Arma3 20Rnd_556x45_UW_mag
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Dual Purpose Sand PMAG";
        ammo="JCA_B_556x45_Ball_Dual";
        initSpeed=283; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="UW";
    };
    class JCA_30Rnd_556x45_Red_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Red";
    };
    class JCA_30Rnd_556x45_Green_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Yellow_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_IR_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_IR_Dim_Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Red_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Green_sand_PMAG: JCA_30Rnd_556x45_Tracer_Red_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG: JCA_30Rnd_556x45_Tracer_Red_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Tracer_IR_sand_PMAG: JCA_30Rnd_556x45_Tracer_Red_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_IR_Dim_Tracer";
        displaynameshort="Tracer IR";
    };
    class JCA_30Rnd_556x45_EMAG: CA_Magazine // JCA default config
    {
        ammo="JCA_B_556x45_Ball";
        mass=6.8; // 11.6 HK Gen3 magazine 30 rounds (empty) 158g + 30x 12.3g (M855 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 6
        initSpeed=926; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
    };
    class JCA_30Rnd_556x45_M855A1_EMAG: JCA_30Rnd_556x45_EMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd M855A1 EMAG";
        ammo="JCA_B_556x45_Ball_M855A1";
        initSpeed=940; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M855A1";
    };
    class JCA_30Rnd_556x45_M193_EMAG: JCA_30Rnd_556x45_EMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd M193 EMAG";
        ammo="JCA_B_556x45_Ball_M193";
        mass=6.6; // 11.2 HK Gen3 magazine 30 rounds (empty) 158g + 30x 11.6g (M193 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 6
        initSpeed=990; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M193";
    };
    class JCA_30Rnd_556x45_Mk262_EMAG: JCA_30Rnd_556x45_EMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Mk262 EMAG";
        ammo="JCA_B_556x45_Ball_Mk262";
        mass=7.2; // 12.3 HK Gen3 magazine 30 rounds (empty) 158g + 30x 13.3g (Mk262 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 6
        initSpeed=838; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk262";
    };
    class JCA_30Rnd_556x45_Mk318_EMAG: JCA_30Rnd_556x45_EMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Mk318 EMAG";
        ammo="JCA_B_556x45_Ball_Mk318";
        initSpeed=950; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk318";
    };
    class JCA_30Rnd_556x45_M995AP_EMAG: JCA_30Rnd_556x45_EMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd M995 AP EMAG";
        ammo="JCA_B_556x45_Ball_M995AP";
        mass=6.9; // 11.8 HK Gen3 magazine 30 rounds (empty) 158g + 30x 12.6g (M995 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 6
        initSpeed=880; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M995 AP";
    };
    class JCA_30Rnd_556x45_UW_EMAG: JCA_30Rnd_556x45_EMAG // default Arma3 20Rnd_556x45_UW_mag
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Dual Purpose EMAG";
        ammo="JCA_B_556x45_Ball_Dual";
        initSpeed=283; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="UW";
    };
    class JCA_30Rnd_556x45_Red_EMAG: JCA_30Rnd_556x45_EMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Red";
    };
    class JCA_30Rnd_556x45_Green_EMAG: JCA_30Rnd_556x45_Red_EMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Yellow_EMAG: JCA_30Rnd_556x45_Red_EMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_IR_EMAG: JCA_30Rnd_556x45_Red_EMAG
    {
        ammo="JCA_B_556x45_Ball_IR_Dim_Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Red_EMAG: JCA_30Rnd_556x45_Red_EMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Green_EMAG: JCA_30Rnd_556x45_Tracer_Red_EMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Tracer_Yellow_EMAG: JCA_30Rnd_556x45_Tracer_Red_EMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Tracer_IR_EMAG: JCA_30Rnd_556x45_Tracer_Red_EMAG
    {
        ammo="JCA_B_556x45_Ball_IR_Dim_Tracer";
        displaynameshort="Tracer IR";
    };
    class JCA_30Rnd_556x45_sand_EMAG: JCA_30Rnd_556x45_EMAG
    {
    };
    class JCA_30Rnd_556x45_M855A1_sand_EMAG: JCA_30Rnd_556x45_sand_EMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd M855A1 Sand EMAG";
        ammo="JCA_B_556x45_Ball_M855A1";
        initSpeed=940; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M855A1";
    };
    class JCA_30Rnd_556x45_M193_sand_EMAG: JCA_30Rnd_556x45_sand_EMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd M193 Sand EMAG";
        ammo="JCA_B_556x45_Ball_M193";
        mass=6.6; // 11.2 HK Gen3 magazine 30 rounds (empty) 158g + 30x 11.6g (M193 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 6
        initSpeed=990; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M193";
    };
    class JCA_30Rnd_556x45_Mk262_sand_EMAG: JCA_30Rnd_556x45_sand_EMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Mk262 Sand EMAG";
        ammo="JCA_B_556x45_Ball_Mk262";
        mass=7.2; // 12.3 HK Gen3 magazine 30 rounds (empty) 158g + 30x 13.3g (Mk262 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 6
        initSpeed=838; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk262";
    };
    class JCA_30Rnd_556x45_Mk318_sand_EMAG: JCA_30Rnd_556x45_sand_EMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Mk318 Sand EMAG";
        ammo="JCA_B_556x45_Ball_Mk318";
        initSpeed=950; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk318";
    };
    class JCA_30Rnd_556x45_M995AP_sand_EMAG: JCA_30Rnd_556x45_sand_EMAG
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd M995 AP Sand EMAG";
        ammo="JCA_B_556x45_Ball_M995AP";
        mass=6.9; // 11.8 HK Gen3 magazine 30 rounds (empty) 158g + 30x 12.6g (M995 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 6
        initSpeed=880; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M995 AP";
    };
    class JCA_30Rnd_556x45_UW_sand_EMAG: JCA_30Rnd_556x45_sand_EMAG // default Arma3 20Rnd_556x45_UW_mag
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Dual Purpose Sand EMAG";
        ammo="JCA_B_556x45_Ball_Dual";
        initSpeed=283; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="UW";
    };
    class JCA_30Rnd_556x45_Red_sand_EMAG: JCA_30Rnd_556x45_sand_EMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Red";
    };
    class JCA_30Rnd_556x45_Green_sand_EMAG: JCA_30Rnd_556x45_Red_sand_EMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Yellow_sand_EMAG: JCA_30Rnd_556x45_Red_sand_EMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_IR_sand_EMAG: JCA_30Rnd_556x45_Red_sand_EMAG
    {
        ammo="JCA_B_556x45_Ball_IR_Dim_Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Red_sand_EMAG: JCA_30Rnd_556x45_Red_sand_EMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Green_sand_EMAG: JCA_30Rnd_556x45_Tracer_Red_sand_EMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG: JCA_30Rnd_556x45_Tracer_Red_sand_EMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Tracer_IR_sand_EMAG: JCA_30Rnd_556x45_Tracer_Red_sand_EMAG
    {
        ammo="JCA_B_556x45_Ball_IR_Dim_Tracer";
        displaynameshort="Tracer IR";
    };
    // JCA 5.56x45 Stanag Magazines uses vanilla class 30Rnd_556x45_Stanag. To avoid all conflict with other mods and RPT Updating base class, all JCA 5.56x45 Stanag Magazines with JCA as prefixe.
    /*class 30Rnd_556x45_Stanag: CA_Magazine official BI tool All-in-one Config Arma3 2.17.151913 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_CA.paa";
        author="$STR_A3_Bohemia_Interactive";
        scope=2;
        displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag0";
        ammo="B_556x45_Ball";
        count=30;
        initSpeed=920;
        tracersEvery=0;
        lastRoundsTracer=4;
        descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag1";
        modelSpecial="\a3\Weapons_F_Exp\MagazineProxies\mag_556x45_stanag_30rnd.p3d";
        modelSpecialIsProxy=1;
    };
    class 30Rnd_556x45_Stanag: CA_Magazine // JCA default config
    {
        author="Grave";
        scope=2;
        displayName="5.56 mm 30Rnd Mag";
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_30Rnd_556x45_SMAG_CA.paa";
        modelSpecial="weapons_f_JCA_IA\MagazineProxies\30Rnd_556_SMAG.p3d";
        modelSpecialIsProxy=1;
        ammo="B_556x45_Ball";
        count=30;
        mass=8;
        initSpeed=920;
        tracersEvery=0;
        lastRoundsTracer=0;
        descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag1";
    };*/
    class JCA_30Rnd_556x45_Stanag: CA_Magazine // JCA default config with JCA as prefixe
    {
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_30Rnd_556x45_SMAG_CA.paa";
        author="Laid3acK";
        scope=2;
        displayName="5.56 mm 30Rnd Mag";
        ammo="JCA_B_556x45_Ball";
        count=30;
        mass=8; // 13.6 Steel magazine 30 rounds (empty) 250g + 30x 12.3g (M855 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 8
        initSpeed=926; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        tracersEvery=0;
        lastRoundsTracer=0;
        descriptionShort="Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: 5.56 STANAG Rifles";
        modelSpecial="weapons_f_JCA_IA\MagazineProxies\30Rnd_556_SMAG.p3d";
        modelSpecialIsProxy=1;
    };
    class JCA_30Rnd_556x45_Stanag_M855A1: JCA_30Rnd_556x45_Stanag
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd M855A1 Mag";
        ammo="JCA_B_556x45_Ball_M855A1";
        initSpeed=940; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M855A1";
    };
    class JCA_30Rnd_556x45_Stanag_M193: JCA_30Rnd_556x45_Stanag
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd M193 Mag";
        ammo="JCA_B_556x45_Ball_M193";
        mass=7.8; // 13.2 Steel magazine 30 rounds (empty) 250g + 30x 11.6g (M193 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 8
        initSpeed=990; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M193";
    };
    class JCA_30Rnd_556x45_Stanag_Mk262: JCA_30Rnd_556x45_Stanag
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Mk262 Mag";
        ammo="JCA_B_556x45_Ball_Mk262";
        mass=8.4; // 14.3 Steel magazine 30 rounds (empty) 250g + 30x 13.3g (Mk262 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 8
        initSpeed=838; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk262";
    };
    class JCA_30Rnd_556x45_Stanag_Mk318: JCA_30Rnd_556x45_Stanag
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Mk318 Mag";
        ammo="JCA_B_556x45_Ball_Mk318";
        initSpeed=950; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk318";
    };
    class JCA_30Rnd_556x45_Stanag_M995AP: JCA_30Rnd_556x45_Stanag
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd M995 AP Mag";
        ammo="JCA_B_556x45_Ball_M995AP";
        mass=8.1; // 13.8 Steel magazine 30 rounds (empty) 250g + 30x 12.6g (M995 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 8
        initSpeed=880; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M995 AP";
    };
    class JCA_30Rnd_556x45_Stanag_UW: JCA_30Rnd_556x45_Stanag // default Arma3 20Rnd_556x45_UW_mag
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Dual Purpose Mag";
        ammo="JCA_B_556x45_Ball_Dual";
        initSpeed=283; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="UW";
    };
    class JCA_30Rnd_556x45_Stanag_Red: JCA_30Rnd_556x45_Stanag
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Reload Tracer (Red) Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Red";
        lastRoundsTracer=4;
    };
    class JCA_30Rnd_556x45_Stanag_Green: JCA_30Rnd_556x45_Stanag_Red
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Reload Tracer (Green) Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Stanag_Yellow: JCA_30Rnd_556x45_Stanag_Red
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Reload Tracer (Yellow) Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Stanag_IR: JCA_30Rnd_556x45_Stanag_Red
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Reload Tracer (IR) Mag";
        ammo="JCA_B_556x45_Ball_IR_Dim_Tracer";
    };
    class JCA_30Rnd_556x45_Stanag_Tracer_Red: JCA_30Rnd_556x45_Stanag_Red
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Tracer (Red) Mag";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_556x45_Stanag_Tracer_Green: JCA_30Rnd_556x45_Stanag_Tracer_Red
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Tracer (Green) Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Stanag_Tracer_Yellow: JCA_30Rnd_556x45_Stanag_Tracer_Red
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Tracer (Yellow) Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Stanag_Tracer_IR: JCA_30Rnd_556x45_Stanag_Tracer_Red
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Tracer (IR) Mag";
        ammo="JCA_B_556x45_Ball_IR_Dim_Tracer";
        displaynameshort="Tracer IR";
    };
    class JCA_30Rnd_556x45_Stanag_Sand: JCA_30Rnd_556x45_Stanag
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Sand Mag";
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_30Rnd_556x45_SMAG_sand_CA.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "weapons_f_JCA_IA\MagazineProxies\data\mag_30Rnd_556_SMAG_sand_CO.paa"
        };
    };
    class JCA_30Rnd_556x45_Stanag_Sand_M855A1: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd M855A1 Sand Mag";
        ammo="JCA_B_556x45_Ball_M855A1";
        initSpeed=940; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M855A1";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_M193: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd M193 Sand Mag";
        ammo="JCA_B_556x45_Ball_M193";
        mass=7.8; // 13.2 Steel magazine 30 rounds (empty) 250g + 30x 11.6g (M193 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 8
        initSpeed=990; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M193";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Mk262: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Mk262 Sand Mag";
        ammo="JCA_B_556x45_Ball_Mk262";
        mass=8.4; // 14.3 Steel magazine 30 rounds (empty) 250g + 30x 13.3g (Mk262 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 8
        initSpeed=838; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk262";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Mk318: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Mk318 Sand Mag";
        ammo="JCA_B_556x45_Ball_Mk318";
        initSpeed=950; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk318";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_M995AP: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd M995 AP Sand Mag";
        ammo="JCA_B_556x45_Ball_M995AP";
        mass=8.1; // 13.8 Steel magazine 30 rounds (empty) 250g + 30x 12.6g (M995 cartridge weight), 30Rnd_556x45_Stanag 8, JCA 8
        initSpeed=880; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M995 AP";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_UW: JCA_30Rnd_556x45_Stanag_Sand // default Arma3 20Rnd_556x45_UW_mag
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Dual Purpose Sand Mag";
        ammo="JCA_B_556x45_Ball_Dual";
        initSpeed=283; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="UW";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Red: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Reload Tracer (Red) Sand Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Red";
        lastRoundsTracer=4;
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Green: JCA_30Rnd_556x45_Stanag_Sand_Red
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Reload Tracer (Green) Sand Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Yellow: JCA_30Rnd_556x45_Stanag_Sand_Red
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Reload Tracer (Yellow) Sand Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_IR: JCA_30Rnd_556x45_Stanag_Sand_Red
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Reload Tracer (IR) Sand Mag";
        ammo="JCA_B_556x45_Ball_IR_Dim_Tracer";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red: JCA_30Rnd_556x45_Stanag_Sand_Red
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Tracer (Red) Sand Mag";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green: JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Tracer (Green) Sand Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow: JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Tracer (Yellow) Sand Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR: JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red
    {
        author="Laid3acK";
        displayName="5.56 mm 30Rnd Tracer (IR) Sand Mag";
        ammo="JCA_B_556x45_Ball_IR_Dim_Tracer";
        displaynameshort="Tracer IR";
    };
    class JCA_30Rnd_300BLK_EMAG: CA_Magazine // JCA default config
    {
        mass=9.9; // 16.9, HK Gen3 magazine 30 rounds (empty) 158g + 30x 20.3g (190gr cartridge weight), 30Rnd_556x45_Stanag 8 (13.6)
        initSpeed=290; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%) and HK437 Handbook https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
        displaynameshort="Subsonic";
    };
    class JCA_30Rnd_300BLK_Red_EMAG: JCA_30Rnd_300BLK_EMAG
    {
    };
    class JCA_30Rnd_300BLK_Tracer_Red_EMAG: JCA_30Rnd_300BLK_Red_EMAG
    {
        displaynameshort="Subsonic-T";
    };
    class JCA_30Rnd_300BLK_Tracer_IR_EMAG: JCA_30Rnd_300BLK_Tracer_Red_EMAG
    {
        displaynameshort="Subsonic-T IR";
    };
    class JCA_30Rnd_300BLK_sand_EMAG: JCA_30Rnd_300BLK_EMAG
    {
    };
    class JCA_30Rnd_300BLK_Red_sand_EMAG: JCA_30Rnd_300BLK_sand_EMAG
    {
    };
    class JCA_30Rnd_300BLK_Tracer_Red_sand_EMAG: JCA_30Rnd_300BLK_Red_sand_EMAG
    {
        displaynameshort="Subsonic-T";
    };
    class JCA_30Rnd_300BLK_Tracer_IR_sand_EMAG: JCA_30Rnd_300BLK_Tracer_Red_sand_EMAG
    {
        displaynameshort="Subsonic-T IR";
    };
    class JCA_30Rnd_300BLK_110gr_EMAG: JCA_30Rnd_300BLK_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr EMAG";
        ammo="JCA_B_300BLK_Ball_110gr";
        mass=7.4; // 12.6, HK Gen3 magazine 30 rounds (empty) 158g + 30x 13.8g (110gr cartridge weight), 30Rnd_556x45_Stanag 8 (13.6)
        initSpeed=630; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%) and HK437 Handbook https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
        displaynameshort="Frangible";
    };
    class JCA_30Rnd_300BLK_110gr_Red_EMAG: JCA_30Rnd_300BLK_110gr_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Reload Tracer (Red) EMAG";
        ammo="JCA_B_300BLK_Ball_110gr_Tracer_Red";
        lastRoundsTracer=4;
    };
    class JCA_30Rnd_300BLK_110gr_Green_EMAG: JCA_30Rnd_300BLK_110gr_Red_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Reload Tracer (Green) EMAG";
        ammo="JCA_B_300BLK_Ball_110gr_Tracer_Green";
    };
    class JCA_30Rnd_300BLK_110gr_Yellow_EMAG: JCA_30Rnd_300BLK_110gr_Red_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Reload Tracer (Yellow) EMAG";
        ammo="JCA_B_300BLK_Ball_110gr_Tracer_Yellow";
    };
    class JCA_30Rnd_300BLK_110gr_IR_EMAG: JCA_30Rnd_300BLK_110gr_Red_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Reload Tracer (IR) EMAG";
        ammo="JCA_B_300BLK_Ball_110gr_Tracer_IR";
    };
    class JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG: JCA_30Rnd_300BLK_110gr_Red_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Tracer (Red) EMAG";
        tracersEvery=1;
        displaynameshort="Frangible-T";
    };
    class JCA_30Rnd_300BLK_110gr_Tracer_Green_EMAG: JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Tracer (Green) EMAG";
        ammo="JCA_B_300BLK_Ball_110gr_Tracer_Green";
    };
    class JCA_30Rnd_300BLK_110gr_Tracer_Yellow_EMAG: JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Tracer (Yellow) EMAG";
        ammo="JCA_B_300BLK_Ball_110gr_Tracer_Yellow";
    };
    class JCA_30Rnd_300BLK_110gr_Tracer_IR_EMAG: JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Tracer (IR) EMAG";
        ammo="JCA_B_300BLK_Ball_110gr_Tracer_IR";
        displaynameshort="Frangible-T IR";
    };
    class JCA_30Rnd_300BLK_110gr_sand_EMAG: JCA_30Rnd_300BLK_sand_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Sand EMAG";
        ammo="JCA_B_300BLK_Ball_110gr";
        mass=7.4; // 12.6, HK Gen3 magazine 30 rounds (empty) 158g + 30x 13.8g (110gr cartridge weight), 30Rnd_556x45_Stanag 8 (13.6)
        initSpeed=630; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%) and HK437 Handbook https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
        displaynameshort="Frangible";
    };
    class JCA_30Rnd_300BLK_110gr_Red_sand_EMAG: JCA_30Rnd_300BLK_110gr_sand_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Reload Tracer (Red) Sand EMAG";
        ammo="JCA_B_300BLK_Ball_110gr_Tracer_Red";
        lastRoundsTracer=4;
    };
    class JCA_30Rnd_300BLK_110gr_Green_sand_EMAG: JCA_30Rnd_300BLK_110gr_Red_sand_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Reload Tracer (Green) Sand EMAG";
        ammo="JCA_B_300BLK_Ball_110gr_Tracer_Green";
    };
    class JCA_30Rnd_300BLK_110gr_Yellow_sand_EMAG: JCA_30Rnd_300BLK_110gr_Red_sand_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Reload Tracer (Yellow) Sand EMAG";
        ammo="JCA_B_300BLK_Ball_110gr_Tracer_Yellow";
    };
    class JCA_30Rnd_300BLK_110gr_IR_sand_EMAG: JCA_30Rnd_300BLK_110gr_Red_sand_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Reload Tracer (IR) Sand EMAG";
        ammo="JCA_B_300BLK_Ball_110gr_Tracer_IR";
    };
    class JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG: JCA_30Rnd_300BLK_110gr_Red_sand_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Tracer (Red) Sand EMAG";
        tracersEvery=1;
        displaynameshort="Frangible-T";
    };
    class JCA_30Rnd_300BLK_110gr_Tracer_Green_sand_EMAG: JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Tracer (Green) Sand EMAG";
        ammo="JCA_B_300BLK_Ball_110gr_Tracer_Green";
    };
    class JCA_30Rnd_300BLK_110gr_Tracer_Yellow_sand_EMAG: JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Tracer (Yellow) Sand EMAG";
        ammo="JCA_B_300BLK_Ball_110gr_Tracer_Yellow";
    };
    class JCA_30Rnd_300BLK_110gr_Tracer_IR_sand_EMAG: JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG
    {
        author="Laid3acK";
        displayName=".300 BLK 30Rnd 110gr Tracer (IR) Sand EMAG";
        ammo="JCA_B_300BLK_Ball_110gr_Tracer_IR";
        displaynameshort="Frangible-T IR";
    };
    class JCA_20Rnd_762x51_PMAG: CA_Magazine // JCA default config
    {
        ammo="JCA_B_762x51_Ball";
        mass=11.2; // 14.7 PMAGs SR25 20 rnds 5.7oz (162g) + 20x 25.3g https://magpul.com/pmag20lr-srgenm3-7-62x51.html?mp_global_color=118, 20Rnd_762x51_Mag 12, JCA 9
        initSpeed=790; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
    };
    class JCA_20Rnd_762x51_M993AP_PMAG: JCA_20Rnd_762x51_PMAG
    {
        author="Laid3acK";
        displayName="7.62 mm 20Rnd M993 AP PMAG";
        ammo="JCA_B_762x51_Ball_M993AP";
        mass=10.6; // 13.9 PMAGs SR25 20 rnds 5.7oz (162g) + 20x 23.5g https://magpul.com/pmag20lr-srgenm3-7-62x51.html?mp_global_color=118, 20Rnd_762x51_Mag 12, JCA 9
        initSpeed=930; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="AP";
    };
    class JCA_20Rnd_762x51_Subsonic_PMAG: JCA_20Rnd_762x51_PMAG
    {
        author="Laid3acK";
        displayName="7.62 mm 20Rnd Subsonic PMAG";
        ammo="JCA_B_762x51_Ball_Subsonic";
        mass=12.2; // 16 PMAGs SR25 20 rnds 5.7oz (162g) + 20x 28.2g https://magpul.com/pmag20lr-srgenm3-7-62x51.html?mp_global_color=118, 20Rnd_762x51_Mag 12, JCA 9
        initSpeed=331; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Subsonic";
    };
    class JCA_20Rnd_762x51_Red_PMAG: JCA_20Rnd_762x51_PMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Red";
    };
    class JCA_20Rnd_762x51_Green_PMAG: JCA_20Rnd_762x51_Red_PMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Yellow_PMAG: JCA_20Rnd_762x51_Red_PMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_IR_PMAG: JCA_20Rnd_762x51_Red_PMAG
    {
        ammo="JCA_B_762x51_Ball_IR_Dim_Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Red_PMAG: JCA_20Rnd_762x51_Red_PMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Green_PMAG: JCA_20Rnd_762x51_Tracer_Red_PMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_PMAG: JCA_20Rnd_762x51_Tracer_Red_PMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_Tracer_IR_PMAG: JCA_20Rnd_762x51_Tracer_Red_PMAG
    {
        ammo="JCA_B_762x51_Ball_IR_Dim_Tracer";
        displaynameshort="Tracer IR";
    };
    class JCA_20Rnd_762x51_Sand_PMAG: JCA_20Rnd_762x51_PMAG
    {
    };
    class JCA_20Rnd_762x51_M993AP_Sand_PMAG: JCA_20Rnd_762x51_Sand_PMAG
    {
        author="Laid3acK";
        displayName="7.62 mm 20Rnd M993 AP Sand PMAG";
        ammo="JCA_B_762x51_Ball_M993AP";
        mass=10.6; // 13.9 PMAGs SR25 20 rnds 5.7oz (162g) + 20x 23.5g https://magpul.com/pmag20lr-srgenm3-7-62x51.html?mp_global_color=118, 20Rnd_762x51_Mag 12, JCA 9
        initSpeed=930; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="AP";
    };
    class JCA_20Rnd_762x51_Subsonic_Sand_PMAG: JCA_20Rnd_762x51_Sand_PMAG
    {
        author="Laid3acK";
        displayName="7.62 mm 20Rnd Subsonic Sand PMAG";
        ammo="JCA_B_762x51_Ball_Subsonic";
        mass=12.2; // 16 PMAGs SR25 20 rnds 5.7oz (162g) + 20x 28.2g https://magpul.com/pmag20lr-srgenm3-7-62x51.html?mp_global_color=118, 20Rnd_762x51_Mag 12, JCA 9
        initSpeed=331; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Subsonic";
    };
    class JCA_20Rnd_762x51_Red_Sand_PMAG: JCA_20Rnd_762x51_Sand_PMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Red";
    };
    class JCA_20Rnd_762x51_Green_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Yellow_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_IR_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG
    {
        ammo="JCA_B_762x51_Ball_IR_Dim_Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Green_Sand_PMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_Sand_PMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_Tracer_IR_Sand_PMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG
    {
        ammo="JCA_B_762x51_Ball_IR_Dim_Tracer";
        displaynameshort="Tracer IR";
    };
    class JCA_20Rnd_762x51_SMAG: CA_Magazine // JCA default config
    {
        ammo="JCA_B_762x51_Ball";
        mass=12; // 15.7 SMAGs SR25 20 rnds 206g + 20x 25.3g, 20Rnd_762x51_Mag 12, JCA 9
        initSpeed=790; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
    };
    class JCA_20Rnd_762x51_M993AP_SMAG: JCA_20Rnd_762x51_SMAG
    {
        author="Laid3acK";
        displayName="7.62 mm 20Rnd M993 AP Mag";
        ammo="JCA_B_762x51_Ball_M993AP";
        mass=11.4; // 14.9 SMAGs SR25 20 rnds 206g + 20x 23.5g, 20Rnd_762x51_Mag 12, JCA 9
        initSpeed=930; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="AP";
    };
    class JCA_20Rnd_762x51_Subsonic_SMAG: JCA_20Rnd_762x51_SMAG
    {
        author="Laid3acK";
        displayName="7.62 mm 20Rnd Subsonic Mag";
        ammo="JCA_B_762x51_Ball_Subsonic";
        mass=13; // 17 SMAGs SR25 20 rnds 206g + 20x 28.2g, 20Rnd_762x51_Mag 12, JCA 9
        initSpeed=331; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Subsonic";
    };
    class JCA_20Rnd_762x51_Red_SMAG: JCA_20Rnd_762x51_SMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Red";
    };
    class JCA_20Rnd_762x51_Green_SMAG: JCA_20Rnd_762x51_Red_SMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Yellow_SMAG: JCA_20Rnd_762x51_Red_SMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_IR_SMAG: JCA_20Rnd_762x51_Red_SMAG
    {
        ammo="JCA_B_762x51_Ball_IR_Dim_Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Red_SMAG: JCA_20Rnd_762x51_Red_SMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Green_SMAG: JCA_20Rnd_762x51_Tracer_Red_SMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_SMAG: JCA_20Rnd_762x51_Tracer_Red_SMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_Tracer_IR_SMAG: JCA_20Rnd_762x51_Tracer_Red_SMAG
    {
        ammo="JCA_B_762x51_Ball_IR_Dim_Tracer";
        displaynameshort="Tracer IR";
    };
    class JCA_20Rnd_762x51_Sand_SMAG: JCA_20Rnd_762x51_SMAG
    {
    };
    class JCA_20Rnd_762x51_M993AP_Sand_SMAG: JCA_20Rnd_762x51_Sand_SMAG
    {
        author="Laid3acK";
        displayName="7.62 mm 20Rnd M993 AP Sand Mag";
        ammo="JCA_B_762x51_Ball_M993AP";
        mass=11.4; // 14.9 SMAGs SR25 20 rnds 206g + 20x 23.5g, 20Rnd_762x51_Mag 12, JCA 9
        initSpeed=930; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="AP";
    };
    class JCA_20Rnd_762x51_Subsonic_Sand_SMAG: JCA_20Rnd_762x51_Sand_SMAG
    {
        author="Laid3acK";
        displayName="7.62 mm 20Rnd Subsonic Sand Mag";
        ammo="JCA_B_762x51_Ball_Subsonic";
        mass=13; // 17 SMAGs SR25 20 rnds 206g + 20x 28.2g, 20Rnd_762x51_Mag 12, JCA 9
        initSpeed=331; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Subsonic";
    };
    class JCA_20Rnd_762x51_Red_Sand_SMAG: JCA_20Rnd_762x51_Sand_SMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Red";
    };
    class JCA_20Rnd_762x51_Green_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Yellow_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_IR_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG
    {
        ammo="JCA_B_762x51_Ball_IR_Dim_Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Green_Sand_SMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_Sand_SMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG
    {
        ammo="JCA_B_762x51_Ball_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_Tracer_IR_Sand_SMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG
    {
        ammo="JCA_B_762x51_Ball_IR_Dim_Tracer";
        displaynameshort="Tracer IR";
    };
    class JCA_5Rnd_338LM_AWM_Mag: CA_Magazine // JCA default config
    {
        mass=9.7; // magazine 219g + 5x 44.5g, JCA 8
        initSpeed=906; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
    };
    class JCA_5Rnd_338LM_AWM_AP_Mag: JCA_5Rnd_338LM_AWM_Mag
    {
        author="Laid3acK";
        displayName=".338 LM 5Rnd M115A3 AP Mag";
        ammo="JCA_B_338LM_AP_Ball";
        // mass=9.7; // magazine 219g + 5x 44.3g
        // initSpeed=906; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        displaynameshort="AP";
    };
    class JCA_5Rnd_338LM_AWM_API_Mag: JCA_5Rnd_338LM_AWM_Mag
    {
        author="Laid3acK";
        displayName=".338 LM 5Rnd M115A3 API Mag";
        ammo="JCA_B_338LM_API_Ball";
        // mass=9.7; // magazine 219g + 5x 44.4g
        initSpeed=896; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        displaynameshort="API";
    };
    class JCA_5Rnd_338LM_AWM_Tracer_Red_Mag: JCA_5Rnd_338LM_AWM_Mag
    {
        displaynameshort="Tracer";
    };
    class JCA_5Rnd_338LM_AWM_Tracer_Green_Mag: JCA_5Rnd_338LM_AWM_Tracer_Red_Mag
    {
    };
    class JCA_5Rnd_338LM_AWM_Tracer_Yellow_Mag: JCA_5Rnd_338LM_AWM_Tracer_Red_Mag
    {
    };
    class JCA_5Rnd_338LM_AWM_Tracer_IR_Mag: JCA_5Rnd_338LM_AWM_Tracer_Red_Mag
    {
        displaynameshort="Tracer IR";
    };
    class JCA_10Rnd_127x99_M107_M33_Mag: JCA_10Rnd_127x99_M107_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 M33 Mag";
        ammo="JCA_B_127x99_Ball_M33";
        initSpeed=838; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        mass=25.2; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1762gr x10: 17620gr (1142g)
    };
    class JCA_10Rnd_127x99_M107_M33_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_M33_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 M33 Tracer (Red) Mag";
        ammo="JCA_B_127x99_Ball_M33_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_10Rnd_127x99_M107_M33_Mag_Tracer_IR: JCA_10Rnd_127x99_M107_M33_Mag_Tracer_Red
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 M33 Tracer (IR) Mag";
        ammo="JCA_B_127x99_Ball_M33_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_10Rnd_127x99_M107_AMAX_Mag: JCA_10Rnd_127x99_M107_M33_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 AMAX Mag";
        ammo="JCA_B_127x99_Ball_AMAX";
        initSpeed=826; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        mass=25.8; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1805.3gr x10: 18053gr (1170g)
        displaynameshort="AMAX";
    };
    class JCA_10Rnd_127x99_M107_M903_SLAP_Mag: JCA_10Rnd_127x99_M107_M33_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 M903 SLAP Mag";
        ammo="JCA_B_127x99_Ball_M903_SLAP";
        initSpeed=1132; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        descriptionShort="Caliber: .50 SLAP<br />Rounds: 10<br />Used in: M107A1";
        mass=20.9; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1466gr x10: 14660gr (950g)
        displaynameshort="SLAP";
    };
    class JCA_10Rnd_127x99_M107_M962_SLAP_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_M903_SLAP_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 M962 SLAP Tracer (Red) Mag";
        ammo="JCA_B_127x99_Ball_M962_SLAP_Tracer_Red";
        tracersEvery=1;
        descriptionShort="Caliber: .50 SLAP-T<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort="SLAP-T";
    };
    class JCA_10Rnd_127x99_M107_Mk211_HEIAP_Mag: JCA_10Rnd_127x99_M107_M33_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 Mk211 HEIAP Mag";
        ammo="JCA_B_127x99_Ball_Mk211_HEIAP";
        initSpeed=828; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        descriptionShort="Caliber: .50 HEIAP<br />Rounds: 10<br />Used in: M107A1";
        mass=25.2; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1765gr x10: 17650gr (1144g)
        displaynameshort="HEIAP";
    };
    class JCA_10Rnd_127x99_M107_Mk300_HEIAP_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_Mk211_HEIAP_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 Mk300 HEIAP Tracer (Red) Mag";
        ammo="JCA_B_127x99_Ball_Mk300_HEIAP_Tracer_Red";
        tracersEvery=1;
        descriptionShort="Caliber: .50 HEIAP-T<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort="HEIAP-T";
    };
    class JCA_10Rnd_127x99_M107_MPDT_HEIAP_Mag_Tracer_IR: JCA_10Rnd_127x99_M107_Mk300_HEIAP_Mag_Tracer_Red
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 MP-DT HEIAP Tracer (IR) Mag";
        ammo="JCA_B_127x99_Ball_MPDT_HEIAP_Tracer_IR";
        descriptionShort="Caliber: .50 HEIAP-T IR<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort="HEIAP-T IR";
    };
    class JCA_10Rnd_127x99_M107_M8_API_Mag: JCA_10Rnd_127x99_M107_M33_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 M8 API Mag";
        ammo="JCA_B_127x99_Ball_M8_API";
        initSpeed=841; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        descriptionShort="Caliber: .50 API<br />Rounds: 10<br />Used in: M107A1";
        mass=25.2; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1764gr x10: 17640gr (1143g)
        displaynameshort="API";
    };
    class JCA_10Rnd_127x99_M107_M20_API_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_M8_API_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 M20 API Tracer (Red) Mag";
        ammo="JCA_B_127x99_Ball_M20_API_Tracer_Red";
        tracersEvery=1;
        descriptionShort="Caliber: .50 API-T<br />Rounds: 10<br />Used in: M107A1";
        mass=24.7; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1718gr x10: 17180gr (1113g)
        displaynameshort="API-T";
    };
    class JCA_10Rnd_127x99_M107_Mk257_API_Mag_Tracer_IR: JCA_10Rnd_127x99_M107_M20_API_Mag_Tracer_Red
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 Mk257 API Tracer (IR) Mag";
        ammo="JCA_B_127x99_Ball_Mk257_API_Tracer_IR";
        descriptionShort="Caliber: .50 API-T IR<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort="API-T IR";
    };
    class JCA_10Rnd_127x99_M107_M33_Sand_Mag: JCA_10Rnd_127x99_M107_Sand_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 M33 Sand Mag";
        ammo="JCA_B_127x99_Ball_M33";
        initSpeed=838; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        mass=25.2; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1762gr x10: 17620gr (1142g)
    };
    class JCA_10Rnd_127x99_M107_M33_Sand_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_M33_Sand_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 M33 Tracer (Red) Sand Mag";
        ammo="JCA_B_127x99_Ball_M33_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_10Rnd_127x99_M107_M33_Sand_Mag_Tracer_IR: JCA_10Rnd_127x99_M107_M33_Sand_Mag_Tracer_Red
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 M33 Tracer (IR) Sand Mag";
        ammo="JCA_B_127x99_Ball_M33_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_10Rnd_127x99_M107_AMAX_Sand_Mag: JCA_10Rnd_127x99_M107_M33_Sand_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 AMAX Sand Mag";
        ammo="JCA_B_127x99_Ball_AMAX";
        initSpeed=826; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        mass=25.8; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1805.3gr x10: 18053gr (1170g)
        displaynameshort="AMAX";
    };
    class JCA_10Rnd_127x99_M107_M903_SLAP_Sand_Mag: JCA_10Rnd_127x99_M107_M33_Sand_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 M903 SLAP Sand Mag";
        ammo="JCA_B_127x99_Ball_M903_SLAP";
        initSpeed=1132;
        descriptionShort="Caliber: .50 SLAP<br />Rounds: 10<br />Used in: M107A1";
        mass=20.9; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1466gr x10: 14660gr (950g)
        displaynameshort="SLAP";
    };
    class JCA_10Rnd_127x99_M107_M962_SLAP_Sand_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_M903_SLAP_Sand_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 M962 SLAP Tracer (Red) Sand Mag";
        ammo="JCA_B_127x99_Ball_M962_SLAP_Tracer_Red";
        tracersEvery=1;
        descriptionShort="Caliber: .50 SLAP-T<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort="SLAP-T";
    };
    class JCA_10Rnd_127x99_M107_Mk211_HEIAP_Sand_Mag: JCA_10Rnd_127x99_M107_M33_Sand_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 Mk211 HEIAP Sand Mag";
        ammo="JCA_B_127x99_Ball_Mk211_HEIAP";
        initSpeed=828; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        descriptionShort="Caliber: .50 HEIAP<br />Rounds: 10<br />Used in: M107A1";
        mass=25.2; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1765gr x10: 17650gr (1144g)
        displaynameshort="HEIAP";
    };
    class JCA_10Rnd_127x99_M107_Mk300_HEIAP_Sand_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_Mk211_HEIAP_Sand_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 Mk300 HEIAP Tracer (Red) Sand Mag";
        ammo="JCA_B_127x99_Ball_Mk300_HEIAP_Tracer_Red";
        tracersEvery=1;
        descriptionShort="Caliber: .50 HEIAP-T<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort="HEIAP-T";
    };
    class JCA_10Rnd_127x99_M107_MPDT_HEIAP_Sand_Mag_Tracer_IR: JCA_10Rnd_127x99_M107_Mk300_HEIAP_Sand_Mag_Tracer_Red
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 MP-DT HEIAP Tracer (IR) Sand Mag";
        ammo="JCA_B_127x99_Ball_MPDT_HEIAP_Tracer_IR";
        descriptionShort="Caliber: .50 HEIAP-T IR<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort="HEIAP-T IR";
    };
    class JCA_10Rnd_127x99_M107_M8_API_Sand_Mag: JCA_10Rnd_127x99_M107_M33_Sand_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 M8 API Sand Mag";
        ammo="JCA_B_127x99_Ball_M8_API";
        initSpeed=841; // according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        descriptionShort="Caliber: .50 API<br />Rounds: 10<br />Used in: M107A1";
        mass=25.2; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1764gr x10: 17640gr (1143g)
        displaynameshort="API";
    };
    class JCA_10Rnd_127x99_M107_M20_API_Sand_Mag_Tracer_Red: JCA_10Rnd_127x99_M107_M8_API_Sand_Mag
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 M20 API Tracer (Red) Sand Mag";
        ammo="JCA_B_127x99_Ball_M20_API_Tracer_Red";
        tracersEvery=1;
        descriptionShort="Caliber: .50 API-T<br />Rounds: 10<br />Used in: M107A1";
        mass=24.7; // should be 32: 5Rnd_127x108_Mag mass=16 x2, JCA 22, cartridge weight 1718gr x10: 17180gr (1113g)
        displaynameshort="API-T";
    };
    class JCA_10Rnd_127x99_M107_Mk257_API_Sand_Mag_Tracer_IR: JCA_10Rnd_127x99_M107_M20_API_Sand_Mag_Tracer_Red
    {
        author="Laid3acK";
        displayName="12.7 mm 10Rnd M107A1 Mk257 API Tracer (IR) Sand Mag";
        ammo="JCA_B_127x99_Ball_Mk257_API_Tracer_IR";
        descriptionShort="Caliber: .50 API-T IR<br />Rounds: 10<br />Used in: M107A1";
        displaynameshort="API-T IR";
    };
};
class CfgMagazineWells
{
    class JCA_P320_Compact_9x19 // Weapon initSpeed -1 ACE_barrelLength 99mm (3.9"): 361, 300m/s ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_15Rnd_9x19_P320C magazines initSpeed
    {
        JCA_Magazines[]=
        {
            "JCA_15Rnd_9x19_P320C_FMJ_Mag",
            "JCA_15Rnd_9x19_P320C_JHP_Mag",
            "JCA_15Rnd_9x19_P320C_Red_Mag",
            "JCA_15Rnd_9x19_P320C_Green_Mag",
            "JCA_15Rnd_9x19_P320C_Yellow_Mag",
            "JCA_15Rnd_9x19_P320C_IR_Mag"
        };
    };
    class JCA_P226_9x19 // Weapon initSpeed -1 ACE_barrelLength 112mm (4.4"): 378, 311m/s ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_15Rnd_9x19_P226 magazines initSpeed
    {
        JCA_Magazines[]=
        {
            "JCA_15Rnd_9x19_P226_FMJ_Mag",
            "JCA_15Rnd_9x19_P226_JHP_Mag",
            "JCA_15Rnd_9x19_P226_SUB_Mag",
            "JCA_15Rnd_9x19_P226_Red_Mag",
            "JCA_15Rnd_9x19_P226_Green_Mag",
            "JCA_15Rnd_9x19_P226_Yellow_Mag",
            "JCA_15Rnd_9x19_P226_IR_Mag"
        };
    };
    class JCA_M9A1_9x19 // Weapon initSpeed -1 ACE_barrelLength 125mm (4.9"): 394, 324m/s ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_15Rnd_9x19_M9A1 magazines initSpeed
    {
        JCA_Magazines[]=
        {
            "JCA_15Rnd_9x19_M9A1_FMJ_Mag",
            "JCA_15Rnd_9x19_M9A1_JHP_Mag",
            "JCA_15Rnd_9x19_M9A1_SUB_Mag",
            "JCA_15Rnd_9x19_M9A1_Red_Mag",
            "JCA_15Rnd_9x19_M9A1_Green_Mag",
            "JCA_15Rnd_9x19_M9A1_Yellow_Mag",
            "JCA_15Rnd_9x19_M9A1_IR_Mag"
        };
    };
    class JCA_MP5_9x19 // Weapon initSpeed -1 ACE_barrelLength 225mm: 428m/s ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_30Rnd_9x19_MP5 magazines initSpeed
    {
        JCA_Magazines[]=
        {
            "JCA_30Rnd_9x19_MP5_FMJ_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Mag",
            "JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag"
        };
    };
    class JCA_Mk23_45ACP // Weapon initSpeed -1 ACE_barrelLength 149mm: 311m/s ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_12Rnd_45ACP_Mk23 magazines initSpeed
    {
        JCA_Magazines[]=
        {
            "JCA_12Rnd_45ACP_Mk23_Mag",
            "JCA_12Rnd_45ACP_Mk23_Tracer_Red_Mag",
            "JCA_12Rnd_45ACP_Mk23_Tracer_Green_Mag",
            "JCA_12Rnd_45ACP_Mk23_Tracer_Yellow_Mag",
            "JCA_12Rnd_45ACP_Mk23_Tracer_IR_Mag"
        };
    };
    class JCA_UMP_45ACP // Weapon initSpeed -1 ACE_barrelLength 200mm: 332m/s ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_25Rnd_45ACP_UMP magazines initSpeed
    {
        JCA_Magazines[]=
        {
            "JCA_25Rnd_45ACP_UMP_Mag",
            "JCA_25Rnd_45ACP_UMP_Red_Mag",
            "JCA_25Rnd_45ACP_UMP_Green_Mag",
            "JCA_25Rnd_45ACP_UMP_Yellow_Mag",
            "JCA_25Rnd_45ACP_UMP_IR_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Green_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_IR_Mag",
            "JCA_25Rnd_45ACP_UMP_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Red_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Green_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Yellow_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_IR_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Green_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_IR_Sand_Mag"
        };
    };
    class STANAG_556x45
    {
        BI_Magazines[]= // JCA default config with 5.56x45mm JCA Mags
        /*{
            "30Rnd_556x45_Stanag",
            "30Rnd_556x45_Stanag_Red",
            "30Rnd_556x45_Stanag_Green",
            "30Rnd_556x45_Stanag_Yellow",
            "30Rnd_556x45_Stanag_IR",
            "30Rnd_556x45_Stanag_Tracer_Red",
            "30Rnd_556x45_Stanag_Tracer_Green",
            "30Rnd_556x45_Stanag_Tracer_Yellow",
            "30Rnd_556x45_Stanag_Tracer_IR",
            "30Rnd_556x45_Stanag_Sand",
            "30Rnd_556x45_Stanag_Sand_Red",
            "30Rnd_556x45_Stanag_Sand_Green",
            "30Rnd_556x45_Stanag_Sand_Yellow",
            "30Rnd_556x45_Stanag_Sand_IR",
            "30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "30Rnd_556x45_Stanag_Sand_Tracer_IR"
        };*/
        { // 5.56x45mm default Arma3 Mags official BI tool All-in-one Config Arma3 2.17.151913 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
            "30Rnd_556x45_Stanag",
            "30Rnd_556x45_Stanag_green",
            "30Rnd_556x45_Stanag_red",
            "30Rnd_556x45_Stanag_Tracer_Red",
            "30Rnd_556x45_Stanag_Tracer_Green",
            "30Rnd_556x45_Stanag_Tracer_Yellow",
            "30Rnd_556x45_Stanag_Sand",
            "30Rnd_556x45_Stanag_Sand_green",
            "30Rnd_556x45_Stanag_Sand_red",
            "30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "30Rnd_556x45_Stanag_Sand_Tracer_Yellow"
        };
        JCA_Magazines[]= // Weapon initSpeed -1 ACE_barrelLength 508mm (20"): 926, 940, 990, 838, 950, 880, 283m/s ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_30Rnd_556x45 magazines initSpeed
        { // All 5.56x45mm JCA Mags
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW"
        };
    };
    class JCA_HK437_300BLK
    {
        JCA_Magazines[]= // Weapon initSpeed -1 ACE_barrelLength 228.6mm (9"): 290, 630m/s ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_30Rnd_300BLK magazines initSpeed
        {
            "JCA_30Rnd_300BLK_EMAG",
            "JCA_30Rnd_300BLK_Red_EMAG",
            "JCA_30Rnd_300BLK_Green_EMAG",
            "JCA_30Rnd_300BLK_Yellow_EMAG",
            "JCA_30Rnd_300BLK_IR_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_sand_EMAG",
            "JCA_30Rnd_300BLK_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_sand_EMAG"
        };
    };
    class JCA_SR_762x51
    {
        JCA_Magazines[]= // Weapon initSpeed -1 ACE_barrelLength 508mm (20"): 790, 930, 331m/s ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_20Rnd_762x51 magazines initSpeed
        {
            "JCA_20Rnd_762x51_PMAG",
            "JCA_20Rnd_762x51_Red_PMAG",
            "JCA_20Rnd_762x51_Green_PMAG",
            "JCA_20Rnd_762x51_Yellow_PMAG",
            "JCA_20Rnd_762x51_IR_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_PMAG",
            "JCA_20Rnd_762x51_M993AP_PMAG",
            "JCA_20Rnd_762x51_Subsonic_PMAG",
            "JCA_20Rnd_762x51_sand_PMAG",
            "JCA_20Rnd_762x51_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_IR_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_PMAG",
            "JCA_20Rnd_762x51_M993AP_sand_PMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_PMAG",
            "JCA_20Rnd_762x51_SMAG",
            "JCA_20Rnd_762x51_Red_SMAG",
            "JCA_20Rnd_762x51_Green_SMAG",
            "JCA_20Rnd_762x51_Yellow_SMAG",
            "JCA_20Rnd_762x51_IR_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_SMAG",
            "JCA_20Rnd_762x51_M993AP_SMAG",
            "JCA_20Rnd_762x51_Subsonic_SMAG",
            "JCA_20Rnd_762x51_sand_SMAG",
            "JCA_20Rnd_762x51_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_IR_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_SMAG",
            "JCA_20Rnd_762x51_M993AP_sand_SMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_SMAG"
        };
    };
    class JCA_AWM_338LM // Weapon initSpeed -1 ACE_barrelLength 685.8mm (27"): 906, 896m/s ICAO conditions (15°C, 1013.25 hPa, 0%) according to JCA_5Rnd_338LM magazines initSpeed
    {
        JCA_Magazines[]=
        {
            "JCA_5Rnd_338LM_AWM_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_Red_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_Green_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_Yellow_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_IR_Mag",
            "JCA_5Rnd_338LM_AWM_AP_Mag",
            "JCA_5Rnd_338LM_AWM_API_Mag"
        };
    };
    class JCA_M107_127x99
    {
        JCA_Magazines[]= // Weapon initSpeed -1 ACE_barrelLength 736.6mm (29"): 838, 826, 1132, 828, 841m/s ICAO conditions (15°C, 1013.25 hPa, 0%) according to M107A1 10Rnd_127x99 magazines initSpeed
        {
            "JCA_10Rnd_127x99_M107_M33_Mag",
            "JCA_10Rnd_127x99_M107_M33_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_M33_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_AMAX_Mag",
            "JCA_10Rnd_127x99_M107_M903_SLAP_Mag",
            "JCA_10Rnd_127x99_M107_M962_SLAP_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk211_HEIAP_Mag",
            "JCA_10Rnd_127x99_M107_Mk300_HEIAP_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_MPDT_HEIAP_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M8_API_Mag",
            "JCA_10Rnd_127x99_M107_M20_API_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk257_API_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M33_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M33_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_M33_Sand_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_AMAX_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M903_SLAP_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M962_SLAP_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk211_HEIAP_Sand_Mag",
            "JCA_10Rnd_127x99_M107_Mk300_HEIAP_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_MPDT_HEIAP_Sand_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M8_API_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M20_API_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk257_API_Sand_Mag_Tracer_IR"
        };
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
    class InventoryOpticsItem_Base_F;
    class InventoryUnderItem_Base_F;
    class ItemCore;
    class Pistol;
    class Rifle;
    class Pistol_Base_F: Pistol
    {
        class WeaponSlotsInfo;
    };
    class Rifle_Base_F: Rifle
    {
        class WeaponSlotsInfo;
    };
    class Rifle_Long_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class Rifle_Short_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class JCA_hgun_P320_base_F: Pistol_Base_F // P320 Compact, United States Army SIG Sauer M18 https://en.wikipedia.org/wiki/SIG_Sauer_M17
    {
        ACE_barrelLength=99; // 3.9" P320 Compact (3D model SIG Sauer P320 RXP Compact by Michael Egorov) https://www.sigsauer.com/p320-compact.html
        ACE_barrelTwist=250; // CIP twist https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        initSpeed=-1; // 361, 300m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 380
        magazines[]=
        {
            "JCA_15Rnd_9x19_P320C_FMJ_Mag",
            "JCA_15Rnd_9x19_P320C_JHP_Mag",
            "JCA_15Rnd_9x19_P320C_Red_Mag",
            "JCA_15Rnd_9x19_P320C_Green_Mag",
            "JCA_15Rnd_9x19_P320C_Yellow_Mag",
            "JCA_15Rnd_9x19_P320C_IR_Mag"
        };
        magazineWell[]=
        {
            "JCA_P320_Compact_9x19"
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.001527; // 9.34 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00435 (14.95 MOA)
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=16.3; // 754g with magazine https://www.sigsauer.com/p320-compact.html, JCA 23
        };
    };
    class JCA_hgun_P226_base_F: Pistol_Base_F // U.S. Navy SEALs P226 MK25 https://www.sigsauer.com/p226-mk25-full-size.html
    {
        ACE_barrelLength=112; // 4.4" P226 https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=15
        ACE_barrelTwist=250; // CIP twist https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        initSpeed=-1; // 378, 311m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 380
        magazines[]=
        {
            "JCA_15Rnd_9x19_P226_FMJ_Mag",
            "JCA_15Rnd_9x19_P226_JHP_Mag",
            "JCA_15Rnd_9x19_P226_SUB_Mag",
            "JCA_15Rnd_9x19_P226_Red_Mag",
            "JCA_15Rnd_9x19_P226_Green_Mag",
            "JCA_15Rnd_9x19_P226_Yellow_Mag",
            "JCA_15Rnd_9x19_P226_IR_Mag"
        };
        magazineWell[]=
        {
            "JCA_P226_9x19"
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.001138; // 6.96 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.0037 (12.72 MOA)
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=21.3; // 964g with magazine https://www.sigsauer.com/p226-mk25-full-size.html, JCA 27
        };
    };
    class JCA_hgun_M9A1_base_F: Pistol_Base_F // US Marine Corps M9A1 https://www.beretta.com/en-us/law-enforcement-and-mil/military-and-le-products/beretta-products
    {
        ACE_barrelLength=125; // 4.9" M9A1 https://www.beretta.com/en-us/law-enforcement-and-mil/military-and-le-products/beretta-products
        ACE_barrelTwist=250; // CIP twist https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        initSpeed=-1; // 394, 324m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 380
        magazines[]=
        {
            "JCA_15Rnd_9x19_M9A1_FMJ_Mag",
            "JCA_15Rnd_9x19_M9A1_JHP_Mag",
            "JCA_15Rnd_9x19_M9A1_SUB_Mag",
            "JCA_15Rnd_9x19_M9A1_Red_Mag",
            "JCA_15Rnd_9x19_M9A1_Green_Mag",
            "JCA_15Rnd_9x19_M9A1_Yellow_Mag",
            "JCA_15Rnd_9x19_M9A1_IR_Mag"
        };
        magazineWell[]=
        {
            "JCA_M9A1_9x19"
        };
        class Single: Mode_SemiAuto // M9/92FS "10-shot group of 3” or less at 50 meters" 5.24 MOA https://www.beretta.com/en-us/law-enforcement-and-mil/military-and-le-products/beretta-products
        {
            dispersion=0.000966; // 5.91 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00435 (14.95 MOA)
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=20.8; // Weight unloaded 33.3 oz, JCA 23
        };
    };
    class JCA_smg_MP5_base_F: Rifle_Short_Base_F // https://www.heckler-koch.com/en/Products/Military%20and%20Law%20Enforcement/Submachine%20guns/MP5?section=variants&s=true
    {
        ACE_barrelLength=225; // 8.858"
        ACE_barrelTwist=250; // CIP twist https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_RailHeightAboveBore=3.74837;  // ACE3 checkScopes.sqf
        maxZeroing=400; // distance 9x19 M17 FMJ 124gr Mach 0.8 (272m/s) ICAO, JCA 400, SMG_05_F (Protector) 200, SMG_02_F (Sting) 600
        initSpeed=-1; // 428m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 375
        descriptionShort="Submachine Gun<br />Caliber: 9x19 mm";
        magazines[]=
        {
            "JCA_30Rnd_9x19_MP5_FMJ_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Mag",
            "JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag"
        };
        magazineWell[]=
        {
            "JCA_MP5_9x19"
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.000765; // 4.68 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00116 (3.99 MOA)
        };
        class FullAuto: Mode_FullAuto
        {
            dispersion=0.000765; // 4.68 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00116 (3.99 MOA)
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=67.9; // 3080g w/o magazine https://de.wikipedia.org/wiki/HK_MP5, JCA 50
        };
    };
    class JCA_smg_MP5_AFG_base_F: JCA_smg_MP5_base_F
    {
    };
    class JCA_smg_MP5_VFG_base_F: JCA_smg_MP5_base_F
    {
    };
    class JCA_smg_MP5_FL_base_F: JCA_smg_MP5_base_F
    {
    };
    class JCA_smg_MP5_AFG_sand_F: JCA_smg_MP5_AFG_base_F
    {
        magazines[]=
        {
            "JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_FMJ_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Mag"
        };
    };
    class JCA_smg_MP5_VFG_sand_F: JCA_smg_MP5_VFG_base_F
    {
        magazines[]=
        {
            "JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_FMJ_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Mag"
        };
    };
    class JCA_smg_MP5_FL_sand_F: JCA_smg_MP5_FL_base_F
    {
        magazines[]=
        {
            "JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_FMJ_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Mag"
        };
    };
    class JCA_hgun_Mk23_base_F: Pistol_Base_F
    {
        ACE_barrelLength=149; // 5.87" Operators Manual Mark 23
        ACE_barrelTwist=378; // Operators Manual Mark 23 (CIP 406mm https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/45-auto-en-1.pdf)
        initSpeed=-1; // 311m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 300
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=26.7; // Operators Manual Mark 23 1.21kg (empty magazine), JCA 35
        };
        class Single: Mode_SemiAuto // "2.5-inch maximum extreme spread in 5-round shot groups at 25 meters with service ammunition" Operators Manual Mark 23
        {
            dispersion=0.001428; // 8.73 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.0037 (12.72 MOA)
        };
    };
    class JCA_smg_UMP_base_F: Rifle_Short_Base_F
    {
        ACE_RailHeightAboveBore=4.84595; // ACE3 checkScopes.sqf
        ACE_barrelLength=200; // Operators Manual UMP45
        ACE_barrelTwist=406; // Operators Manual UMP45 https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/45-auto-en-1.pdf
        maxZeroing=300; // distance .45 ACP 230gr Mach 0.8 (272m/s) ICAO, JCA 400, SMG_01_F (Vermin SMG) 400
        initSpeed=-1; // 332m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 300
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=49.8; // Operators Manual UMP45 2.26kg w/o magazine, JCA 45
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.001186; // 7.25 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.0009 (3.09 MOA)
        };
        class FullAuto: Mode_FullAuto
        {
            dispersion=0.001186; // 7.25 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.0009 (3.09 MOA)
        };
        magazines[]=
        {
            "JCA_25Rnd_45ACP_UMP_Mag",
            "JCA_25Rnd_45ACP_UMP_Red_Mag",
            "JCA_25Rnd_45ACP_UMP_Green_Mag",
            "JCA_25Rnd_45ACP_UMP_Yellow_Mag",
            "JCA_25Rnd_45ACP_UMP_IR_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Green_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_IR_Mag",
            "JCA_25Rnd_45ACP_UMP_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Red_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Green_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Yellow_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_IR_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Green_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_IR_Sand_Mag"
        };
    };
    class JCA_smg_UMP_AFG_base_F: JCA_smg_UMP_base_F
    {
    };
    class JCA_smg_UMP_VFG_base_F: JCA_smg_UMP_base_F
    {
    };
    class JCA_smg_UMP_sand_F: JCA_smg_UMP_base_F
    {
        magazines[]=
        {
            "JCA_25Rnd_45ACP_UMP_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Red_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Green_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Yellow_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_IR_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Green_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_IR_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Mag",
            "JCA_25Rnd_45ACP_UMP_Red_Mag",
            "JCA_25Rnd_45ACP_UMP_Green_Mag",
            "JCA_25Rnd_45ACP_UMP_Yellow_Mag",
            "JCA_25Rnd_45ACP_UMP_IR_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Green_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_IR_Mag"
        };
    };
    class JCA_smg_UMP_AFG_sand_F: JCA_smg_UMP_AFG_base_F
    {
        magazines[]=
        {
            "JCA_25Rnd_45ACP_UMP_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Red_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Green_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Yellow_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_IR_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Green_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_IR_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Mag",
            "JCA_25Rnd_45ACP_UMP_Red_Mag",
            "JCA_25Rnd_45ACP_UMP_Green_Mag",
            "JCA_25Rnd_45ACP_UMP_Yellow_Mag",
            "JCA_25Rnd_45ACP_UMP_IR_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Green_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_IR_Mag"
        };
    };
    class JCA_smg_UMP_VFG_sand_F: JCA_smg_UMP_VFG_base_F
    {
        magazines[]=
        {
            "JCA_25Rnd_45ACP_UMP_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Red_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Green_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Yellow_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_IR_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Red_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Green_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_IR_Sand_Mag",
            "JCA_25Rnd_45ACP_UMP_Mag",
            "JCA_25Rnd_45ACP_UMP_Red_Mag",
            "JCA_25Rnd_45ACP_UMP_Green_Mag",
            "JCA_25Rnd_45ACP_UMP_Yellow_Mag",
            "JCA_25Rnd_45ACP_UMP_IR_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Red_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Green_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_Yellow_Mag",
            "JCA_25Rnd_45ACP_UMP_Tracer_IR_Mag"
        };
    };
    class JCA_arifle_HK433_base_F: Rifle_Base_F
    {
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=368.3; // 14.5"
        ACE_railHeightAboveBore=3.71386; // ACE3 checkScopes.sqf
        maxZeroing=1000; // distance 5.56x45 Mk262 Mach 0.8 (272m/s) ICAO, Assault rifles 5.56x45 800, JCA 800
        initSpeed=-0.942679; // 873, 886, 933, 790, 896, 830, 267m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 880
        canShootInWater=1; // SDAR_base_F
        magazines[]=
        {
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=77.2; // 3.5kg https://www.heckler-koch.com/ JCA 80
        };
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType // SDAR_base_F
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion=0.000540; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.0005 (1.72 MOA)
        };
        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType // SDAR_base_F
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion=0.000540; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.0005 (1.72 MOA)
        };
    };
    class JCA_arifle_HK433_short_base_F: JCA_arifle_HK433_base_F
    {
        ACE_barrelLength=279.4; // 11"
        maxZeroing=900; // distance 5.56x45 Mk262 Mach 0.8 (272m/s) ICAO, Assault rifles 5.56x45 800, JCA 800
        initSpeed=-0.8727; // 808, 821, 864, 731, 829, 768, 247m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 800
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=75; // 3.4kg https://www.heckler-koch.com/ JCA 72
        };
        class Single: Single
        {
            dispersion=0.000612; // 3.74 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00056 (1.93 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000612; // 3.74 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00056 (1.93 MOA)
        };
    };
    class JCA_arifle_HK433_sand_F: JCA_arifle_HK433_base_F
    {
        magazines[]=
        {
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW"
        };
    };
    class JCA_arifle_HK433_short_sand_F: JCA_arifle_HK433_short_base_F
    {
        magazines[]=
        {
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW"
        };
    };
    class JCA_arifle_M4A1_base_F: Rifle_Base_F
    {
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=368.3; // 14.5"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=1000; // distance 5.56x45 Mk262 Mach 0.8 (272m/s) ICAO, Assault rifles 5.56x45 800, JCA 800
        initSpeed=-0.942679; // 873, 886, 933, 790, 896, 830, 267m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 880
        canShootInWater=1; // SDAR_base_F
        magazines[]=
        {
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=63.6; // 2885g https://fnamerica.com/products/rifles/fn-m4a1/, JCA 75
        };
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType // SDAR_base_F
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion=0.000540; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00058 (1.99 MOA)
        };
        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType // SDAR_base_F
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion=0.000540; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00058 (1.99 MOA)
        };
    };
    class JCA_arifle_M4A1_GL_base_F: JCA_arifle_M4A1_base_F
    {
        ACE_barrelLength=368.3; // 14.5"
        initSpeed=-0.942679; // 873, 886, 933, 790, 896, 830, 267m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 800
        descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm<br />Grenade Launcher<br />Caliber: 40 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=93.6; // M203 1.36kg https://en.wikipedia.org/wiki/M203_grenade_launcher, JCA 95
        };
    };
    class JCA_arifle_M4A1_short_base_F: JCA_arifle_M4A1_base_F
    {
        ACE_barrelLength=261.62; // 10.3"
        maxZeroing=900; // distance 5.56x45 Mk262 Mach 0.8 (272m/s) ICAO, Assault rifles 5.56x45 800, JCA 800
        initSpeed=-0.8545; // 791, 803, 846, 716, 812, 752, 242m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 800
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=60; // https://en.wikipedia.org/wiki/Close_Quarters_Battle_Receiver, JCA 60
        };
        class Single: Single
        {
            dispersion=0.000636; // 3.89 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00073 (2.51 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000636; // 3.89 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00073 (2.51 MOA)
        };
    };
    class JCA_arifle_M4A1_sand_F: JCA_arifle_M4A1_base_F
    {
        magazines[]=
        {
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG"
        };
    };
    class JCA_arifle_M4A1_GL_sand_F: JCA_arifle_M4A1_GL_base_F
    {
        magazines[]=
        {
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG"
        };
    };
    class JCA_arifle_M4A1_short_sand_F: JCA_arifle_M4A1_short_base_F
    {
        magazines[]=
        {
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG"
        };
    };
    class JCA_arifle_M4A4_base_F: Rifle_Base_F
    {
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=261.62; // 10.3"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=900; // distance 5.56x45 Mk262 Mach 0.8 (272m/s) ICAO, Assault rifles 5.56x45 800, JCA 800
        initSpeed=-0.8545; // 791, 803, 846, 716, 812, 752, 242m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 880
        canShootInWater=1; // SDAR_base_F
        magazines[]=
        {
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=60; // 2.72kg https://en.wikipedia.org/wiki/Close_Quarters_Battle_Receiver, JCA 60
        };
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType // SDAR_base_F
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion=0.000636; // 3.89 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00058 (1.99 MOA)
        };
        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType // SDAR_base_F
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion=0.000636; // 3.89 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00058 (1.99 MOA)
        };
    };
    class JCA_arifle_M4A4_AFG_base_F: JCA_arifle_M4A4_base_F
    {
    };
    class JCA_arifle_M4A4_VFG_base_F: JCA_arifle_M4A4_base_F
    {
    };
    class JCA_arifle_M4A4_GL_base_F: JCA_arifle_M4A4_base_F
    {
        ACE_barrelLength=261.62; // 10.3"
        initSpeed=-0.8545; // 791, 803, 846, 716, 812, 752, 242m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 800
        descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm<br />Grenade Launcher<br />Caliber: 40 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=90; // M203 1.36kg https://en.wikipedia.org/wiki/M203_grenade_launcher, JCA 80
        };
    };
    class JCA_arifle_M4A4_AFG_sand_F: JCA_arifle_M4A4_AFG_base_F
    {
        magazines[]=
        {
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW"
        };
    };
    class JCA_arifle_M4A4_VFG_sand_F: JCA_arifle_M4A4_VFG_base_F
    {
        magazines[]=
        {
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW"
        };
    };
    class JCA_arifle_M4A4_GL_sand_F: JCA_arifle_M4A4_GL_base_F
    {
        magazines[]=
        {
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW"
        };
    };
    class JCA_arifle_M16A4_base_F: Rifle_Base_F
    {
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=508; // 20"
        ACE_railHeightAboveBore=2.42081; // ACE3 checkScopes.sqf
        maxZeroing=1100; // distance 5.56x45 Mk262 Mach 0.8 (272m/s) ICAO, Assault rifles 5.56x45 800, JCA 800
        initSpeed=-1; // 926, 940, 990, 838, 950, 880, 283m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 880
        canShootInWater=1; // SDAR_base_F
        magazines[]=
        {
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=87.9; // https://fnamerica.com/products/rifles/fn-m16a4/, JCA 85
        };
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType // SDAR_base_F
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion=0.000494; // 3.02 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755,JCA 0.00058 (1.99 MOA)
        };
        class Burst: Mode_Burst
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType // SDAR_base_F
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                beginwater1[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
                    1,
                    1,
                    400
                };
                beginwater2[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
                    1,
                    1,
                    400
                };
                beginwater3[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
                    1,
                    1,
                    400
                };
                soundBeginWater[]=
                {
                    "beginwater1",
                    0.33,
                    "beginwater2",
                    0.33,
                    "beginwater3",
                    0.34
                };
            };
            dispersion=0.000494; // 3.02 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755,JCA 0.00087 (2.99 MOA)
        };
    };
    class JCA_arifle_M16A4_FG_base_F: JCA_arifle_M16A4_base_F
    {
        initSpeed=-1; // 926, 940, 990, 838, 950, 880, 283m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 800
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=87.9; // https://fnamerica.com/products/rifles/fn-m16a4/, JCA 85
        };
    };
    class JCA_arifle_M16A4_GL_base_F: JCA_arifle_M16A4_base_F
    {
        initSpeed=-1; // 926, 940, 990, 838, 950, 880, 283m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 800
        descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm<br />Grenade Launcher<br />Caliber: 40 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=117.9; // M203 1.36kg https://en.wikipedia.org/wiki/M203_grenade_launcher, JCA 105
        };
    };
    class JCA_arifle_M16A4_sand_F: JCA_arifle_M16A4_base_F
    {
        magazines[]=
        {
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG"
        };
    };
    class JCA_arifle_M16A4_FG_sand_F: JCA_arifle_M16A4_FG_base_F
    {
        magazines[]=
        {
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG"
        };
    };
    class JCA_arifle_M16A4_GL_sand_F: JCA_arifle_M16A4_GL_base_F
    {
        magazines[]=
        {
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_EMAG",
            "JCA_30Rnd_556x45_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_IR_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_556x45_M855A1_sand_EMAG",
            "JCA_30Rnd_556x45_M193_sand_EMAG",
            "JCA_30Rnd_556x45_Mk262_sand_EMAG",
            "JCA_30Rnd_556x45_Mk318_sand_EMAG",
            "JCA_30Rnd_556x45_M995AP_sand_EMAG",
            "JCA_30Rnd_556x45_UW_sand_EMAG",
            "JCA_30Rnd_556x45_EMAG",
            "JCA_30Rnd_556x45_Red_EMAG",
            "JCA_30Rnd_556x45_Green_EMAG",
            "JCA_30Rnd_556x45_Yellow_EMAG",
            "JCA_30Rnd_556x45_IR_EMAG",
            "JCA_30Rnd_556x45_Tracer_Red_EMAG",
            "JCA_30Rnd_556x45_Tracer_Green_EMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_EMAG",
            "JCA_30Rnd_556x45_Tracer_IR_EMAG",
            "JCA_30Rnd_556x45_M855A1_EMAG",
            "JCA_30Rnd_556x45_M193_EMAG",
            "JCA_30Rnd_556x45_Mk262_EMAG",
            "JCA_30Rnd_556x45_Mk318_EMAG",
            "JCA_30Rnd_556x45_M995AP_EMAG",
            "JCA_30Rnd_556x45_UW_EMAG"
        };
    };
    class JCA_arifle_HK437_base_F;
    class JCA_arifle_HK437_AFG_base_F: JCA_arifle_HK437_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_HK437_VFG_base_F: JCA_arifle_HK437_base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JCA_arifle_HK437_AFG_black_F: JCA_arifle_HK437_AFG_base_F
    {
        ACE_barrelTwist=203.2; // 1:8" https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
        ACE_barrelLength=228.6; // 9"
        ACE_railHeightAboveBore=3.71386; // ACE3 checkScopes.sqf
        maxZeroing=700; // distance .300 Blackout 110gr TAP Urban Mach 0.8 (272m/s) ICAO
        initSpeed=-1; // 290, 630m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%) and HK437 Handbook https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
        magazines[]=
        {
            "JCA_30Rnd_300BLK_EMAG",
            "JCA_30Rnd_300BLK_Red_EMAG",
            "JCA_30Rnd_300BLK_Green_EMAG",
            "JCA_30Rnd_300BLK_Yellow_EMAG",
            "JCA_30Rnd_300BLK_IR_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_sand_EMAG",
            "JCA_30Rnd_300BLK_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_sand_EMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=68.3; // 3.1kg https://www.heckler-koch.com, JCA 70
        };
        class Single: Single
        {
            dispersion=0.0004; // 2.46 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00065 (2.23 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.0004; // 2.46 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00065 (2.23 MOA)
        };
    };
    class JCA_arifle_HK437_VFG_black_F: JCA_arifle_HK437_VFG_base_F
    {
        ACE_barrelTwist=203.2; // 1:8" https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
        ACE_barrelLength=228.6; // 9"
        ACE_railHeightAboveBore=3.71386; // ACE3 checkScopes.sqf
        maxZeroing=700; // distance .300 Blackout 110gr TAP Urban Mach 0.8 (272m/s) ICAO
        initSpeed=-1; // 290, 630m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%) and HK437 Handbook https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
        magazines[]=
        {
            "JCA_30Rnd_300BLK_EMAG",
            "JCA_30Rnd_300BLK_Red_EMAG",
            "JCA_30Rnd_300BLK_Green_EMAG",
            "JCA_30Rnd_300BLK_Yellow_EMAG",
            "JCA_30Rnd_300BLK_IR_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_sand_EMAG",
            "JCA_30Rnd_300BLK_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_sand_EMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=68.3; // 3.1kg https://www.heckler-koch.com, JCA 70
        };
        class Single: Single
        {
            dispersion=0.0004; // 2.46 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00065 (2.23 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.0004; // 2.46 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00065 (2.23 MOA)
        };
    };
    class JCA_arifle_HK437_AFG_sand_F: JCA_arifle_HK437_AFG_base_F
    {
        ACE_barrelTwist=203.2; // 1:8" https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
        ACE_barrelLength=228.6; // 9"
        ACE_railHeightAboveBore=3.71386; // ACE3 checkScopes.sqf
        maxZeroing=700; // distance .300 Blackout 110gr TAP Urban Mach 0.8 (272m/s) ICAO
        initSpeed=-1; // 290, 630m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%) and HK437 Handbook https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
        magazines[]=
        {
            "JCA_30Rnd_300BLK_sand_EMAG",
            "JCA_30Rnd_300BLK_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_EMAG",
            "JCA_30Rnd_300BLK_Red_EMAG",
            "JCA_30Rnd_300BLK_Green_EMAG",
            "JCA_30Rnd_300BLK_Yellow_EMAG",
            "JCA_30Rnd_300BLK_IR_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_EMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=68.3; // 3.1kg https://www.heckler-koch.com, JCA 70
        };
        class Single: Single
        {
            dispersion=0.0004; // 2.46 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00065 (2.23 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.0004; // 2.46 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00065 (2.23 MOA)
        };
    };
    class JCA_arifle_HK437_VFG_sand_F: JCA_arifle_HK437_VFG_base_F
    {
        ACE_barrelTwist=203.2; // 1:8" https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
        ACE_barrelLength=228.6; // 9"
        ACE_railHeightAboveBore=3.71386; // ACE3 checkScopes.sqf
        maxZeroing=700; // distance .300 Blackout 110gr TAP Urban Mach 0.8 (272m/s) ICAO
        initSpeed=-1; // 290, 630m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%) and HK437 Handbook https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
        magazines[]=
        {
            "JCA_30Rnd_300BLK_sand_EMAG",
            "JCA_30Rnd_300BLK_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_EMAG",
            "JCA_30Rnd_300BLK_Red_EMAG",
            "JCA_30Rnd_300BLK_Green_EMAG",
            "JCA_30Rnd_300BLK_Yellow_EMAG",
            "JCA_30Rnd_300BLK_IR_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_EMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=68.3; // 3.1kg https://www.heckler-koch.com, JCA 70
        };
        class Single: Single
        {
            dispersion=0.0004; // 2.46 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00065 (2.23 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.0004; // 2.46 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00065 (2.23 MOA)
        };
    };
    class JCA_arifle_HK437_AFG_olive_F: JCA_arifle_HK437_AFG_base_F
    {
        ACE_barrelTwist=203.2; // 1:8" https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
        ACE_barrelLength=228.6; // 9"
        ACE_railHeightAboveBore=3.71386; // ACE3 checkScopes.sqf
        maxZeroing=700; // distance .300 Blackout 110gr TAP Urban Mach 0.8 (272m/s) ICAO
        initSpeed=-1; // 290, 630m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%) and HK437 Handbook https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
        magazines[]=
        {
            "JCA_30Rnd_300BLK_EMAG",
            "JCA_30Rnd_300BLK_Red_EMAG",
            "JCA_30Rnd_300BLK_Green_EMAG",
            "JCA_30Rnd_300BLK_Yellow_EMAG",
            "JCA_30Rnd_300BLK_IR_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_sand_EMAG",
            "JCA_30Rnd_300BLK_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_sand_EMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=68.3; // 3.1kg https://www.heckler-koch.com, JCA 70
        };
        class Single: Single
        {
            dispersion=0.0004; // 2.46 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00065 (2.23 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.0004; // 2.46 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00065 (2.23 MOA)
        };
    };
    class JCA_arifle_HK437_VFG_olive_F: JCA_arifle_HK437_VFG_base_F
    {
        ACE_barrelTwist=203.2; // 1:8" https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
        ACE_barrelLength=228.6; // 9"
        ACE_railHeightAboveBore=3.71386; // ACE3 checkScopes.sqf
        maxZeroing=700; // distance .300 Blackout 110gr TAP Urban Mach 0.8 (272m/s) ICAO
        initSpeed=-1; // 290, 630m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%) and HK437 Handbook https://www.heckler-koch.com/Downloads/Produktinformationen/EN/HK437%20Handbook%20EN.pdf
        magazines[]=
        {
            "JCA_30Rnd_300BLK_EMAG",
            "JCA_30Rnd_300BLK_Red_EMAG",
            "JCA_30Rnd_300BLK_Green_EMAG",
            "JCA_30Rnd_300BLK_Yellow_EMAG",
            "JCA_30Rnd_300BLK_IR_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_EMAG",
            "JCA_30Rnd_300BLK_sand_EMAG",
            "JCA_30Rnd_300BLK_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_Tracer_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_IR_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Red_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Green_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_Yellow_sand_EMAG",
            "JCA_30Rnd_300BLK_110gr_Tracer_IR_sand_EMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=68.3; // 3.1kg https://www.heckler-koch.com, JCA 70
        };
        class Single: Single
        {
            dispersion=0.0004; // 2.46 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00065 (2.23 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.0004; // 2.46 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00065 (2.23 MOA)
        };
    };
    class JCA_arifle_SR10_base_F: Rifle_Base_F
    {
        ACE_barrelTwist=254; // 1:10"
        ACE_barrelLength=368.3; // 14.5"
        ACE_railHeightAboveBore=2.39586; // ACE3 checkScopes.sqf
        maxZeroing=1400; // distance 7.62x51 Mk316 Mach 0.8 (272m/s) ICAO, Marksman Rifles 7.62x51 1600, JCA 1800
        initSpeed=-0.975261; // 770, 907, 323m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 715
        magazines[]=
        {
            "JCA_20Rnd_762x51_PMAG",
            "JCA_20Rnd_762x51_Red_PMAG",
            "JCA_20Rnd_762x51_Green_PMAG",
            "JCA_20Rnd_762x51_Yellow_PMAG",
            "JCA_20Rnd_762x51_IR_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_PMAG",
            "JCA_20Rnd_762x51_M993AP_PMAG",
            "JCA_20Rnd_762x51_Subsonic_PMAG",
            "JCA_20Rnd_762x51_sand_PMAG",
            "JCA_20Rnd_762x51_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_IR_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_PMAG",
            "JCA_20Rnd_762x51_M993AP_sand_PMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_PMAG",
            "JCA_20Rnd_762x51_SMAG",
            "JCA_20Rnd_762x51_Red_SMAG",
            "JCA_20Rnd_762x51_Green_SMAG",
            "JCA_20Rnd_762x51_Yellow_SMAG",
            "JCA_20Rnd_762x51_IR_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_SMAG",
            "JCA_20Rnd_762x51_M993AP_SMAG",
            "JCA_20Rnd_762x51_Subsonic_SMAG",
            "JCA_20Rnd_762x51_sand_SMAG",
            "JCA_20Rnd_762x51_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_IR_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_SMAG",
            "JCA_20Rnd_762x51_M993AP_sand_SMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_SMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=120; // JCA (5.44 kg)
        };
        class single: Mode_SemiAuto
        {
            dispersion=0.000389; // 2.38 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00066 (2.27 MOA)
        };
    };
    class JCA_arifle_SR10_AFG_base_F: JCA_arifle_SR10_base_F
    {
    };
    class JCA_arifle_SR10_VFG_base_F: JCA_arifle_SR10_base_F
    {
    };
    class JCA_arifle_SR10_AFG_sand_F: JCA_arifle_SR10_AFG_base_F
    {
        magazines[]=
        {
            "JCA_20Rnd_762x51_sand_PMAG",
            "JCA_20Rnd_762x51_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_IR_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_PMAG",
            "JCA_20Rnd_762x51_M993AP_sand_PMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_PMAG",
            "JCA_20Rnd_762x51_PMAG",
            "JCA_20Rnd_762x51_Red_PMAG",
            "JCA_20Rnd_762x51_Green_PMAG",
            "JCA_20Rnd_762x51_Yellow_PMAG",
            "JCA_20Rnd_762x51_IR_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_PMAG",
            "JCA_20Rnd_762x51_M993AP_PMAG",
            "JCA_20Rnd_762x51_Subsonic_PMAG",
            "JCA_20Rnd_762x51_sand_SMAG",
            "JCA_20Rnd_762x51_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_IR_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_SMAG",
            "JCA_20Rnd_762x51_M993AP_sand_SMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_SMAG",
            "JCA_20Rnd_762x51_SMAG",
            "JCA_20Rnd_762x51_Red_SMAG",
            "JCA_20Rnd_762x51_Green_SMAG",
            "JCA_20Rnd_762x51_Yellow_SMAG",
            "JCA_20Rnd_762x51_IR_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_SMAG",
            "JCA_20Rnd_762x51_M993AP_SMAG",
            "JCA_20Rnd_762x51_Subsonic_SMAG"
        };
    };
    class JCA_arifle_SR10_VFG_sand_F: JCA_arifle_SR10_VFG_base_F
    {
        magazines[]=
        {
            "JCA_20Rnd_762x51_sand_PMAG",
            "JCA_20Rnd_762x51_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_IR_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_PMAG",
            "JCA_20Rnd_762x51_M993AP_sand_PMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_PMAG",
            "JCA_20Rnd_762x51_PMAG",
            "JCA_20Rnd_762x51_Red_PMAG",
            "JCA_20Rnd_762x51_Green_PMAG",
            "JCA_20Rnd_762x51_Yellow_PMAG",
            "JCA_20Rnd_762x51_IR_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_PMAG",
            "JCA_20Rnd_762x51_M993AP_PMAG",
            "JCA_20Rnd_762x51_Subsonic_PMAG",
            "JCA_20Rnd_762x51_sand_SMAG",
            "JCA_20Rnd_762x51_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_IR_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_SMAG",
            "JCA_20Rnd_762x51_M993AP_sand_SMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_SMAG",
            "JCA_20Rnd_762x51_SMAG",
            "JCA_20Rnd_762x51_Red_SMAG",
            "JCA_20Rnd_762x51_Green_SMAG",
            "JCA_20Rnd_762x51_Yellow_SMAG",
            "JCA_20Rnd_762x51_IR_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_SMAG",
            "JCA_20Rnd_762x51_M993AP_SMAG",
            "JCA_20Rnd_762x51_Subsonic_SMAG"
        };
    };
    class JCA_arifle_SR25_base_F: Rifle_Base_F // https://en.wikipedia.org/wiki/SR-25
    {
        ACE_barrelTwist=285.75; // 1:11.25"
        ACE_barrelLength=508; // 20"
        ACE_railHeightAboveBore=2.4188499; // ACE3 checkScopes.sqf
        maxZeroing=1500; // distance 7.62x51 Mk316 Mach 0.8 (272m/s) ICAO, Marksman Rifles 7.62x51 1600, JCA 1800
        initSpeed=-1; // 790, 930, 331m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 715
        descriptionShort="Marksman Rifle<br />Caliber: 7.62x51 mm";
        magazines[]=
        {
            "JCA_20Rnd_762x51_SMAG",
            "JCA_20Rnd_762x51_Red_SMAG",
            "JCA_20Rnd_762x51_Green_SMAG",
            "JCA_20Rnd_762x51_Yellow_SMAG",
            "JCA_20Rnd_762x51_IR_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_SMAG",
            "JCA_20Rnd_762x51_M993AP_SMAG",
            "JCA_20Rnd_762x51_Subsonic_SMAG",
            "JCA_20Rnd_762x51_sand_SMAG",
            "JCA_20Rnd_762x51_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_IR_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_SMAG",
            "JCA_20Rnd_762x51_M993AP_sand_SMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_SMAG",
            "JCA_20Rnd_762x51_PMAG",
            "JCA_20Rnd_762x51_Red_PMAG",
            "JCA_20Rnd_762x51_Green_PMAG",
            "JCA_20Rnd_762x51_Yellow_PMAG",
            "JCA_20Rnd_762x51_IR_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_PMAG",
            "JCA_20Rnd_762x51_M993AP_PMAG",
            "JCA_20Rnd_762x51_Subsonic_PMAG",
            "JCA_20Rnd_762x51_sand_PMAG",
            "JCA_20Rnd_762x51_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_IR_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_PMAG",
            "JCA_20Rnd_762x51_M993AP_sand_PMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_PMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=153; // empty weight 15.3 lb (6.9 kg), JCA 138
        };
        class single: Mode_SemiAuto
        {
            dispersion=0.000222; // 1.36 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00066 (2.27 MOA)
        };
    };
    class JCA_arifle_SR25_sand_F: JCA_arifle_SR25_base_F
    {
        magazines[]=
        {
            "JCA_20Rnd_762x51_sand_SMAG",
            "JCA_20Rnd_762x51_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_IR_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_SMAG",
            "JCA_20Rnd_762x51_M993AP_sand_SMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_SMAG",
            "JCA_20Rnd_762x51_SMAG",
            "JCA_20Rnd_762x51_Red_SMAG",
            "JCA_20Rnd_762x51_Green_SMAG",
            "JCA_20Rnd_762x51_Yellow_SMAG",
            "JCA_20Rnd_762x51_IR_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_SMAG",
            "JCA_20Rnd_762x51_M993AP_SMAG",
            "JCA_20Rnd_762x51_Subsonic_SMAG",
            "JCA_20Rnd_762x51_sand_PMAG",
            "JCA_20Rnd_762x51_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_IR_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_PMAG",
            "JCA_20Rnd_762x51_M993AP_sand_PMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_PMAG",
            "JCA_20Rnd_762x51_PMAG",
            "JCA_20Rnd_762x51_Red_PMAG",
            "JCA_20Rnd_762x51_Green_PMAG",
            "JCA_20Rnd_762x51_Yellow_PMAG",
            "JCA_20Rnd_762x51_IR_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_PMAG",
            "JCA_20Rnd_762x51_M993AP_PMAG",
            "JCA_20Rnd_762x51_Subsonic_PMAG"
        };
    };
    class JCA_srifle_AWM_base_F: Rifle_Long_Base_F
    {
        ACE_barrelTwist=279.4; // 1:11" optimized for bullets around 250gr, for 300gr twist rate 1:10" or faster
        ACE_barrelLength=685.8; // 27"
        ACE_railHeightAboveBore=1.64895; // ACE3 checkScopes.sqf
        ace_overheating_closedBolt=1;
        maxZeroing=2300; // distance .338 LM GB528 300gr Mach 0.8 (272m/s) ICAO, srifle_DMR_02_F (MAR-10) 2000, JCA 2500
        initSpeed=-1; // 906, 896m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25 hPa, 0%)
        descriptionShort="Sniper Rifle<br />Caliber: .338 Lapua Magnum";
        magazines[]=
        {
            "JCA_5Rnd_338LM_AWM_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_Red_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_Green_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_Yellow_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_IR_Mag",
            "JCA_5Rnd_338LM_AWM_AP_Mag",
            "JCA_5Rnd_338LM_AWM_API_Mag"
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.000209; // average dispersion .338 LM Scenar, AP and API https://www.nammo.com: 1.28 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00022 (0.76 MOA)
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=149.9; // 6.8kg https://www.army.mod.uk/equipment/small-arms-and-support-weapons/, JCA 105
        };
    };
    class JCA_srifle_M107_base_F: Rifle_Long_Base_F
    {
        ACE_RailHeightAboveBore=3.46095; // ACE3 checkScopes.sqf
        ACE_barrelLength=736.6; // 29" https://barrett.net/products/firearms/m107a1/
        ACE_barrelTwist=381; // 1:15" https://barrett.net/products/firearms/m107a1/
        ace_overheating_closedBolt=1;
        maxZeroing=3200; // distance 12.7x99mm AMAX Mach 0.8 (272m/s) ICAO, JCA 2500
        initSpeed=-1; // 838, 826, 1132, 828, 841m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), JCA 0
        descriptionShort="Sniper Rifle<br />Caliber: 12.7x99 mm";
        magazines[]=
        {
            "JCA_10Rnd_127x99_M107_M33_Mag",
            "JCA_10Rnd_127x99_M107_M33_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_M33_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_AMAX_Mag",
            "JCA_10Rnd_127x99_M107_M903_SLAP_Mag",
            "JCA_10Rnd_127x99_M107_M962_SLAP_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk211_HEIAP_Mag",
            "JCA_10Rnd_127x99_M107_Mk300_HEIAP_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_MPDT_HEIAP_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M8_API_Mag",
            "JCA_10Rnd_127x99_M107_M20_API_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk257_API_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M33_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M33_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_M33_Sand_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_AMAX_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M903_SLAP_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M962_SLAP_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk211_HEIAP_Sand_Mag",
            "JCA_10Rnd_127x99_M107_Mk300_HEIAP_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_MPDT_HEIAP_Sand_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M8_API_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M20_API_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk257_API_Sand_Mag_Tracer_IR"
        };
        magazineWell[]=
        {
            "JCA_M107_127x99"
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.000267; // 1.63 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00022 (0.76 MOA)
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=287; // 13kg https://barrett.net/products/firearms/m107a1/, JCA 320
        };
    };
    class JCA_srifle_M107_sand_F: JCA_srifle_M107_base_F
    {
        magazines[]=
        {
            "JCA_10Rnd_127x99_M107_M33_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M33_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_M33_Sand_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_AMAX_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M903_SLAP_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M962_SLAP_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk211_HEIAP_Sand_Mag",
            "JCA_10Rnd_127x99_M107_Mk300_HEIAP_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_MPDT_HEIAP_Sand_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M8_API_Sand_Mag",
            "JCA_10Rnd_127x99_M107_M20_API_Sand_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk257_API_Sand_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M33_Mag",
            "JCA_10Rnd_127x99_M107_M33_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_M33_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_AMAX_Mag",
            "JCA_10Rnd_127x99_M107_M903_SLAP_Mag",
            "JCA_10Rnd_127x99_M107_M962_SLAP_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk211_HEIAP_Mag",
            "JCA_10Rnd_127x99_M107_Mk300_HEIAP_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_MPDT_HEIAP_Mag_Tracer_IR",
            "JCA_10Rnd_127x99_M107_M8_API_Mag",
            "JCA_10Rnd_127x99_M107_M20_API_Mag_Tracer_Red",
            "JCA_10Rnd_127x99_M107_Mk257_API_Mag_Tracer_IR"
        };
    };
    class JCA_optic_MRO_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=2.32987; // ACE3 checkScopes.sqf
    };
    class JCA_optic_MPO_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=1.40109; // ACE3 checkScopes.sqf
    };
    class JCA_optic_ROS_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=3.71751; // ACE3 checkScopes.sqf
    };
    class JCA_optic_PRO_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=1.72206; // ACE3 checkScopes.sqf
    };
    class JCA_optic_ICO_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=4.33929; // ACE3 checkScopes.sqf
    };
    class JCA_optic_IHO_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=4.91653; // ACE3 checkScopes.sqf
    };
    class JCA_optic_IHO_base_magnifier: ItemCore
    {
        ACE_ScopeHeightAboveRail=4.91653; // ACE3 checkScopes.sqf
    };
    class JCA_optic_IHO_base_magnifier_UP: ItemCore
    {
        ACE_ScopeHeightAboveRail=4.91653; // ACE3 checkScopes.sqf
    };
    class JCA_optic_AHO_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=4.80373; // ACE3 checkScopes.sqf
    };
    class JCA_optic_ARO_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=2.98032; // ACE3 checkScopes.sqf
    };
    class JCA_optic_CRO_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=2.77292; // ACE3 checkScopes.sqf
    };
    class JCA_optic_MROS_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=4.48749; // ACE3 checkScopes.sqf
    };
    class JCA_optic_MROS_base_magnifier: ItemCore
    {
        ACE_ScopeHeightAboveRail=4.48749; // ACE3 checkScopes.sqf
    };
    class JCA_optic_MROS_base_magnifier_UP: ItemCore
    {
        ACE_ScopeHeightAboveRail=4.48749; // ACE3 checkScopes.sqf
    };
    class JCA_optic_AICO_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=4.15842; // ACE3 checkScopes.sqf
    };
    class JCA_optic_ACOG_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=4.4543; // ACE3 checkScopes.sqf
    };
    class JCA_optic_MRCS_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=3.75; // ACE3 checkScopes.sqf
    };
    class JCA_optic_CRBS_base: ItemCore // Burris RT-6 Tactical Kit https://www.burrisoptics.com/riflescopes/rt-6-tactical-kit
    {
        ACE_ScopeHeightAboveRail=4.58528; // ACE3 checkScopes.sqf
        ACE_ScopeZeroRange=100; // Always keep vanilla discreteDistance 100 same that Range Card zeroed distance, to increase eventually zeroing distance: Interaction Menu -> "Set zero adjustment" (AB enabled only)
        ACE_ScopeAdjust_Vertical[]={0,23}; // 80 MOA
        ACE_ScopeAdjust_Horizontal[]={-11,11}; // 80 MOA
        ACE_ScopeAdjust_VerticalIncrement=0.1; // should be 1/2 MOA
        ACE_ScopeAdjust_HorizontalIncrement=0.1; // should be 1/2 MOA
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass=17.3; // RT-6 17.4oz, FastFire 3 1.5oz, P.E.P.R. 8.7oz
            class OpticsModes
            {
                class CRBS
                {
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300}; // 2300m max distance at max elevation 23mRad M903/962 SLAP (zeroing 100m, ICAO conditions)
                    discreteDistanceInitIndex=0; // Ballistic 5X reticle, zeroing 100 Yards https://www.burrisoptics.com/reticles/ballistic-5x
                    distanceZoomMin=100;
                    distanceZoomMax=2300; // JCA 1200
                };
            };
        };
    };
    class JCA_optic_MRPS_base: ItemCore // Leupold Mark 4 3.5-10x40mm LR/T M2 https://snipercentral.com/leupold-mark-4-3-5-10x40mm-lrt-m2-illuminated-tmr/
    {
        ACE_ScopeHeightAboveRail=4.51714; // ACE3 checkScopes.sqf, JCA 3.8933
        ACE_ScopeZeroRange=100; // Always keep vanilla discreteDistance 100 same that Range Card zeroed distance, to increase eventually zeroing distance: Interaction Menu -> "Set zero adjustment" (AB enabled only)
        ACE_ScopeAdjust_Vertical[]={0,19}; // 65 MOA
        ACE_ScopeAdjust_Horizontal[]={-9,9}; // 65 MOA
        ACE_ScopeAdjust_VerticalIncrement=0.1; // Should be 1/2 MOA
        ACE_ScopeAdjust_HorizontalIncrement=0.1; // Should be 1/2 MOA
        descriptionShort="Medium Range Precision Sight<br />Magnification: 4x-10x";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass=13.1; // 21 oz (595g), JCA 14
            class OpticsModes
            {
                class MRPS
                {
                    opticsZoomMin=0.025649; // accurate mRad reticle calibration at magnification 9.7x, JCA 0.0227 (11x)
                    opticsZoomMax=0.060328; // accurate mRad reticle calibration at magnification 4.1x, JCA 0.0536 (4.7x)
                    opticsZoomInit=0.060328; // accurate mRad reticle calibration at magnification 4.1x, JCA 0.0536 (4.7x)
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200}; // 2200m max distance at max elevation 19mRad M903/962 SLAP (zeroing 100m, ICAO conditions)
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=100;
                    distanceZoomMax=2200; // JCA 2000
                    discretefov[]={0.060328,0.025649}; // {4.1x,9.7x}
                };
            };
        };
    };
    class JCA_optic_HPPO_base: ItemCore // S&B 5-25x56 PM II LP DT/ST https://www.schmidtundbender.de/en/5-25x56-PM-II-LP-P4FL-1cm-cw-DT-ST/689-911-972-94-67
    {
        ACE_ScopeHeightAboveRail=4.89867; // ACE3 checkScopes.sqf, JCA 4.2098
        ACE_ScopeZeroRange=100; // Always keep vanilla discreteDistance 100 same that Range Card zeroed distance, to increase eventually zeroing distance: Interaction Menu -> "Set zero adjustment" (AB enabled only)
        ACE_ScopeAdjust_Vertical[]={0,34};
        ACE_ScopeAdjust_Horizontal[]={-8,8};
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        descriptionShort="High Power Precision Optic<br />Magnification: 11x-23x";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass=24.8; // S&B 5-25x56 1125g, JCA 18
            class OpticsModes
            {
                class HPPO
                {
                    opticsZoomMin=0.010992; // accurate mRad reticle calibration at magnification 22.7x, JCA 0.01 (25x)
                    opticsZoomMax=0.021963; // accurate mRad reticle calibration at magnification 11.4x, JCA 0.042 (6x)
                    opticsZoomInit=0.021963; // accurate mRad reticle calibration at magnification 11.4x, JCA 0.042 (6x)
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800}; // 2800m max distance at max elevation 34mRad M903/962 SLAP (zeroing 100m, ICAO conditions)
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=100;
                    distanceZoomMax=2800; // JCA 2400
                    discretefov[]={0.021963,0.010992}; // {11.4x, 22.7x}
                };
            };
        };
    };
    class JCA_optic_HPPO_RAD_base: ItemCore // S&B 5-25x56 PM II LP DT/ST https://www.schmidtundbender.de/en/5-25x56-PM-II-LP-P4FL-1cm-cw-DT-ST/689-911-972-94-67
    {
        ACE_ScopeHeightAboveRail=4.89867; // ACE3 checkScopes.sqf, JCA 4.2098
        ACE_ScopeZeroRange=100; // Always keep vanilla discreteDistance 100 same that Range Card zeroed distance, to increase eventually zeroing distance: Interaction Menu -> "Set zero adjustment" (AB enabled only)
        ACE_ScopeAdjust_Vertical[]={0,34};
        ACE_ScopeAdjust_Horizontal[]={-8,8};
        ACE_ScopeAdjust_VerticalIncrement=0.1;
        ACE_ScopeAdjust_HorizontalIncrement=0.1;
        descriptionShort="High Power Precision Optic - Range Acquisition Device<br />Magnification: 11x-23x";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass=34.1; // S&B 5-25x56 1125g + Wilcox RAPTAR-S 420g, JCA 24
            class OpticsModes
            {
                class HPPO
                {
                    opticsZoomMin=0.010992; // accurate mRad reticle calibration at magnification 22.7x, JCA 0.01 (25x)
                    opticsZoomMax=0.021963; // accurate mRad reticle calibration at magnification 11.4x, JCA 0.042 (6x)
                    opticsZoomInit=0.021963; // accurate mRad reticle calibration at magnification 11.4x, JCA 0.042 (6x)
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800}; // 2800m max distance at max elevation 34mRad M903/962 SLAP (zeroing 100m, ICAO conditions)
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=100;
                    distanceZoomMax=2800; // JCA 2400
                    discretefov[]={0.021963,0.010992}; // {11.4x, 22.7x}
                };
            };
        };
    };
    class JCA_optic_HPCS_base: ItemCore // Vortex Optics Golden Eagle 15-60x52 https://vortexoptics.com/vortex-golden-eagle-hd+reticle-ECR-1~MOA
    {
        ACE_ScopeZeroRange=100; // Always keep vanilla discreteDistance 100 same that Range Card zeroed distance, to increase eventually zeroing distance: Interaction Menu -> "Set zero adjustment" (AB enabled only)
        ACE_ScopeHeightAboveRail=3.85973; // ACE3 checkScopes.sqf, JCA 4.2098
        ACE_ScopeAdjust_Vertical[]={0,16}; // 55 MOA
        ACE_ScopeAdjust_Horizontal[]={-6.5,6.5}; // 45 MOA
        ACE_ScopeAdjust_VerticalIncrement=0.1; // should be 1/8 MOA
        ACE_ScopeAdjust_HorizontalIncrement=0.1; // should be 1/8 MOA
        descriptionShort="High Power Combat Scope<br />Magnification: 11x-23x";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass=18.6; // 29.7 oz, JCA 14
            class OpticsModes
            {
                class HPCS
                {
                    opticsZoomMin=0.010992; // accurate mRad reticle calibration at magnification 22.7x, JCA 0.01 (25x)
                    opticsZoomMax=0.021963; // accurate mRad reticle calibration at magnification 11.4x, JCA 0.042 (6x)
                    opticsZoomInit=0.021963; // accurate mRad reticle calibration at magnification 11.4x, JCA 0.042 (6x)
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000}; // 2000m max distance at max elevation 16mRad M903/962 SLAP (zeroing 100m, ICAO conditions)
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=100;
                    distanceZoomMax=2000; // JCA 2400
                    discretefov[]={0.021963,0.010992}; // {11.4x, 22.7x}
                };
            };
        };
    };
    class JCA_muzzle_snds_advanced_base: ItemCore
    {
        class ItemInfo;
    };
    class JCA_muzzle_snds_enhanced_base: ItemCore
    {
        class ItemInfo;
    };
    class JCA_muzzle_snds_tactical_base: ItemCore
    {
        class ItemInfo;
    };
    class JCA_muzzle_snds_MP5_base: ItemCore
    {
        class ItemInfo;
    };
    class JCA_muzzle_snds_SR25_base: ItemCore
    {
        class ItemInfo;
    };
    class JCA_muzzle_snds_AWM_base: ItemCore
    {
        class ItemInfo;
    };
    class JCA_muzzle_snds_M107_base: ItemCore
    {
        class ItemInfo;
    };
    class muzzle_snds_H: ItemCore // Sound Suppressor 6.5mm
    {
        class ItemInfo;
    };
    class JCA_muzzle_snds_9MM_enhanced_black: JCA_muzzle_snds_enhanced_base // Sound Suppressor 9mm, muzzle_snds_L
    {
        class ItemInfo: ItemInfo
        {
            mass=5.5; // SilencerCo Osprey 9 8.8oz, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03; // muzzle_snds_L, JCA 0.04, muzzle_snds_H 0.04
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_L, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_9MM_enhanced_sand: JCA_muzzle_snds_enhanced_base // Sound Suppressor 9mm, muzzle_snds_L
    {
        class ItemInfo: ItemInfo
        {
            mass=5.5; // SilencerCo Osprey 9 8.8oz, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03; // muzzle_snds_L, JCA 0.04, muzzle_snds_H 0.04
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_L, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_9MM_enhanced_olive: JCA_muzzle_snds_enhanced_base // Sound Suppressor 9mm, muzzle_snds_L
    {
        class ItemInfo: ItemInfo
        {
            mass=5.5; // SilencerCo Osprey 9 8.8oz, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03; // muzzle_snds_L, JCA 0.04, muzzle_snds_H 0.04
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_L, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_9MM_tactical_black: JCA_muzzle_snds_tactical_base // Sound Suppressor 9mm, muzzle_snds_L
    {
        class ItemInfo: ItemInfo
        {
            mass=6; // muzzle_snds_L, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03; // muzzle_snds_L, JCA 0.04, muzzle_snds_H 0.04
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_L, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_9MM_tactical_sand: JCA_muzzle_snds_tactical_base // Sound Suppressor 9mm, muzzle_snds_L
    {
        class ItemInfo: ItemInfo
        {
            mass=6; // muzzle_snds_L, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03; // muzzle_snds_L, JCA 0.04, muzzle_snds_H 0.04
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_L, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_9MM_tactical_olive: JCA_muzzle_snds_tactical_base // Sound Suppressor 9mm, muzzle_snds_L
    {
        class ItemInfo: ItemInfo
        {
            mass=6; // muzzle_snds_L, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03; // muzzle_snds_L, JCA 0.04, muzzle_snds_H 0.04
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_L, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_MP5_black: JCA_muzzle_snds_MP5_base // Sound Suppressor 9mm, muzzle_snds_L
    {
        class ItemInfo: ItemInfo
        {
            mass=9.5; // Heckler & Koch KAC-Navy MP5N 9mm Suppressor 0.95 lbs, muzzle_snds_L 6, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03; // muzzle_snds_L, JCA 0.04, muzzle_snds_H 0.04
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_L, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_MP5_sand: JCA_muzzle_snds_MP5_base // Sound Suppressor 9mm, muzzle_snds_L
    {
        class ItemInfo: ItemInfo
        {
            mass=9.5; // Heckler & Koch KAC-Navy MP5N 9mm Suppressor 0.95 lbs, muzzle_snds_L 6, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03; // muzzle_snds_L, JCA 0.04, muzzle_snds_H 0.04
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_L, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_MP5_olive: JCA_muzzle_snds_MP5_base // Sound Suppressor 9mm, muzzle_snds_L
    {
        class ItemInfo: ItemInfo
        {
            mass=9.5; // Heckler & Koch KAC-Navy MP5N 9mm Suppressor 0.95 lbs, muzzle_snds_L 6, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03; // muzzle_snds_L, JCA 0.04, muzzle_snds_H 0.04
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_L, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_45_tactical_black: JCA_muzzle_snds_tactical_base // Sound Suppressor .45 ACP, muzzle_snds_acp
    {
        class ItemInfo: ItemInfo
        {
            mass=8.4; // Sound Suppressor (B&T) 380g, Operators Manual UMP45
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_acp 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_acp 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_acp 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_acp 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_acp, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_45_tactical_sand: JCA_muzzle_snds_tactical_base // Sound Suppressor .45 ACP, muzzle_snds_acp
    {
        class ItemInfo: ItemInfo
        {
            mass=8.4; // Sound Suppressor (B&T) 380g, Operators Manual UMP45
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_acp 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_acp 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_acp 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_acp 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_acp, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_45_tactical_olive: JCA_muzzle_snds_tactical_base // Sound Suppressor .45 ACP, muzzle_snds_acp
    {
        class ItemInfo: ItemInfo
        {
            mass=8.4; // Sound Suppressor (B&T) 380g, Operators Manual UMP45
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_acp 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_acp 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_acp 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_acp 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_acp, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_556_advanced_black: JCA_muzzle_snds_advanced_base // Sound Suppressor 5.56mm, muzzle_snds_M
    {
        class ItemInfo: ItemInfo
        {
            mass=8; // muzzle_snds_M, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_M 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_M 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_M 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_M 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_M, JCA 0.2
    };
    class JCA_muzzle_snds_556_advanced_sand: JCA_muzzle_snds_advanced_base // Sound Suppressor 5.56mm, muzzle_snds_M
    {
        class ItemInfo: ItemInfo
        {
            mass=8; // muzzle_snds_M, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_M 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_M 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_M 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_M 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_M, JCA 0.2
    };
    class JCA_muzzle_snds_556_advanced_olive: JCA_muzzle_snds_advanced_base // Sound Suppressor 5.56mm, muzzle_snds_M
    {
        class ItemInfo: ItemInfo
        {
            mass=8; // muzzle_snds_M, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_M 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_M 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_M 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_M 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_M, JCA 0.2
    };
    class JCA_muzzle_snds_556_Enhanced_black: JCA_muzzle_snds_enhanced_base // Sound Suppressor 5.56mm, muzzle_snds_M
    {
        class ItemInfo: ItemInfo
        {
            mass=8; // muzzle_snds_M, JCA
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_M 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_M 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_M 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_M 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_M, JCA 0.2
    };
    class JCA_muzzle_snds_556_Enhanced_sand: JCA_muzzle_snds_enhanced_base // Sound Suppressor 5.56mm, muzzle_snds_M
    {
        class ItemInfo: ItemInfo
        {
            mass=8; // muzzle_snds_M, JCA
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_M 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_M 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_M 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_M 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_M, JCA 0.2
    };
    class JCA_muzzle_snds_556_Enhanced_olive: JCA_muzzle_snds_enhanced_base // Sound Suppressor 5.56mm, muzzle_snds_M
    {
        class ItemInfo: ItemInfo
        {
            mass=8; // muzzle_snds_M, JCA
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_M 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_M 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_M 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_M 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_M, JCA 0.2
    };
    class JCA_muzzle_snds_300_Enhanced_black: JCA_muzzle_snds_enhanced_base // Sound Suppressor 7.62mm, muzzle_snds_B
    {
        class ItemInfo: ItemInfo
        {
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_B 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_B 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_300_Enhanced_sand: JCA_muzzle_snds_enhanced_base // Sound Suppressor 7.62mm, muzzle_snds_B
    {
        class ItemInfo: ItemInfo
        {
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_B 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_B 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_300_Enhanced_olive: JCA_muzzle_snds_enhanced_base // Sound Suppressor 7.62mm, muzzle_snds_B
    {
        class ItemInfo: ItemInfo
        {
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_B 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_B 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_762_tactical_black: JCA_muzzle_snds_tactical_base // Sound Suppressor 7.62mm, muzzle_snds_B
    {
        class ItemInfo: ItemInfo
        {
            mass=12.3; // Knights Armament KAC Rifle Suppressors 19.75oz (560g), JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_B 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_B 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_762_tactical_sand: JCA_muzzle_snds_tactical_base // Sound Suppressor 7.62mm, muzzle_snds_B
    {
        class ItemInfo: ItemInfo
        {
            mass=12.3; // Knights Armament KAC Rifle Suppressors 19.75oz (560g), JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_B 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_B 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_762_tactical_olive: JCA_muzzle_snds_tactical_base // Sound Suppressor 7.62mm, muzzle_snds_B
    {
        class ItemInfo: ItemInfo
        {
            mass=12.3; // Knights Armament KAC Rifle Suppressors 19.75oz (560g), JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_B 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_B 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_SR25_black: JCA_muzzle_snds_SR25_base // Sound Suppressor 7.62mm, muzzle_snds_B
    {
        class ItemInfo: ItemInfo
        {
            mass=18.7; // Knights Armament KAC Mk11 7.62 Suppressor, weight 29.9 oz (848g), JCA 10
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3; // muzzle_snds_B, JCA 0.5, muzzle_snds_570 0.5
                audibleFire=0.04; // muzzle_snds_B, JCA 0.3, muzzle_snds_570 0.3
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_B 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_B 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_SR25_sand: JCA_muzzle_snds_SR25_base // Sound Suppressor 7.62mm, muzzle_snds_B
    {
        class ItemInfo: ItemInfo
        {
            mass=18.7; // Knights Armament KAC Mk11 7.62 Suppressor, weight 29.9 oz (848g), JCA 10
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3; // muzzle_snds_B, JCA 0.5, muzzle_snds_570 0.5
                audibleFire=0.04; // muzzle_snds_B, JCA 0.3, muzzle_snds_570 0.3
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_B 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_B 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_SR25_olive: JCA_muzzle_snds_SR25_base // Sound Suppressor 7.62mm, muzzle_snds_B
    {
        class ItemInfo: ItemInfo
        {
            mass=18.7; // Knights Armament KAC Mk11 7.62 Suppressor, weight 29.9 oz (848g), JCA 10
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3; // muzzle_snds_B, JCA 0.5, muzzle_snds_570 0.5
                audibleFire=0.04; // muzzle_snds_B, JCA 0.3, muzzle_snds_570 0.3
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_B 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_B 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_AWM_black: JCA_muzzle_snds_AWM_base // Sound Suppressor .338, muzzle_snds_338_black
    {
        class ItemInfo: ItemInfo
        {
            mass=10.5; // Accuracy International Tactical Moderator 475g, only compatible with the Accuracy International Tactical muzzle break, not the standard muzzle break, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_338_black 1.1
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_338_black 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_338_black 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_338_black 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_AWM_sand: JCA_muzzle_snds_AWM_base // Sound Suppressor .338, muzzle_snds_338_black
    {
        class ItemInfo: ItemInfo // muzzle_snds_338_black
        {
            mass=10.5; // Accuracy International Tactical Moderator 475g, only compatible with the Accuracy International Tactical muzzle break, not the standard muzzle break, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_338_black 1.1
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_338_black 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_338_black 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_338_black 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_AWM_olive: JCA_muzzle_snds_AWM_base // Sound Suppressor .338, muzzle_snds_338_black
    {
        class ItemInfo: ItemInfo // muzzle_snds_338_black
        {
            mass=10.5; // Accuracy International Tactical Moderator 475g, only compatible with the Accuracy International Tactical muzzle break, not the standard muzzle break, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_338_black 1.1
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_338_black 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_338_black 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_338_black 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_M107_black: JCA_muzzle_snds_M107_base // muzzle_snds_93mmg
    {
        class ItemInfo: ItemInfo
        {
            mass=48.8; // Barrett QDL Suppressor 2.21kg https://barrett.net/products/accessories/suppressors/qdl-suppressor/, JCA 26
            class MagazineCoef
            {
                initSpeed=1; // ACE3, muzzle_snds_93mmg 1.1
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, muzzle_snds_93mmg 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_93mmg 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_93mmg 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_M107_sand: JCA_muzzle_snds_M107_base // muzzle_snds_93mmg
    {
        class ItemInfo: ItemInfo
        {
            mass=48.8; // Barrett QDL Suppressor 2.21kg https://barrett.net/products/accessories/suppressors/qdl-suppressor/, JCA 26
            class MagazineCoef
            {
                initSpeed=1; // ACE3, muzzle_snds_93mmg 1.1
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, muzzle_snds_93mmg 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_93mmg 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_93mmg 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_M107_olive: JCA_muzzle_snds_M107_base // muzzle_snds_93mmg
    {
        class ItemInfo: ItemInfo
        {
            mass=48.8; // Barrett QDL Suppressor 2.21kg https://barrett.net/products/accessories/suppressors/qdl-suppressor/, JCA 26
            class MagazineCoef
            {
                initSpeed=1; // ACE3, muzzle_snds_93mmg 1.1
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, muzzle_snds_93mmg 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_93mmg 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_93mmg 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class muzzle_snds_L: muzzle_snds_H // Sound Suppressor 9mm
    {
        class ItemInfo: ItemInfo
        {
            // mass=6;
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        // inertia=0.1;
    };
    class muzzle_snds_acp: muzzle_snds_H // Sound Suppressor .45 ACP
    {
        class ItemInfo: ItemInfo
        {
            // mass=6;
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_acp 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_acp 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_acp 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_acp 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        // inertia=0.1;
    };
    class muzzle_snds_M: muzzle_snds_H // Sound Suppressor 5.56mm
    {
        class ItemInfo: ItemInfo
        {
            // mass=8;
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_M 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_M 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_M 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_M 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        // inertia=0.1;
    };
    class muzzle_snds_B: muzzle_snds_H // Sound Suppressor 7.62mm
    {
        class ItemInfo: ItemInfo
        {
            // mass=12;
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_B 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_B 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        // inertia=0.2;
    };
    class JCA_bipod_04_base: ItemCore
    {
        class ItemInfo: InventoryUnderItem_Base_F
        {
            mass=8.8; // Harris Engineering S-BRM Bipod, weight 14 oz (397g), JCA 10
        };
    };
    class JCA_bipod_AWM_base: ItemCore
    {
        class ItemInfo: InventoryUnderItem_Base_F
        {
            mass=13; // Accuracy International AW/AWM Steel Bipod 590g, JCA 10
        };
    };
};
class ACE_ATragMX_Presets
{
    class JCA_B_127x99_Ball_M33
    {
        preset[]=
        {
            "JCA M107 M33",
            838,
            100,
            0.0837694,
            -0.00065856,
            7.32,
            0,
            2,
            10,
            120,
            0,
            0,
            42.83,
            12.31,
            38.10,
            0.62,
            1,
            "ICAO",

            {
                {-15,819},
                {0,824},
                {10,832},
                {15,838},
                {25,853},
                {30,861},
                {35,871}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class JCA_B_127x99_Ball_AMAX
    {
        preset[]=
        {
            "JCA M107 AMAX",
            826,
            100,
            0.0842535,
            -0.00039574,
            7.32,
            0,
            2,
            10,
            120,
            0,
            0,
            48.60,
            12.43,
            38.10,
            1.0362,
            1,
            "ICAO",

            {
                {-15,807},
                {0,812},
                {10,820},
                {15,826},
                {25,841},
                {30,849},
                {35,859}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class JCA_B_127x99_Ball_M903_SLAP
    {
        preset[]=
        {
            "JCA M107 SLAP",
            1132,
            100,
            0.0646443,
            -0.00051605,
            7.32,
            0,
            2,
            10,
            120,
            0,
            0,
            23.17,
            10.14,
            38.10,
            0.735,
            1,
            "ICAO",

            {
                {-15,1113},
                {0,1118},
                {10,1126},
                {15,1132},
                {25,1147},
                {30,1155},
                {35,1165}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class JCA_B_127x99_Ball_Mk211_HEIAP
    {
        preset[]=
        {
            "JCA M107 HEIAP",
            828,
            100,
            0.0847119,
            -0.00062936,
            7.32,
            0,
            2,
            10,
            120,
            0,
            0,
            43.48,
            12.37,
            38.10,
            0.651,
            1,
            "ICAO",

            {
                {-15,809},
                {0,814},
                {10,822},
                {15,828},
                {25,843},
                {30,851},
                {35,861}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class JCA_B_127x99_Ball_M8_API
    {
        preset[]=
        {
            "JCA M107 API",
            841,
            100,
            0.0835936,
            -0.00070327,
            7.32,
            0,
            2,
            10,
            120,
            0,
            0,
            40.34,
            12.02,
            38.10,
            0.58,
            1,
            "ICAO",

            {
                {-15,822},
                {0,827},
                {10,835},
                {15,841},
                {25,856},
                {30,864},
                {35,874}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_JCA_B_338LM_Ball
    {
        preset[]=
        {
            "JCA M115A3",
            906,
            100,
            0.0732268,
            -0.00061662,
            6.55,
            0,
            2,
            10,
            120,
            0,
            0,
            16.2,
            8.95,
            27.94,
            0.648,
            1,
            "ICAO",

            {
                {-15,903},
                {0,904},
                {10,905},
                {15,906},
                {25,909},
                {30,911},
                {35,913}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_JCA_B_338LM_AP_Ball
    {
        preset[]=
        {
            "JCA M115A3 AP",
            906,
            100,
            0.0734488,
            -0.00070864,
            6.55,
            0,
            2,
            10,
            120,
            0,
            0,
            16.1,
            9.28,
            27.94,
            0.564,
            1,
            "ICAO",

            {
                {-15,903},
                {0,904},
                {10,905},
                {15,906},
                {25,909},
                {30,911},
                {35,913}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_JCA_B_338LM_API_Ball
    {
        preset[]=
        {
            "JCA M115A3 API",
            896,
            100,
            0.074292,
            -0.0007233,
            6.55,
            0,
            2,
            10,
            120,
            0,
            0,
            16.4,
            9.03,
            27.94,
            0.554,
            1,
            "ICAO",

            {
                {-15,893},
                {0,894},
                {10,895},
                {15,896},
                {25,899},
                {30,901},
                {35,903}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_JCA_arifle_SR25_Sierra_MatchKing
    {
        preset[]=
        {
            "JCA Mk11 Mk316",
            790,
            100,
            0.0874179,
            -0.00084907,
            6.94,
            0,
            2,
            10,
            120,
            0,
            0,
            11.34,
            8.31,
            28.575,
            0.489,
            1,
            "ICAO",

            {
                {-15,787},
                {0,788},
                {10,789},
                {15,790},
                {25,793},
                {30,795},
                {35,797}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_JCA_arifle_SR25_M993AP
    {
        preset[]=
        {
            "JCA Mk11 AP",
            930,
            100,
            0.0747754,
            -0.00110502,
            6.94,
            0,
            2,
            10,
            120,
            0,
            0,
            8.23,
            7.36,
            28.575,
            0.359,
            1,
            "ICAO",

            {
                {-15,911},
                {0,918},
                {10,925},
                {15,930},
                {25,944},
                {30,953},
                {35,964}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_JCA_arifle_SR25_Lapua_B416
    {
        preset[]=
        {
            "JCA Mk11 Subso",
            331,
            100,
            0.306279,
            -0.00049496,
            6.94,
            0,
            2,
            10,
            120,
            0,
            0,
            12.96,
            8.17,
            28.575,
            0.518,
            1,
            "ICAO",

            {
                {-15,329},
                {0,330},
                {10,331},
                {15,331},
                {25,333},
                {30,334},
                {35,335}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_JCA_arifle_SR10_Sierra_MatchKing
    {
        preset[]=
        {
            "JCA SR10 Mk316",
            770,
            100,
            0.0898099,
            -0.00084907,
            6.91,
            0,
            2,
            10,
            120,
            0,
            0,
            11.34,
            8.31,
            25.4,
            0.489,
            1,
            "ICAO",

            {
                {-15,766},
                {0,768},
                {10,769},
                {15,770},
                {25,773},
                {30,775},
                {35,777}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_JCA_arifle_SR10_Sierra_M993AP
    {
        preset[]=
        {
            "JCA SR10 AP",
            907,
            100,
            0.0764216,
            -0.00110502,
            6.91,
            0,
            2,
            10,
            120,
            0,
            0,
            8.23,
            7.37,
            25.4,
            0.359,
            1,
            "ICAO",

            {
                {-15,888},
                {0,895},
                {10,902},
                {15,907},
                {25,920},
                {30,930},
                {35,941}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_JCA_arifle_SR10_Lapua_B416
    {
        preset[]=
        {
            "JCA SR10 Subso",
            323,
            100,
            0.318686,
            -0.00049496,
            6.91,
            0,
            2,
            10,
            120,
            0,
            0,
            12.96,
            8.17,
            25.4,
            0.518,
            1,
            "ICAO",

            {
                {-15,321},
                {0,322},
                {10,322},
                {15,323},
                {25,324},
                {30,325},
                {35,326}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
};
