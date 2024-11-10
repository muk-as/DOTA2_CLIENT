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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t stun_radius; // 0x1708        
        int32_t stun_damage; // 0x170c        
        float stun_delay; // 0x1710        
        float stun_duration; // 0x1714        
        float stone_duration; // 0x1718        
        int32_t m_iIntervalCount; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker) == 0x1720);
};
