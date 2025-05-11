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
        class CDOTA_Modifier_DarkWillow_BrambleMaze_Creation_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float latch_creation_interval; // 0x17f8            
            float initial_creation_delay; // 0x17fc            
            std::int32_t placement_count; // 0x1800            
            float placement_duration; // 0x1804            
            float extra_brambles_placement_duration; // 0x1808            
            std::int32_t m_iBramblesIndex; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_BrambleMaze_Creation_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DarkWillow_BrambleMaze_Creation_Thinker) == 0x1810);
    };
};
