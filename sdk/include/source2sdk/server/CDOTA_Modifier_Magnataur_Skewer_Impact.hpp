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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Magnataur_Skewer_Impact : public client::CDOTA_Buff
    {
    public:
        float slow_duration; // 0x1708        
        int32_t skewer_damage; // 0x170c        
        int32_t damage_distance_pct; // 0x1710        
        Vector m_vDirection; // 0x1714        
        Vector m_vStartPos; // 0x1720        
        float m_flEndTime; // 0x172c        
        float m_flCurTime; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Magnataur_Skewer_Impact because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Magnataur_Skewer_Impact) == 0x1738);
};
