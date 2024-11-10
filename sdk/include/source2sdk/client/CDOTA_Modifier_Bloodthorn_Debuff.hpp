#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Bloodthorn_Debuff : public client::CDOTA_Buff
    {
    public:
        float target_crit_multiplier; // 0x1708        
        float silence_damage_percent; // 0x170c        
        int32_t proc_damage_heroes; // 0x1710        
        int32_t proc_damage_creeps; // 0x1714        
        float m_flDamageTaken; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4]; // 0x171c
        // m_vRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_vRecords;
        char m_vRecords[0x18]; // 0x1720        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bloodthorn_Debuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bloodthorn_Debuff) == 0x1738);
};
