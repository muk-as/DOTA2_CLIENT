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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Slark_Pounce : public client::CDOTA_Buff
    {
    public:
        int32_t pounce_distance; // 0x16e8        
        int32_t pounce_distance_scepter; // 0x16ec        
        float pounce_speed; // 0x16f0        
        float pounce_acceleration; // 0x16f4        
        int32_t pounce_radius; // 0x16f8        
        int32_t pounce_damage; // 0x16fc        
        float leash_duration; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Slark_Pounce because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Slark_Pounce) == 0x1708);
};
