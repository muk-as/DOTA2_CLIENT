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
    class C_DOTA_Item_BootsOfTravel : public client::C_DOTA_Item
    {
    public:
        float m_flTeleportTimeOverride; // 0x678        
        bool m_bPendingSellExcessScrolls; // 0x67c        
        bool m_bQueueSellScrolls; // 0x67d        
        [[maybe_unused]] std::uint8_t pad_0x67e[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item_BootsOfTravel because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item_BootsOfTravel) == 0x680);
};
