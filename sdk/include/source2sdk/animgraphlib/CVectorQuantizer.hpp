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
    class CVectorQuantizer
    {
    public:
        // m_centroidVectors has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_centroidVectors;
        char m_centroidVectors[0x18]; // 0x0        
        int32_t m_nCentroids; // 0x18        
        int32_t m_nDimensions; // 0x1c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CVectorQuantizer, m_centroidVectors) == 0x0);
    static_assert(offsetof(CVectorQuantizer, m_nCentroids) == 0x18);
    static_assert(offsetof(CVectorQuantizer, m_nDimensions) == 0x1c);
    
    static_assert(sizeof(CVectorQuantizer) == 0x20);
};
