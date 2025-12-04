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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct SequenceHistory_t
        {
        public:
            source2sdk::animationsystem::HSequence m_hSequence; // 0x_            
            source2sdk::entity2::GameTime_t m_flSeqStartTime; // 0x_            
            float m_flSeqFixedCycle; // 0x_            
            source2sdk::client::AnimLoopMode_t m_nSeqLoopMode; // 0x_            
            float m_flPlaybackRate; // 0x_            
            float m_flCyclesPerSecond; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::SequenceHistory_t, m_hSequence) == 0x_);
        static_assert(offsetof(source2sdk::client::SequenceHistory_t, m_flSeqStartTime) == 0x_);
        static_assert(offsetof(source2sdk::client::SequenceHistory_t, m_flSeqFixedCycle) == 0x_);
        static_assert(offsetof(source2sdk::client::SequenceHistory_t, m_nSeqLoopMode) == 0x_);
        static_assert(offsetof(source2sdk::client::SequenceHistory_t, m_flPlaybackRate) == 0x_);
        static_assert(offsetof(source2sdk::client::SequenceHistory_t, m_flCyclesPerSecond) == 0x_);
        
        static_assert(sizeof(source2sdk::client::SequenceHistory_t) == 0x_);
    };
};
