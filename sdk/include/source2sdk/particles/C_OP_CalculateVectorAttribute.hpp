#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ControlPointReference_t.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x220
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_CalculateVectorAttribute : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "start value"
            Vector m_vStartValue; // 0x1c0            
            // metadata: MPropertyFriendlyName "input field 1"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldInput1; // 0x1cc            
            // metadata: MPropertyFriendlyName "input scale 1"
            float m_flInputScale1; // 0x1d0            
            // metadata: MPropertyFriendlyName "input field 2"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldInput2; // 0x1d4            
            // metadata: MPropertyFriendlyName "input scale 2"
            float m_flInputScale2; // 0x1d8            
            // metadata: MPropertyFriendlyName "control point input 1"
            source2sdk::particles::ControlPointReference_t m_nControlPointInput1; // 0x1dc            
            // metadata: MPropertyFriendlyName "control point scale 1"
            float m_flControlPointScale1; // 0x1f0            
            // metadata: MPropertyFriendlyName "control point input 2"
            source2sdk::particles::ControlPointReference_t m_nControlPointInput2; // 0x1f4            
            // metadata: MPropertyFriendlyName "control point scale 2"
            float m_flControlPointScale2; // 0x208            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x20c            
            // metadata: MPropertyFriendlyName "final per component scale"
            Vector m_vFinalOutputScale; // 0x210            
            uint8_t _pad021c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_CalculateVectorAttribute because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_CalculateVectorAttribute) == 0x220);
    };
};
