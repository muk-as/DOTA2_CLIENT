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
    // Size: 0x688
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_EarthSpirit_RollingBoulder : public client::C_DOTABaseAbility
    {
    public:
        int32_t radius; // 0x600        
        int32_t speed; // 0x604        
        int32_t rock_speed; // 0x608        
        int32_t damage; // 0x60c        
        int32_t damage_str; // 0x610        
        float distance; // 0x614        
        float rock_distance; // 0x618        
        float rock_distance_multiplier; // 0x61c        
        float slow_duration; // 0x620        
        int32_t destroy_stone; // 0x624        
        bool can_roll_over_allied_heroes; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x629[0x3]; // 0x629
        float allied_hero_multiplier; // 0x62c        
        float allied_hero_distance; // 0x630        
        float allied_hero_speed; // 0x634        
        client::ParticleIndex_t m_nFXIndex; // 0x638        
        bool m_boulderSetposBool; // 0x63c        
        [[maybe_unused]] std::uint8_t pad_0x63d[0x3]; // 0x63d
        int32_t m_nProjectileID; // 0x640        
        Vector m_vStartingLocation; // 0x644        
        Vector m_vProjectileLocation; // 0x650        
        Vector m_vDir; // 0x65c        
        Vector m_vVel; // 0x668        
        bool m_bUsedStone; // 0x674        
        bool m_bRolledOverAlliedHero; // 0x675        
        [[maybe_unused]] std::uint8_t pad_0x676[0x2]; // 0x676
        Vector m_vRollDirection; // 0x678        
        [[maybe_unused]] std::uint8_t pad_0x684[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_EarthSpirit_RollingBoulder because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_EarthSpirit_RollingBoulder) == 0x688);
};
