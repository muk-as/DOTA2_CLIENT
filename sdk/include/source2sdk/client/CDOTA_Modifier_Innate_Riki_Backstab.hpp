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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Innate_Riki_Backstab : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t backstab_angle; // 0x17f8            
            float damage_multiplier; // 0x17fc            
            float bonus_xp_kill; // 0x1800            
            float bonus_xp_assist; // 0x1804            
            float bonus_xp_assist_other; // 0x1808            
            bool m_bBackstab; // 0x180c            
            uint8_t _pad180d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Innate_Riki_Backstab because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Innate_Riki_Backstab) == 0x1810);
    };
};
