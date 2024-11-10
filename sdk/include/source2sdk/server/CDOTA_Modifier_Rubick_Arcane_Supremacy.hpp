#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Rubick_Arcane_Supremacy : public client::CDOTA_Buff
    {
    public:
        int32_t cast_range; // 0x1708        
        int32_t spell_amp; // 0x170c        
        float aoe_bonus; // 0x1710        
        float aoe_bonus_duration; // 0x1714        
        // m_vecAoEExpireTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<entity2::GameTime_t> m_vecAoEExpireTimes;
        char m_vecAoEExpireTimes[0x18]; // 0x1718        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rubick_Arcane_Supremacy because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rubick_Arcane_Supremacy) == 0x1730);
};
