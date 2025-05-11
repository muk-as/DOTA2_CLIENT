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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Has VTable
        #pragma pack(push, 1)
        class CTakeDamageSummaryScopeGuard
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // m_vecSummaries has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SummaryTakeDamageInfo_t*> m_vecSummaries;
            char m_vecSummaries[0x18]; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CTakeDamageSummaryScopeGuard, m_vecSummaries) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CTakeDamageSummaryScopeGuard) == 0x20);
    };
};
