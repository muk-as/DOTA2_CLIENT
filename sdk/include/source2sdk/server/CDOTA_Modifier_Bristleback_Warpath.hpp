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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Bristleback_Warpath : public client::CDOTA_Buff
    {
    public:
        int32_t damage_per_stack; // 0x16e8        
        int32_t move_speed_per_stack; // 0x16ec        
        int32_t max_stacks; // 0x16f0        
        float stack_duration; // 0x16f4        
        int32_t aspd_per_stack; // 0x16f8        
        float active_bonus_attack_percent; // 0x16fc        
        float active_bonus_movement_percent; // 0x1700        
        entity2::GameTime_t m_flMaxStackStartTime; // 0x1704        
        bool m_bSuppressKillEater; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bristleback_Warpath because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bristleback_Warpath) == 0x1710);
};
