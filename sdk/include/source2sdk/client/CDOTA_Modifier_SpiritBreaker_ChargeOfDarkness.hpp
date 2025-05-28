#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness : public source2sdk::client::CDOTA_Buff
        {
        public:
            float movement_speed; // 0x1888            
            std::int32_t min_movespeed_bonus_pct; // 0x188c            
            float out_of_world_time; // 0x1890            
            float linger_time_min; // 0x1894            
            float linger_time_max; // 0x1898            
            float charge_for_max_linger; // 0x189c            
            float windup_time; // 0x18a0            
            float m_flCurrentMovespeedBonus; // 0x18a4            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x18a8            
            bool m_bGestureStarted; // 0x18ac            
            uint8_t _pad18ad[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness) == 0x18b0);
    };
};
