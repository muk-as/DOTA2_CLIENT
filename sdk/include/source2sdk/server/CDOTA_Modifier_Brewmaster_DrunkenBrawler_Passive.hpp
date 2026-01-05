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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float bonus_armor; // 0x_            
            float magic_resist; // 0x_            
            float dodge_chance; // 0x_            
            float bonus_move_speed; // 0x_            
            float crit_chance; // 0x_            
            float crit_multiplier; // 0x_            
            float attack_speed; // 0x_            
            float brewed_up_duration; // 0x_            
            float brewed_up_duration_extend; // 0x_            
            float brewed_up_bonus; // 0x_            
            bool m_bBrewedUp; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive) == 0x_);
    };
};
