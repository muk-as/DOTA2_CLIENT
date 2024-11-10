#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Seasonal_TI9_Shovel : public server::CDOTABaseAbility
    {
    public:
        Vector m_vChannelPos; // 0x5c8        
        bool m_bIsUnderwater; // 0x5d4        
        [[maybe_unused]] std::uint8_t pad_0x5d5[0x3]; // 0x5d5
        client::ParticleIndex_t m_nPhaseStartFXIndex; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Seasonal_TI9_Shovel because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Seasonal_TI9_Shovel) == 0x5e0);
};
