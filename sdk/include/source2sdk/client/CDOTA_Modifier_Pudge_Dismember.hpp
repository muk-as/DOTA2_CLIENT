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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pudge_Dismember : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t dismember_damage; // 0x_            
            float strength_damage; // 0x_            
            float glutton_strength_stack_duration; // 0x_            
            std::int32_t gluttony_strength_bonus; // 0x_            
            std::int32_t m_nTicks; // 0x_            
            std::int32_t m_nMaxTicks; // 0x_            
            float m_flTickRate; // 0x_            
            float animation_rate; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Dismember because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Pudge_Dismember) == 0x_);
    };
};
