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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Disruptor_KineticWall_Thinker : public client::CDOTA_Buff
    {
    public:
        Vector m_vWallDirection; // 0x1708        
        Vector m_vWallRight; // 0x1714        
        float slow_duration; // 0x1720        
        float formation_time; // 0x1724        
        [[maybe_unused]] std::uint8_t pad_0x1728[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_KineticWall_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Disruptor_KineticWall_Thinker) == 0x1730);
};
