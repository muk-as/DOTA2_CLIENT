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
        class CDOTA_Modifier_Gyrocopter_Call_Down : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t slow_duration; // 0x17f8            
            std::int32_t damage; // 0x17fc            
            std::int32_t radius; // 0x1800            
            std::int32_t slow; // 0x1804            
            bool m_bDelayed; // 0x1808            
            uint8_t _pad1809[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Gyrocopter_Call_Down because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Gyrocopter_Call_Down) == 0x1810);
    };
};
