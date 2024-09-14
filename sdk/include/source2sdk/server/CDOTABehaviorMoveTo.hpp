#pragma once
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0xe0
    // Has VTable
    #pragma pack(push, 1)
    class CDOTABehaviorMoveTo
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0xb8]; // 0x0
        server::CountdownTimer m_repathTimer; // 0xb8        
        bool m_bSetAnimation; // 0xd0        
        bool m_bUseSwimAnimations; // 0xd1        
        [[maybe_unused]] std::uint8_t pad_0xd2[0x2]; // 0xd2
        int32_t m_nRunActivity; // 0xd4        
        float m_flTargetDist; // 0xd8        
        bool m_bIsDirectional; // 0xdc        
        bool m_bIsRelative; // 0xdd        
        [[maybe_unused]] std::uint8_t pad_0xde[0x2];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABehaviorMoveTo, m_repathTimer) == 0xb8);
    static_assert(offsetof(CDOTABehaviorMoveTo, m_bSetAnimation) == 0xd0);
    static_assert(offsetof(CDOTABehaviorMoveTo, m_bUseSwimAnimations) == 0xd1);
    static_assert(offsetof(CDOTABehaviorMoveTo, m_nRunActivity) == 0xd4);
    static_assert(offsetof(CDOTABehaviorMoveTo, m_flTargetDist) == 0xd8);
    static_assert(offsetof(CDOTABehaviorMoveTo, m_bIsDirectional) == 0xdc);
    static_assert(offsetof(CDOTABehaviorMoveTo, m_bIsRelative) == 0xdd);
    
    static_assert(sizeof(CDOTABehaviorMoveTo) == 0xe0);
};
