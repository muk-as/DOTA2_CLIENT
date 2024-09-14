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
    // Size: 0x1730
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_Watch_Tower : public client::CDOTA_Buff
    {
    public:
        client::TowerState_t m_nState; // 0x16e8        
        float m_flYaw; // 0x16ec        
        int32_t m_nCaptureDuration; // 0x16f0        
        entity2::GameTime_t m_flEffectiveCaptureStartTime; // 0x16f4        
        int32_t m_nCapturingPlayerCount; // 0x16f8        
        float m_flCaptureProgress; // 0x16fc        
        int32_t m_iCapturingTeam; // 0x1700        
        client::ParticleIndex_t m_nFxOutpostAmbient; // 0x1704        
        entity2::GameTime_t m_flDestroyTime; // 0x1708        
        entity2::GameTime_t m_flAutoChannelCompleteTime; // 0x170c        
        bool m_bAscensionLevelPicker; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1711[0x3]; // 0x1711
        int32_t m_nEliteChallengeLevel; // 0x1714        
        CUtlString m_strNextRoomName; // 0x1718        
        CUtlString m_strNextEncounterName; // 0x1720        
        bool m_bStartedBeamFacing; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1729[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Watch_Tower because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_Watch_Tower) == 0x1730);
};
