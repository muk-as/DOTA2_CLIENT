#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ETeamTrackedStatImpl.hpp"
#include "source2sdk/client/TrackedStatAggregateData_t.hpp"
#include "source2sdk/client/TrackedStatExpressionData_t.hpp"
#include "source2sdk/client/TrackedStatID_t.hpp"

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
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CTeamTrackedStatDefinition
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "unique integer ID of this stat"
            // metadata: MVDataUniqueMonotonicInt "_editor/next_team_stat_id"
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::TrackedStatID_t m_unStatID; // 0x_            
            // metadata: MPropertyDescription "how this stat is implemented"
            source2sdk::client::ETeamTrackedStatImpl m_eStatImpl; // 0x_            
            // metadata: MPropertyDescription "For k_eTeamTrackedStatImpl_Expression, what is the expression information."
            // metadata: MPropertySuppressExpr "m_eStatImpl != k_ePlayerTrackedStatImpl_Expression"
            source2sdk::client::TrackedStatExpressionData_t m_expressionData; // 0x_            
            // metadata: MPropertyDescription "For k_eTeamTrackedStatImpl_PlayerAggregate, what is the aggregate information."
            // metadata: MPropertySuppressExpr "m_eStatImpl != k_eTeamTrackedStatImpl_PlayerAggregate"
            source2sdk::client::TrackedStatAggregateData_t m_aggregateData; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CTeamTrackedStatDefinition, m_unStatID) == 0x_);
        static_assert(offsetof(source2sdk::client::CTeamTrackedStatDefinition, m_eStatImpl) == 0x_);
        static_assert(offsetof(source2sdk::client::CTeamTrackedStatDefinition, m_expressionData) == 0x_);
        static_assert(offsetof(source2sdk::client::CTeamTrackedStatDefinition, m_aggregateData) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CTeamTrackedStatDefinition) == 0x_);
    };
};
