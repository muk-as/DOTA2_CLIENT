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
    // Is Abstract
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Stacking_Base : public client::CDOTA_Buff
    {
    public:
        int32_t max_stacks; // 0x16e8        
        bool destroy_on_zero_stacks; // 0x16ec        
        [[maybe_unused]] std::uint8_t pad_0x16ed[0x3]; // 0x16ed
        float sub_modifier_forced_duration; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x4]; // 0x16f4
        CUtlString m_szSubModifierName; // 0x16f8        
        KeyValues* m_pSubModifierKV; // 0x1700        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Stacking_Base because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Stacking_Base) == 0x1708);
};
