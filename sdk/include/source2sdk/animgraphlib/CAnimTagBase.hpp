#pragma once
#include "source2sdk/modellib/AnimTagID.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x50
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimTagBase
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
        // metadata: MPropertyHideField
        CGlobalSymbol m_group; // 0x28        
        // metadata: MPropertyHideField
        modellib::AnimTagID m_tagID; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x34[0x14]; // 0x34
        // metadata: MPropertyHideField
        bool m_bIsReferenced; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x49[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimTagBase, m_name) == 0x18);
    static_assert(offsetof(CAnimTagBase, m_sComment) == 0x20);
    static_assert(offsetof(CAnimTagBase, m_group) == 0x28);
    static_assert(offsetof(CAnimTagBase, m_tagID) == 0x30);
    static_assert(offsetof(CAnimTagBase, m_bIsReferenced) == 0x48);
    
    static_assert(sizeof(CAnimTagBase) == 0x50);
};
