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
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Earthshaker_EnchantTotem_Leap : public client::CDOTA_Buff
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x16e8[0x4]; // 0x16e8
        Vector m_vLoc; // 0x16ec        
        float m_flPredictedTotalTime; // 0x16f8        
        Vector m_vStartPosition; // 0x16fc        
        float m_flCurrentTimeHoriz; // 0x1708        
        float m_flCurrentTimeVert; // 0x170c        
        bool m_bHorizontalMotionInterrupted; // 0x1710        
        bool m_bDamageApplied; // 0x1711        
        bool m_bTargetTeleported; // 0x1712        
        [[maybe_unused]] std::uint8_t pad_0x1713[0x1]; // 0x1713
        Vector m_vHorizontalVelocity; // 0x1714        
        Vector m_vLastKnownTargetPosition; // 0x1720        
        float m_flInitialVelocityZ; // 0x172c        
        int32_t scepter_height; // 0x1730        
        int32_t scepter_height_arcbuffer; // 0x1734        
        int32_t scepter_acceleration_z; // 0x1738        
        int32_t scepter_acceleration_horizontal; // 0x173c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Earthshaker_EnchantTotem_Leap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Earthshaker_EnchantTotem_Leap) == 0x1740);
};
