#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/AnimLoopMode_t.hpp"
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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x18
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct SequenceHistory_t
        {
        public:
            source2sdk::animationsystem::HSequence m_hSequence; // 0x0            
            source2sdk::entity2::GameTime_t m_flSeqStartTime; // 0x4            
            float m_flSeqFixedCycle; // 0x8            
            source2sdk::client::AnimLoopMode_t m_nSeqLoopMode; // 0xc            
            float m_flPlaybackRate; // 0x10            
            float m_flCyclesPerSecond; // 0x14            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::SequenceHistory_t, m_hSequence) == 0x0);
        static_assert(offsetof(source2sdk::client::SequenceHistory_t, m_flSeqStartTime) == 0x4);
        static_assert(offsetof(source2sdk::client::SequenceHistory_t, m_flSeqFixedCycle) == 0x8);
        static_assert(offsetof(source2sdk::client::SequenceHistory_t, m_nSeqLoopMode) == 0xc);
        static_assert(offsetof(source2sdk::client::SequenceHistory_t, m_flPlaybackRate) == 0x10);
        static_assert(offsetof(source2sdk::client::SequenceHistory_t, m_flCyclesPerSecond) == 0x14);
        
        static_assert(sizeof(source2sdk::client::SequenceHistory_t) == 0x18);
    };
};
