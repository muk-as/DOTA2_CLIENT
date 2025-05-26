#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Omniknight_Degen_Aura_Effect : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t speed_bonus; // 0x1878            
            std::int32_t bonus_damage_per_stack; // 0x187c            
            float stack_interval; // 0x1880            
            float linger_duration; // 0x1884            
            std::int32_t max_stacks; // 0x1888            
            bool m_bActive; // 0x188c            
            uint8_t _pad188d[0x3]; // 0x188d
            source2sdk::entity2::GameTime_t m_flLastActiveTime; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Omniknight_Degen_Aura_Effect because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Omniknight_Degen_Aura_Effect) == 0x1898);
    };
};
