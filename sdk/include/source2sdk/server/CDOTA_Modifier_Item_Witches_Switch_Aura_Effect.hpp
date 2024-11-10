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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Witches_Switch_Aura_Effect : public client::CDOTA_Buff
    {
    public:
        float aura_mana_regen; // 0x1708        
        float aura_health_regen; // 0x170c        
        int32_t aura_armor; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Witches_Switch_Aura_Effect because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Witches_Switch_Aura_Effect) == 0x1718);
};
