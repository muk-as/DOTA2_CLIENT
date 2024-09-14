#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/worldrenderer/BaseSceneObjectOverride_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x18
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct MaterialOverride_t : public worldrenderer::BaseSceneObjectOverride_t
    {
    public:
        uint32_t m_nSubSceneObject; // 0x4        
        uint32_t m_nDrawCallIndex; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        // m_pMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_pMaterial;
        char m_pMaterial[0x8]; // 0x10        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in MaterialOverride_t because it is not a standard-layout class
    static_assert(sizeof(MaterialOverride_t) == 0x18);
};
