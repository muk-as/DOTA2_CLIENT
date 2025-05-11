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
        // Size: 0x1830
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Harpoon : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_chance; // 0x17f8            
            std::int32_t bonus_chance_damage; // 0x17fc            
            std::int32_t bonus_strength; // 0x1800            
            std::int32_t bonus_agility; // 0x1804            
            std::int32_t bonus_intellect; // 0x1808            
            float bonus_mana_regen; // 0x180c            
            std::int32_t bonus_damage; // 0x1810            
            std::int32_t bonus_speed; // 0x1814            
            // m_InFlightProcAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightProcAttackRecords;
            char m_InFlightProcAttackRecords[0x18]; // 0x1818            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Harpoon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Harpoon) == 0x1830);
    };
};
