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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Bloodthorn_Debuff : public client::CDOTA_Buff
    {
    public:
        float target_crit_multiplier; // 0x16e8        
        float silence_damage_percent; // 0x16ec        
        int32_t proc_damage_heroes; // 0x16f0        
        int32_t proc_damage_creeps; // 0x16f4        
        float m_flDamageTaken; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4]; // 0x16fc
        // m_vRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_vRecords;
        char m_vRecords[0x18]; // 0x1700        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bloodthorn_Debuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bloodthorn_Debuff) == 0x1718);
};
