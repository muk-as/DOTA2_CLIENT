#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x1
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct EventClientSceneSystemThreadStateChange_t
    {
    public:
        bool m_bThreadsActive; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(EventClientSceneSystemThreadStateChange_t, m_bThreadsActive) == 0x0);
    
    static_assert(sizeof(EventClientSceneSystemThreadStateChange_t) == 0x1);
};
