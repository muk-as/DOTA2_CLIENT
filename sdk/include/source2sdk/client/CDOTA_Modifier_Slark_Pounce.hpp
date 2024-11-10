#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Slark_Pounce : public client::CDOTA_Buff
    {
    public:
        int32_t pounce_distance; // 0x1708        
        int32_t pounce_distance_scepter; // 0x170c        
        float pounce_speed; // 0x1710        
        float pounce_acceleration; // 0x1714        
        int32_t pounce_radius; // 0x1718        
        int32_t pounce_damage; // 0x171c        
        float leash_duration; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Slark_Pounce because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Slark_Pounce) == 0x1728);
};
