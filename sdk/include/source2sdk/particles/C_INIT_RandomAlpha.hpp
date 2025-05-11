#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
        class C_INIT_RandomAlpha : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "alpha field"
            // metadata: MPropertyAttributeChoiceName "particlefield_alpha"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8            
            // metadata: MPropertyFriendlyName "alpha min"
            // metadata: MPropertyAttributeRange "0 255"
            std::int32_t m_nAlphaMin; // 0x1cc            
            // metadata: MPropertyFriendlyName "alpha max"
            // metadata: MPropertyAttributeRange "0 255"
            std::int32_t m_nAlphaMax; // 0x1d0            
            uint8_t _pad01d4[0x8]; // 0x1d4
            // metadata: MPropertyFriendlyName "alpha random exponent"
            float m_flAlphaRandExponent; // 0x1dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_RandomAlpha because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_RandomAlpha) == 0x1e0);
    };
};
