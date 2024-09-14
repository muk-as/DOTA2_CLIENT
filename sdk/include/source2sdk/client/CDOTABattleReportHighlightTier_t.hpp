#pragma once
#include "source2sdk/client/CDOTABattleReportHighlightCompareContext_t.hpp"
#include "source2sdk/client/CMsgBattleReport_HighlightTier.hpp"
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
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyAutoExpandSelf
    #pragma pack(push, 1)
    struct CDOTABattleReportHighlightTier_t
    {
    public:
        // metadata: MPropertyDescription "Tier of the Reward"
        client::CMsgBattleReport_HighlightTier m_eTier; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // metadata: MPropertyDescription "Compare Contexts to Achieve Tier"
        // metadata: MPropertyAutoExpandSelf
        // m_vecCompareContexts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTABattleReportHighlightCompareContext_t> m_vecCompareContexts;
        char m_vecCompareContexts[0x18]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABattleReportHighlightTier_t, m_eTier) == 0x0);
    static_assert(offsetof(CDOTABattleReportHighlightTier_t, m_vecCompareContexts) == 0x8);
    
    static_assert(sizeof(CDOTABattleReportHighlightTier_t) == 0x20);
};
