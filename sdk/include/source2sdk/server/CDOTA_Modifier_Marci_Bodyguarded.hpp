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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Marci_Bodyguarded : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bodyguard_attack_range_buffer; // 0x_            
            float lifesteal_pct; // 0x_            
            std::int32_t bonus_damage; // 0x_            
            std::int32_t max_partner_penalty; // 0x_            
            std::int32_t creep_lifesteal_reduction_pct; // 0x_            
            std::int32_t shared_healing_percent; // 0x_            
            float counter_cooldown; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastCounterTime; // 0x_            
            bool bHasCountered; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Bodyguarded because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Marci_Bodyguarded) == 0x_);
    };
};
