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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bristleback_Bristleback : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t side_damage_reduction; // 0x17f8            
            std::int32_t back_damage_reduction; // 0x17fc            
            std::int32_t side_angle; // 0x1800            
            std::int32_t back_angle; // 0x1804            
            float quill_release_threshold; // 0x1808            
            float quill_release_interval; // 0x180c            
            bool m_bRearHit; // 0x1810            
            bool m_bSideHit; // 0x1811            
            uint8_t _pad1812[0x2]; // 0x1812
            float m_flDamageAccumulated; // 0x1814            
            std::int32_t m_nAccumulatedHits; // 0x1818            
            uint8_t _pad181c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bristleback_Bristleback because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Bristleback_Bristleback) == 0x1820);
    };
};
