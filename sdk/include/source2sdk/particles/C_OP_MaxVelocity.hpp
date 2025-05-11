#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"

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
        // Size: 0x1d0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_MaxVelocity : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "maximum velocity"
            float m_flMaxVelocity; // 0x1c0            
            // metadata: MPropertyFriendlyName "minimum velocity"
            float m_flMinVelocity; // 0x1c4            
            // metadata: MPropertyFriendlyName "override max velocity from this CP"
            std::int32_t m_nOverrideCP; // 0x1c8            
            // metadata: MPropertyFriendlyName "override CP field"
            std::int32_t m_nOverrideCPField; // 0x1cc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_MaxVelocity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_MaxVelocity) == 0x1d0);
    };
};
