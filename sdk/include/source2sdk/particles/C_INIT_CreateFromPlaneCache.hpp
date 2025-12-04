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
        class C_INIT_CreateFromPlaneCache : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "local offset min"
            // metadata: MVectorIsCoordinate
            Vector m_vecOffsetMin; // 0x_            
            // metadata: MPropertyFriendlyName "local offset max"
            // metadata: MVectorIsCoordinate
            Vector m_vecOffsetMax; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "set normal"
            bool m_bUseNormal; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreateFromPlaneCache because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreateFromPlaneCache) == 0x_);
    };
};
