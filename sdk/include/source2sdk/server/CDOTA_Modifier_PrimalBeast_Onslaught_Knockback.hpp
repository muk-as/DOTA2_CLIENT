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
    class CDOTA_Modifier_PrimalBeast_Onslaught_Knockback : public client::CDOTA_Buff
    {
    public:
        Vector m_vLoc; // 0x1708        
        float m_flPredictedTotalTime; // 0x1714        
        Vector m_vStartPosition; // 0x1718        
        float m_flCurrentTimeHoriz; // 0x1724        
        float m_flCurrentTimeVert; // 0x1728        
        bool m_bHorizontalMotionInterrupted; // 0x172c        
        bool m_bTargetTeleported; // 0x172d        
        [[maybe_unused]] std::uint8_t pad_0x172e[0x2]; // 0x172e
        Vector m_vHorizontalVelocity; // 0x1730        
        Vector m_vLastKnownTargetPosition; // 0x173c        
        float m_flInitialVelocityZ; // 0x1748        
        [[maybe_unused]] std::uint8_t pad_0x174c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_PrimalBeast_Onslaught_Knockback because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_PrimalBeast_Onslaught_Knockback) == 0x1750);
};
