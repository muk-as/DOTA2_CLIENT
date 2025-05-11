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
        // Size: 0x1808
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Harpoon_EchoSabre_Component : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            float slow_duration; // 0x17f8            
            std::int32_t bonus_attack_speed; // 0x17fc            
            bool bonus_speed; // 0x1800            
            uint8_t _pad1801[0x3]; // 0x1801
            float passive_cooldown; // 0x1804            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Harpoon_EchoSabre_Component because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Harpoon_EchoSabre_Component) == 0x1808);
    };
};
