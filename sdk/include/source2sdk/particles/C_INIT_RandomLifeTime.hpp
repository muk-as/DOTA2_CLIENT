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
        class C_INIT_RandomLifeTime : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "lifetime min"
            // metadata: MPropertyAttributeRange "0 20"
            float m_fLifetimeMin; // 0x1c8            
            // metadata: MPropertyFriendlyName "lifetime max"
            // metadata: MPropertyAttributeRange "0 20"
            float m_fLifetimeMax; // 0x1cc            
            // metadata: MPropertyFriendlyName "lifetime random exponent"
            float m_fLifetimeRandExponent; // 0x1d0            
            uint8_t _pad01d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_RandomLifeTime because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_RandomLifeTime) == 0x1d8);
    };
};
