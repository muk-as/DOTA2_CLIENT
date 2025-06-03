#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        class CDOTA_Modifier_Lich_Sinister_Gaze : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t movement_speed; // 0x1878            
            std::int32_t mana_drain; // 0x187c            
            float m_flIntervalRate; // 0x1880            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1884            
            bool m_bBlasted; // 0x1888            
            uint8_t _pad1889[0x3]; // 0x1889
            float post_gaze_debuff_duration_multiplier; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lich_Sinister_Gaze because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Lich_Sinister_Gaze) == 0x1890);
    };
};
