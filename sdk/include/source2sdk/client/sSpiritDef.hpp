#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_DOTA_BaseNPC;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class sSpiritDef
    {
    public:
        client::C_DOTA_BaseNPC* pSpirit; // 0x0        
        client::ParticleIndex_t nSpiritFXIndex; // 0x8        
        int32_t nSpiritState; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(sSpiritDef, pSpirit) == 0x0);
    static_assert(offsetof(sSpiritDef, nSpiritFXIndex) == 0x8);
    static_assert(offsetof(sSpiritDef, nSpiritState) == 0xc);
    
    static_assert(sizeof(sSpiritDef) == 0x10);
};
