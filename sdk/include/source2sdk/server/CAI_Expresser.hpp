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
            source2sdk::entity2::GameTime_t m_flQueuedSpeechTime; // 0x40            
            source2sdk::entity2::GameTime_t m_flBlockedTalkTime; // 0x44            
            std::int32_t m_voicePitch; // 0x48            
            source2sdk::entity2::GameTime_t m_flLastTimeAcceptedSpeak; // 0x4c            
            bool m_bAllowSpeakingInterrupts; // 0x50            
            bool m_bConsiderSceneInvolvementAsSpeech; // 0x51            
            bool m_bSceneEntityDisabled; // 0x52            
            uint8_t _pad0053[0x1]; // 0x53
            std::int32_t m_nLastSpokenPriority; // 0x54            
            uint8_t _pad0058[0x18]; // 0x58
            source2sdk::server::CBaseFlex* m_pOuter; // 0x70            
            
            // Datamap fields:
            // void m_pSink; // 0x8
            // void m_conceptCooldowns; // 0x10
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_flStopTalkTime) == 0x38);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_flStopTalkTimeWithoutDelay) == 0x3c);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_flQueuedSpeechTime) == 0x40);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_flBlockedTalkTime) == 0x44);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_voicePitch) == 0x48);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_flLastTimeAcceptedSpeak) == 0x4c);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_bAllowSpeakingInterrupts) == 0x50);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_bConsiderSceneInvolvementAsSpeech) == 0x51);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_bSceneEntityDisabled) == 0x52);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_nLastSpokenPriority) == 0x54);
        static_assert(offsetof(source2sdk::server::CAI_Expresser, m_pOuter) == 0x70);
        
        static_assert(sizeof(source2sdk::server::CAI_Expresser) == 0x78);
    };
};
