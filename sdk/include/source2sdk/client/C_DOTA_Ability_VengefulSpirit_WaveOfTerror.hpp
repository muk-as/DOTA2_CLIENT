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
    // Size: 0x618
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_VengefulSpirit_WaveOfTerror : public client::C_DOTABaseAbility
    {
    public:
        int32_t wave_width; // 0x5d8        
        float wave_speed; // 0x5dc        
        int32_t m_iProjectile; // 0x5e0        
        float vision_aoe; // 0x5e4        
        float vision_duration; // 0x5e8        
        int32_t steal_pct; // 0x5ec        
        int32_t damage; // 0x5f0        
        int32_t m_nNumHeroesHit; // 0x5f4        
        client::CountdownTimer m_ViewerTimer; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x610[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_VengefulSpirit_WaveOfTerror because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_VengefulSpirit_WaveOfTerror) == 0x618);
};
