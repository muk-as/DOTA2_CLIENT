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
    // Size: 0x640
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Aghanim_UrnUpheaval : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vPosition; // 0x5d8        
        float aoe; // 0x5e4        
        float slow_rate; // 0x5e8        
        float slow_rate_duration; // 0x5ec        
        float duration; // 0x5f0        
        float max_slow; // 0x5f4        
        float burn_damage; // 0x5f8        
        float m_flCurrentSlow; // 0x5fc        
        client::ParticleIndex_t m_nFXIndex; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x604[0x4]; // 0x604
        client::CountdownTimer m_SlowTimer; // 0x608        
        client::CountdownTimer m_timer; // 0x620        
        [[maybe_unused]] std::uint8_t pad_0x638[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Aghanim_UrnUpheaval because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Aghanim_UrnUpheaval) == 0x640);
};
