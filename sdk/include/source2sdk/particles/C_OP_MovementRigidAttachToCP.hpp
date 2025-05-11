#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
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
        // Size: 0x1d8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_MovementRigidAttachToCP : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x1c0            
            // metadata: MPropertyFriendlyName "scale control point number"
            std::int32_t m_nScaleControlPoint; // 0x1c4            
            // metadata: MPropertyFriendlyName "scale control point field"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nScaleCPField; // 0x1c8            
            // metadata: MPropertyFriendlyName "cache attribute to read from"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldInput; // 0x1cc            
            // metadata: MPropertyFriendlyName "attribute to write to"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0            
            // metadata: MPropertyFriendlyName "local space"
            bool m_bOffsetLocal; // 0x1d4            
            uint8_t _pad01d5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_MovementRigidAttachToCP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_MovementRigidAttachToCP) == 0x1d8);
    };
};
