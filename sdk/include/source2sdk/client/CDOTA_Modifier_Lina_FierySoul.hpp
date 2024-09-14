#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CDOTA_Modifier_Lina_FierySoul : public client::CDOTA_Buff
    {
    public:
        int32_t fiery_soul_attack_speed_bonus; // 0x16e8        
        int32_t fiery_soul_magic_resist; // 0x16ec        
        float fiery_soul_move_speed_bonus; // 0x16f0        
        int32_t fiery_soul_max_stacks; // 0x16f4        
        float fiery_soul_stack_duration; // 0x16f8        
        client::ParticleIndex_t m_nFXIndex; // 0x16fc        
        entity2::GameTime_t m_flFierySoulDieTime; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lina_FierySoul because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lina_FierySoul) == 0x1708);
};
