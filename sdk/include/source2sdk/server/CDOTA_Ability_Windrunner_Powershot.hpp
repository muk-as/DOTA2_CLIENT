#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Windrunner_Powershot : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5a0[0x8]; // 0x5a0
        entity2::GameTime_t m_fStartTime; // 0x5a8        
        float m_fPower; // 0x5ac        
        int32_t m_iProjectile; // 0x5b0        
        float damage_reduction; // 0x5b4        
        float arrow_width; // 0x5b8        
        int32_t powershot_damage; // 0x5bc        
        float tree_width; // 0x5c0        
        float slow; // 0x5c4        
        float slow_duration; // 0x5c8        
        bool m_bAwardedKillEater; // 0x5cc        
        [[maybe_unused]] std::uint8_t pad_0x5cd[0x3]; // 0x5cd
        int32_t m_nHeroesHit; // 0x5d0        
        client::ParticleIndex_t m_nFXIndex; // 0x5d4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Windrunner_Powershot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Windrunner_Powershot) == 0x5d8);
};
