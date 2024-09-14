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
    #pragma pack(push, 1)
    class CDOTA_Item_SheepStick : public server::CDOTA_Item
    {
    public:
        int32_t upgrade_radius; // 0x648        
        [[maybe_unused]] std::uint8_t pad_0x64c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_SheepStick because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_SheepStick) == 0x650);
};
