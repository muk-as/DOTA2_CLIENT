#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Nian_Roar : public server::CDOTABaseAbility
    {
    public:
        int32_t base_projectiles; // 0x5a0        
        int32_t max_projectiles; // 0x5a4        
        int32_t projectile_step; // 0x5a8        
        int32_t base_speed; // 0x5ac        
        int32_t speed_step; // 0x5b0        
        int32_t initial_radius; // 0x5b4        
        int32_t end_radius; // 0x5b8        
        int32_t damage; // 0x5bc        
        float base_interval; // 0x5c0        
        float interval_step; // 0x5c4        
        int32_t m_nCastCount; // 0x5c8        
        int32_t m_nProjectiles; // 0x5cc        
        int32_t m_nWaveCount; // 0x5d0        
        [[maybe_unused]] std::uint8_t pad_0x5d4[0x4]; // 0x5d4
        server::CountdownTimer m_ctTimer; // 0x5d8        
        float m_flTiming; // 0x5f0        
        bool m_bScriptRoar; // 0x5f4        
        [[maybe_unused]] std::uint8_t pad_0x5f5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Nian_Roar because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Nian_Roar) == 0x5f8);
};
