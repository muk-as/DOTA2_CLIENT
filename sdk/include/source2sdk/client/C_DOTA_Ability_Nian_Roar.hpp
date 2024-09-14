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
    // Size: 0x630
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Nian_Roar : public client::C_DOTABaseAbility
    {
    public:
        int32_t base_projectiles; // 0x5d8        
        int32_t max_projectiles; // 0x5dc        
        int32_t projectile_step; // 0x5e0        
        int32_t base_speed; // 0x5e4        
        int32_t speed_step; // 0x5e8        
        int32_t initial_radius; // 0x5ec        
        int32_t end_radius; // 0x5f0        
        int32_t damage; // 0x5f4        
        float base_interval; // 0x5f8        
        float interval_step; // 0x5fc        
        int32_t m_nCastCount; // 0x600        
        int32_t m_nProjectiles; // 0x604        
        int32_t m_nWaveCount; // 0x608        
        [[maybe_unused]] std::uint8_t pad_0x60c[0x4]; // 0x60c
        client::CountdownTimer m_ctTimer; // 0x610        
        float m_flTiming; // 0x628        
        bool m_bScriptRoar; // 0x62c        
        [[maybe_unused]] std::uint8_t pad_0x62d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Nian_Roar because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Nian_Roar) == 0x630);
};
