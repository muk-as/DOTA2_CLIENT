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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x638
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_EarthSpirit_RollingBoulder : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5a0[0x10]; // 0x5a0
        int32_t radius; // 0x5b0        
        int32_t speed; // 0x5b4        
        int32_t rock_speed; // 0x5b8        
        int32_t damage; // 0x5bc        
        int32_t damage_str; // 0x5c0        
        float distance; // 0x5c4        
        float rock_distance; // 0x5c8        
        float rock_distance_multiplier; // 0x5cc        
        float slow_duration; // 0x5d0        
        int32_t destroy_stone; // 0x5d4        
        bool can_roll_over_allied_heroes; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5d9[0x3]; // 0x5d9
        float allied_hero_multiplier; // 0x5dc        
        float allied_hero_distance; // 0x5e0        
        float allied_hero_speed; // 0x5e4        
        client::ParticleIndex_t m_nFXIndex; // 0x5e8        
        bool m_boulderSetposBool; // 0x5ec        
        [[maybe_unused]] std::uint8_t pad_0x5ed[0x3]; // 0x5ed
        int32_t m_nProjectileID; // 0x5f0        
        Vector m_vStartingLocation; // 0x5f4        
        Vector m_vProjectileLocation; // 0x600        
        Vector m_vDir; // 0x60c        
        Vector m_vVel; // 0x618        
        bool m_bUsedStone; // 0x624        
        bool m_bRolledOverAlliedHero; // 0x625        
        [[maybe_unused]] std::uint8_t pad_0x626[0x2]; // 0x626
        Vector m_vRollDirection; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x634[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_EarthSpirit_RollingBoulder because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_EarthSpirit_RollingBoulder) == 0x638);
};
