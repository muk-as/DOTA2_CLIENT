#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBreakableProp.hpp"
#include "source2sdk/server/CPhysicsProp__CrateType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xaf0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
    // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
    // static metadata: MNetworkIncludeByName "m_spawnflags"
    // static metadata: MNetworkVarNames "bool m_bAwake"
    #pragma pack(push, 1)
    class CPhysicsProp : public server::CBreakableProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x948[0x8]; // 0x948
        entity2::CEntityIOOutput m_MotionEnabled; // 0x950        
        entity2::CEntityIOOutput m_OnAwakened; // 0x978        
        entity2::CEntityIOOutput m_OnAwake; // 0x9a0        
        entity2::CEntityIOOutput m_OnAsleep; // 0x9c8        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0x9f0        
        entity2::CEntityIOOutput m_OnOutOfWorld; // 0xa18        
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0xa40        
        bool m_bForceNavIgnore; // 0xa68        
        bool m_bNoNavmeshBlocker; // 0xa69        
        bool m_bForceNpcExclude; // 0xa6a        
        [[maybe_unused]] std::uint8_t pad_0xa6b[0x1]; // 0xa6b
        float m_massScale; // 0xa6c        
        float m_inertiaScale; // 0xa70        
        float m_buoyancyScale; // 0xa74        
        int32_t m_damageType; // 0xa78        
        int32_t m_damageToEnableMotion; // 0xa7c        
        float m_flForceToEnableMotion; // 0xa80        
        bool m_bThrownByPlayer; // 0xa84        
        bool m_bDroppedByPlayer; // 0xa85        
        bool m_bTouchedByPlayer; // 0xa86        
        bool m_bFirstCollisionAfterLaunch; // 0xa87        
        int32_t m_iExploitableByPlayer; // 0xa88        
        bool m_bHasBeenAwakened; // 0xa8c        
        bool m_bIsOverrideProp; // 0xa8d        
        [[maybe_unused]] std::uint8_t pad_0xa8e[0x2]; // 0xa8e
        entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xa90        
        int32_t m_iInitialGlowState; // 0xa94        
        int32_t m_nGlowRange; // 0xa98        
        int32_t m_nGlowRangeMin; // 0xa9c        
        Color m_glowColor; // 0xaa0        
        bool m_bShouldAutoConvertBackFromDebris; // 0xaa4        
        bool m_bMuteImpactEffects; // 0xaa5        
        [[maybe_unused]] std::uint8_t pad_0xaa6[0x9]; // 0xaa6
        bool m_bAcceptDamageFromHeldObjects; // 0xaaf        
        bool m_bEnableUseOutput; // 0xab0        
        [[maybe_unused]] std::uint8_t pad_0xab1[0x3]; // 0xab1
        server::CPhysicsProp__CrateType_t m_CrateType; // 0xab4        
        CUtlSymbolLarge m_strItemClass[4]; // 0xab8        
        int32_t m_nItemCount[4]; // 0xad8        
        bool m_bRemovableForAmmoBalancing; // 0xae8        
        // metadata: MNetworkEnable
        bool m_bAwake; // 0xae9        
        [[maybe_unused]] std::uint8_t pad_0xaea[0x6];
        
        // Datamap fields:
        // void InputEnableMotion; // 0x0
        // void InputDisableMotion; // 0x0
        // void InputWake; // 0x0
        // bool InputSetAutoConvertBackFromDebris; // 0x0
        // void InputSleep; // 0x0
        // void InputDisableFloating; // 0x0
        // void InputStartGlowing; // 0x0
        // void InputStopGlowing; // 0x0
        // Vector InputSetGlowOverride; // 0x0
        // int32_t InputSetGlowRange; // 0x0
        // float InputSetMass; // 0x0
        // void InputEnableGravity; // 0x0
        // void InputDisableGravity; // 0x0
        // void InputEnableDrag; // 0x0
        // void InputDisableDrag; // 0x0
        // void InputEnableCollisions; // 0x0
        // void InputDisableCollisions; // 0x0
        // bool forcemotiondisabled; // 0x7fffffff
        // bool phys_start_asleep; // 0x7fffffff
        // void CPhysicsPropClearFlagsThink; // 0x0
        // int32_t m_nNavObstacleType; // 0xaa8
        // bool m_bUpdateNavWhenMoving; // 0xaac
        // bool m_bForceNavObstacleCut; // 0xaad
        // bool m_bAllowObstacleConvexHullMerging; // 0xaae
        // int32_t health; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysicsProp because it is not a standard-layout class
    static_assert(sizeof(CPhysicsProp) == 0xaf0);
};
