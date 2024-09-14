#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
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
    // Size: 0x1b90
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Unit_Hero_Riki : public client::C_DOTA_BaseNPC_Hero
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1b88[0x8];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(C_DOTA_Unit_Hero_Riki) == 0x1b90);
};
