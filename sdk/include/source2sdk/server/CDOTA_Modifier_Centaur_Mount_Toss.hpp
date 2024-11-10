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
    // Size: 0x1758
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Centaur_Mount_Toss : public client::CDOTA_Buff
    {
    public:
        float air_duration; // 0x1708        
        int32_t air_height; // 0x170c        
        int32_t travel_distance; // 0x1710        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x1714        
        float m_flPredictedTotalTime; // 0x1718        
        Vector m_vStartPosition; // 0x171c        
        float m_flCurrentTimeHoriz; // 0x1728        
        float m_flCurrentTimeVert; // 0x172c        
        bool m_bHorizontalMotionInterrupted; // 0x1730        
        bool m_bDamageApplied; // 0x1731        
        bool m_bTargetTeleported; // 0x1732        
        [[maybe_unused]] std::uint8_t pad_0x1733[0x1]; // 0x1733
        Vector m_vHorizontalVelocity; // 0x1734        
        Vector m_vLastKnownTargetPosition; // 0x1740        
        float m_flInitialVelocityZ; // 0x174c        
        bool m_bDone; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1751[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Centaur_Mount_Toss because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Centaur_Mount_Toss) == 0x1758);
};
