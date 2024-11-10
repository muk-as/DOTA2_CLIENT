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
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Pangolier_ShieldCrash_Jump : public client::CDOTA_Buff
    {
    public:
        float jump_duration; // 0x1708        
        float jump_duration_gyroshell; // 0x170c        
        int32_t jump_height; // 0x1710        
        int32_t jump_height_gyroshell; // 0x1714        
        float m_flStartZ; // 0x1718        
        float m_flCurTime; // 0x171c        
        float m_flJumpDuration; // 0x1720        
        float m_flJumpHeight; // 0x1724        
        int32_t jump_horizontal_distance; // 0x1728        
        Vector m_vTargetHorizontalDirection; // 0x172c        
        float m_flPreviousElapsedTime; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x173c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Pangolier_ShieldCrash_Jump because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Pangolier_ShieldCrash_Jump) == 0x1740);
};
