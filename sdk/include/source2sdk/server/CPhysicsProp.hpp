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
    // Size: 0xb18
    // Has VTable
    // Construct allowed
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
        [[maybe_unused]] std::uint8_t pad_0x970[0x8]; // 0x970
        entity2::CEntityIOOutput m_MotionEnabled; // 0x978        
        entity2::CEntityIOOutput m_OnAwakened; // 0x9a0        
        entity2::CEntityIOOutput m_OnAwake; // 0x9c8        
        entity2::CEntityIOOutput m_OnAsleep; // 0x9f0        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0xa18        
        entity2::CEntityIOOutput m_OnOutOfWorld; // 0xa40        
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0xa68        
        bool m_bForceNavIgnore; // 0xa90        
        bool m_bNoNavmeshBlocker; // 0xa91        
        bool m_bForceNpcExclude; // 0xa92        
        [[maybe_unused]] std::uint8_t pad_0xa93[0x1]; // 0xa93
        float m_massScale; // 0xa94        
        float m_inertiaScale; // 0xa98        
        float m_buoyancyScale; // 0xa9c        
        int32_t m_damageType; // 0xaa0        
        int32_t m_damageToEnableMotion; // 0xaa4        
        float m_flForceToEnableMotion; // 0xaa8        
        bool m_bThrownByPlayer; // 0xaac        
        bool m_bDroppedByPlayer; // 0xaad        
        bool m_bTouchedByPlayer; // 0xaae        
        bool m_bFirstCollisionAfterLaunch; // 0xaaf        
        int32_t m_iExploitableByPlayer; // 0xab0        
        bool m_bHasBeenAwakened; // 0xab4        
        bool m_bIsOverrideProp; // 0xab5        
        [[maybe_unused]] std::uint8_t pad_0xab6[0x2]; // 0xab6
        entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xab8        
        int32_t m_iInitialGlowState; // 0xabc        
        int32_t m_nGlowRange; // 0xac0        
        int32_t m_nGlowRangeMin; // 0xac4        
        Color m_glowColor; // 0xac8        
        bool m_bShouldAutoConvertBackFromDebris; // 0xacc        
        bool m_bMuteImpactEffects; // 0xacd        
        [[maybe_unused]] std::uint8_t pad_0xace[0x9]; // 0xace
        bool m_bAcceptDamageFromHeldObjects; // 0xad7        
        bool m_bEnableUseOutput; // 0xad8        
        [[maybe_unused]] std::uint8_t pad_0xad9[0x3]; // 0xad9
        server::CPhysicsProp__CrateType_t m_CrateType; // 0xadc        
        CUtlSymbolLarge m_strItemClass[4]; // 0xae0        
        int32_t m_nItemCount[4]; // 0xb00        
        bool m_bRemovableForAmmoBalancing; // 0xb10        
        // metadata: MNetworkEnable
        bool m_bAwake; // 0xb11        
        [[maybe_unused]] std::uint8_t pad_0xb12[0x6];
        
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
        // int32_t m_nNavObstacleType; // 0xad0
        // bool m_bUpdateNavWhenMoving; // 0xad4
        // bool m_bForceNavObstacleCut; // 0xad5
        // bool m_bAllowObstacleConvexHullMerging; // 0xad6
        // int32_t health; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysicsProp because it is not a standard-layout class
    static_assert(sizeof(CPhysicsProp) == 0xb18);
};
