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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pudge_Dismember : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t dismember_damage; // 0x1888            
            float strength_damage; // 0x188c            
            float glutton_strength_stack_duration; // 0x1890            
            std::int32_t gluttony_strength_bonus; // 0x1894            
            std::int32_t m_nTicks; // 0x1898            
            std::int32_t m_nMaxTicks; // 0x189c            
            float m_flTickRate; // 0x18a0            
            float animation_rate; // 0x18a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Dismember because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Pudge_Dismember) == 0x18a8);
    };
};
