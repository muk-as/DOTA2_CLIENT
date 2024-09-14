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
    // Size: 0x1738
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Tiny_Toss : public client::CDOTA_Buff
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x16e8        
        float m_flPredictedTotalTime; // 0x16ec        
        Vector m_vStartPosition; // 0x16f0        
        float m_flCurrentTimeHoriz; // 0x16fc        
        float m_flCurrentTimeVert; // 0x1700        
        bool m_bHorizontalMotionInterrupted; // 0x1704        
        bool m_bDamageApplied; // 0x1705        
        bool m_bTargetTeleported; // 0x1706        
        [[maybe_unused]] std::uint8_t pad_0x1707[0x1]; // 0x1707
        Vector m_vHorizontalVelocity; // 0x1708        
        Vector m_vLastKnownTargetPosition; // 0x1714        
        float m_flInitialVelocityZ; // 0x1720        
        bool m_bDone; // 0x1724        
        [[maybe_unused]] std::uint8_t pad_0x1725[0x3]; // 0x1725
        float radius; // 0x1728        
        int32_t toss_damage; // 0x172c        
        int32_t bonus_land_damage_pct; // 0x1730        
        float land_debuff_duration; // 0x1734        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tiny_Toss because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tiny_Toss) == 0x1738);
};
