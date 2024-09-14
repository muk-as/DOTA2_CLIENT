#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct TraceSettings_t
    {
    public:
        float m_flTraceHeight; // 0x0        
        float m_flTraceRadius; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(TraceSettings_t, m_flTraceHeight) == 0x0);
    static_assert(offsetof(TraceSettings_t, m_flTraceRadius) == 0x4);
    
    static_assert(sizeof(TraceSettings_t) == 0x8);
};
