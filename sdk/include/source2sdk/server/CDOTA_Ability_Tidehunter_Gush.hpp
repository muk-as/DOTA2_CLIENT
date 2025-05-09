#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    // Size: 0x5d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Tidehunter_Gush : public server::CDOTABaseAbility
    {
    public:
        int32_t gush_damage; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5cc[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Tidehunter_Gush because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Tidehunter_Gush) == 0x5d8);
};
