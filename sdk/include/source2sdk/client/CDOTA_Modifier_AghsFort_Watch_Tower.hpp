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
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_Watch_Tower : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::TowerState_t m_nState; // 0x17f8            
            float m_flYaw; // 0x17fc            
            std::int32_t m_nCaptureDuration; // 0x1800            
            source2sdk::entity2::GameTime_t m_flEffectiveCaptureStartTime; // 0x1804            
            std::int32_t m_nCapturingPlayerCount; // 0x1808            
            float m_flCaptureProgress; // 0x180c            
            std::int32_t m_iCapturingTeam; // 0x1810            
            source2sdk::client::ParticleIndex_t m_nFxOutpostAmbient; // 0x1814            
            source2sdk::entity2::GameTime_t m_flDestroyTime; // 0x1818            
            source2sdk::entity2::GameTime_t m_flAutoChannelCompleteTime; // 0x181c            
            bool m_bAscensionLevelPicker; // 0x1820            
            uint8_t _pad1821[0x3]; // 0x1821
            std::int32_t m_nEliteChallengeLevel; // 0x1824            
            CUtlString m_strNextRoomName; // 0x1828            
            CUtlString m_strNextEncounterName; // 0x1830            
            bool m_bStartedBeamFacing; // 0x1838            
            uint8_t _pad1839[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Watch_Tower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AghsFort_Watch_Tower) == 0x1840);
    };
};
