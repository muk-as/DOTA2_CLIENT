#pragma once
#include "source2sdk/client/C_DOTA_Item.hpp"
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
    // Size: 0x680
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Item_Black_King_Bar : public client::C_DOTA_Item
    {
    public:
        bool m_bActive; // 0x678        
        [[maybe_unused]] std::uint8_t pad_0x679[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item_Black_King_Bar because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item_Black_King_Bar) == 0x680);
};
