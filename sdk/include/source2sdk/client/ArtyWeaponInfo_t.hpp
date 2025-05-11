#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ArtyWeaponID_t.hpp"
#include "source2sdk/client/GameActivity_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x110
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        struct ArtyWeaponInfo_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::client::ArtyWeaponID_t m_unID; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            CUtlString m_sWeaponLocName; // 0x10            
            CUtlString m_sWeaponLocDesc; // 0x18            
            CUtlString m_sWeaponSwapSound; // 0x20            
            CUtlString m_sWeaponFireSound; // 0x28            
            CPanoramaImageName m_sWeaponImage; // 0x30            
            bool m_bIsPlayerWeapon; // 0x40            
            uint8_t _pad0041[0x7]; // 0x41
            // metadata: MPropertyCustomFGDType "vdata_choice:scripts/events/crownfall/artillery_graphics.vdata"
            CUtlString m_strGraphicInfoName; // 0x48            
            uint8_t _pad0050[0x4]; // 0x50
            source2sdk::client::GameActivity_t m_weaponAttackActivity; // 0x54            
            float m_flShotCreationTime; // 0x58            
            float m_flDamage; // 0x5c            
            float m_flHitRadius; // 0x60            
            float m_flTerrainCarveRadius; // 0x64            
            float m_flDamageRadius; // 0x68            
            float m_flLockedAngle; // 0x6c            
            float m_flLockedPower; // 0x70            
            float m_flReloadTime; // 0x74            
            std::int32_t m_nSplitCount; // 0x78            
            float m_flSplitTime; // 0x7c            
            float m_flSplitRepeatTime; // 0x80            
            float m_flSplitDispersion; // 0x84            
            bool m_bSplitAtTop; // 0x88            
            bool m_bZeroXOnSplit; // 0x89            
            bool m_bSplitRepeats; // 0x8a            
            uint8_t _pad008b[0x5]; // 0x8b
            CUtlString m_szSplitWeapon; // 0x90            
            uint8_t _pad0098[0x4]; // 0x98
            float m_flMaxSpeed; // 0x9c            
            float m_flDragMult; // 0xa0            
            float m_flWindMult; // 0xa4            
            bool m_bIsRay; // 0xa8            
            uint8_t _pad00a9[0x3]; // 0xa9
            float m_flRangeMult; // 0xac            
            std::int32_t m_nInitialShotCount; // 0xb0            
            float m_nInitialShotAngleDispersionPer; // 0xb4            
            float m_flManaCost; // 0xb8            
            bool m_bDisabled; // 0xbc            
            bool m_bBounces; // 0xbd            
            bool m_bBounceOffTarget; // 0xbe            
            uint8_t _pad00bf[0x1]; // 0xbf
            float m_flFuseTime; // 0xc0            
            float m_flBounceDrag; // 0xc4            
            std::int32_t m_nMaxReloads; // 0xc8            
            float m_flGravityMult; // 0xcc            
            bool m_bProximityFuse; // 0xd0            
            bool m_bUseHighArc; // 0xd1            
            bool m_bCollides; // 0xd2            
            bool m_bDirectAimAtTarget; // 0xd3            
            std::int32_t m_nWeaponPoints; // 0xd4            
            std::int32_t m_nRayDigTimes; // 0xd8            
            bool m_bNoShootingWhileInAir; // 0xdc            
            bool m_bListenForKeypress; // 0xdd            
            uint8_t _pad00de[0x2]; // 0xde
            Vector2D m_vVelocityMultOnKeypress; // 0xe0            
            Vector2D m_vVelocityOffsetOnKeypress; // 0xe8            
            bool m_bShowTrajectory; // 0xf0            
            uint8_t _pad00f1[0x3]; // 0xf1
            Vector2D m_vVelocityMultOnExplode; // 0xf4            
            Vector2D m_vVelocityOffsetOnExplode; // 0xfc            
            std::int32_t m_nExplodeTimes; // 0x104            
            float m_flRadiusChangePerExplode; // 0x108            
            uint8_t _pad010c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_unID) == 0x8);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_sWeaponLocName) == 0x10);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_sWeaponLocDesc) == 0x18);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_sWeaponSwapSound) == 0x20);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_sWeaponFireSound) == 0x28);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_sWeaponImage) == 0x30);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bIsPlayerWeapon) == 0x40);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_strGraphicInfoName) == 0x48);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_weaponAttackActivity) == 0x54);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flShotCreationTime) == 0x58);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flDamage) == 0x5c);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flHitRadius) == 0x60);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flTerrainCarveRadius) == 0x64);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flDamageRadius) == 0x68);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flLockedAngle) == 0x6c);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flLockedPower) == 0x70);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flReloadTime) == 0x74);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_nSplitCount) == 0x78);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flSplitTime) == 0x7c);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flSplitRepeatTime) == 0x80);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flSplitDispersion) == 0x84);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bSplitAtTop) == 0x88);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bZeroXOnSplit) == 0x89);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bSplitRepeats) == 0x8a);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_szSplitWeapon) == 0x90);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flMaxSpeed) == 0x9c);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flDragMult) == 0xa0);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flWindMult) == 0xa4);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bIsRay) == 0xa8);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flRangeMult) == 0xac);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_nInitialShotCount) == 0xb0);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_nInitialShotAngleDispersionPer) == 0xb4);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flManaCost) == 0xb8);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bDisabled) == 0xbc);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bBounces) == 0xbd);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bBounceOffTarget) == 0xbe);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flFuseTime) == 0xc0);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flBounceDrag) == 0xc4);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_nMaxReloads) == 0xc8);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flGravityMult) == 0xcc);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bProximityFuse) == 0xd0);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bUseHighArc) == 0xd1);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bCollides) == 0xd2);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bDirectAimAtTarget) == 0xd3);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_nWeaponPoints) == 0xd4);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_nRayDigTimes) == 0xd8);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bNoShootingWhileInAir) == 0xdc);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bListenForKeypress) == 0xdd);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_vVelocityMultOnKeypress) == 0xe0);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_vVelocityOffsetOnKeypress) == 0xe8);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bShowTrajectory) == 0xf0);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_vVelocityMultOnExplode) == 0xf4);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_vVelocityOffsetOnExplode) == 0xfc);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_nExplodeTimes) == 0x104);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flRadiusChangePerExplode) == 0x108);
        
        static_assert(sizeof(source2sdk::client::ArtyWeaponInfo_t) == 0x110);
    };
};
