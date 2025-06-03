#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Ringmaster_Wheel_Mesmerize : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1878[0x14]; // 0x1878
            float wheel_stun; // 0x188c            
            float mesmerize_radius; // 0x1890            
            float vision_cone; // 0x1894            
            float explosion_damage; // 0x1898            
            uint8_t _pad189c[0x4]; // 0x189c
            source2sdk::client::CountdownTimer m_ctFuseTimer; // 0x18a0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18b8            
            std::int32_t m_nTimesTriggered; // 0x18bc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Wheel_Mesmerize because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Ringmaster_Wheel_Mesmerize) == 0x18c0);
    };
};
