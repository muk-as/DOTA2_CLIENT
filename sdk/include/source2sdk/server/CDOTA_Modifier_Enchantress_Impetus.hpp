#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Enchantress_Impetus : public client::CDOTA_Buff
    {
    public:
        float distance_damage_pct; // 0x16e8        
        int32_t distance_cap; // 0x16ec        
        float creep_multiplier; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x4]; // 0x16f4
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x16f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Enchantress_Impetus because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Enchantress_Impetus) == 0x1710);
};
