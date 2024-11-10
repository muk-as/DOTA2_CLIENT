#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x688
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Item_Trusty_Shovel : public server::CDOTA_Item
    {
    public:
        Vector m_vChannelPos; // 0x670        
        bool m_bIsUnderwater; // 0x67c        
        [[maybe_unused]] std::uint8_t pad_0x67d[0x3]; // 0x67d
        client::ParticleIndex_t m_nPhaseStartFXIndex; // 0x680        
        [[maybe_unused]] std::uint8_t pad_0x684[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_Trusty_Shovel because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_Trusty_Shovel) == 0x688);
};
