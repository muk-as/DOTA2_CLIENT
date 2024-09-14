#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Size: 0x610
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Morty_Hop : public client::C_DOTABaseAbility
    {
    public:
        float max_distance; // 0x5d8        
        Vector m_vTarget; // 0x5dc        
        int32_t m_iTrackerProjectile; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x24];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Morty_Hop because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Morty_Hop) == 0x610);
};
