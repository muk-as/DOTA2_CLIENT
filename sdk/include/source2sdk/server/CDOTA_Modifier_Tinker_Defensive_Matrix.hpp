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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tinker_Defensive_Matrix : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage_absorb; // 0x17f8            
            std::int32_t status_resistance; // 0x17fc            
            std::int32_t cooldown_reduction; // 0x1800            
            std::int32_t flicker_range; // 0x1804            
            std::int32_t flicker_angle; // 0x1808            
            bool m_bStartedTimer; // 0x180c            
            uint8_t _pad180d[0x3]; // 0x180d
            std::int32_t m_nDamageAbsorbed; // 0x1810            
            uint8_t _pad1814[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tinker_Defensive_Matrix because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Tinker_Defensive_Matrix) == 0x1818);
    };
};
