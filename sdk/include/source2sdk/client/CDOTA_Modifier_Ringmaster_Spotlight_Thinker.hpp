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
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ringmaster_Spotlight_Thinker : public client::CDOTA_Buff
    {
    public:
        bool self_spotlight; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x3]; // 0x16e9
        float radius; // 0x16ec        
        float initial_speed; // 0x16f0        
        float sweep_speed; // 0x16f4        
        float sweep_radius; // 0x16f8        
        float linger_duration; // 0x16fc        
        Vector m_vStartLocation; // 0x1700        
        Vector m_vTargetLocation; // 0x170c        
        float m_flTargetReachedTime; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Spotlight_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ringmaster_Spotlight_Thinker) == 0x1720);
};
