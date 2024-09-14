#pragma once
#include "source2sdk/client/FantasyCraftOperation_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x28
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyAutoExpandSelf
    #pragma pack(push, 1)
    struct FantasyCraftOperationBucket_t
    {
    public:
        // metadata: MPropertyDescription "How many operations should the user get from this bucket"
        uint16_t m_unOperationCount; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x02[0x6]; // 0x2
        // m_vecOperations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::FantasyCraftOperation_t> m_vecOperations;
        char m_vecOperations[0x18]; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x20[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FantasyCraftOperationBucket_t, m_unOperationCount) == 0x0);
    static_assert(offsetof(FantasyCraftOperationBucket_t, m_vecOperations) == 0x8);
    
    static_assert(sizeof(FantasyCraftOperationBucket_t) == 0x28);
};
