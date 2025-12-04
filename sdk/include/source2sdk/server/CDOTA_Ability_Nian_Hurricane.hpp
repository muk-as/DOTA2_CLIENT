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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Nian_Hurricane : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t min_distance; // 0x_            
            std::int32_t max_distance; // 0x_            
            std::int32_t torrent_count; // 0x_            
            float fire_interval; // 0x_            
            float pull_switch_interval; // 0x_            
            float game_time_wind_activation; // 0x_            
            source2sdk::server::CountdownTimer m_ctPullTimer; // 0x_            
            source2sdk::server::CountdownTimer m_ctTimer; // 0x_            
            float m_flTiming; // 0x_            
            bool m_bForward; // 0x_            
            bool m_bUseWind; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nfxIndex_roar; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Nian_Hurricane because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Nian_Hurricane) == 0x_);
    };
};
