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
    class CModelConfig;
};

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModelConfigList
    {
    public:
        bool m_bHideMaterialGroupInTools; // 0x0        
        bool m_bHideRenderColorInTools; // 0x1        
        [[maybe_unused]] std::uint8_t pad_0x02[0x6]; // 0x2
        // m_Configs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::CModelConfig*> m_Configs;
        char m_Configs[0x18]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CModelConfigList, m_bHideMaterialGroupInTools) == 0x0);
    static_assert(offsetof(CModelConfigList, m_bHideRenderColorInTools) == 0x1);
    static_assert(offsetof(CModelConfigList, m_Configs) == 0x8);
    
    static_assert(sizeof(CModelConfigList) == 0x20);
};
