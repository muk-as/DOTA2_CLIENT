#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTAFlappySkywrathDifficulty.hpp"
#include "source2sdk/client/CDOTAFlappySkywrathInputAction.hpp"

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
        // static metadata: MVDataSingleton
        #pragma pack(push, 1)
        class CDOTAFlappySkywrathDefinition
        {
        public:
            CUtlString strID; // 0x_            
            CUtlString sLayoutPath; // 0x_            
            CUtlString sMapFile; // 0x_            
            CUtlString sMapLoopingFile; // 0x_            
            CUtlString sMapBGFile; // 0x_            
            // vecDifficulties has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAFlappySkywrathDifficulty> vecDifficulties;
            char vecDifficulties[0x_]; // 0x_            
            float flMinimumSpeed; // 0x_            
            float flGravity; // 0x_            
            float flJumpPower; // 0x_            
            float flGlideAcceleration; // 0x_            
            float flGlideFallSpeed; // 0x_            
            float flDashDuration; // 0x_            
            float flDashBoost; // 0x_            
            float flDashSpeed; // 0x_            
            float flDiveDuration; // 0x_            
            float flDiveSpeed; // 0x_            
            float flTrackDistance; // 0x_            
            float flCameraDistance; // 0x_            
            Vector vCameraOffset; // 0x_            
            Vector2D vCameraEdgeThresholds; // 0x_            
            float flCameraAcceleration; // 0x_            
            Vector2D vPlayerSize; // 0x_            
            Vector2D vPlayerVerticalBounds; // 0x_            
            Vector2D vObstacleVerticalBounds; // 0x_            
            Vector2D vObstacleHorizontalBounds; // 0x_            
            float flTopOffsetToTip; // 0x_            
            float flBottomOffsetToTip; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // vecInputActions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAFlappySkywrathInputAction> vecInputActions;
            char vecInputActions[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, strID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, sLayoutPath) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, sMapFile) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, sMapLoopingFile) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, sMapBGFile) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, vecDifficulties) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flMinimumSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flGravity) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flJumpPower) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flGlideAcceleration) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flGlideFallSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flDashDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flDashBoost) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flDashSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flDiveDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flDiveSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flTrackDistance) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flCameraDistance) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, vCameraOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, vCameraEdgeThresholds) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flCameraAcceleration) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, vPlayerSize) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, vPlayerVerticalBounds) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, vObstacleVerticalBounds) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, vObstacleHorizontalBounds) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flTopOffsetToTip) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flBottomOffsetToTip) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, vecInputActions) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAFlappySkywrathDefinition) == 0x_);
    };
};
