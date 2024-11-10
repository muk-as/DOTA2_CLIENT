#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Drow_Ranger_Multishot : public client::CDOTA_Buff
    {
    public:
        int32_t m_iArrowCount; // 0x1708        
        Vector m_vOriginalTarget; // 0x170c        
        int32_t arrow_width; // 0x1718        
        float arrow_speed; // 0x171c        
        float arrow_range_multiplier; // 0x1720        
        int32_t wave_count; // 0x1724        
        int32_t arrow_count_per_wave; // 0x1728        
        int32_t arrow_angle; // 0x172c        
        int32_t m_iLoopCount; // 0x1730        
        float m_flInterval; // 0x1734        
        float m_flCycleDelay; // 0x1738        
        float m_flTimeWaste; // 0x173c        
        entity2::GameTime_t m_flExpectedTime; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1744[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Drow_Ranger_Multishot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Drow_Ranger_Multishot) == 0x1748);
};
