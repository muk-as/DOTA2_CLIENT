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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Necrolyte_GhostShroud_Active : public client::CDOTA_Buff
    {
    public:
        int32_t heal_bonus; // 0x16e8        
        int32_t bonus_damage; // 0x16ec        
        float slow_aoe; // 0x16f0        
        float movement_transfer; // 0x16f4        
        float movement_speed; // 0x16f8        
        float m_flMovementSpeedAmp; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Necrolyte_GhostShroud_Active because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Necrolyte_GhostShroud_Active) == 0x1700);
};
