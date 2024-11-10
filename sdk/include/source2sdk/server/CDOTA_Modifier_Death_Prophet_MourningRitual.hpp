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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Death_Prophet_MourningRitual : public client::CDOTA_Buff
    {
    public:
        float delay_pct; // 0x1708        
        float delay_time; // 0x170c        
        float damage_interval; // 0x1710        
        float m_flDamageMultiplier; // 0x1714        
        bool m_bApplyingDelayedDamage; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x1f];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Death_Prophet_MourningRitual because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Death_Prophet_MourningRitual) == 0x1738);
};
