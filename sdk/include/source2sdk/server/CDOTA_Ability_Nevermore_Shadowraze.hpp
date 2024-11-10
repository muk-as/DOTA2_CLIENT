#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5d8
    // Has VTable
    // Is Abstract
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Nevermore_Shadowraze : public server::CDOTABaseAbility
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x5c8        
        client::ParticleIndex_t m_nFXIndexB; // 0x5cc        
        float cooldown_reduction_on_hero_hit; // 0x5d0        
        bool m_bReadyToSetCooldown; // 0x5d4        
        [[maybe_unused]] std::uint8_t pad_0x5d5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Nevermore_Shadowraze because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Nevermore_Shadowraze) == 0x5d8);
};
