#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CDOTA_Modifier_ShadowShaman_Shackles : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t nShackleFXIndex; // 0x16e8        
        float tick_interval; // 0x16ec        
        float total_damage; // 0x16f0        
        float channel_time; // 0x16f4        
        float heal_percentage; // 0x16f8        
        bool bApplyHeal; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x16fd[0xb];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ShadowShaman_Shackles because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ShadowShaman_Shackles) == 0x1708);
};
