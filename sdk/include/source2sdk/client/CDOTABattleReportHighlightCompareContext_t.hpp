#pragma once
#include "source2sdk/client/CMsgBattleReport_CompareContext.hpp"
#include "source2sdk/client/EHighlightScoreComparison.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0xc
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyAutoExpandSelf
    #pragma pack(push, 1)
    struct CDOTABattleReportHighlightCompareContext_t
    {
    public:
        // metadata: MPropertyDescription "How to view the baseline data of the player's performance for comparison."
        client::CMsgBattleReport_CompareContext m_eCompareContext; // 0x0        
        // metadata: MPropertyDescription "Comparison Type for player score to baseline data or threshold value"
        client::EHighlightScoreComparison m_eComparisonType; // 0x4        
        // metadata: MPropertyDescription "Value for comparison using the selected context."
        // metadata: MPropertySuppressExpr "m_eCompareContext != k_eAbsoluteValue"
        float m_flCompareValue; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABattleReportHighlightCompareContext_t, m_eCompareContext) == 0x0);
    static_assert(offsetof(CDOTABattleReportHighlightCompareContext_t, m_eComparisonType) == 0x4);
    static_assert(offsetof(CDOTABattleReportHighlightCompareContext_t, m_flCompareValue) == 0x8);
    
    static_assert(sizeof(CDOTABattleReportHighlightCompareContext_t) == 0xc);
};
