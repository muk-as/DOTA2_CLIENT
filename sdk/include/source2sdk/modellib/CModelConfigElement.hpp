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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x48
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModelConfigElement
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            CUtlString m_ElementName; // 0x8            
            // m_NestedElements has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::CModelConfigElement*> m_NestedElements;
            char m_NestedElements[0x18]; // 0x10            
            uint8_t _pad0028[0x20];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CModelConfigElement, m_ElementName) == 0x8);
        static_assert(offsetof(source2sdk::modellib::CModelConfigElement, m_NestedElements) == 0x10);
        
        static_assert(sizeof(source2sdk::modellib::CModelConfigElement) == 0x48);
    };
};
