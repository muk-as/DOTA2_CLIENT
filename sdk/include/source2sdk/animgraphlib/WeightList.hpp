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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class WeightList
    {
    public:
        CUtlString m_name; // 0x0        
        // m_weights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_weights;
        char m_weights[0x18]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(WeightList, m_name) == 0x0);
    static_assert(offsetof(WeightList, m_weights) == 0x8);
    
    static_assert(sizeof(WeightList) == 0x20);
};
