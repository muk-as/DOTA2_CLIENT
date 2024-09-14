#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
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
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MPropertySuppressField
        // metadata: MVDataUniqueMonotonicInt "_editor/next_element_id"
        int32_t m_nElementID; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSmartPropParameter, m_nElementID) == 0x8);
    
    static_assert(sizeof(CSmartPropParameter) == 0x10);
};
