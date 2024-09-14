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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x660
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_EarthSpirit_RollingBoulder : public client::C_DOTABaseAbility
    {
    public:
        int32_t radius; // 0x5d8        
        int32_t speed; // 0x5dc        
        int32_t rock_speed; // 0x5e0        
        int32_t damage; // 0x5e4        
        int32_t damage_str; // 0x5e8        
        float distance; // 0x5ec        
        float rock_distance; // 0x5f0        
        float rock_distance_multiplier; // 0x5f4        
        float slow_duration; // 0x5f8        
        int32_t destroy_stone; // 0x5fc        
        bool can_roll_over_allied_heroes; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x601[0x3]; // 0x601
        float allied_hero_multiplier; // 0x604        
        float allied_hero_distance; // 0x608        
        float allied_hero_speed; // 0x60c        
        client::ParticleIndex_t m_nFXIndex; // 0x610        
        bool m_boulderSetposBool; // 0x614        
        [[maybe_unused]] std::uint8_t pad_0x615[0x3]; // 0x615
        int32_t m_nProjectileID; // 0x618        
        Vector m_vStartingLocation; // 0x61c        
        Vector m_vProjectileLocation; // 0x628        
        Vector m_vDir; // 0x634        
        Vector m_vVel; // 0x640        
        bool m_bUsedStone; // 0x64c        
        bool m_bRolledOverAlliedHero; // 0x64d        
        [[maybe_unused]] std::uint8_t pad_0x64e[0x2]; // 0x64e
        Vector m_vRollDirection; // 0x650        
        [[maybe_unused]] std::uint8_t pad_0x65c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_EarthSpirit_RollingBoulder because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_EarthSpirit_RollingBoulder) == 0x660);
};
