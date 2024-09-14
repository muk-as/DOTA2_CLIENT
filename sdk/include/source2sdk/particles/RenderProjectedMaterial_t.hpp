#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct RenderProjectedMaterial_t
    {
    public:
        // metadata: MPropertyFriendlyName "Material"
        // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
        char m_hMaterial[0x8]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RenderProjectedMaterial_t, m_hMaterial) == 0x0);
    
    static_assert(sizeof(RenderProjectedMaterial_t) == 0x8);
};
