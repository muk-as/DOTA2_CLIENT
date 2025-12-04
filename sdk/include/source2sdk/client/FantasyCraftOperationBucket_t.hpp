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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct FantasyCraftOperationBucket_t
        {
        public:
            // metadata: MPropertyDescription "How many operations should the user get from this bucket"
            std::uint16_t m_unOperationCount; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecOperations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::FantasyCraftOperation_t> m_vecOperations;
            char m_vecOperations[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::FantasyCraftOperationBucket_t, m_unOperationCount) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftOperationBucket_t, m_vecOperations) == 0x_);
        
        static_assert(sizeof(source2sdk::client::FantasyCraftOperationBucket_t) == 0x_);
    };
};
