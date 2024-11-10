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
    // Size: 0x1760
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Earthshaker_EnchantTotem_Leap : public client::CDOTA_Buff
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1708[0x4]; // 0x1708
        Vector m_vLoc; // 0x170c        
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
        int32_t scepter_height; // 0x1750        
        int32_t scepter_height_arcbuffer; // 0x1754        
        int32_t scepter_acceleration_z; // 0x1758        
        int32_t scepter_acceleration_horizontal; // 0x175c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Earthshaker_EnchantTotem_Leap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Earthshaker_EnchantTotem_Leap) == 0x1760);
};
