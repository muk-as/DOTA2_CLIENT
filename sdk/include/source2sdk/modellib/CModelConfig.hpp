#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace modellib
    {
        struct CModelConfigElement;
    };
};

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModelConfig
        {
        public:
            CUtlString m_ConfigName; // 0x0            
            // m_Elements has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::CModelConfigElement*> m_Elements;
            char m_Elements[0x18]; // 0x8            
            bool m_bTopLevel; // 0x20            
            uint8_t _pad0021[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CModelConfig, m_ConfigName) == 0x0);
        static_assert(offsetof(source2sdk::modellib::CModelConfig, m_Elements) == 0x8);
        static_assert(offsetof(source2sdk::modellib::CModelConfig, m_bTopLevel) == 0x20);
        
        static_assert(sizeof(source2sdk::modellib::CModelConfig) == 0x28);
    };
};
