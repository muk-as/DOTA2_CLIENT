#pragma once
#include "source2sdk/animgraphlib/ParamSpan_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CParamSpanUpdater
    {
    public:
        // m_spans has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::ParamSpan_t> m_spans;
        char m_spans[0x18]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CParamSpanUpdater, m_spans) == 0x0);
    
    static_assert(sizeof(CParamSpanUpdater) == 0x18);
};
