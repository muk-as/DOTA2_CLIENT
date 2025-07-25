#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Polliwog_Charm_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float regen_boost; // 0x1878            
            float water_movespeed; // 0x187c            
            bool m_bInWater; // 0x1880            
            uint8_t _pad1881[0x3]; // 0x1881
            float m_fUseSpeed; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Polliwog_Charm_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Polliwog_Charm_Buff) == 0x1888);
    };
};
