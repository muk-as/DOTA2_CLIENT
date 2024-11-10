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
    // Is Abstract
    #pragma pack(push, 1)
    class CDOTA_Modifier_Stacking_Base : public client::CDOTA_Buff
    {
    public:
        int32_t max_stacks; // 0x1708        
        bool destroy_on_zero_stacks; // 0x170c        
        [[maybe_unused]] std::uint8_t pad_0x170d[0x3]; // 0x170d
        float sub_modifier_forced_duration; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4]; // 0x1714
        CUtlString m_szSubModifierName; // 0x1718        
        KeyValues* m_pSubModifierKV; // 0x1720        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Stacking_Base because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Stacking_Base) == 0x1728);
};
