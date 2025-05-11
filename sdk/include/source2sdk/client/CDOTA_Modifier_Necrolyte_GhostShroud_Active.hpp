#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Necrolyte_GhostShroud_Active : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t heal_bonus; // 0x17f8            
            std::int32_t bonus_damage; // 0x17fc            
            float slow_aoe; // 0x1800            
            float movement_transfer; // 0x1804            
            float movement_speed; // 0x1808            
            float m_flMovementSpeedAmp; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Necrolyte_GhostShroud_Active because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Necrolyte_GhostShroud_Active) == 0x1810);
    };
};
