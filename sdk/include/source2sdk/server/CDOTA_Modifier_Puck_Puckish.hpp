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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Puck_Puckish : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t mana_restore_pct; // 0x17f8            
            std::int32_t hp_restore_pct; // 0x17fc            
            float dodged_spell_multiplier; // 0x1800            
            std::int32_t mana_restore_base; // 0x1804            
            std::int32_t hp_restore_base; // 0x1808            
            uint8_t _pad180c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Puck_Puckish because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Puck_Puckish) == 0x1810);
    };
};
