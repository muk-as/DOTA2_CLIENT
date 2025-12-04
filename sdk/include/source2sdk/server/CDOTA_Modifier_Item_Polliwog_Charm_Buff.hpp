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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Polliwog_Charm_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float regen_boost; // 0x_            
            float water_movespeed; // 0x_            
            bool m_bInWater; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_fUseSpeed; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Polliwog_Charm_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Polliwog_Charm_Buff) == 0x_);
    };
};
