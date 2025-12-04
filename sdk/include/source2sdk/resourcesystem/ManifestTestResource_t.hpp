#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeManifestTestResource_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: resourcesystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace resourcesystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ManifestTestResource_t
        {
        public:
            // metadata: MKV3TransferName "name"
            CUtlString m_name; // 0x_            
            // metadata: MKV3TransferName "child"
            // m_child has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeManifestTestResource_t> m_child;
            char m_child[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::resourcesystem::ManifestTestResource_t, m_name) == 0x_);
        static_assert(offsetof(source2sdk::resourcesystem::ManifestTestResource_t, m_child) == 0x_);
        
        static_assert(sizeof(source2sdk::resourcesystem::ManifestTestResource_t) == 0x_);
    };
};
