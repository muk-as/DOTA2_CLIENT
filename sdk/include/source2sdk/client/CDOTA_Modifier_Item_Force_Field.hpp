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
        class CDOTA_Modifier_Item_Force_Field : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            bool m_bAppliesToCreeps; // 0x17f8            
            uint8_t _pad17f9[0x3]; // 0x17f9
            float bonus_aoe_radius; // 0x17fc            
            std::int32_t self_armor; // 0x1800            
            std::int32_t self_mres; // 0x1804            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Force_Field because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Force_Field) == 0x1808);
    };
};
