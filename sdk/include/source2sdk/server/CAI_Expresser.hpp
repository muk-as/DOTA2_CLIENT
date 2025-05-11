#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseFlex;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x78
        // Has VTable
        #pragma pack(push, 1)
        class CAI_Expresser
        {
        public:
            uint8_t _pad0000[0x38]; // 0x0
            source2sdk::entity2::GameTime_t m_flStopTalkTime; // 0x38            
            source2sdk::entity2::GameTime_t m_flStopTalkTimeWithoutDelay; // 0x3c            
            source2sdk::entity2::GameTime_t m_flBlockedTalkTime; // 0x40            
            std::int32_t m_voicePitch; // 0x44            
            source2sdk::entity2::GameTime_t m_flLastTimeAcceptedSpeak; // 0x48            
            bool m_bAllowSpeakingInterrupts; // 0x4c            
            bool m_bConsiderSceneInvolvementAsSpeech; // 0x4d            
            bool m_bSceneEntityDisabled; // 0x4e            
            uint8_t _pad004f[0x1]; // 0x4f
            std::int32_t m_nLastSpokenPriority; // 0x50            
            uint8_t _pad0054[0x1c]; // 0x54
            source2sdk::server::CBaseFlex* m_pOuter; // 0x70            
            
            // Datamap fields:
            // void m_pSink; // 0x8
            // void m_conceptCooldowns; // 0x10
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_flStopTalkTime) == 0x38);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_flStopTalkTimeWithoutDelay) == 0x3c);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_flBlockedTalkTime) == 0x40);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_voicePitch) == 0x44);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_flLastTimeAcceptedSpeak) == 0x48);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_bAllowSpeakingInterrupts) == 0x4c);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_bConsiderSceneInvolvementAsSpeech) == 0x4d);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_bSceneEntityDisabled) == 0x4e);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_nLastSpokenPriority) == 0x50);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_pOuter) == 0x70);
        
        static_assert(sizeof(source2sdk::server::CAI_Expresser) == 0x78);
    };
};
