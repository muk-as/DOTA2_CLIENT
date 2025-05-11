#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/physicslib/DynamicContinuousContactBehavior_t.hpp"
#include "source2sdk/server/CBreakableProp.hpp"
#include "source2sdk/server/CPhysicsProp_CrateType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb00
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
        class CPhysicsProp : public source2sdk::server::CBreakableProp
        {
        public:
            uint8_t _pad0960[0x8]; // 0x960
            source2sdk::entity2::CEntityIOOutput m_MotionEnabled; // 0x968            
            source2sdk::entity2::CEntityIOOutput m_OnAwakened; // 0x990            
            source2sdk::entity2::CEntityIOOutput m_OnAwake; // 0x9b8            
            source2sdk::entity2::CEntityIOOutput m_OnAsleep; // 0x9e0            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0xa08            
            source2sdk::entity2::CEntityIOOutput m_OnOutOfWorld; // 0xa30            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0xa58            
            bool m_bForceNavIgnore; // 0xa80            
            bool m_bNoNavmeshBlocker; // 0xa81            
            bool m_bForceNpcExclude; // 0xa82            
            uint8_t _pad0a83[0x1]; // 0xa83
            float m_massScale; // 0xa84            
            float m_buoyancyScale; // 0xa88            
            std::int32_t m_damageType; // 0xa8c            
            std::int32_t m_damageToEnableMotion; // 0xa90            
            float m_flForceToEnableMotion; // 0xa94            
            bool m_bThrownByPlayer; // 0xa98            
            bool m_bDroppedByPlayer; // 0xa99            
            bool m_bTouchedByPlayer; // 0xa9a            
            bool m_bFirstCollisionAfterLaunch; // 0xa9b            
            bool m_bHasBeenAwakened; // 0xa9c            
            bool m_bIsOverrideProp; // 0xa9d            
            source2sdk::physicslib::DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // 0xa9e            
            uint8_t _pad0a9f[0x1]; // 0xa9f
            source2sdk::entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xaa0            
            std::int32_t m_iInitialGlowState; // 0xaa4            
            std::int32_t m_nGlowRange; // 0xaa8            
            std::int32_t m_nGlowRangeMin; // 0xaac            
            Color m_glowColor; // 0xab0            
            bool m_bShouldAutoConvertBackFromDebris; // 0xab4            
            bool m_bMuteImpactEffects; // 0xab5            
            uint8_t _pad0ab6[0x9]; // 0xab6
            bool m_bAcceptDamageFromHeldObjects; // 0xabf            
            bool m_bEnableUseOutput; // 0xac0            
            uint8_t _pad0ac1[0x3]; // 0xac1
            source2sdk::server::CPhysicsProp_CrateType_t m_CrateType; // 0xac4            
            CUtlSymbolLarge m_strItemClass[4]; // 0xac8            
            std::int32_t m_nItemCount[4]; // 0xae8            
            bool m_bRemovableForAmmoBalancing; // 0xaf8            
            // metadata: MNetworkEnable
            bool m_bAwake; // 0xaf9            
            uint8_t _pad0afa[0x6];
            
            // Datamap fields:
            // void InputEnableMotion; // 0x0
            // void InputDisableMotion; // 0x0
            // void InputWake; // 0x0
            // bool InputSetAutoConvertBackFromDebris; // 0x0
            // void InputSleep; // 0x0
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
            // int32_t m_nNavObstacleType; // 0xab8
            // bool m_bUpdateNavWhenMoving; // 0xabc
            // bool m_bForceNavObstacleCut; // 0xabd
            // bool m_bAllowObstacleConvexHullMerging; // 0xabe
            // int32_t health; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsProp) == 0xb00);
    };
};
