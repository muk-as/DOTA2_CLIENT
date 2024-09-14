#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Rubick_Telekinesis : public client::CDOTA_Buff
    {
    public:
        entity2::GameTime_t m_fStartTime; // 0x16e8        
        entity2::GameTime_t m_fEndTime; // 0x16ec        
        float m_fTargetHeight; // 0x16f0        
        float m_fCurHeight; // 0x16f4        
        Vector m_vStartLoc; // 0x16f8        
        Vector m_vCurLoc; // 0x1704        
        int32_t max_land_distance; // 0x1710        
        float fall_duration; // 0x1714        
        bool m_bOverrideDuration; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x3]; // 0x1719
        float m_flOverrideDuration; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rubick_Telekinesis because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rubick_Telekinesis) == 0x1720);
};
