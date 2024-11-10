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
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ringmaster_Spotlight_Thinker : public client::CDOTA_Buff
    {
    public:
        bool self_spotlight; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        float radius; // 0x170c        
        float initial_speed; // 0x1710        
        float sweep_speed; // 0x1714        
        float sweep_radius; // 0x1718        
        float linger_duration; // 0x171c        
        Vector m_vStartLocation; // 0x1720        
        Vector m_vTargetLocation; // 0x172c        
        float m_flTargetReachedTime; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x173c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Spotlight_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ringmaster_Spotlight_Thinker) == 0x1740);
};
