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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Force_Field_Effect : public source2sdk::client::CDOTA_Buff
        {
        public:
            float bonus_aoe_armor; // 0x1878            
            float bonus_aoe_ms; // 0x187c            
            float bonus_aoe_mres; // 0x1880            
            float self_mres; // 0x1884            
            float self_armor; // 0x1888            
            std::int32_t active_reflection_pct; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Force_Field_Effect because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Force_Field_Effect) == 0x1890);
    };
};
