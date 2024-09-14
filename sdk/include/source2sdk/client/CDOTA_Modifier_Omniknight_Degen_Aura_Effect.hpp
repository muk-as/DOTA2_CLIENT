#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Omniknight_Degen_Aura_Effect : public client::CDOTA_Buff
    {
    public:
        int32_t speed_bonus; // 0x16e8        
        int32_t bonus_damage_per_stack; // 0x16ec        
        float stack_interval; // 0x16f0        
        float linger_duration; // 0x16f4        
        int32_t max_stacks; // 0x16f8        
        bool m_bActive; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x16fd[0x3]; // 0x16fd
        entity2::GameTime_t m_flLastActiveTime; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Omniknight_Degen_Aura_Effect because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Omniknight_Degen_Aura_Effect) == 0x1708);
};
