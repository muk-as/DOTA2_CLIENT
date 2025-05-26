#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/TowerState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_Watch_Tower : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::TowerState_t m_nState; // 0x1878            
            float m_flYaw; // 0x187c            
            std::int32_t m_nCaptureDuration; // 0x1880            
            source2sdk::entity2::GameTime_t m_flEffectiveCaptureStartTime; // 0x1884            
            std::int32_t m_nCapturingPlayerCount; // 0x1888            
            float m_flCaptureProgress; // 0x188c            
            std::int32_t m_iCapturingTeam; // 0x1890            
            source2sdk::client::ParticleIndex_t m_nFxOutpostAmbient; // 0x1894            
            source2sdk::entity2::GameTime_t m_flDestroyTime; // 0x1898            
            source2sdk::entity2::GameTime_t m_flAutoChannelCompleteTime; // 0x189c            
            bool m_bAscensionLevelPicker; // 0x18a0            
            uint8_t _pad18a1[0x3]; // 0x18a1
            std::int32_t m_nEliteChallengeLevel; // 0x18a4            
            CUtlString m_strNextRoomName; // 0x18a8            
            CUtlString m_strNextEncounterName; // 0x18b0            
            bool m_bStartedBeamFacing; // 0x18b8            
            uint8_t _pad18b9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Watch_Tower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AghsFort_Watch_Tower) == 0x18c0);
    };
};
