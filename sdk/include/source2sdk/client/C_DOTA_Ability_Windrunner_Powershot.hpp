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
    // Size: 0x638
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Windrunner_Powershot : public client::C_DOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x600[0x8]; // 0x600
        entity2::GameTime_t m_fStartTime; // 0x608        
        float m_fPower; // 0x60c        
        int32_t m_iProjectile; // 0x610        
        float damage_reduction; // 0x614        
        float arrow_width; // 0x618        
        int32_t powershot_damage; // 0x61c        
        float tree_width; // 0x620        
        float slow; // 0x624        
        float slow_duration; // 0x628        
        bool m_bAwardedKillEater; // 0x62c        
        [[maybe_unused]] std::uint8_t pad_0x62d[0x3]; // 0x62d
        int32_t m_nHeroesHit; // 0x630        
        client::ParticleIndex_t m_nFXIndex; // 0x634        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Windrunner_Powershot because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Windrunner_Powershot) == 0x638);
};
