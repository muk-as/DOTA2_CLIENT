#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x610
    // Has VTable
    // Is Abstract
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Nevermore_Shadowraze : public client::C_DOTABaseAbility
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x600        
        client::ParticleIndex_t m_nFXIndexB; // 0x604        
        float cooldown_reduction_on_hero_hit; // 0x608        
        bool m_bReadyToSetCooldown; // 0x60c        
        [[maybe_unused]] std::uint8_t pad_0x60d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Nevermore_Shadowraze because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Nevermore_Shadowraze) == 0x610);
};
