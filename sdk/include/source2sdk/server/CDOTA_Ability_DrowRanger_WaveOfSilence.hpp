#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

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
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_DrowRanger_WaveOfSilence : public source2sdk::server::CDOTABaseAbility
        {
        public:
            Vector m_vStartPosition; // 0x5c0            
            Vector m_vEndPosition; // 0x5cc            
            float wave_width; // 0x5d8            
            float wave_speed; // 0x5dc            
            float silence_duration; // 0x5e0            
            float knockback_distance_max; // 0x5e4            
            std::int32_t m_nHeroesHit; // 0x5e8            
            uint8_t _pad05ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_DrowRanger_WaveOfSilence because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_DrowRanger_WaveOfSilence) == 0x5f0);
    };
};
