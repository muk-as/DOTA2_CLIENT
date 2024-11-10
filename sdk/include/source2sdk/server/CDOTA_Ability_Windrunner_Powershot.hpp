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
    // Size: 0x600
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Windrunner_Powershot : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5c8[0x8]; // 0x5c8
        entity2::GameTime_t m_fStartTime; // 0x5d0        
        float m_fPower; // 0x5d4        
        int32_t m_iProjectile; // 0x5d8        
        float damage_reduction; // 0x5dc        
        float arrow_width; // 0x5e0        
        int32_t powershot_damage; // 0x5e4        
        float tree_width; // 0x5e8        
        float slow; // 0x5ec        
        float slow_duration; // 0x5f0        
        bool m_bAwardedKillEater; // 0x5f4        
        [[maybe_unused]] std::uint8_t pad_0x5f5[0x3]; // 0x5f5
        int32_t m_nHeroesHit; // 0x5f8        
        client::ParticleIndex_t m_nFXIndex; // 0x5fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Windrunner_Powershot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Windrunner_Powershot) == 0x600);
};
