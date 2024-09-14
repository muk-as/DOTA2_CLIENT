#pragma once
#include "source2sdk/client/EFantasyShapeBehavior.hpp"
#include "source2sdk/client/FantasyGemShape_t.hpp"
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
    // Size: 0x18
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyAutoExpandSelf
    #pragma pack(push, 1)
    struct FantasyCraftingShapeData_t
    {
    public:
        // metadata: MPropertyDescription "Unique identifier for the Shape"
        client::FantasyGemShape_t m_unShapeID; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x01[0x3]; // 0x1
        // metadata: MPropertyDescription "Maps the shape to it's code behavior."
        client::EFantasyShapeBehavior m_eShapeBehavior; // 0x4        
        // metadata: MPropertyDescription "Localization token for the name of the shape"
        CUtlString m_sLocName; // 0x8        
        // metadata: MPropertyDescription "Localization token for explaining what the shape does"
        CUtlString m_sLocExplanation; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FantasyCraftingShapeData_t, m_unShapeID) == 0x0);
    static_assert(offsetof(FantasyCraftingShapeData_t, m_eShapeBehavior) == 0x4);
    static_assert(offsetof(FantasyCraftingShapeData_t, m_sLocName) == 0x8);
    static_assert(offsetof(FantasyCraftingShapeData_t, m_sLocExplanation) == 0x10);
    
    static_assert(sizeof(FantasyCraftingShapeData_t) == 0x18);
};
