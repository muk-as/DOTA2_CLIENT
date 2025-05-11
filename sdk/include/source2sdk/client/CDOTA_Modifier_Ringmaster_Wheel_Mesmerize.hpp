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
        // Size: 0x1830
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Ringmaster_Wheel_Mesmerize : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad17f8[0x8]; // 0x17f8
            float wheel_stun; // 0x1800            
            float mesmerize_radius; // 0x1804            
            float vision_cone; // 0x1808            
            float explosion_damage; // 0x180c            
            source2sdk::client::CountdownTimer m_ctFuseTimer; // 0x1810            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1828            
            std::int32_t m_nTimesTriggered; // 0x182c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Wheel_Mesmerize because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Ringmaster_Wheel_Mesmerize) == 0x1830);
    };
};
