#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Elder_Titan_EarthSplitter : public client::C_DOTABaseAbility
    {
    public:
        int32_t crack_width; // 0x5d8        
        int32_t crack_distance; // 0x5dc        
        int32_t speed; // 0x5e0        
        int32_t vision_width; // 0x5e4        
        float crack_time; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Elder_Titan_EarthSplitter because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Elder_Titan_EarthSplitter) == 0x5f8);
};
