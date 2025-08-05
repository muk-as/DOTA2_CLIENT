#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x100
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMatch3AbilityParamDefinition
        {
        public:
            CUtlString name; // 0x0            
            float value; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            CUtlString str; // 0x10            
            // resource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> resource;
            char resource[0xe0]; // 0x18            
            CUtlString desc; // 0xf8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMatch3AbilityParamDefinition, name) == 0x0);
        static_assert(offsetof(source2sdk::client::CMatch3AbilityParamDefinition, value) == 0x8);
        static_assert(offsetof(source2sdk::client::CMatch3AbilityParamDefinition, str) == 0x10);
        static_assert(offsetof(source2sdk::client::CMatch3AbilityParamDefinition, resource) == 0x18);
        static_assert(offsetof(source2sdk::client::CMatch3AbilityParamDefinition, desc) == 0xf8);
        
        static_assert(sizeof(source2sdk::client::CMatch3AbilityParamDefinition) == 0x100);
    };
};
