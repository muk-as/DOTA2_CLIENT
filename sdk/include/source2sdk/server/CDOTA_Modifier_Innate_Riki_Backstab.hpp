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
        class CDOTA_Modifier_Innate_Riki_Backstab : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t backstab_angle; // 0x1878            
            float damage_multiplier; // 0x187c            
            float bonus_xp_kill; // 0x1880            
            float bonus_xp_assist; // 0x1884            
            float bonus_xp_assist_other; // 0x1888            
            bool m_bBackstab; // 0x188c            
            uint8_t _pad188d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Innate_Riki_Backstab because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Innate_Riki_Backstab) == 0x1890);
    };
};
