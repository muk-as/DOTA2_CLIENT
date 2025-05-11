#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/FantasyCraftOperation_t.hpp"

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
            std::uint16_t m_unOperationCount; // 0x0            
            uint8_t _pad0002[0x6]; // 0x2
            // m_vecOperations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::FantasyCraftOperation_t> m_vecOperations;
            char m_vecOperations[0x18]; // 0x8            
            uint8_t _pad0020[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::FantasyCraftOperationBucket_t, m_unOperationCount) == 0x0);
        static_assert(offsetof(source2sdk::client::FantasyCraftOperationBucket_t, m_vecOperations) == 0x8);
        
        static_assert(sizeof(source2sdk::client::FantasyCraftOperationBucket_t) == 0x28);
    };
};
