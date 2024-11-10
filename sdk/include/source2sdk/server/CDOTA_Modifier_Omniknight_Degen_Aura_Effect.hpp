#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Omniknight_Degen_Aura_Effect : public client::CDOTA_Buff
    {
    public:
        int32_t speed_bonus; // 0x1708        
        int32_t bonus_damage_per_stack; // 0x170c        
        float stack_interval; // 0x1710        
        float linger_duration; // 0x1714        
        int32_t max_stacks; // 0x1718        
        bool m_bActive; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3]; // 0x171d
        entity2::GameTime_t m_flLastActiveTime; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Omniknight_Degen_Aura_Effect because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Omniknight_Degen_Aura_Effect) == 0x1728);
};
