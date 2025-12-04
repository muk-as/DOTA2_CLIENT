#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CMsgBattleReport_CompareContext.hpp"
#include "source2sdk/client/EHighlightScoreComparison.hpp"

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
            source2sdk::client::CMsgBattleReport_CompareContext m_eCompareContext; // 0x_            
            // metadata: MPropertyDescription "Comparison Type for player score to baseline data or threshold value"
            source2sdk::client::EHighlightScoreComparison m_eComparisonType; // 0x_            
            // metadata: MPropertyDescription "Value for comparison using the selected context."
            // metadata: MPropertySuppressExpr "m_eCompareContext != k_eAbsoluteValue"
            float m_flCompareValue; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlightCompareContext_t, m_eCompareContext) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlightCompareContext_t, m_eComparisonType) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlightCompareContext_t, m_flCompareValue) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTABattleReportHighlightCompareContext_t) == 0x_);
    };
};
