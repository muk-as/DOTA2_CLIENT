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
    // Size: 0x1710
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DragonKnight_CorrosiveBreath : public client::CDOTA_Buff
    {
    public:
        float corrosive_breath_duration; // 0x1708        
        float ranged_splash_radius; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DragonKnight_CorrosiveBreath because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DragonKnight_CorrosiveBreath) == 0x1710);
};
