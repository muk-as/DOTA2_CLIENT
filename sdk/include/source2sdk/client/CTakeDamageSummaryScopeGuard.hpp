#pragma once
#include "source2sdk/client/SummaryTakeDamageInfo_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    struct SummaryTakeDamageInfo_t;
};

namespace source2sdk::client
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
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // m_vecSummaries has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::SummaryTakeDamageInfo_t*> m_vecSummaries;
        char m_vecSummaries[0x18]; // 0x8        
        
        // Static fields:
        static client::SummaryTakeDamageInfo_t &Get_EmptySummary() {return *reinterpret_cast<client::SummaryTakeDamageInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CTakeDamageSummaryScopeGuard")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CTakeDamageSummaryScopeGuard, m_vecSummaries) == 0x8);
    
    static_assert(sizeof(CTakeDamageSummaryScopeGuard) == 0x20);
};
