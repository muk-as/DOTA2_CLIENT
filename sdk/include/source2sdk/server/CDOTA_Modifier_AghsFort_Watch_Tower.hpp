#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/TowerState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CDOTA_Modifier_AghsFort_Watch_Tower : public client::CDOTA_Buff
    {
    public:
        client::TowerState_t m_nState; // 0x1708        
        float m_flYaw; // 0x170c        
        int32_t m_nCaptureDuration; // 0x1710        
        entity2::GameTime_t m_flEffectiveCaptureStartTime; // 0x1714        
        int32_t m_nCapturingPlayerCount; // 0x1718        
        float m_flCaptureProgress; // 0x171c        
        int32_t m_iCapturingTeam; // 0x1720        
        client::ParticleIndex_t m_nFxOutpostAmbient; // 0x1724        
        entity2::GameTime_t m_flDestroyTime; // 0x1728        
        entity2::GameTime_t m_flAutoChannelCompleteTime; // 0x172c        
        bool m_bAscensionLevelPicker; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1731[0x3]; // 0x1731
        int32_t m_nEliteChallengeLevel; // 0x1734        
        CUtlString m_strNextRoomName; // 0x1738        
        CUtlString m_strNextEncounterName; // 0x1740        
        bool m_bStartedBeamFacing; // 0x1748        
        [[maybe_unused]] std::uint8_t pad_0x1749[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Watch_Tower because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_Watch_Tower) == 0x1750);
};
