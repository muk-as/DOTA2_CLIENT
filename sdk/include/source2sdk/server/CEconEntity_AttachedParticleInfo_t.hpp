#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CEconEntity_AttachedParticleInfo_t
        {
        public:
            source2sdk::client::ParticleIndex_t m_nAttachedParticleIndex; // 0x0            
            CUtlStringToken m_customType; // 0x4            
            bool m_bShouldDestroyImmediately; // 0x8            
            uint8_t _pad0009[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CEconEntity_AttachedParticleInfo_t, m_nAttachedParticleIndex) == 0x0);
        static_assert(offsetof(source2sdk::server::CEconEntity_AttachedParticleInfo_t, m_customType) == 0x4);
        static_assert(offsetof(source2sdk::server::CEconEntity_AttachedParticleInfo_t, m_bShouldDestroyImmediately) == 0x8);
        
        static_assert(sizeof(source2sdk::server::CEconEntity_AttachedParticleInfo_t) == 0xc);
    };
};
