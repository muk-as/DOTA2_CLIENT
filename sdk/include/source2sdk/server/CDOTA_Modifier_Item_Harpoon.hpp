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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Harpoon : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_chance; // 0x1878            
            std::int32_t bonus_chance_damage; // 0x187c            
            std::int32_t bonus_strength; // 0x1880            
            std::int32_t bonus_agility; // 0x1884            
            std::int32_t bonus_intellect; // 0x1888            
            float bonus_mana_regen; // 0x188c            
            std::int32_t bonus_damage; // 0x1890            
            std::int32_t bonus_speed; // 0x1894            
            // m_InFlightProcAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightProcAttackRecords;
            char m_InFlightProcAttackRecords[0x18]; // 0x1898            
            std::int32_t m_nBonusProcAttackRecord; // 0x18b0            
            uint8_t _pad18b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Harpoon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Harpoon) == 0x18b8);
    };
};
