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
        // Size: 0x1e8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_CreateFromPlaneCache : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "local offset min"
            // metadata: MVectorIsCoordinate
            Vector m_vecOffsetMin; // 0x1c8            
            // metadata: MPropertyFriendlyName "local offset max"
            // metadata: MVectorIsCoordinate
            Vector m_vecOffsetMax; // 0x1d4            
            uint8_t _pad01e0[0x1]; // 0x1e0
            // metadata: MPropertyFriendlyName "set normal"
            bool m_bUseNormal; // 0x1e1            
            uint8_t _pad01e2[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreateFromPlaneCache because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreateFromPlaneCache) == 0x1e8);
    };
};
