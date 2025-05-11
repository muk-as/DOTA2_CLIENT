#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
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
            std::int32_t m_nCentroids; // 0x18            
            std::int32_t m_nDimensions; // 0x1c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CVectorQuantizer, m_centroidVectors) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CVectorQuantizer, m_nCentroids) == 0x18);
        static_assert(offsetof(source2sdk::animgraphlib::CVectorQuantizer, m_nDimensions) == 0x1c);
        
        static_assert(sizeof(source2sdk::animgraphlib::CVectorQuantizer) == 0x20);
    };
};
