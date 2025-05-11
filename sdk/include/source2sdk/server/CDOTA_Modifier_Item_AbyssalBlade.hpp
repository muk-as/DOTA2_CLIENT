#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Buff_Item.hpp"

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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_AbyssalBlade : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_strength; // 0x17f8            
            std::int32_t bash_chance_melee; // 0x17fc            
            std::int32_t bash_chance_ranged; // 0x1800            
            float bash_duration; // 0x1804            
            float bash_cooldown; // 0x1808            
            std::int32_t bonus_chance_damage; // 0x180c            
            std::int32_t bonus_damage; // 0x1810            
            uint8_t _pad1814[0x4]; // 0x1814
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1818            
            std::int32_t hp_regen_amp; // 0x1830            
            std::int32_t slow_resistance; // 0x1834            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_AbyssalBlade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_AbyssalBlade) == 0x1838);
    };
};
