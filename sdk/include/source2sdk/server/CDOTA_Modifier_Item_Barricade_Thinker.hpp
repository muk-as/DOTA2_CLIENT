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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Barricade_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t length; // 0x1708        
        int32_t width; // 0x170c        
        int32_t max_hits; // 0x1710        
        int32_t m_iCurrentHits; // 0x1714        
        int32_t m_hObstruction; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Barricade_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Barricade_Thinker) == 0x1720);
};
