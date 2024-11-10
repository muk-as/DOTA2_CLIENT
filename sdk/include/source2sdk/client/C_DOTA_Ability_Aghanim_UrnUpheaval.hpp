#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x668
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Aghanim_UrnUpheaval : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vPosition; // 0x600        
        float aoe; // 0x60c        
        float slow_rate; // 0x610        
        float slow_rate_duration; // 0x614        
        float duration; // 0x618        
        float max_slow; // 0x61c        
        float burn_damage; // 0x620        
        float m_flCurrentSlow; // 0x624        
        client::ParticleIndex_t m_nFXIndex; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x62c[0x4]; // 0x62c
        client::CountdownTimer m_SlowTimer; // 0x630        
        client::CountdownTimer m_timer; // 0x648        
        [[maybe_unused]] std::uint8_t pad_0x660[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Aghanim_UrnUpheaval because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Aghanim_UrnUpheaval) == 0x668);
};
