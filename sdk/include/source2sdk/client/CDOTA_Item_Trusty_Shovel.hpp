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
    class CDOTA_Item_Trusty_Shovel : public client::C_DOTA_Item
    {
    public:
        Vector m_vChannelPos; // 0x678        
        bool m_bIsUnderwater; // 0x684        
        [[maybe_unused]] std::uint8_t pad_0x685[0x3]; // 0x685
        client::ParticleIndex_t m_nPhaseStartFXIndex; // 0x688        
        [[maybe_unused]] std::uint8_t pad_0x68c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_Trusty_Shovel because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_Trusty_Shovel) == 0x690);
};
