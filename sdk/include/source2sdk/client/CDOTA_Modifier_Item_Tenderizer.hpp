#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"

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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Tenderizer : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_strength; // 0x17f8            
            std::int32_t bonus_agility; // 0x17fc            
            std::int32_t bash_chance_melee; // 0x1800            
            std::int32_t bash_chance_ranged; // 0x1804            
            float bash_duration; // 0x1808            
            float bash_cooldown; // 0x180c            
            std::int32_t bonus_chance_damage; // 0x1810            
            std::int32_t bonus_damage; // 0x1814            
            std::int32_t weaken_per_hit; // 0x1818            
            float weaken_duration; // 0x181c            
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1820            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Tenderizer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Tenderizer) == 0x1838);
    };
};
