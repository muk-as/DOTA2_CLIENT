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
    // Size: 0x640
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_VengefulSpirit_WaveOfTerror : public client::C_DOTABaseAbility
    {
    public:
        int32_t wave_width; // 0x600        
        float wave_speed; // 0x604        
        int32_t m_iProjectile; // 0x608        
        float vision_aoe; // 0x60c        
        float vision_duration; // 0x610        
        int32_t steal_pct; // 0x614        
        int32_t damage; // 0x618        
        int32_t m_nNumHeroesHit; // 0x61c        
        client::CountdownTimer m_ViewerTimer; // 0x620        
        [[maybe_unused]] std::uint8_t pad_0x638[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_VengefulSpirit_WaveOfTerror because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_VengefulSpirit_WaveOfTerror) == 0x640);
};
