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
    // Size: 0x638
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Morty_Hop : public client::C_DOTABaseAbility
    {
    public:
        float max_distance; // 0x600        
        Vector m_vTarget; // 0x604        
        int32_t m_iTrackerProjectile; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0x24];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Morty_Hop because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Morty_Hop) == 0x638);
};
