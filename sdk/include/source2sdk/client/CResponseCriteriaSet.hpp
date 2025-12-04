#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CResponseCriteriaSet
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nNumPrefixedContexts; // 0x_            
            bool m_bOverrideOnAppend; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CResponseCriteriaSet, m_nNumPrefixedContexts) == 0x_);
        static_assert(offsetof(source2sdk::client::CResponseCriteriaSet, m_bOverrideOnAppend) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CResponseCriteriaSet) == 0x_);
    };
};
