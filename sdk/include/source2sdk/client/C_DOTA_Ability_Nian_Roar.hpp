#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
    // Size: 0x658
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Nian_Roar : public client::C_DOTABaseAbility
    {
    public:
        int32_t base_projectiles; // 0x600        
        int32_t max_projectiles; // 0x604        
        int32_t projectile_step; // 0x608        
        int32_t base_speed; // 0x60c        
        int32_t speed_step; // 0x610        
        int32_t initial_radius; // 0x614        
        int32_t end_radius; // 0x618        
        int32_t damage; // 0x61c        
        float base_interval; // 0x620        
        float interval_step; // 0x624        
        int32_t m_nCastCount; // 0x628        
        int32_t m_nProjectiles; // 0x62c        
        int32_t m_nWaveCount; // 0x630        
        [[maybe_unused]] std::uint8_t pad_0x634[0x4]; // 0x634
        client::CountdownTimer m_ctTimer; // 0x638        
        float m_flTiming; // 0x650        
        bool m_bScriptRoar; // 0x654        
        [[maybe_unused]] std::uint8_t pad_0x655[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Nian_Roar because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Nian_Roar) == 0x658);
};
