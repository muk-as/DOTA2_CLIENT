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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1750
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Techies_StickyBombThrow : public client::CDOTA_Buff
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x1708        
        float m_flPredictedTotalTime; // 0x170c        
        Vector m_vStartPosition; // 0x1710        
        float m_flCurrentTimeHoriz; // 0x171c        
        float m_flCurrentTimeVert; // 0x1720        
        bool m_bHorizontalMotionInterrupted; // 0x1724        
        bool m_bDamageApplied; // 0x1725        
        bool m_bTargetTeleported; // 0x1726        
        [[maybe_unused]] std::uint8_t pad_0x1727[0x1]; // 0x1727
        Vector m_vHorizontalVelocity; // 0x1728        
        Vector m_vLastKnownTargetPosition; // 0x1734        
        float m_flInitialVelocityZ; // 0x1740        
        bool m_bDone; // 0x1744        
        [[maybe_unused]] std::uint8_t pad_0x1745[0x3]; // 0x1745
        float radius; // 0x1748        
        [[maybe_unused]] std::uint8_t pad_0x174c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Techies_StickyBombThrow because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Techies_StickyBombThrow) == 0x1750);
};
