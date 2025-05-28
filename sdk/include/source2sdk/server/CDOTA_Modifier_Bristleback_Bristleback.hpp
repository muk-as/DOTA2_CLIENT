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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bristleback_Bristleback : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t side_damage_reduction; // 0x1888            
            std::int32_t back_damage_reduction; // 0x188c            
            std::int32_t side_angle; // 0x1890            
            std::int32_t back_angle; // 0x1894            
            float quill_release_threshold; // 0x1898            
            float quill_release_interval; // 0x189c            
            bool m_bRearHit; // 0x18a0            
            bool m_bSideHit; // 0x18a1            
            uint8_t _pad18a2[0x2]; // 0x18a2
            float m_flDamageAccumulated; // 0x18a4            
            std::int32_t m_nAccumulatedHits; // 0x18a8            
            uint8_t _pad18ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bristleback_Bristleback because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Bristleback_Bristleback) == 0x18b0);
    };
};
