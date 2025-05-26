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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pudge_RottenCore : public source2sdk::client::CDOTA_Buff
        {
        public:
            float attack_damage_per_stack; // 0x1878            
            std::int32_t max_total_stacks; // 0x187c            
            float rot_tick; // 0x1880            
            std::int32_t stacks_decrement_per_rot_off_tick; // 0x1884            
            std::int32_t m_nRotOffTicksToDecrement; // 0x1888            
            std::int32_t m_nAccumulatedRotOffTicks; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_RottenCore because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Pudge_RottenCore) == 0x1890);
    };
};
