#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DarkWillow_ShadowRealm_Buff : public client::CDOTA_Buff
    {
    public:
        int32_t damage; // 0x1708        
        float max_damage_duration; // 0x170c        
        int32_t attack_range_bonus; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4]; // 0x1714
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1718        
        bool bAttackRange; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1731[0x3]; // 0x1731
        entity2::GameTime_t m_flStartTime; // 0x1734        
        entity2::GameTime_t m_flFadeTime; // 0x1738        
        float m_flDamageScale; // 0x173c        
        float duration; // 0x1740        
        float aura_radius; // 0x1744        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_ShadowRealm_Buff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DarkWillow_ShadowRealm_Buff) == 0x1748);
};
