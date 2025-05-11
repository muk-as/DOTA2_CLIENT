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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x1b8
        #pragma pack(push, 1)
        class C_CSequenceTransitioner2
        {
        public:
            source2sdk::client::CNetworkedSequenceOperation m_currentOp; // 0x0            
            float m_flCurrentPlaybackRate; // 0x28            
            source2sdk::entity2::GameTime_t m_flCurrentAnimTime; // 0x2c            
            source2sdk::client::TransitioningLayer_t m_transitioningLayers[4]; // 0x30            
            source2sdk::client::C_BaseAnimatingController* m_pOwner; // 0x150            
            uint8_t _pad0158[0x60];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_CSequenceTransitioner2, m_currentOp) == 0x0);
        static_assert(offsetof(source2sdk::client::C_CSequenceTransitioner2, m_flCurrentPlaybackRate) == 0x28);
        static_assert(offsetof(source2sdk::client::C_CSequenceTransitioner2, m_flCurrentAnimTime) == 0x2c);
        static_assert(offsetof(source2sdk::client::C_CSequenceTransitioner2, m_transitioningLayers) == 0x30);
        static_assert(offsetof(source2sdk::client::C_CSequenceTransitioner2, m_pOwner) == 0x150);
        
        static_assert(sizeof(source2sdk::client::C_CSequenceTransitioner2) == 0x1b8);
    };
};
