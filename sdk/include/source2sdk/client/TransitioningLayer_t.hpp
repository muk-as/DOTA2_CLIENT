#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNetworkedSequenceOperation.hpp"
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
        // Size: 0x48
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct TransitioningLayer_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::client::CNetworkedSequenceOperation m_op; // 0x8            
            source2sdk::entity2::GameTime_t m_flStartAnimTime; // 0x30            
            float m_flStartWeight; // 0x34            
            source2sdk::entity2::GameTime_t m_flAnimTime; // 0x38            
            std::int32_t m_nOrder; // 0x3c            
            float m_flPlaybackRate; // 0x40            
            float m_flFadeOutDuration; // 0x44            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::TransitioningLayer_t, m_op) == 0x8);
        static_assert(offsetof(source2sdk::client::TransitioningLayer_t, m_flStartAnimTime) == 0x30);
        static_assert(offsetof(source2sdk::client::TransitioningLayer_t, m_flStartWeight) == 0x34);
        static_assert(offsetof(source2sdk::client::TransitioningLayer_t, m_flAnimTime) == 0x38);
        static_assert(offsetof(source2sdk::client::TransitioningLayer_t, m_nOrder) == 0x3c);
        static_assert(offsetof(source2sdk::client::TransitioningLayer_t, m_flPlaybackRate) == 0x40);
        static_assert(offsetof(source2sdk::client::TransitioningLayer_t, m_flFadeOutDuration) == 0x44);
        
        static_assert(sizeof(source2sdk::client::TransitioningLayer_t) == 0x48);
    };
};
