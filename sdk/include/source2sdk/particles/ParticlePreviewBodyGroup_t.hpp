#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x10
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ParticlePreviewBodyGroup_t
        {
        public:
            CUtlString m_bodyGroupName; // 0x0            
            std::int32_t m_nValue; // 0x8            
            uint8_t _pad000c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particles::ParticlePreviewBodyGroup_t, m_bodyGroupName) == 0x0);
        static_assert(offsetof(source2sdk::particles::ParticlePreviewBodyGroup_t, m_nValue) == 0x8);
        
        static_assert(sizeof(source2sdk::particles::ParticlePreviewBodyGroup_t) == 0x10);
    };
};
