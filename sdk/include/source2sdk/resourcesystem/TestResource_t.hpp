#pragma once
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
    // Size: 0x8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct TestResource_t
    {
    public:
        // metadata: MKV3TransferName "name"
        CUtlString m_name; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(TestResource_t, m_name) == 0x0);
    
    static_assert(sizeof(TestResource_t) == 0x8);
};
