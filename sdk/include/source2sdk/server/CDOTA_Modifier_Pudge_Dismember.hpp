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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Pudge_Dismember : public client::CDOTA_Buff
    {
    public:
        int32_t dismember_damage; // 0x16e8        
        float strength_damage; // 0x16ec        
        float glutton_strength_stack_duration; // 0x16f0        
        int32_t gluttony_strength_bonus; // 0x16f4        
        int32_t m_nTicks; // 0x16f8        
        int32_t m_nMaxTicks; // 0x16fc        
        float m_flTickRate; // 0x1700        
        float animation_rate; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Dismember because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Pudge_Dismember) == 0x1708);
};
