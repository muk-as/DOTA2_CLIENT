#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"

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
        class C_OP_SetPerChildControlPoint : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "group ID to affect"
            std::int32_t m_nChildGroupID; // 0x_            
            // metadata: MPropertyFriendlyName "control point to set"
            std::int32_t m_nFirstControlPoint; // 0x_            
            // metadata: MPropertyFriendlyName "# of children to set"
            std::int32_t m_nNumControlPoints; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "particle increment amount"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nParticleIncrement; // 0x_            
            // metadata: MPropertyFriendlyName "first particle to copy"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x_            
            // metadata: MPropertyFriendlyName "set orientation from velocity"
            bool m_bSetOrientation; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "orientation vector"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nOrientationField; // 0x_            
            // metadata: MPropertyFriendlyName "set number of children based on particle count"
            bool m_bNumBasedOnParticleCount; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetPerChildControlPoint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetPerChildControlPoint) == 0x_);
    };
};
