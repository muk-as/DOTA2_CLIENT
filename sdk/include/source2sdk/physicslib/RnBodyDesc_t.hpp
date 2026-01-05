#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/physicslib/DynamicContinuousContactBehavior_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct RnBodyDesc_t
        {
        public:
            CUtlString m_sDebugName; // 0x_            
            Vector m_vPosition; // 0x_            
            QuaternionStorage m_qOrientation; // 0x_            
            Vector m_vLinearVelocity; // 0x_            
            Vector m_vAngularVelocity; // 0x_            
            Vector m_vLocalMassCenter; // 0x_            
            Vector m_LocalInertiaInv[3]; // 0x_            
            float m_flMassInv; // 0x_            
            float m_flGameMass; // 0x_            
            float m_flMassScaleInv; // 0x_            
            float m_flInertiaScaleInv; // 0x_            
            float m_flLinearDamping; // 0x_            
            float m_flAngularDamping; // 0x_            
            float m_flLinearDragScale; // 0x_            
            float m_flAngularDragScale; // 0x_            
            float m_flLinearFluidDragScale; // 0x_            
            float m_flAngularFluidDragScale; // 0x_            
            Vector m_vLastAwakeForceAccum; // 0x_            
            Vector m_vLastAwakeTorqueAccum; // 0x_            
            float m_flBuoyancyScale; // 0x_            
            float m_flGravityScale; // 0x_            
            float m_flTimeScale; // 0x_            
            std::int32_t m_nBodyType; // 0x_            
            std::uint32_t m_nGameIndex; // 0x_            
            std::uint32_t m_nGameFlags; // 0x_            
            std::int8_t m_nMinVelocityIterations; // 0x_            
            std::int8_t m_nMinPositionIterations; // 0x_            
            std::int8_t m_nMassPriority; // 0x_            
            bool m_bEnabled; // 0x_            
            bool m_bSleeping; // 0x_            
            bool m_bIsContinuousEnabled; // 0x_            
            bool m_bDragEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vGravity; // 0x_            
            bool m_bSpeculativeEnabled; // 0x_            
            bool m_bHasShadowController; // 0x_            
            source2sdk::physicslib::DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_sDebugName) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_vPosition) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_qOrientation) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_vLinearVelocity) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_vAngularVelocity) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_vLocalMassCenter) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_LocalInertiaInv) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flMassInv) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flGameMass) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flMassScaleInv) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flInertiaScaleInv) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flLinearDamping) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flAngularDamping) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flLinearDragScale) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flAngularDragScale) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flLinearFluidDragScale) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flAngularFluidDragScale) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_vLastAwakeForceAccum) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_vLastAwakeTorqueAccum) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flBuoyancyScale) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flGravityScale) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flTimeScale) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_nBodyType) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_nGameIndex) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_nGameFlags) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_nMinVelocityIterations) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_nMinPositionIterations) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_nMassPriority) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_bEnabled) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_bSleeping) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_bIsContinuousEnabled) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_bDragEnabled) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_vGravity) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_bSpeculativeEnabled) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_bHasShadowController) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_nDynamicContinuousContactBehavior) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::RnBodyDesc_t) == 0x_);
    };
};
