#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
    // Size: 0x630
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Nian_Hurricane : public client::C_DOTABaseAbility
    {
    public:
        int32_t min_distance; // 0x5d8        
        int32_t max_distance; // 0x5dc        
        int32_t torrent_count; // 0x5e0        
        float fire_interval; // 0x5e4        
        float pull_switch_interval; // 0x5e8        
        float game_time_wind_activation; // 0x5ec        
        client::CountdownTimer m_ctPullTimer; // 0x5f0        
        client::CountdownTimer m_ctTimer; // 0x608        
        float m_flTiming; // 0x620        
        bool m_bForward; // 0x624        
        bool m_bUseWind; // 0x625        
        [[maybe_unused]] std::uint8_t pad_0x626[0x2]; // 0x626
        client::ParticleIndex_t m_nFXIndex; // 0x628        
        client::ParticleIndex_t m_nfxIndex_roar; // 0x62c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Nian_Hurricane because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Nian_Hurricane) == 0x630);
};
