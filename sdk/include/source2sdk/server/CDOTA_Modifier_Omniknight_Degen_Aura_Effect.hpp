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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Omniknight_Degen_Aura_Effect : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t speed_bonus; // 0x17f8            
            std::int32_t bonus_damage_per_stack; // 0x17fc            
            float stack_interval; // 0x1800            
            float linger_duration; // 0x1804            
            std::int32_t max_stacks; // 0x1808            
            bool m_bActive; // 0x180c            
            uint8_t _pad180d[0x3]; // 0x180d
            source2sdk::entity2::GameTime_t m_flLastActiveTime; // 0x1810            
            uint8_t _pad1814[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Omniknight_Degen_Aura_Effect because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Omniknight_Degen_Aura_Effect) == 0x1818);
    };
};
