#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1c00
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Unit_Hero_PhantomAssassin : public client::C_DOTA_BaseNPC_Hero
    {
    public:
        client::ParticleIndex_t m_nFXDeath; // 0x1bf8        
        [[maybe_unused]] std::uint8_t pad_0x1bfc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_Hero_PhantomAssassin because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_Hero_PhantomAssassin) == 0x1c00);
};
