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
    // Size: 0x690
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Item_Lua : public server::CDOTA_Item
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x648[0x48];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CDOTA_Item_Lua) == 0x690);
};
