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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Meepo_MegaMeepo : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1878            
            float m_flOffset; // 0x187c            
            QAngle m_vStartAngles; // 0x1880            
            Vector m_vStartLocation; // 0x188c            
            float animation_rate; // 0x1898            
            bool m_bInterrupted; // 0x189c            
            bool m_bHasBeenDestroyed; // 0x189d            
            bool m_bIsHighestMeepo; // 0x189e            
            uint8_t _pad189f[0x1];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Meepo_MegaMeepo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Meepo_MegaMeepo) == 0x18a0);
    };
};
