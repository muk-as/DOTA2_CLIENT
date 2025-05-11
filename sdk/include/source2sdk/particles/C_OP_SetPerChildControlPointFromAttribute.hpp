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
        // Size: 0x1e0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SetPerChildControlPointFromAttribute : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "group ID to affect"
            std::int32_t m_nChildGroupID; // 0x1c0            
            // metadata: MPropertyFriendlyName "control point to set"
            std::int32_t m_nFirstControlPoint; // 0x1c4            
            // metadata: MPropertyFriendlyName "# of children to set"
            std::int32_t m_nNumControlPoints; // 0x1c8            
            // metadata: MPropertyFriendlyName "particle increment amount"
            std::int32_t m_nParticleIncrement; // 0x1cc            
            // metadata: MPropertyFriendlyName "first particle to copy"
            std::int32_t m_nFirstSourcePoint; // 0x1d0            
            // metadata: MPropertyFriendlyName "set number of children based on particle count"
            bool m_bNumBasedOnParticleCount; // 0x1d4            
            uint8_t _pad01d5[0x3]; // 0x1d5
            // metadata: MPropertyFriendlyName "field to read"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nAttributeToRead; // 0x1d8            
            // metadata: MPropertyFriendlyName "control point field for scalars"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nCPField; // 0x1dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetPerChildControlPointFromAttribute because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetPerChildControlPointFromAttribute) == 0x1e0);
    };
};
