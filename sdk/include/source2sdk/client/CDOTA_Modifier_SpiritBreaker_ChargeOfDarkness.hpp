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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness : public client::CDOTA_Buff
    {
    public:
        float movement_speed; // 0x1708        
        int32_t min_movespeed_bonus_pct; // 0x170c        
        float out_of_world_time; // 0x1710        
        float linger_time_min; // 0x1714        
        float linger_time_max; // 0x1718        
        float charge_for_max_linger; // 0x171c        
        float windup_time; // 0x1720        
        float m_flCurrentMovespeedBonus; // 0x1724        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x1728        
        bool m_bGestureStarted; // 0x172c        
        [[maybe_unused]] std::uint8_t pad_0x172d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness) == 0x1730);
};
