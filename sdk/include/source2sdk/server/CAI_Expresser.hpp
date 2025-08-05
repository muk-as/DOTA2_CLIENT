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
        // Size: 0xa0
        // Has VTable
        #pragma pack(push, 1)
        class CAI_Expresser
        {
        public:
            uint8_t _pad0000[0x60]; // 0x0
            source2sdk::entity2::GameTime_t m_flStopTalkTime; // 0x60            
            source2sdk::entity2::GameTime_t m_flStopTalkTimeWithoutDelay; // 0x64            
            source2sdk::entity2::GameTime_t m_flQueuedSpeechTime; // 0x68            
            source2sdk::entity2::GameTime_t m_flBlockedTalkTime; // 0x6c            
            std::int32_t m_voicePitch; // 0x70            
            source2sdk::entity2::GameTime_t m_flLastTimeAcceptedSpeak; // 0x74            
            bool m_bAllowSpeakingInterrupts; // 0x78            
            bool m_bConsiderSceneInvolvementAsSpeech; // 0x79            
            bool m_bSceneEntityDisabled; // 0x7a            
            uint8_t _pad007b[0x1]; // 0x7b
            std::int32_t m_nLastSpokenPriority; // 0x7c            
            uint8_t _pad0080[0x18]; // 0x80
            source2sdk::server::CBaseFlex* m_pOuter; // 0x98            
            
            // Datamap fields:
            // void m_pSink; // 0x8
            // void m_conceptCooldowns; // 0x10
            // void m_ruleCooldowns; // 0x38
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_flStopTalkTime) == 0x60);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_flStopTalkTimeWithoutDelay) == 0x64);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_flQueuedSpeechTime) == 0x68);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_flBlockedTalkTime) == 0x6c);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_voicePitch) == 0x70);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_flLastTimeAcceptedSpeak) == 0x74);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_bAllowSpeakingInterrupts) == 0x78);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_bConsiderSceneInvolvementAsSpeech) == 0x79);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_bSceneEntityDisabled) == 0x7a);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_nLastSpokenPriority) == 0x7c);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_pOuter) == 0x98);
        
        static_assert(sizeof(source2sdk::server::CAI_Expresser) == 0xa0);
    };
};
