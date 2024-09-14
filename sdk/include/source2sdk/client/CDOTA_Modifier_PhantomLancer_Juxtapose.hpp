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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_PhantomLancer_Juxtapose : public client::CDOTA_Buff
    {
    public:
        int32_t proc_chance_pct; // 0x16e8        
        int32_t illusion_proc_chance_pct; // 0x16ec        
        int32_t max_illusions; // 0x16f0        
        float illusion_duration; // 0x16f4        
        int32_t illusion_damage_out_pct; // 0x16f8        
        int32_t illusion_damage_in_pct; // 0x16fc        
        int32_t shard_bonus_illusions; // 0x1700        
        int32_t uncontrollable_illusions; // 0x1704        
        int32_t new_target_radius; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_PhantomLancer_Juxtapose because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_PhantomLancer_Juxtapose) == 0x1710);
};
