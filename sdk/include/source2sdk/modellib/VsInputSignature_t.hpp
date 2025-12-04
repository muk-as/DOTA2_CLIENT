#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/VsInputSignatureElement_t.hpp"

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
        #pragma pack(push, 1)
        struct VsInputSignature_t
        {
        public:
            // m_elems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::VsInputSignatureElement_t> m_elems;
            char m_elems[0x_]; // 0x_            
            // m_depth_elems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::VsInputSignatureElement_t> m_depth_elems;
            char m_depth_elems[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::VsInputSignature_t, m_elems) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VsInputSignature_t, m_depth_elems) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::VsInputSignature_t) == 0x_);
    };
};
