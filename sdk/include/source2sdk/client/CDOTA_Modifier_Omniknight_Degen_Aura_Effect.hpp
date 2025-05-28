#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Omniknight_Degen_Aura_Effect : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t speed_bonus; // 0x1888            
            std::int32_t bonus_damage_per_stack; // 0x188c            
            float stack_interval; // 0x1890            
            float linger_duration; // 0x1894            
            std::int32_t max_stacks; // 0x1898            
            bool m_bActive; // 0x189c            
            uint8_t _pad189d[0x3]; // 0x189d
            source2sdk::entity2::GameTime_t m_flLastActiveTime; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Omniknight_Degen_Aura_Effect because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Omniknight_Degen_Aura_Effect) == 0x18a8);
    };
};
