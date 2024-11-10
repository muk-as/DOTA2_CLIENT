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
    // Size: 0x1750
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Techies_Suicide_Leap : public client::CDOTA_Buff
    {
    public:
        Vector m_vLoc; // 0x1708        
        float m_flPredictedTotalTime; // 0x1714        
        Vector m_vStartPosition; // 0x1718        
        float m_flCurrentTimeHoriz; // 0x1724        
        float m_flCurrentTimeVert; // 0x1728        
        bool m_bHorizontalMotionInterrupted; // 0x172c        
        bool m_bDamageApplied; // 0x172d        
        bool m_bTargetTeleported; // 0x172e        
        [[maybe_unused]] std::uint8_t pad_0x172f[0x1]; // 0x172f
        Vector m_vHorizontalVelocity; // 0x1730        
        Vector m_vLastKnownTargetPosition; // 0x173c        
        float m_flInitialVelocityZ; // 0x1748        
        [[maybe_unused]] std::uint8_t pad_0x174c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Techies_Suicide_Leap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Techies_Suicide_Leap) == 0x1750);
};
