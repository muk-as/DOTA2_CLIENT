#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Kez_Shodo_Sai_Mark : public client::CDOTA_Buff
    {
    public:
        int32_t vuln_slow; // 0x1708        
        int32_t base_crit_pct; // 0x170c        
        int32_t parry_bonus_crit; // 0x1710        
        float stun_duration; // 0x1714        
        float parry_stun_duration; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4]; // 0x171c
        // m_vecAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_vecAttackRecords;
        char m_vecAttackRecords[0x18]; // 0x1720        
        bool m_bFromParry; // 0x1738        
        bool m_bParryBonus; // 0x1739        
        bool m_bConsumed; // 0x173a        
        [[maybe_unused]] std::uint8_t pad_0x173b[0x1]; // 0x173b
        client::ParticleIndex_t m_nOverheadFXIndex; // 0x173c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Kez_Shodo_Sai_Mark because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Kez_Shodo_Sai_Mark) == 0x1740);
};
