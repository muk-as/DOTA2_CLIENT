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
        // Size: 0x1808
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lich_FrostNova_Slow : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t slow_movement_speed; // 0x17f8            
            std::int32_t slow_attack_speed; // 0x17fc            
            std::int32_t slow_attack_speed_primary; // 0x1800            
            bool m_bIsPrimary; // 0x1804            
            uint8_t _pad1805[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lich_FrostNova_Slow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Lich_FrostNova_Slow) == 0x1808);
    };
};
