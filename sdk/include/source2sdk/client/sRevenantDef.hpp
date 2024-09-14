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
    class sRevenantDef
    {
    public:
        client::C_DOTA_BaseNPC* pRevenant; // 0x0        
        client::ParticleIndex_t nRevenantFXIndex; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(sRevenantDef, pRevenant) == 0x0);
    static_assert(offsetof(sRevenantDef, nRevenantFXIndex) == 0x8);
    
    static_assert(sizeof(sRevenantDef) == 0x10);
};
