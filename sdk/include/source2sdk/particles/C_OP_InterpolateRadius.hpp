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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x210
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_InterpolateRadius : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "start time"
            float m_flStartTime; // 0x1c0            
            // metadata: MPropertyFriendlyName "end time"
            float m_flEndTime; // 0x1c4            
            // metadata: MPropertyFriendlyName "radius start scale"
            float m_flStartScale; // 0x1c8            
            // metadata: MPropertyFriendlyName "radius end scale"
            float m_flEndScale; // 0x1cc            
            // metadata: MPropertyFriendlyName "ease in and out"
            bool m_bEaseInAndOut; // 0x1d0            
            uint8_t _pad01d1[0x3]; // 0x1d1
            // metadata: MPropertyFriendlyName "scale bias"
            float m_flBias; // 0x1d4            
            uint8_t _pad01d8[0x38];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_InterpolateRadius because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_InterpolateRadius) == 0x210);
    };
};
