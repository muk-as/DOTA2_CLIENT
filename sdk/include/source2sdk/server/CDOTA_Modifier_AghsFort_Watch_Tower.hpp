#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/TowerState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_Watch_Tower : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::TowerState_t m_nState; // 0x1888            
            float m_flYaw; // 0x188c            
            std::int32_t m_nCaptureDuration; // 0x1890            
            source2sdk::entity2::GameTime_t m_flEffectiveCaptureStartTime; // 0x1894            
            std::int32_t m_nCapturingPlayerCount; // 0x1898            
            float m_flCaptureProgress; // 0x189c            
            std::int32_t m_iCapturingTeam; // 0x18a0            
            source2sdk::client::ParticleIndex_t m_nFxOutpostAmbient; // 0x18a4            
            source2sdk::entity2::GameTime_t m_flDestroyTime; // 0x18a8            
            source2sdk::entity2::GameTime_t m_flAutoChannelCompleteTime; // 0x18ac            
            bool m_bAscensionLevelPicker; // 0x18b0            
            uint8_t _pad18b1[0x3]; // 0x18b1
            std::int32_t m_nEliteChallengeLevel; // 0x18b4            
            CUtlString m_strNextRoomName; // 0x18b8            
            CUtlString m_strNextEncounterName; // 0x18c0            
            bool m_bStartedBeamFacing; // 0x18c8            
            uint8_t _pad18c9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Watch_Tower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_Watch_Tower) == 0x18d0);
    };
};
