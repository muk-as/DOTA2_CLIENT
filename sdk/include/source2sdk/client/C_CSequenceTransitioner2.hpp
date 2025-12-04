#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNetworkedSequenceOperation.hpp"
#include "source2sdk/client/TransitioningLayer_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseAnimatingController;
    };
};

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
        #pragma pack(push, 1)
        class C_CSequenceTransitioner2
        {
        public:
            source2sdk::client::CNetworkedSequenceOperation m_currentOp; // 0x_            
            float m_flCurrentPlaybackRate; // 0x_            
            source2sdk::entity2::GameTime_t m_flCurrentAnimTime; // 0x_            
            source2sdk::client::TransitioningLayer_t m_transitioningLayers[4]; // 0x_            
            source2sdk::client::C_BaseAnimatingController* m_pOwner; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_CSequenceTransitioner2, m_currentOp) == 0x_);
        static_assert(offsetof(source2sdk::client::C_CSequenceTransitioner2, m_flCurrentPlaybackRate) == 0x_);
        static_assert(offsetof(source2sdk::client::C_CSequenceTransitioner2, m_flCurrentAnimTime) == 0x_);
        static_assert(offsetof(source2sdk::client::C_CSequenceTransitioner2, m_transitioningLayers) == 0x_);
        static_assert(offsetof(source2sdk::client::C_CSequenceTransitioner2, m_pOwner) == 0x_);
        
        static_assert(sizeof(source2sdk::client::C_CSequenceTransitioner2) == 0x_);
    };
};
