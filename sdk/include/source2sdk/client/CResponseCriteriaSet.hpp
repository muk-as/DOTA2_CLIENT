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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x28
        // Has VTable
        #pragma pack(push, 1)
        class CResponseCriteriaSet
        {
        public:
            uint8_t _pad0000[0x20]; // 0x0
            std::int32_t m_nNumPrefixedContexts; // 0x20            
            bool m_bOverrideOnAppend; // 0x24            
            uint8_t _pad0025[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CResponseCriteriaSet, m_nNumPrefixedContexts) == 0x20);
        static_assert(offsetof(source2sdk::client::CResponseCriteriaSet, m_bOverrideOnAppend) == 0x24);
        
        static_assert(sizeof(source2sdk::client::CResponseCriteriaSet) == 0x28);
    };
};
