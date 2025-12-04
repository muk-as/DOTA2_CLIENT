#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionConstraint.hpp"

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
        class C_OP_ConstrainLineLength : public source2sdk::particles::CParticleFunctionConstraint
        {
        public:
            // metadata: MPropertyFriendlyName "minimum length"
            float m_flMinDistance; // 0x_            
            // metadata: MPropertyFriendlyName "maximum length"
            float m_flMaxDistance; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ConstrainLineLength because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ConstrainLineLength) == 0x_);
    };
};
