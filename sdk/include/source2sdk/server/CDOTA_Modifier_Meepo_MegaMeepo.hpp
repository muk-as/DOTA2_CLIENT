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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Meepo_MegaMeepo : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1888            
            float m_flOffset; // 0x188c            
            QAngle m_vStartAngles; // 0x1890            
            Vector m_vStartLocation; // 0x189c            
            float animation_rate; // 0x18a8            
            bool m_bInterrupted; // 0x18ac            
            bool m_bHasBeenDestroyed; // 0x18ad            
            bool m_bIsHighestMeepo; // 0x18ae            
            uint8_t _pad18af[0x1];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Meepo_MegaMeepo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Meepo_MegaMeepo) == 0x18b0);
    };
};
