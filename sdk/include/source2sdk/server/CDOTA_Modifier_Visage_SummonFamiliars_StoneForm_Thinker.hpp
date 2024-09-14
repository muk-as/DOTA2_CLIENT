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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t stun_radius; // 0x16e8        
        int32_t stun_damage; // 0x16ec        
        float stun_delay; // 0x16f0        
        float stun_duration; // 0x16f4        
        float stone_duration; // 0x16f8        
        int32_t m_iIntervalCount; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker) == 0x1700);
};
