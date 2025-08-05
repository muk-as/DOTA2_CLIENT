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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xb70
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
            uint8_t _pad09c0[0x8]; // 0x9c0
            source2sdk::entity2::CEntityIOOutput m_MotionEnabled; // 0x9c8            
            source2sdk::entity2::CEntityIOOutput m_OnAwakened; // 0x9f0            
            source2sdk::entity2::CEntityIOOutput m_OnAwake; // 0xa18            
            source2sdk::entity2::CEntityIOOutput m_OnAsleep; // 0xa40            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0xa68            
            source2sdk::entity2::CEntityIOOutput m_OnOutOfWorld; // 0xa90            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0xab8            
            bool m_bForceNavIgnore; // 0xae0            
            bool m_bNoNavmeshBlocker; // 0xae1            
            bool m_bForceNpcExclude; // 0xae2            
            uint8_t _pad0ae3[0x1]; // 0xae3
            float m_massScale; // 0xae4            
            float m_buoyancyScale; // 0xae8            
            std::int32_t m_damageType; // 0xaec            
            std::int32_t m_damageToEnableMotion; // 0xaf0            
            float m_flForceToEnableMotion; // 0xaf4            
            bool m_bThrownByPlayer; // 0xaf8            
            bool m_bDroppedByPlayer; // 0xaf9            
            bool m_bTouchedByPlayer; // 0xafa            
            bool m_bFirstCollisionAfterLaunch; // 0xafb            
            bool m_bHasBeenAwakened; // 0xafc            
            bool m_bIsOverrideProp; // 0xafd            
            uint8_t _pad0afe[0x2]; // 0xafe
            source2sdk::entity2::GameTime_t m_flLastBurn; // 0xb00            
            source2sdk::physicslib::DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // 0xb04            
            uint8_t _pad0b05[0x3]; // 0xb05
            source2sdk::entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xb08            
            std::int32_t m_iInitialGlowState; // 0xb0c            
            std::int32_t m_nGlowRange; // 0xb10            
            std::int32_t m_nGlowRangeMin; // 0xb14            
            Color m_glowColor; // 0xb18            
            bool m_bShouldAutoConvertBackFromDebris; // 0xb1c            
            bool m_bMuteImpactEffects; // 0xb1d            
            uint8_t _pad0b1e[0x9]; // 0xb1e
            bool m_bAcceptDamageFromHeldObjects; // 0xb27            
            bool m_bEnableUseOutput; // 0xb28            
            uint8_t _pad0b29[0x3]; // 0xb29
            source2sdk::server::CPhysicsProp_CrateType_t m_CrateType; // 0xb2c            
            CUtlSymbolLarge m_strItemClass[4]; // 0xb30            
            std::int32_t m_nItemCount[4]; // 0xb50            
            bool m_bRemovableForAmmoBalancing; // 0xb60            
            // metadata: MNetworkEnable
            bool m_bAwake; // 0xb61            
            bool m_bAttachedToReferenceFrame; // 0xb62            
            uint8_t _pad0b63[0xd];
            
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
            // int32_t m_nNavObstacleType; // 0xb20
            // bool m_bUpdateNavWhenMoving; // 0xb24
            // bool m_bForceNavObstacleCut; // 0xb25
            // bool m_bAllowObstacleConvexHullMerging; // 0xb26
            // int32_t health; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsProp) == 0xb70);
    };
};
