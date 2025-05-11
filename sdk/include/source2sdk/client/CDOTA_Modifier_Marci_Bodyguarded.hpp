#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Marci_Bodyguarded : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bodyguard_attack_range_buffer; // 0x17f8            
            float lifesteal_pct; // 0x17fc            
            std::int32_t bonus_damage; // 0x1800            
            std::int32_t max_partner_penalty; // 0x1804            
            std::int32_t creep_lifesteal_reduction_pct; // 0x1808            
            std::int32_t shared_healing_percent; // 0x180c            
            float counter_cooldown; // 0x1810            
            source2sdk::entity2::GameTime_t m_flLastCounterTime; // 0x1814            
            bool bHasCountered; // 0x1818            
            uint8_t _pad1819[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Bodyguarded because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Marci_Bodyguarded) == 0x1820);
    };
};
