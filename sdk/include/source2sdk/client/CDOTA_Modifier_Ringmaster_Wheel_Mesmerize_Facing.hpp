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
        class CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Facing : public source2sdk::client::CDOTA_Buff
        {
        public:
            float face_duration; // 0x1888            
            float duration; // 0x188c            
            float vision_cone; // 0x1890            
            float m_flAccumulatedTime; // 0x1894            
            float mesmerize_radius; // 0x1898            
            uint8_t _pad189c[0x4]; // 0x189c
            source2sdk::client::CountdownTimer ctFacing; // 0x18a0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18b8            
            uint8_t _pad18bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Facing because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Facing) == 0x18c0);
    };
};
