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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimTagBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Name"
            // metadata: MPropertySortPriority "100"
            CGlobalSymbol m_name; // 0x_            
            // metadata: MPropertyFriendlyName "Comment"
            // metadata: MPropertyAttributeEditor "TextBlock()"
            // metadata: MPropertySortPriority "-100"
            CUtlString m_sComment; // 0x_            
            // metadata: MPropertySuppressField
            CGlobalSymbol m_group; // 0x_            
            // metadata: MPropertySuppressField
            source2sdk::modellib::AnimTagID m_tagID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertySuppressField
            bool m_bIsReferenced; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimTagBase, m_name) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimTagBase, m_sComment) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimTagBase, m_group) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimTagBase, m_tagID) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimTagBase, m_bIsReferenced) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimTagBase) == 0x_);
    };
};
