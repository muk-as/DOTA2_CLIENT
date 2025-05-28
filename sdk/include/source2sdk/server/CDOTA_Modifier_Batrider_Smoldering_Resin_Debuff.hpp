#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Batrider_Smoldering_Resin_Debuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage; // 0x1888            
            float tick_rate; // 0x188c            
            std::int32_t tick_attack_damage_pct; // 0x1890            
            std::int32_t total_ticks; // 0x1894            
            // m_nDamageQueue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_nDamageQueue;
            char m_nDamageQueue[0x18]; // 0x1898            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Batrider_Smoldering_Resin_Debuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Batrider_Smoldering_Resin_Debuff) == 0x18b0);
    };
};
