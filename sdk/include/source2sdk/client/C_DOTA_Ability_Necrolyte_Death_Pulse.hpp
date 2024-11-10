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
    #pragma pack(push, 1)
    class C_DOTA_Ability_Necrolyte_Death_Pulse : public client::C_DOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x600[0x8]; // 0x600
        bool m_bIsDeathSeekerCast; // 0x608        
        [[maybe_unused]] std::uint8_t pad_0x609[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Necrolyte_Death_Pulse because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Necrolyte_Death_Pulse) == 0x610);
};
