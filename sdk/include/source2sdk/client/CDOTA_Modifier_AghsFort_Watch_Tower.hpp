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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_Watch_Tower : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::TowerState_t m_nState; // 0x_            
            float m_flYaw; // 0x_            
            std::int32_t m_nCaptureDuration; // 0x_            
            source2sdk::entity2::GameTime_t m_flEffectiveCaptureStartTime; // 0x_            
            std::int32_t m_nCapturingPlayerCount; // 0x_            
            float m_flCaptureProgress; // 0x_            
            std::int32_t m_iCapturingTeam; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFxOutpostAmbient; // 0x_            
            source2sdk::entity2::GameTime_t m_flDestroyTime; // 0x_            
            source2sdk::entity2::GameTime_t m_flAutoChannelCompleteTime; // 0x_            
            bool m_bAscensionLevelPicker; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nEliteChallengeLevel; // 0x_            
            CUtlString m_strNextRoomName; // 0x_            
            CUtlString m_strNextEncounterName; // 0x_            
            bool m_bStartedBeamFacing; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Watch_Tower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AghsFort_Watch_Tower) == 0x_);
    };
};
