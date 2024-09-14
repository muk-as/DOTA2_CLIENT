#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0xc
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct CEconEntity__AttachedParticleInfo_t
    {
    public:
        client::ParticleIndex_t m_nAttachedParticleIndex; // 0x0        
        CUtlStringToken m_customType; // 0x4        
        bool m_bShouldDestroyImmediately; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x09[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CEconEntity__AttachedParticleInfo_t, m_nAttachedParticleIndex) == 0x0);
    static_assert(offsetof(CEconEntity__AttachedParticleInfo_t, m_customType) == 0x4);
    static_assert(offsetof(CEconEntity__AttachedParticleInfo_t, m_bShouldDestroyImmediately) == 0x8);
    
    static_assert(sizeof(CEconEntity__AttachedParticleInfo_t) == 0xc);
};
