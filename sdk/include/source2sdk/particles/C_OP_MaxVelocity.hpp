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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_MaxVelocity : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "maximum velocity"
            float m_flMaxVelocity; // 0x_            
            // metadata: MPropertyFriendlyName "minimum velocity"
            float m_flMinVelocity; // 0x_            
            // metadata: MPropertyFriendlyName "override max velocity from this CP"
            std::int32_t m_nOverrideCP; // 0x_            
            // metadata: MPropertyFriendlyName "override CP field"
            std::int32_t m_nOverrideCPField; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_MaxVelocity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_MaxVelocity) == 0x_);
    };
};
