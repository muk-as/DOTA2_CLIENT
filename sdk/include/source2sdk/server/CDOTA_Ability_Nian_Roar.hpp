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
    // Size: 0x620
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Nian_Roar : public server::CDOTABaseAbility
    {
    public:
        int32_t base_projectiles; // 0x5c8        
        int32_t max_projectiles; // 0x5cc        
        int32_t projectile_step; // 0x5d0        
        int32_t base_speed; // 0x5d4        
        int32_t speed_step; // 0x5d8        
        int32_t initial_radius; // 0x5dc        
        int32_t end_radius; // 0x5e0        
        int32_t damage; // 0x5e4        
        float base_interval; // 0x5e8        
        float interval_step; // 0x5ec        
        int32_t m_nCastCount; // 0x5f0        
        int32_t m_nProjectiles; // 0x5f4        
        int32_t m_nWaveCount; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x5fc[0x4]; // 0x5fc
        server::CountdownTimer m_ctTimer; // 0x600        
        float m_flTiming; // 0x618        
        bool m_bScriptRoar; // 0x61c        
        [[maybe_unused]] std::uint8_t pad_0x61d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Nian_Roar because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Nian_Roar) == 0x620);
};
