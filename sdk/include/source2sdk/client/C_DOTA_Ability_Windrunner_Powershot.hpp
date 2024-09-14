#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x610
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Windrunner_Powershot : public client::C_DOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5d8[0x8]; // 0x5d8
        entity2::GameTime_t m_fStartTime; // 0x5e0        
        float m_fPower; // 0x5e4        
        int32_t m_iProjectile; // 0x5e8        
        float damage_reduction; // 0x5ec        
        float arrow_width; // 0x5f0        
        int32_t powershot_damage; // 0x5f4        
        float tree_width; // 0x5f8        
        float slow; // 0x5fc        
        float slow_duration; // 0x600        
        bool m_bAwardedKillEater; // 0x604        
        [[maybe_unused]] std::uint8_t pad_0x605[0x3]; // 0x605
        int32_t m_nHeroesHit; // 0x608        
        client::ParticleIndex_t m_nFXIndex; // 0x60c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Windrunner_Powershot because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Windrunner_Powershot) == 0x610);
};
