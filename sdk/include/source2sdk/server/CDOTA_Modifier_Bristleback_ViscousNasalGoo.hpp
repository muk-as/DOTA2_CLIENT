#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bristleback_ViscousNasalGoo : public source2sdk::client::CDOTA_Buff
        {
        public:
            float base_armor; // 0x17f8            
            float armor_per_stack; // 0x17fc            
            std::int32_t base_move_slow; // 0x1800            
            std::int32_t move_slow_per_stack; // 0x1804            
            std::int32_t stack_limit; // 0x1808            
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bristleback_ViscousNasalGoo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Bristleback_ViscousNasalGoo) == 0x1810);
    };
};
