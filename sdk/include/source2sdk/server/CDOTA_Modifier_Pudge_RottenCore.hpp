#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        class CDOTA_Modifier_Pudge_RottenCore : public source2sdk::client::CDOTA_Buff
        {
        public:
            float attack_damage_per_stack; // 0x17f8            
            std::int32_t max_total_stacks; // 0x17fc            
            float rot_tick; // 0x1800            
            std::int32_t stacks_decrement_per_rot_off_tick; // 0x1804            
            std::int32_t m_nRotOffTicksToDecrement; // 0x1808            
            std::int32_t m_nAccumulatedRotOffTicks; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_RottenCore because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Pudge_RottenCore) == 0x1810);
    };
};
