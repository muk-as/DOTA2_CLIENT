#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Aghanim_UrnUpheaval : public server::CDOTABaseAbility
    {
    public:
        Vector m_vPosition; // 0x5a0        
        float aoe; // 0x5ac        
        float slow_rate; // 0x5b0        
        float slow_rate_duration; // 0x5b4        
        float duration; // 0x5b8        
        float max_slow; // 0x5bc        
        float burn_damage; // 0x5c0        
        float m_flCurrentSlow; // 0x5c4        
        client::ParticleIndex_t m_nFXIndex; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5cc[0x4]; // 0x5cc
        server::CountdownTimer m_SlowTimer; // 0x5d0        
        server::CountdownTimer m_timer; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x600[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Aghanim_UrnUpheaval because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Aghanim_UrnUpheaval) == 0x608);
};
