#pragma once
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/client/CModifierParams.hpp"
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
    // Size: 0x18f0
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Mirror_Shield : public client::CDOTA_Buff_Item
    {
    public:
        client::CModifierParams m_LastParams; // 0x1708        
        int32_t all_stats; // 0x18e0        
        int32_t reflect_chance; // 0x18e4        
        bool m_bProcSuccessful; // 0x18e8        
        [[maybe_unused]] std::uint8_t pad_0x18e9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Mirror_Shield because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Mirror_Shield) == 0x18f0);
};
