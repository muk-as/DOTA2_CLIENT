#pragma once
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
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
    // Size: 0x818
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_PortraitTree : public client::CBaseAnimatingActivity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x800[0x18];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(C_DOTA_PortraitTree) == 0x818);
};
