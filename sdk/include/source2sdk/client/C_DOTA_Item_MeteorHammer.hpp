#pragma once
#include "source2sdk/client/C_DOTA_Item.hpp"
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
    // Size: 0x690
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Item_MeteorHammer : public client::C_DOTA_Item
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x678        
        client::ParticleIndex_t m_nFXIndexB; // 0x67c        
        Vector m_vecCastPosition; // 0x680        
        [[maybe_unused]] std::uint8_t pad_0x68c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item_MeteorHammer because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item_MeteorHammer) == 0x690);
};
