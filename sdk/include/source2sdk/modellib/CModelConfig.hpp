#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    class CModelConfigElement;
};

namespace source2sdk::modellib
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
        // CUtlVector<modellib::CModelConfigElement*> m_Elements;
        char m_Elements[0x18]; // 0x8        
        bool m_bTopLevel; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x21[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CModelConfig, m_ConfigName) == 0x0);
    static_assert(offsetof(CModelConfig, m_Elements) == 0x8);
    static_assert(offsetof(CModelConfig, m_bTopLevel) == 0x20);
    
    static_assert(sizeof(CModelConfig) == 0x28);
};
