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
    class CDOTA_Modifier_NagaSiren_Eelskin : public client::CDOTA_Buff
    {
    public:
        int32_t evasion_per_naga; // 0x1708        
        int32_t radius; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_NagaSiren_Eelskin because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_NagaSiren_Eelskin) == 0x1710);
};
