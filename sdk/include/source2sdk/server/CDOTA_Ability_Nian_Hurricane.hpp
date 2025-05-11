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
        // Size: 0x610
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Nian_Hurricane : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t min_distance; // 0x5b8            
            std::int32_t max_distance; // 0x5bc            
            std::int32_t torrent_count; // 0x5c0            
            float fire_interval; // 0x5c4            
            float pull_switch_interval; // 0x5c8            
            float game_time_wind_activation; // 0x5cc            
            source2sdk::server::CountdownTimer m_ctPullTimer; // 0x5d0            
            source2sdk::server::CountdownTimer m_ctTimer; // 0x5e8            
            float m_flTiming; // 0x600            
            bool m_bForward; // 0x604            
            bool m_bUseWind; // 0x605            
            uint8_t _pad0606[0x2]; // 0x606
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x608            
            source2sdk::client::ParticleIndex_t m_nfxIndex_roar; // 0x60c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Nian_Hurricane because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Nian_Hurricane) == 0x610);
    };
};
