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
    // Size: 0x660
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Item_Trusty_Shovel : public server::CDOTA_Item
    {
    public:
        Vector m_vChannelPos; // 0x648        
        bool m_bIsUnderwater; // 0x654        
        [[maybe_unused]] std::uint8_t pad_0x655[0x3]; // 0x655
        client::ParticleIndex_t m_nPhaseStartFXIndex; // 0x658        
        [[maybe_unused]] std::uint8_t pad_0x65c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_Trusty_Shovel because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_Trusty_Shovel) == 0x660);
};
