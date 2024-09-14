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
    class CDOTA_Modifier_NightStalker_Void : public client::CDOTA_Buff
    {
    public:
        int32_t movespeed_slow; // 0x16e8        
        int32_t attackspeed_slow; // 0x16ec        
        int32_t disable_vision; // 0x16f0        
        float vision_penalty; // 0x16f4        
        float invisible_damage_pers; // 0x16f8        
        float invisible_damage_tickrate; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_NightStalker_Void because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_NightStalker_Void) == 0x1700);
};
