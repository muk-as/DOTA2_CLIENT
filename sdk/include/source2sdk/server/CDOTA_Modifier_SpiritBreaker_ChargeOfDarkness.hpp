#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness : public source2sdk::client::CDOTA_Buff
        {
        public:
            float movement_speed; // 0x17f8            
            std::int32_t min_movespeed_bonus_pct; // 0x17fc            
            float out_of_world_time; // 0x1800            
            float linger_time_min; // 0x1804            
            float linger_time_max; // 0x1808            
            float charge_for_max_linger; // 0x180c            
            float windup_time; // 0x1810            
            float m_flCurrentMovespeedBonus; // 0x1814            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1818            
            bool m_bGestureStarted; // 0x181c            
            uint8_t _pad181d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness) == 0x1820);
    };
};
