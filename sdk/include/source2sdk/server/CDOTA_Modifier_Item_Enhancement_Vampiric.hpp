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
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Enhancement_Vampiric : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t attack_lifesteal; // 0x1878            
            std::int32_t spell_lifesteal; // 0x187c            
            float bonus_night_vision; // 0x1880            
            uint8_t _pad1884[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Enhancement_Vampiric because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Enhancement_Vampiric) == 0x1888);
    };
};
