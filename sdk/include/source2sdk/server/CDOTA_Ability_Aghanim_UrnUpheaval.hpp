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
    // Size: 0x630
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Aghanim_UrnUpheaval : public server::CDOTABaseAbility
    {
    public:
        Vector m_vPosition; // 0x5c8        
        float aoe; // 0x5d4        
        float slow_rate; // 0x5d8        
        float slow_rate_duration; // 0x5dc        
        float duration; // 0x5e0        
        float max_slow; // 0x5e4        
        float burn_damage; // 0x5e8        
        float m_flCurrentSlow; // 0x5ec        
        client::ParticleIndex_t m_nFXIndex; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x5f4[0x4]; // 0x5f4
        server::CountdownTimer m_SlowTimer; // 0x5f8        
        server::CountdownTimer m_timer; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x628[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Aghanim_UrnUpheaval because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Aghanim_UrnUpheaval) == 0x630);
};
