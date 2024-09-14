#pragma once
#include "source2sdk/client/CNetworkedSequenceOperation.hpp"
#include "source2sdk/client/TransitioningLayer_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseAnimatingController;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x1b8
    #pragma pack(push, 1)
    class C_CSequenceTransitioner2
    {
    public:
        client::CNetworkedSequenceOperation m_currentOp; // 0x0        
        float m_flCurrentPlaybackRate; // 0x28        
        entity2::GameTime_t m_flCurrentAnimTime; // 0x2c        
        client::TransitioningLayer_t m_transitioningLayers[4]; // 0x30        
        client::C_BaseAnimatingController* m_pOwner; // 0x150        
        [[maybe_unused]] std::uint8_t pad_0x158[0x60];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(C_CSequenceTransitioner2, m_currentOp) == 0x0);
    static_assert(offsetof(C_CSequenceTransitioner2, m_flCurrentPlaybackRate) == 0x28);
    static_assert(offsetof(C_CSequenceTransitioner2, m_flCurrentAnimTime) == 0x2c);
    static_assert(offsetof(C_CSequenceTransitioner2, m_transitioningLayers) == 0x30);
    static_assert(offsetof(C_CSequenceTransitioner2, m_pOwner) == 0x150);
    
    static_assert(sizeof(C_CSequenceTransitioner2) == 0x1b8);
};
