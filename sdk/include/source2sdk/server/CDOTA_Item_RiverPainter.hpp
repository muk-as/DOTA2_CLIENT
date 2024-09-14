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
    // Size: 0x650
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_iRiverPaintColor"
    #pragma pack(push, 1)
    class CDOTA_Item_RiverPainter : public server::CDOTA_Item
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRiverColorChanged"
        int32_t m_iRiverPaintColor; // 0x648        
        [[maybe_unused]] std::uint8_t pad_0x64c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_RiverPainter because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_RiverPainter) == 0x650);
};
