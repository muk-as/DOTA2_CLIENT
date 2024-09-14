#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Neutral_Upgrade : public client::CDOTA_Buff
    {
    public:
        float increase_time; // 0x16e8        
        int32_t increase_damage; // 0x16ec        
        int32_t increase_health; // 0x16f0        
        float increase_armor; // 0x16f4        
        int32_t increase_aspd; // 0x16f8        
        int32_t increase_gold; // 0x16fc        
        int32_t increase_xp; // 0x1700        
        int32_t current_level; // 0x1704        
        int32_t max_level; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Neutral_Upgrade because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Neutral_Upgrade) == 0x1710);
};
