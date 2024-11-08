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
    // Size: 0x620
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Elder_Titan_EarthSplitter : public client::C_DOTABaseAbility
    {
    public:
        int32_t crack_width; // 0x600        
        int32_t crack_distance; // 0x604        
        int32_t speed; // 0x608        
        int32_t vision_width; // 0x60c        
        float crack_time; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Elder_Titan_EarthSplitter because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Elder_Titan_EarthSplitter) == 0x620);
};
