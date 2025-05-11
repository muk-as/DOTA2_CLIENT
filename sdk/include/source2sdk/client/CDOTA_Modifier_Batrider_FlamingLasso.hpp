#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Batrider_FlamingLasso : public source2sdk::client::CDOTA_Buff
        {
        public:
            float tick_rate; // 0x17f8            
            std::int32_t drag_distance; // 0x17fc            
            std::int32_t break_distance; // 0x1800            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1804            
            Vector vPreviousLocation; // 0x1808            
            uint8_t _pad1814[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Batrider_FlamingLasso because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Batrider_FlamingLasso) == 0x1818);
    };
};
