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
    // Size: 0x18
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ParamSpanSample_t
    {
    public:
        CAnimVariant m_value; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x11[0x3]; // 0x11
        float m_flCycle; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ParamSpanSample_t, m_value) == 0x0);
    static_assert(offsetof(ParamSpanSample_t, m_flCycle) == 0x14);
    
    static_assert(sizeof(ParamSpanSample_t) == 0x18);
};
