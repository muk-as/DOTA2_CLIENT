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
    // Size: 0x620
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Nian_Hurricane : public server::CDOTABaseAbility
    {
    public:
        int32_t min_distance; // 0x5c8        
        int32_t max_distance; // 0x5cc        
        int32_t torrent_count; // 0x5d0        
        float fire_interval; // 0x5d4        
        float pull_switch_interval; // 0x5d8        
        float game_time_wind_activation; // 0x5dc        
        server::CountdownTimer m_ctPullTimer; // 0x5e0        
        server::CountdownTimer m_ctTimer; // 0x5f8        
        float m_flTiming; // 0x610        
        bool m_bForward; // 0x614        
        bool m_bUseWind; // 0x615        
        [[maybe_unused]] std::uint8_t pad_0x616[0x2]; // 0x616
        client::ParticleIndex_t m_nFXIndex; // 0x618        
        client::ParticleIndex_t m_nfxIndex_roar; // 0x61c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Nian_Hurricane because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Nian_Hurricane) == 0x620);
};
