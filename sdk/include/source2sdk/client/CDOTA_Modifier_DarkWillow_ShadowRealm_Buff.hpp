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
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DarkWillow_ShadowRealm_Buff : public client::CDOTA_Buff
    {
    public:
        int32_t damage; // 0x16e8        
        float max_damage_duration; // 0x16ec        
        int32_t attack_range_bonus; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x4]; // 0x16f4
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x16f8        
        bool bAttackRange; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1711[0x3]; // 0x1711
        entity2::GameTime_t m_flStartTime; // 0x1714        
        entity2::GameTime_t m_flFadeTime; // 0x1718        
        float m_flDamageScale; // 0x171c        
        float duration; // 0x1720        
        float aura_radius; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_ShadowRealm_Buff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DarkWillow_ShadowRealm_Buff) == 0x1728);
};
