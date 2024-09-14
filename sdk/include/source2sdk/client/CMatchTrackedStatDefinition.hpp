#pragma once
#include "source2sdk/client/EMatchTrackedStatImpl.hpp"
#include "source2sdk/client/TrackedStatAggregateData_t.hpp"
#include "source2sdk/client/TrackedStatExpressionData_t.hpp"
#include "source2sdk/client/TrackedStatID_t.hpp"
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
    // Size: 0x30
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CMatchTrackedStatDefinition
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MPropertyDescription "unique integer ID of this stat"
        // metadata: MVDataUniqueMonotonicInt "_editor/next_match_stat_id"
        // metadata: MPropertyAttributeEditor "locked_int()"
        client::TrackedStatID_t m_unStatID; // 0x8        
        // metadata: MPropertyDescription "how this stat is implemented"
        client::EMatchTrackedStatImpl m_eStatImpl; // 0xc        
        // metadata: MPropertyDescription "For k_eMatchTrackedStatImpl_Expression, what is the expression information."
        // metadata: MPropertySuppressExpr "m_eStatImpl != k_eMatchTrackedStatImpl_Expression"
        client::TrackedStatExpressionData_t m_expressionData; // 0x10        
        // metadata: MPropertyDescription "For k_eMatchTrackedStatImpl_PlayerAggregate or k_eMatchTrackedStatImpl_TeamAggregate, what is the aggregate information."
        // metadata: MPropertySuppressExpr "m_eStatImpl != k_eMatchTrackedStatImpl_PlayerAggregate && m_eStatImpl != k_eMatchTrackedStatImpl_TeamAggregate"
        client::TrackedStatAggregateData_t m_aggregateData; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMatchTrackedStatDefinition, m_unStatID) == 0x8);
    static_assert(offsetof(CMatchTrackedStatDefinition, m_eStatImpl) == 0xc);
    static_assert(offsetof(CMatchTrackedStatDefinition, m_expressionData) == 0x10);
    static_assert(offsetof(CMatchTrackedStatDefinition, m_aggregateData) == 0x20);
    
    static_assert(sizeof(CMatchTrackedStatDefinition) == 0x30);
};
