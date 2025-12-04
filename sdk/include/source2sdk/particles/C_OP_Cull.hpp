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
        class C_OP_Cull : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "cull percentage"
            float m_flCullPerc; // 0x_            
            // metadata: MPropertyFriendlyName "cull start time"
            float m_flCullStart; // 0x_            
            // metadata: MPropertyFriendlyName "cull end time"
            float m_flCullEnd; // 0x_            
            // metadata: MPropertyFriendlyName "cull time exponent"
            float m_flCullExp; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_Cull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_Cull) == 0x_);
    };
};
