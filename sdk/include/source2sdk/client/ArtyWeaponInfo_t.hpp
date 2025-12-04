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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        struct ArtyWeaponInfo_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ArtyWeaponID_t m_unID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_sWeaponLocName; // 0x_            
            CUtlString m_sWeaponLocDesc; // 0x_            
            CUtlString m_sWeaponSwapSound; // 0x_            
            CUtlString m_sWeaponFireSound; // 0x_            
            CPanoramaImageName m_sWeaponImage; // 0x_            
            bool m_bIsPlayerWeapon; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyCustomFGDType "vdata_choice:scripts/events/crownfall/artillery_graphics.vdata"
            CUtlString m_strGraphicInfoName; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::GameActivity_t m_weaponAttackActivity; // 0x_            
            float m_flShotCreationTime; // 0x_            
            float m_flDamage; // 0x_            
            float m_flHitRadius; // 0x_            
            float m_flTerrainCarveRadius; // 0x_            
            float m_flDamageRadius; // 0x_            
            float m_flLockedAngle; // 0x_            
            float m_flLockedPower; // 0x_            
            float m_flReloadTime; // 0x_            
            std::int32_t m_nSplitCount; // 0x_            
            float m_flSplitTime; // 0x_            
            float m_flSplitRepeatTime; // 0x_            
            float m_flSplitDispersion; // 0x_            
            bool m_bSplitAtTop; // 0x_            
            bool m_bZeroXOnSplit; // 0x_            
            bool m_bSplitRepeats; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_szSplitWeapon; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMaxSpeed; // 0x_            
            float m_flDragMult; // 0x_            
            float m_flWindMult; // 0x_            
            bool m_bIsRay; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flRangeMult; // 0x_            
            std::int32_t m_nInitialShotCount; // 0x_            
            float m_nInitialShotAngleDispersionPer; // 0x_            
            float m_flManaCost; // 0x_            
            bool m_bDisabled; // 0x_            
            bool m_bBounces; // 0x_            
            bool m_bBounceOffTarget; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flFuseTime; // 0x_            
            float m_flBounceDrag; // 0x_            
            std::int32_t m_nMaxReloads; // 0x_            
            float m_flGravityMult; // 0x_            
            bool m_bProximityFuse; // 0x_            
            bool m_bUseHighArc; // 0x_            
            bool m_bCollides; // 0x_            
            bool m_bDirectAimAtTarget; // 0x_            
            std::int32_t m_nWeaponPoints; // 0x_            
            std::int32_t m_nRayDigTimes; // 0x_            
            bool m_bNoShootingWhileInAir; // 0x_            
            bool m_bListenForKeypress; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector2D m_vVelocityMultOnKeypress; // 0x_            
            Vector2D m_vVelocityOffsetOnKeypress; // 0x_            
            bool m_bShowTrajectory; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector2D m_vVelocityMultOnExplode; // 0x_            
            Vector2D m_vVelocityOffsetOnExplode; // 0x_            
            std::int32_t m_nExplodeTimes; // 0x_            
            float m_flRadiusChangePerExplode; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_unID) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_sWeaponLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_sWeaponLocDesc) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_sWeaponSwapSound) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_sWeaponFireSound) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_sWeaponImage) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bIsPlayerWeapon) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_strGraphicInfoName) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_weaponAttackActivity) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flShotCreationTime) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flHitRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flTerrainCarveRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flDamageRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flLockedAngle) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flLockedPower) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flReloadTime) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_nSplitCount) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flSplitTime) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flSplitRepeatTime) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flSplitDispersion) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bSplitAtTop) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bZeroXOnSplit) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bSplitRepeats) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_szSplitWeapon) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flMaxSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flDragMult) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flWindMult) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bIsRay) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flRangeMult) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_nInitialShotCount) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_nInitialShotAngleDispersionPer) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flManaCost) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bDisabled) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bBounces) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bBounceOffTarget) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flFuseTime) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flBounceDrag) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_nMaxReloads) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flGravityMult) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bProximityFuse) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bUseHighArc) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bCollides) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bDirectAimAtTarget) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_nWeaponPoints) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_nRayDigTimes) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bNoShootingWhileInAir) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bListenForKeypress) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_vVelocityMultOnKeypress) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_vVelocityOffsetOnKeypress) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_bShowTrajectory) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_vVelocityMultOnExplode) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_vVelocityOffsetOnExplode) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_nExplodeTimes) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyWeaponInfo_t, m_flRadiusChangePerExplode) == 0x_);
        
        static_assert(sizeof(source2sdk::client::ArtyWeaponInfo_t) == 0x_);
    };
};
