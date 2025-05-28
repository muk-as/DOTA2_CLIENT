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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Snapfire_Scatterblast_Slow : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bIsPointBlank; // 0x1888            
            uint8_t _pad1889[0x3]; // 0x1889
            std::int32_t movement_slow_pct; // 0x188c            
            std::int32_t attack_slow_pct; // 0x1890            
            std::int32_t point_blank_dmg_bonus_pct; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_Scatterblast_Slow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Snapfire_Scatterblast_Slow) == 0x1898);
    };
};
