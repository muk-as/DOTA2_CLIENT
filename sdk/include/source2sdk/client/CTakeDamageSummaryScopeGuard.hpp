#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace client
    {
        struct SummaryTakeDamageInfo_t;
    };
};

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
        class CTakeDamageSummaryScopeGuard
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_vecSummaries has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SummaryTakeDamageInfo_t*> m_vecSummaries;
            char m_vecSummaries[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CTakeDamageSummaryScopeGuard, m_vecSummaries) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CTakeDamageSummaryScopeGuard) == 0x_);
    };
};
