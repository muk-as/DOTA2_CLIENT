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
        // Size: 0x608
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Nian_Hurricane : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t min_distance; // 0x5b0            
            std::int32_t max_distance; // 0x5b4            
            std::int32_t torrent_count; // 0x5b8            
            float fire_interval; // 0x5bc            
            float pull_switch_interval; // 0x5c0            
            float game_time_wind_activation; // 0x5c4            
            source2sdk::client::CountdownTimer m_ctPullTimer; // 0x5c8            
            source2sdk::client::CountdownTimer m_ctTimer; // 0x5e0            
            float m_flTiming; // 0x5f8            
            bool m_bForward; // 0x5fc            
            bool m_bUseWind; // 0x5fd            
            uint8_t _pad05fe[0x2]; // 0x5fe
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x600            
            source2sdk::client::ParticleIndex_t m_nfxIndex_roar; // 0x604            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Nian_Hurricane because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Nian_Hurricane) == 0x608);
    };
};
