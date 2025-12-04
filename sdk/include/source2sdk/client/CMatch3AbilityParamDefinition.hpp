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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMatch3AbilityParamDefinition
        {
        public:
            CUtlString name; // 0x_            
            float value; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString str; // 0x_            
            // resource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> resource;
            char resource[0x_]; // 0x_            
            CUtlString desc; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMatch3AbilityParamDefinition, name) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3AbilityParamDefinition, value) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3AbilityParamDefinition, str) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3AbilityParamDefinition, resource) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3AbilityParamDefinition, desc) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CMatch3AbilityParamDefinition) == 0x_);
    };
};
