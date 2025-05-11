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
        class CDOTA_Modifier_Techies_ReactiveTazer : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad17f8[0x8]; // 0x17f8
            std::int32_t bonus_ms; // 0x1800            
            float stun_radius; // 0x1804            
            float stun_duration; // 0x1808            
            std::int32_t damage_percent; // 0x180c            
            std::int32_t m_nDamageRemaining; // 0x1810            
            uint8_t _pad1814[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_ReactiveTazer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Techies_ReactiveTazer) == 0x1818);
    };
};
