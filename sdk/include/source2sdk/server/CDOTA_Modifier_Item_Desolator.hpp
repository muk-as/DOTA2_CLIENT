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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Desolator : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_damage; // 0x1878            
            std::int32_t bonus_damage_per_kill; // 0x187c            
            std::int32_t bonus_damage_per_assist; // 0x1880            
            std::int32_t max_damage; // 0x1884            
            float corruption_duration; // 0x1888            
            uint8_t _pad188c[0x4]; // 0x188c
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1890            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Desolator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Desolator) == 0x18a8);
    };
};
