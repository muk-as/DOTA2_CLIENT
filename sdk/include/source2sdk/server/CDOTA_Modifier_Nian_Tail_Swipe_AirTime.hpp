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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nian_Tail_Swipe_AirTime : public client::CDOTA_Buff
    {
    public:
        float m_flStartZ; // 0x1708        
        float m_flCurTime; // 0x170c        
        float m_flOldPitch; // 0x1710        
        QAngle m_qRotation; // 0x1714        
        int32_t m_nRotations; // 0x1720        
        float m_flDistance; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Tail_Swipe_AirTime because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nian_Tail_Swipe_AirTime) == 0x1728);
};
