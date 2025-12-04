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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            float m_fLifetimeMin; // 0x_            
            // metadata: MPropertyFriendlyName "lifetime max"
            // metadata: MPropertyAttributeRange "0 20"
            float m_fLifetimeMax; // 0x_            
            // metadata: MPropertyFriendlyName "lifetime random exponent"
            float m_fLifetimeRandExponent; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_RandomLifeTime because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_RandomLifeTime) == 0x_);
    };
};
