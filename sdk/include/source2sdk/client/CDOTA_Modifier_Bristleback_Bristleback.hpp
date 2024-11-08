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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Bristleback_Bristleback : public client::CDOTA_Buff
    {
    public:
        int32_t side_damage_reduction; // 0x1708        
        int32_t back_damage_reduction; // 0x170c        
        int32_t side_angle; // 0x1710        
        int32_t back_angle; // 0x1714        
        float quill_release_threshold; // 0x1718        
        float quill_release_interval; // 0x171c        
        bool m_bRearHit; // 0x1720        
        bool m_bSideHit; // 0x1721        
        [[maybe_unused]] std::uint8_t pad_0x1722[0x2]; // 0x1722
        float m_flDamageAccumulated; // 0x1724        
        int32_t m_nAccumulatedHits; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bristleback_Bristleback because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bristleback_Bristleback) == 0x1730);
};
