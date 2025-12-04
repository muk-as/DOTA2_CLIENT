#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CNetworkedSequenceOperation.hpp"

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
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct TransitioningLayer_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CNetworkedSequenceOperation m_op; // 0x_            
            source2sdk::entity2::GameTime_t m_flStartAnimTime; // 0x_            
            float m_flStartWeight; // 0x_            
            source2sdk::entity2::GameTime_t m_flAnimTime; // 0x_            
            std::int32_t m_nOrder; // 0x_            
            float m_flPlaybackRate; // 0x_            
            float m_flFadeOutDuration; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::TransitioningLayer_t, m_op) == 0x_);
        static_assert(offsetof(source2sdk::server::TransitioningLayer_t, m_flStartAnimTime) == 0x_);
        static_assert(offsetof(source2sdk::server::TransitioningLayer_t, m_flStartWeight) == 0x_);
        static_assert(offsetof(source2sdk::server::TransitioningLayer_t, m_flAnimTime) == 0x_);
        static_assert(offsetof(source2sdk::server::TransitioningLayer_t, m_nOrder) == 0x_);
        static_assert(offsetof(source2sdk::server::TransitioningLayer_t, m_flPlaybackRate) == 0x_);
        static_assert(offsetof(source2sdk::server::TransitioningLayer_t, m_flFadeOutDuration) == 0x_);
        
        static_assert(sizeof(source2sdk::server::TransitioningLayer_t) == 0x_);
    };
};
