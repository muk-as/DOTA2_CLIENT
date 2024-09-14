#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

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
    struct MaterialGroup_t
    {
    public:
        CUtlString m_name; // 0x0        
        // m_materials has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2>> m_materials;
        char m_materials[0x18]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(MaterialGroup_t, m_name) == 0x0);
    static_assert(offsetof(MaterialGroup_t, m_materials) == 0x8);
    
    static_assert(sizeof(MaterialGroup_t) == 0x20);
};
