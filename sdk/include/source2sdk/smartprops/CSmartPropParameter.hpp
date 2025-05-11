#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has VTable
        // Is Abstract
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataNodeType "1"
        // static metadata: MVDataAnonymousNode
        #pragma pack(push, 1)
        class CSmartPropParameter
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MPropertySuppressField
            // metadata: MVDataUniqueMonotonicInt "_editor/next_element_id"
            std::int32_t m_nElementID; // 0x8            
            uint8_t _pad000c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::smartprops::CSmartPropParameter, m_nElementID) == 0x8);
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropParameter) == 0x10);
    };
};
