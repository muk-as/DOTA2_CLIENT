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
        // Size: 0x1830
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Ringmaster_Spotlight_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool self_spotlight; // 0x17f8            
            uint8_t _pad17f9[0x3]; // 0x17f9
            float radius; // 0x17fc            
            float initial_speed; // 0x1800            
            float sweep_speed; // 0x1804            
            float sweep_radius; // 0x1808            
            float linger_duration; // 0x180c            
            std::int32_t spotlight_index; // 0x1810            
            Vector m_vStartLocation; // 0x1814            
            Vector m_vTargetLocation; // 0x1820            
            float m_flTargetReachedTime; // 0x182c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Spotlight_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Ringmaster_Spotlight_Thinker) == 0x1830);
    };
};
