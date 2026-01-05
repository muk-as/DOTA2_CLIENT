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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CAI_Expresser
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flStopTalkTime; // 0x_            
            source2sdk::entity2::GameTime_t m_flStopTalkTimeWithoutDelay; // 0x_            
            source2sdk::entity2::GameTime_t m_flQueuedSpeechTime; // 0x_            
            source2sdk::entity2::GameTime_t m_flBlockedTalkTime; // 0x_            
            std::int32_t m_voicePitch; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastTimeAcceptedSpeak; // 0x_            
            bool m_bAllowSpeakingInterrupts; // 0x_            
            bool m_bConsiderSceneInvolvementAsSpeech; // 0x_            
            bool m_bSceneEntityDisabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nLastSpokenPriority; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            source2sdk::server::CBaseFlex* m_pOuter; // 0x_            
            
            // Datamap fields:
            // void m_pSink; // 0x_
            // void m_conceptCooldowns; // 0x_
            // void m_ruleCooldowns; // 0x_
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_flStopTalkTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_flStopTalkTimeWithoutDelay) == 0x_);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_flQueuedSpeechTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_flBlockedTalkTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_voicePitch) == 0x_);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_flLastTimeAcceptedSpeak) == 0x_);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_bAllowSpeakingInterrupts) == 0x_);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_bConsiderSceneInvolvementAsSpeech) == 0x_);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_bSceneEntityDisabled) == 0x_);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_nLastSpokenPriority) == 0x_);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_pOuter) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CAI_Expresser) == 0x_);
    };
};
