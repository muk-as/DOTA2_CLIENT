#pragma once
#include "source2sdk/client/CDOTAFlappySkywrathDifficulty.hpp"
#include "source2sdk/client/CDOTAFlappySkywrathInputAction.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
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
        // CUtlVector<client::CDOTAFlappySkywrathDifficulty> vecDifficulties;
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
        [[maybe_unused]] std::uint8_t pad_0xb0[0x28]; // 0xb0
        // vecInputActions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTAFlappySkywrathInputAction> vecInputActions;
        char vecInputActions[0x18]; // 0xd8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, strID) == 0x0);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, sLayoutPath) == 0x8);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, sMapFile) == 0x10);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, sMapLoopingFile) == 0x18);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, sMapBGFile) == 0x20);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, vecDifficulties) == 0x28);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, flMinimumSpeed) == 0x40);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, flGravity) == 0x44);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, flJumpPower) == 0x48);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, flGlideAcceleration) == 0x4c);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, flGlideFallSpeed) == 0x50);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, flDashDuration) == 0x54);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, flDashBoost) == 0x58);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, flDashSpeed) == 0x5c);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, flDiveDuration) == 0x60);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, flDiveSpeed) == 0x64);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, flTrackDistance) == 0x68);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, flCameraDistance) == 0x6c);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, vCameraOffset) == 0x70);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, vCameraEdgeThresholds) == 0x7c);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, flCameraAcceleration) == 0x84);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, vPlayerSize) == 0x88);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, vPlayerVerticalBounds) == 0x90);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, vObstacleVerticalBounds) == 0x98);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, vObstacleHorizontalBounds) == 0xa0);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, flTopOffsetToTip) == 0xa8);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, flBottomOffsetToTip) == 0xac);
    static_assert(offsetof(CDOTAFlappySkywrathDefinition, vecInputActions) == 0xd8);
    
    static_assert(sizeof(CDOTAFlappySkywrathDefinition) == 0xf0);
};
