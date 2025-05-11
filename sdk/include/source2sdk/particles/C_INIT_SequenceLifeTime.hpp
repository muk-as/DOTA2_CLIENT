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
        // Size: 0x1d0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_SequenceLifeTime : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "frames per second"
            float m_flFramerate; // 0x1c8            
            uint8_t _pad01cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_SequenceLifeTime because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_SequenceLifeTime) == 0x1d0);
    };
};
