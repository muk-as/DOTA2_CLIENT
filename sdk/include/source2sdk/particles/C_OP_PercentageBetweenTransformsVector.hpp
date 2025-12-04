#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"

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
        class C_OP_PercentageBetweenTransformsVector : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x_            
            // metadata: MPropertyFriendlyName "percentage minimum"
            float m_flInputMin; // 0x_            
            // metadata: MPropertyFriendlyName "percentage maximum"
            float m_flInputMax; // 0x_            
            // metadata: MPropertyFriendlyName "output minimum"
            // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
            Vector m_vecOutputMin; // 0x_            
            // metadata: MPropertyFriendlyName "output maximum"
            // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
            Vector m_vecOutputMax; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "strarting transform"
            source2sdk::particleslib::CParticleTransformInput m_TransformStart; // 0x_            
            // metadata: MPropertyFriendlyName "end transform"
            source2sdk::particleslib::CParticleTransformInput m_TransformEnd; // 0x_            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x_            
            // metadata: MPropertyFriendlyName "only active within input range"
            bool m_bActiveRange; // 0x_            
            // metadata: MPropertyFriendlyName "treat distance between points as radius"
            bool m_bRadialCheck; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_PercentageBetweenTransformsVector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_PercentageBetweenTransformsVector) == 0x_);
    };
};
