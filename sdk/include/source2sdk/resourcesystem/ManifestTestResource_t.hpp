#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeManifestTestResource_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: resourcesystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::resourcesystem
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x10
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ManifestTestResource_t
    {
    public:
        // metadata: MKV3TransferName "name"
        CUtlString m_name; // 0x0        
        // metadata: MKV3TransferName "child"
        // m_child has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeManifestTestResource_t> m_child;
        char m_child[0x8]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ManifestTestResource_t, m_name) == 0x0);
    static_assert(offsetof(ManifestTestResource_t, m_child) == 0x8);
    
    static_assert(sizeof(ManifestTestResource_t) == 0x10);
};
