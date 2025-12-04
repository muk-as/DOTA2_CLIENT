#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct VsInputSignatureElement_t
        {
        public:
            char m_pName[64]; // 0x_            
            char m_pSemantic[64]; // 0x_            
            char m_pD3DSemanticName[64]; // 0x_            
            std::int32_t m_nD3DSemanticIndex; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::VsInputSignatureElement_t, m_pName) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VsInputSignatureElement_t, m_pSemantic) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VsInputSignatureElement_t, m_pD3DSemanticName) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VsInputSignatureElement_t, m_nD3DSemanticIndex) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::VsInputSignatureElement_t) == 0x_);
    };
};
