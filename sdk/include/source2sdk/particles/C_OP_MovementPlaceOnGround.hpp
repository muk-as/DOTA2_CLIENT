#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleTraceMissBehavior_t.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_MovementPlaceOnGround : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "offset"
            source2sdk::particleslib::CPerParticleFloatInput m_flOffset; // 0x_            
            // metadata: MPropertyFriendlyName "max trace length"
            float m_flMaxTraceLength; // 0x_            
            // metadata: MPropertyFriendlyName "CP movement tolerance"
            float m_flTolerance; // 0x_            
            // metadata: MPropertyFriendlyName "trace direction"
            source2sdk::particleslib::CPerParticleVecInput m_vecTraceDir; // 0x_            
            // metadata: MPropertyFriendlyName "trace offset"
            float m_flTraceOffset; // 0x_            
            // metadata: MPropertyFriendlyName "interpolation rate"
            float m_flLerpRate; // 0x_            
            // metadata: MPropertyFriendlyName "collision group"
            char m_CollisionGroupName[128]; // 0x_            
            // metadata: MPropertyFriendlyName "Trace Set"
            source2sdk::particles::ParticleTraceSet_t m_nTraceSet; // 0x_            
            // metadata: MPropertyFriendlyName "reference CP 1"
            std::int32_t m_nRefCP1; // 0x_            
            // metadata: MPropertyFriendlyName "reference CP 2"
            std::int32_t m_nRefCP2; // 0x_            
            // metadata: MPropertyFriendlyName "interploation distance tolerance cp"
            std::int32_t m_nLerpCP; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "No Collision Behavior"
            source2sdk::particles::ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x_            
            // metadata: MPropertyFriendlyName "include default contents trace hulls"
            bool m_bIncludeShotHull; // 0x_            
            // metadata: MPropertyFriendlyName "include water"
            bool m_bIncludeWater; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "set normal"
            bool m_bSetNormal; // 0x_            
            // metadata: MPropertyFriendlyName "treat offset as scalar of particle radius"
            bool m_bScaleOffset; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "preserve initial Z-offset relative to cp"
            std::int32_t m_nPreserveOffsetCP; // 0x_            
            // metadata: MPropertyFriendlyName "CP Entity to Ignore for Collisions"
            std::int32_t m_nIgnoreCP; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_MovementPlaceOnGround because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_MovementPlaceOnGround) == 0x_);
    };
};
