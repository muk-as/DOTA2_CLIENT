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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Bristleback_Bristleback : public client::CDOTA_Buff
    {
    public:
        int32_t side_damage_reduction; // 0x16e8        
        int32_t back_damage_reduction; // 0x16ec        
        int32_t side_angle; // 0x16f0        
        int32_t back_angle; // 0x16f4        
        float quill_release_threshold; // 0x16f8        
        float quill_release_interval; // 0x16fc        
        bool m_bRearHit; // 0x1700        
        bool m_bSideHit; // 0x1701        
        [[maybe_unused]] std::uint8_t pad_0x1702[0x2]; // 0x1702
        float m_flDamageAccumulated; // 0x1704        
        int32_t m_nAccumulatedHits; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bristleback_Bristleback because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bristleback_Bristleback) == 0x1710);
};
