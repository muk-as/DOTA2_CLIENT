#pragma once
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Safety_Bubble : public client::CDOTA_Buff_Item
    {
    public:
        int32_t m_nDamageAbsorbed; // 0x1708        
        entity2::GameTime_t m_timeLastDamage; // 0x170c        
        int32_t bonus_hp_regen; // 0x1710        
        int32_t shield; // 0x1714        
        float restore_time; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Safety_Bubble because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Safety_Bubble) == 0x1720);
};
