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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xf0
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataSingleton
        #pragma pack(push, 1)
        class CDOTAFlappySkywrathDefinition
        {
        public:
            CUtlString strID; // 0x0            
            CUtlString sLayoutPath; // 0x8            
            CUtlString sMapFile; // 0x10            
            CUtlString sMapLoopingFile; // 0x18            
            CUtlString sMapBGFile; // 0x20            
            // vecDifficulties has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAFlappySkywrathDifficulty> vecDifficulties;
            char vecDifficulties[0x18]; // 0x28            
            float flMinimumSpeed; // 0x40            
            float flGravity; // 0x44            
            float flJumpPower; // 0x48            
            float flGlideAcceleration; // 0x4c            
            float flGlideFallSpeed; // 0x50            
            float flDashDuration; // 0x54            
            float flDashBoost; // 0x58            
            float flDashSpeed; // 0x5c            
            float flDiveDuration; // 0x60            
            float flDiveSpeed; // 0x64            
            float flTrackDistance; // 0x68            
            float flCameraDistance; // 0x6c            
            Vector vCameraOffset; // 0x70            
            Vector2D vCameraEdgeThresholds; // 0x7c            
            float flCameraAcceleration; // 0x84            
            Vector2D vPlayerSize; // 0x88            
            Vector2D vPlayerVerticalBounds; // 0x90            
            Vector2D vObstacleVerticalBounds; // 0x98            
            Vector2D vObstacleHorizontalBounds; // 0xa0            
            float flTopOffsetToTip; // 0xa8            
            float flBottomOffsetToTip; // 0xac            
            uint8_t _pad00b0[0x28]; // 0xb0
            // vecInputActions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAFlappySkywrathInputAction> vecInputActions;
            char vecInputActions[0x18]; // 0xd8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, strID) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, sLayoutPath) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, sMapFile) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, sMapLoopingFile) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, sMapBGFile) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, vecDifficulties) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flMinimumSpeed) == 0x40);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flGravity) == 0x44);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flJumpPower) == 0x48);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flGlideAcceleration) == 0x4c);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flGlideFallSpeed) == 0x50);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flDashDuration) == 0x54);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flDashBoost) == 0x58);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flDashSpeed) == 0x5c);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flDiveDuration) == 0x60);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flDiveSpeed) == 0x64);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flTrackDistance) == 0x68);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flCameraDistance) == 0x6c);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, vCameraOffset) == 0x70);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, vCameraEdgeThresholds) == 0x7c);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flCameraAcceleration) == 0x84);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, vPlayerSize) == 0x88);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, vPlayerVerticalBounds) == 0x90);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, vObstacleVerticalBounds) == 0x98);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, vObstacleHorizontalBounds) == 0xa0);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flTopOffsetToTip) == 0xa8);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, flBottomOffsetToTip) == 0xac);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDefinition, vecInputActions) == 0xd8);
        
        static_assert(sizeof(source2sdk::client::CDOTAFlappySkywrathDefinition) == 0xf0);
    };
};
