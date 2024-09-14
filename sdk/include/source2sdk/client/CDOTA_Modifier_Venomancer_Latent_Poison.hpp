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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Venomancer_Latent_Poison : public client::CDOTA_Buff
    {
    public:
        int32_t duration_damage; // 0x16e8        
        int32_t movement_slow; // 0x16ec        
        int32_t explosion_damage; // 0x16f0        
        float explosion_stun_duration; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Venomancer_Latent_Poison because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Venomancer_Latent_Poison) == 0x16f8);
};
