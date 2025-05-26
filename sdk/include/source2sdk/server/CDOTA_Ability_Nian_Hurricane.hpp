#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x618
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Nian_Hurricane : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t min_distance; // 0x5c0            
            std::int32_t max_distance; // 0x5c4            
            std::int32_t torrent_count; // 0x5c8            
            float fire_interval; // 0x5cc            
            float pull_switch_interval; // 0x5d0            
            float game_time_wind_activation; // 0x5d4            
            source2sdk::server::CountdownTimer m_ctPullTimer; // 0x5d8            
            source2sdk::server::CountdownTimer m_ctTimer; // 0x5f0            
            float m_flTiming; // 0x608            
            bool m_bForward; // 0x60c            
            bool m_bUseWind; // 0x60d            
            uint8_t _pad060e[0x2]; // 0x60e
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x610            
            source2sdk::client::ParticleIndex_t m_nfxIndex_roar; // 0x614            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Nian_Hurricane because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Nian_Hurricane) == 0x618);
    };
};
