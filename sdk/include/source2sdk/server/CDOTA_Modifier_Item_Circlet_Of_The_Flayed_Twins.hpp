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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Circlet_Of_The_Flayed_Twins : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            float damage_to_regen; // 0x1878            
            float damage_time; // 0x187c            
            float max_regen; // 0x1880            
            float m_flRecentDamageTotal; // 0x1884            
            uint8_t _pad1888[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Circlet_Of_The_Flayed_Twins because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Circlet_Of_The_Flayed_Twins) == 0x18a0);
    };
};
