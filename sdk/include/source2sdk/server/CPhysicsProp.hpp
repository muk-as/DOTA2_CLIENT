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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_MotionEnabled; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnAwakened; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnAwake; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnAsleep; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnOutOfWorld; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0x_            
            bool m_bForceNavIgnore; // 0x_            
            bool m_bNoNavmeshBlocker; // 0x_            
            bool m_bForceNpcExclude; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_massScale; // 0x_            
            float m_buoyancyScale; // 0x_            
            std::int32_t m_damageType; // 0x_            
            std::int32_t m_damageToEnableMotion; // 0x_            
            float m_flForceToEnableMotion; // 0x_            
            bool m_bThrownByPlayer; // 0x_            
            bool m_bDroppedByPlayer; // 0x_            
            bool m_bTouchedByPlayer; // 0x_            
            bool m_bFirstCollisionAfterLaunch; // 0x_            
            bool m_bHasBeenAwakened; // 0x_            
            bool m_bIsOverrideProp; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flLastBurn; // 0x_            
            source2sdk::physicslib::DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0x_            
            std::int32_t m_iInitialGlowState; // 0x_            
            std::int32_t m_nGlowRange; // 0x_            
            std::int32_t m_nGlowRangeMin; // 0x_            
            Color m_glowColor; // 0x_            
            bool m_bShouldAutoConvertBackFromDebris; // 0x_            
            bool m_bMuteImpactEffects; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bAcceptDamageFromHeldObjects; // 0x_            
            bool m_bEnableUseOutput; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CPhysicsProp_CrateType_t m_CrateType; // 0x_            
            CUtlSymbolLarge m_strItemClass[4]; // 0x_            
            std::int32_t m_nItemCount[4]; // 0x_            
            bool m_bRemovableForAmmoBalancing; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAwake; // 0x_            
            bool m_bAttachedToReferenceFrame; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputEnableMotion; // 0x_
            // void InputDisableMotion; // 0x_
            // void InputWake; // 0x_
            // bool InputSetAutoConvertBackFromDebris; // 0x_
            // void InputSleep; // 0x_
            // void InputStartGlowing; // 0x_
            // void InputStopGlowing; // 0x_
            // Vector InputSetGlowOverride; // 0x_
            // int32_t InputSetGlowRange; // 0x_
            // float InputSetMass; // 0x_
            // void InputEnableGravity; // 0x_
            // void InputDisableGravity; // 0x_
            // void InputEnableDrag; // 0x_
            // void InputDisableDrag; // 0x_
            // void InputEnableCollisions; // 0x_
            // void InputDisableCollisions; // 0x_
            // bool forcemotiondisabled; // 0x_
            // bool phys_start_asleep; // 0x_
            // void CPhysicsPropClearFlagsThink; // 0x_
            // int32_t m_nNavObstacleType; // 0x_
            // bool m_bUpdateNavWhenMoving; // 0x_
            // bool m_bForceNavObstacleCut; // 0x_
            // bool m_bAllowObstacleConvexHullMerging; // 0x_
            // int32_t health; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsProp) == 0x_);
    };
};
