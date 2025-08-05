#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

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
        // Size: 0x6a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_DrowRanger_WaveOfSilence : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float wave_width; // 0x688            
            float wave_speed; // 0x68c            
            float silence_duration; // 0x690            
            float knockback_distance_max; // 0x694            
            std::int32_t m_nHeroesHit; // 0x698            
            uint8_t _pad069c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_DrowRanger_WaveOfSilence because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_DrowRanger_WaveOfSilence) == 0x6a0);
    };
};
