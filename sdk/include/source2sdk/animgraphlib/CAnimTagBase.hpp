#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/AnimTagID.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
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
            uint8_t _pad0000[0x18]; // 0x0
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
            source2sdk::modellib::AnimTagID m_tagID; // 0x30            
            uint8_t _pad0034[0x14]; // 0x34
            // metadata: MPropertyHideField
            bool m_bIsReferenced; // 0x48            
            uint8_t _pad0049[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimTagBase, m_name) == 0x18);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimTagBase, m_sComment) == 0x20);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimTagBase, m_group) == 0x28);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimTagBase, m_tagID) == 0x30);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimTagBase, m_bIsReferenced) == 0x48);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimTagBase) == 0x50);
    };
};
