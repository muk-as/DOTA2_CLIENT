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
        // Size: 0xb48
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
            uint8_t _pad09a8[0x8]; // 0x9a8
            source2sdk::entity2::CEntityIOOutput m_MotionEnabled; // 0x9b0            
            source2sdk::entity2::CEntityIOOutput m_OnAwakened; // 0x9d8            
            source2sdk::entity2::CEntityIOOutput m_OnAwake; // 0xa00            
            source2sdk::entity2::CEntityIOOutput m_OnAsleep; // 0xa28            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0xa50            
            source2sdk::entity2::CEntityIOOutput m_OnOutOfWorld; // 0xa78            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0xaa0            
            bool m_bForceNavIgnore; // 0xac8            
            bool m_bNoNavmeshBlocker; // 0xac9            
            bool m_bForceNpcExclude; // 0xaca            
            uint8_t _pad0acb[0x1]; // 0xacb
            float m_massScale; // 0xacc            
            float m_buoyancyScale; // 0xad0            
            std::int32_t m_damageType; // 0xad4            
            std::int32_t m_damageToEnableMotion; // 0xad8            
            float m_flForceToEnableMotion; // 0xadc            
            bool m_bThrownByPlayer; // 0xae0            
            bool m_bDroppedByPlayer; // 0xae1            
            bool m_bTouchedByPlayer; // 0xae2            
            bool m_bFirstCollisionAfterLaunch; // 0xae3            
            bool m_bHasBeenAwakened; // 0xae4            
            bool m_bIsOverrideProp; // 0xae5            
            source2sdk::physicslib::DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // 0xae6            
            uint8_t _pad0ae7[0x1]; // 0xae7
            source2sdk::entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xae8            
            std::int32_t m_iInitialGlowState; // 0xaec            
            std::int32_t m_nGlowRange; // 0xaf0            
            std::int32_t m_nGlowRangeMin; // 0xaf4            
            Color m_glowColor; // 0xaf8            
            bool m_bShouldAutoConvertBackFromDebris; // 0xafc            
            bool m_bMuteImpactEffects; // 0xafd            
            uint8_t _pad0afe[0x9]; // 0xafe
            bool m_bAcceptDamageFromHeldObjects; // 0xb07            
            bool m_bEnableUseOutput; // 0xb08            
            uint8_t _pad0b09[0x3]; // 0xb09
            source2sdk::server::CPhysicsProp_CrateType_t m_CrateType; // 0xb0c            
            CUtlSymbolLarge m_strItemClass[4]; // 0xb10            
            std::int32_t m_nItemCount[4]; // 0xb30            
            bool m_bRemovableForAmmoBalancing; // 0xb40            
            // metadata: MNetworkEnable
            bool m_bAwake; // 0xb41            
            uint8_t _pad0b42[0x6];
            
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
            // int32_t m_nNavObstacleType; // 0xb00
            // bool m_bUpdateNavWhenMoving; // 0xb04
            // bool m_bForceNavObstacleCut; // 0xb05
            // bool m_bAllowObstacleConvexHullMerging; // 0xb06
            // int32_t health; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsProp) == 0xb48);
    };
};
