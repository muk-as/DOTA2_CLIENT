#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0x10
        #pragma pack(push, 1)
        struct CWorldCompositionChunkReferenceElement_t
        {
        public:
            CUtlString m_strMapToLoad; // 0x0            
            CUtlString m_strLandmarkName; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CWorldCompositionChunkReferenceElement_t, m_strMapToLoad) == 0x0);
        static_assert(offsetof(source2sdk::client::CWorldCompositionChunkReferenceElement_t, m_strLandmarkName) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CWorldCompositionChunkReferenceElement_t) == 0x10);
    };
};
