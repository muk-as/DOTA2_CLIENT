#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    // Size: 0x5d0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_DrowRanger_WaveOfSilence : public server::CDOTABaseAbility
    {
    public:
        Vector m_vStartPosition; // 0x5a0        
        Vector m_vEndPosition; // 0x5ac        
        int32_t wave_width; // 0x5b8        
        float wave_speed; // 0x5bc        
        float silence_duration; // 0x5c0        
        float knockback_distance_max; // 0x5c4        
        int32_t m_nHeroesHit; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5cc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_DrowRanger_WaveOfSilence because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_DrowRanger_WaveOfSilence) == 0x5d0);
};
