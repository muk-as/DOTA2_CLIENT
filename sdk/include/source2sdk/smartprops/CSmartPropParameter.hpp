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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertySuppressField
            // metadata: MVDataUniqueMonotonicInt "_editor/next_element_id"
            std::int32_t m_nElementID; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::smartprops::CSmartPropParameter, m_nElementID) == 0x_);
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropParameter) == 0x_);
    };
};
