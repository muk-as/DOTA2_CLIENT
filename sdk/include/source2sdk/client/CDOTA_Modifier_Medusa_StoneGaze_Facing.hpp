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
        class CDOTA_Modifier_Medusa_StoneGaze_Facing : public source2sdk::client::CDOTA_Buff
        {
        public:
            float face_duration; // 0x17f8            
            float stone_duration; // 0x17fc            
            float duration; // 0x1800            
            float vision_cone; // 0x1804            
            float m_flAccumulatedTime; // 0x1808            
            uint8_t _pad180c[0x4]; // 0x180c
            source2sdk::client::CountdownTimer ctFacing; // 0x1810            
            bool m_bAlreadyStoned; // 0x1828            
            uint8_t _pad1829[0x3]; // 0x1829
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x182c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Medusa_StoneGaze_Facing because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Medusa_StoneGaze_Facing) == 0x1830);
    };
};
