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
    class CDOTA_Modifier_Primal_Beast_Innate_Slow_Resistance_Per_Time : public client::CDOTA_Buff
    {
    public:
        float upgrade_rate; // 0x1708        
        int32_t slow_resistance_per_upgrade; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Primal_Beast_Innate_Slow_Resistance_Per_Time because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Primal_Beast_Innate_Slow_Resistance_Per_Time) == 0x1710);
};
