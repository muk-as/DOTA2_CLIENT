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
        class C_INIT_RandomRadius : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "radius min"
            // metadata: MPropertyAttributeRange "biased 0 500"
            float m_flRadiusMin; // 0x_            
            // metadata: MPropertyFriendlyName "radius max"
            // metadata: MPropertyAttributeRange "biased 0 500"
            float m_flRadiusMax; // 0x_            
            // metadata: MPropertyFriendlyName "radius random exponent"
            // metadata: MPropertyAttributeRange "-2 2"
            float m_flRadiusRandExponent; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_RandomRadius because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_RandomRadius) == 0x_);
    };
};
