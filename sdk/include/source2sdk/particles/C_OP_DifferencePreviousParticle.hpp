#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"

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
        class C_OP_DifferencePreviousParticle : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "input field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldInput; // 0x_            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x_            
            // metadata: MPropertyFriendlyName "difference minimum"
            float m_flInputMin; // 0x_            
            // metadata: MPropertyFriendlyName "difference maximum"
            float m_flInputMax; // 0x_            
            // metadata: MPropertyFriendlyName "output minimum"
            float m_flOutputMin; // 0x_            
            // metadata: MPropertyFriendlyName "output maximum"
            float m_flOutputMax; // 0x_            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x_            
            // metadata: MPropertyFriendlyName "only active within specified difference"
            bool m_bActiveRange; // 0x_            
            // metadata: MPropertyFriendlyName "also set ouput to previous particle"
            bool m_bSetPreviousParticle; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_DifferencePreviousParticle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_DifferencePreviousParticle) == 0x_);
    };
};
