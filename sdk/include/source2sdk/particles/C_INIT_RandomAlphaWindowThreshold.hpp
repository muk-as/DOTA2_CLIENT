#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"

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
        class C_INIT_RandomAlphaWindowThreshold : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "min"
            float m_flMin; // 0x1c8            
            // metadata: MPropertyFriendlyName "max"
            float m_flMax; // 0x1cc            
            // metadata: MPropertyFriendlyName "exponent"
            float m_flExponent; // 0x1d0            
            uint8_t _pad01d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_RandomAlphaWindowThreshold because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_RandomAlphaWindowThreshold) == 0x1d8);
    };
};
