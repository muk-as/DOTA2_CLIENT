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
        // Size: 0x6d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Nian_Hurricane : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t min_distance; // 0x680            
            std::int32_t max_distance; // 0x684            
            std::int32_t torrent_count; // 0x688            
            float fire_interval; // 0x68c            
            float pull_switch_interval; // 0x690            
            float game_time_wind_activation; // 0x694            
            source2sdk::client::CountdownTimer m_ctPullTimer; // 0x698            
            source2sdk::client::CountdownTimer m_ctTimer; // 0x6b0            
            float m_flTiming; // 0x6c8            
            bool m_bForward; // 0x6cc            
            bool m_bUseWind; // 0x6cd            
            uint8_t _pad06ce[0x2]; // 0x6ce
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x6d0            
            source2sdk::client::ParticleIndex_t m_nfxIndex_roar; // 0x6d4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Nian_Hurricane because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Nian_Hurricane) == 0x6d8);
    };
};
