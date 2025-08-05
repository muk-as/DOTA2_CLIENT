#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Nian_Hurricane : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t min_distance; // 0x688            
            std::int32_t max_distance; // 0x68c            
            std::int32_t torrent_count; // 0x690            
            float fire_interval; // 0x694            
            float pull_switch_interval; // 0x698            
            float game_time_wind_activation; // 0x69c            
            source2sdk::client::CountdownTimer m_ctPullTimer; // 0x6a0            
            source2sdk::client::CountdownTimer m_ctTimer; // 0x6b8            
            float m_flTiming; // 0x6d0            
            bool m_bForward; // 0x6d4            
            bool m_bUseWind; // 0x6d5            
            uint8_t _pad06d6[0x2]; // 0x6d6
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x6d8            
            source2sdk::client::ParticleIndex_t m_nfxIndex_roar; // 0x6dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Nian_Hurricane because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Nian_Hurricane) == 0x6e0);
    };
};
