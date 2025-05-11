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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1e0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SequenceFromModel : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x1c0            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4            
            // metadata: MPropertyFriendlyName "current anim time output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x1c8            
            // metadata: MPropertyFriendlyName "input minimum"
            float m_flInputMin; // 0x1cc            
            // metadata: MPropertyFriendlyName "input maximum"
            float m_flInputMax; // 0x1d0            
            // metadata: MPropertyFriendlyName "output minimum"
            float m_flOutputMin; // 0x1d4            
            // metadata: MPropertyFriendlyName "output maximum"
            float m_flOutputMax; // 0x1d8            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x1dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SequenceFromModel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SequenceFromModel) == 0x1e0);
    };
};
