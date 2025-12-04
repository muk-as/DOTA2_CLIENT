#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CMatch3AbilityParamDefinition.hpp"

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
        class CMatch3AbilityBaseDefinition
        {
        public:
            CUtlString m_sLocName; // 0x_            
            CUtlString m_sLocDescription; // 0x_            
            CPanoramaImageName m_sImage; // 0x_            
            // m_vecParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMatch3AbilityParamDefinition> m_vecParams;
            char m_vecParams[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMatch3AbilityBaseDefinition, m_sLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3AbilityBaseDefinition, m_sLocDescription) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3AbilityBaseDefinition, m_sImage) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3AbilityBaseDefinition, m_vecParams) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CMatch3AbilityBaseDefinition) == 0x_);
    };
};
