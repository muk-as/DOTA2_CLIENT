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
    class CDOTA_Modifier_Disruptor_KineticWall_Thinker : public client::CDOTA_Buff
    {
    public:
        Vector m_vWallDirection; // 0x16e8        
        Vector m_vWallRight; // 0x16f4        
        float slow_duration; // 0x1700        
        float formation_time; // 0x1704        
        [[maybe_unused]] std::uint8_t pad_0x1708[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_KineticWall_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Disruptor_KineticWall_Thinker) == 0x1710);
};
