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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Pudge_Dismember : public client::CDOTA_Buff
    {
    public:
        int32_t dismember_damage; // 0x1708        
        float strength_damage; // 0x170c        
        float glutton_strength_stack_duration; // 0x1710        
        int32_t gluttony_strength_bonus; // 0x1714        
        int32_t m_nTicks; // 0x1718        
        int32_t m_nMaxTicks; // 0x171c        
        float m_flTickRate; // 0x1720        
        float animation_rate; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Dismember because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Pudge_Dismember) == 0x1728);
};
