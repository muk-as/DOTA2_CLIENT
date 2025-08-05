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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xe0
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct RnBodyDesc_t
        {
        public:
            CUtlString m_sDebugName; // 0x0            
            Vector m_vPosition; // 0x8            
            QuaternionStorage m_qOrientation; // 0x14            
            Vector m_vLinearVelocity; // 0x24            
            Vector m_vAngularVelocity; // 0x30            
            Vector m_vLocalMassCenter; // 0x3c            
            Vector m_LocalInertiaInv[3]; // 0x48            
            float m_flMassInv; // 0x6c            
            float m_flGameMass; // 0x70            
            float m_flMassScaleInv; // 0x74            
            float m_flInertiaScaleInv; // 0x78            
            float m_flLinearDamping; // 0x7c            
            float m_flAngularDamping; // 0x80            
            float m_flLinearDrag; // 0x84            
            float m_flAngularDrag; // 0x88            
            float m_flLinearBuoyancyDrag; // 0x8c            
            float m_flAngularBuoyancyDrag; // 0x90            
            Vector m_vLastAwakeForceAccum; // 0x94            
            Vector m_vLastAwakeTorqueAccum; // 0xa0            
            float m_flBuoyancyFactor; // 0xac            
            float m_flGravityScale; // 0xb0            
            float m_flTimeScale; // 0xb4            
            std::int32_t m_nBodyType; // 0xb8            
            std::uint32_t m_nGameIndex; // 0xbc            
            std::uint32_t m_nGameFlags; // 0xc0            
            std::int8_t m_nMinVelocityIterations; // 0xc4            
            std::int8_t m_nMinPositionIterations; // 0xc5            
            std::int8_t m_nMassPriority; // 0xc6            
            bool m_bEnabled; // 0xc7            
            bool m_bSleeping; // 0xc8            
            bool m_bIsContinuousEnabled; // 0xc9            
            bool m_bDragEnabled; // 0xca            
            bool m_bBuoyancyDragEnabled; // 0xcb            
            Vector m_vGravity; // 0xcc            
            bool m_bSpeculativeEnabled; // 0xd8            
            bool m_bHasShadowController; // 0xd9            
            source2sdk::physicslib::DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // 0xda            
            uint8_t _pad00db[0x5];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_sDebugName) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_vPosition) == 0x8);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_qOrientation) == 0x14);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_vLinearVelocity) == 0x24);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_vAngularVelocity) == 0x30);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_vLocalMassCenter) == 0x3c);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_LocalInertiaInv) == 0x48);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flMassInv) == 0x6c);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flGameMass) == 0x70);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flMassScaleInv) == 0x74);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flInertiaScaleInv) == 0x78);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flLinearDamping) == 0x7c);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flAngularDamping) == 0x80);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flLinearDrag) == 0x84);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flAngularDrag) == 0x88);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flLinearBuoyancyDrag) == 0x8c);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flAngularBuoyancyDrag) == 0x90);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_vLastAwakeForceAccum) == 0x94);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_vLastAwakeTorqueAccum) == 0xa0);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flBuoyancyFactor) == 0xac);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flGravityScale) == 0xb0);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_flTimeScale) == 0xb4);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_nBodyType) == 0xb8);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_nGameIndex) == 0xbc);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_nGameFlags) == 0xc0);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_nMinVelocityIterations) == 0xc4);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_nMinPositionIterations) == 0xc5);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_nMassPriority) == 0xc6);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_bEnabled) == 0xc7);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_bSleeping) == 0xc8);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_bIsContinuousEnabled) == 0xc9);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_bDragEnabled) == 0xca);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_bBuoyancyDragEnabled) == 0xcb);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_vGravity) == 0xcc);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_bSpeculativeEnabled) == 0xd8);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_bHasShadowController) == 0xd9);
        static_assert(offsetof(source2sdk::physicslib::RnBodyDesc_t, m_nDynamicContinuousContactBehavior) == 0xda);
        
        static_assert(sizeof(source2sdk::physicslib::RnBodyDesc_t) == 0xe0);
    };
};
