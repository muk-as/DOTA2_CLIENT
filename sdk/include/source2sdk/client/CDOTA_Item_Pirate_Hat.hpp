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
    // Size: 0x6b8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Item_Pirate_Hat : public client::C_DOTA_Item
    {
    public:
        Vector m_vChannelPos; // 0x6a0        
        bool m_bIsUnderwater; // 0x6ac        
        [[maybe_unused]] std::uint8_t pad_0x6ad[0x3]; // 0x6ad
        client::ParticleIndex_t m_nPhaseStartFXIndex; // 0x6b0        
        [[maybe_unused]] std::uint8_t pad_0x6b4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_Pirate_Hat because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_Pirate_Hat) == 0x6b8);
};
