#pragma once
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
    // Size: 0x678
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Item_BootsOfTravel : public server::CDOTA_Item
    {
    public:
        float m_flTeleportTimeOverride; // 0x670        
        bool m_bPendingSellExcessScrolls; // 0x674        
        bool m_bQueueSellScrolls; // 0x675        
        [[maybe_unused]] std::uint8_t pad_0x676[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_BootsOfTravel because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_BootsOfTravel) == 0x678);
};
