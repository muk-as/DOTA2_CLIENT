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
    // Size: 0x658
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Nian_Hurricane : public client::C_DOTABaseAbility
    {
    public:
        int32_t min_distance; // 0x600        
        int32_t max_distance; // 0x604        
        int32_t torrent_count; // 0x608        
        float fire_interval; // 0x60c        
        float pull_switch_interval; // 0x610        
        float game_time_wind_activation; // 0x614        
        client::CountdownTimer m_ctPullTimer; // 0x618        
        client::CountdownTimer m_ctTimer; // 0x630        
        float m_flTiming; // 0x648        
        bool m_bForward; // 0x64c        
        bool m_bUseWind; // 0x64d        
        [[maybe_unused]] std::uint8_t pad_0x64e[0x2]; // 0x64e
        client::ParticleIndex_t m_nFXIndex; // 0x650        
        client::ParticleIndex_t m_nfxIndex_roar; // 0x654        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Nian_Hurricane because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Nian_Hurricane) == 0x658);
};
