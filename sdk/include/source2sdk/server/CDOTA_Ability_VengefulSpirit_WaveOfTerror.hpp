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
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_VengefulSpirit_WaveOfTerror : public server::CDOTABaseAbility
    {
    public:
        int32_t wave_width; // 0x5a0        
        float wave_speed; // 0x5a4        
        int32_t m_iProjectile; // 0x5a8        
        float vision_aoe; // 0x5ac        
        float vision_duration; // 0x5b0        
        int32_t steal_pct; // 0x5b4        
        int32_t damage; // 0x5b8        
        int32_t m_nNumHeroesHit; // 0x5bc        
        server::CountdownTimer m_ViewerTimer; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5d8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_VengefulSpirit_WaveOfTerror because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_VengefulSpirit_WaveOfTerror) == 0x5e0);
};
