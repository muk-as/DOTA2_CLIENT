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
    class CDOTA_Modifier_Life_Stealer_Rage : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_armor; // 0x1708        
        int32_t magic_resist; // 0x170c        
        int32_t debuff_immunity; // 0x1710        
        int32_t status_resist; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Life_Stealer_Rage because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Life_Stealer_Rage) == 0x1718);
};
