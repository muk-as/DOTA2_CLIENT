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
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Snapfire_Scatterblast : public client::C_DOTABaseAbility
    {
    public:
        int32_t damage; // 0x5d8        
        float debuff_duration; // 0x5dc        
        int32_t point_blank_range; // 0x5e0        
        float point_blank_dmg_bonus_pct; // 0x5e4        
        int32_t blast_width_end; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Snapfire_Scatterblast because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Snapfire_Scatterblast) == 0x5f0);
};
