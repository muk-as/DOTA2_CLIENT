#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Ringmaster_Wheel_Mesmerize : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1888[0x14]; // 0x1888
            float wheel_stun; // 0x189c            
            float mesmerize_radius; // 0x18a0            
            float vision_cone; // 0x18a4            
            float explosion_damage; // 0x18a8            
            uint8_t _pad18ac[0x4]; // 0x18ac
            source2sdk::server::CountdownTimer m_ctFuseTimer; // 0x18b0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18c8            
            std::int32_t m_nTimesTriggered; // 0x18cc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Wheel_Mesmerize because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Ringmaster_Wheel_Mesmerize) == 0x18d0);
    };
};
