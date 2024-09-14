#pragma once
#include "source2sdk/modellib/AnimParamID.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x70
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimParameterBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x18]; // 0x0
        // metadata: MPropertyFriendlyName "Name"
        // metadata: MPropertySortPriority "100"
        CGlobalSymbol m_name; // 0x18        
        // metadata: MPropertyFriendlyName "Comment"
        // metadata: MPropertyAttributeEditor "TextBlock()"
        // metadata: MPropertySortPriority "-100"
        CUtlString m_sComment; // 0x20        
        // metadata: MPropertyReadOnly
        CUtlString m_group; // 0x28        
        // metadata: MPropertyReadOnly
        modellib::AnimParamID m_id; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x34[0x14]; // 0x34
        // metadata: MPropertyHideField
        // metadata: MPropertyAttrChangeCallback
        CUtlString m_componentName; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x50[0x18]; // 0x50
        // metadata: MPropertyHideField
        bool m_bNetworkingRequested; // 0x68        
        // metadata: MPropertyHideField
        bool m_bIsReferenced; // 0x69        
        [[maybe_unused]] std::uint8_t pad_0x6a[0x6];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimParameterBase, m_name) == 0x18);
    static_assert(offsetof(CAnimParameterBase, m_sComment) == 0x20);
    static_assert(offsetof(CAnimParameterBase, m_group) == 0x28);
    static_assert(offsetof(CAnimParameterBase, m_id) == 0x30);
    static_assert(offsetof(CAnimParameterBase, m_componentName) == 0x48);
    static_assert(offsetof(CAnimParameterBase, m_bNetworkingRequested) == 0x68);
    static_assert(offsetof(CAnimParameterBase, m_bIsReferenced) == 0x69);
    
    static_assert(sizeof(CAnimParameterBase) == 0x70);
};
