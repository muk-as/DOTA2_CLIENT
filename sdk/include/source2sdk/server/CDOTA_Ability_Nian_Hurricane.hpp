#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CDOTA_Ability_Nian_Hurricane : public server::CDOTABaseAbility
    {
    public:
        int32_t min_distance; // 0x5a0        
        int32_t max_distance; // 0x5a4        
        int32_t torrent_count; // 0x5a8        
        float fire_interval; // 0x5ac        
        float pull_switch_interval; // 0x5b0        
        float game_time_wind_activation; // 0x5b4        
        server::CountdownTimer m_ctPullTimer; // 0x5b8        
        server::CountdownTimer m_ctTimer; // 0x5d0        
        float m_flTiming; // 0x5e8        
        bool m_bForward; // 0x5ec        
        bool m_bUseWind; // 0x5ed        
        [[maybe_unused]] std::uint8_t pad_0x5ee[0x2]; // 0x5ee
        client::ParticleIndex_t m_nFXIndex; // 0x5f0        
        client::ParticleIndex_t m_nfxIndex_roar; // 0x5f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Nian_Hurricane because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Nian_Hurricane) == 0x5f8);
};
