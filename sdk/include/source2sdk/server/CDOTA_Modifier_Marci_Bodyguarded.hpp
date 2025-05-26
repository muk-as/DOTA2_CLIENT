#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Marci_Bodyguarded : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bodyguard_attack_range_buffer; // 0x1878            
            float lifesteal_pct; // 0x187c            
            std::int32_t bonus_damage; // 0x1880            
            std::int32_t max_partner_penalty; // 0x1884            
            std::int32_t creep_lifesteal_reduction_pct; // 0x1888            
            std::int32_t shared_healing_percent; // 0x188c            
            float counter_cooldown; // 0x1890            
            source2sdk::entity2::GameTime_t m_flLastCounterTime; // 0x1894            
            bool bHasCountered; // 0x1898            
            uint8_t _pad1899[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Bodyguarded because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Marci_Bodyguarded) == 0x18a0);
    };
};
