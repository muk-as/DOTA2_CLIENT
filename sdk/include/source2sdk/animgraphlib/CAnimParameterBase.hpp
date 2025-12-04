#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/AnimParamID.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimParameterBase
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
            // metadata: MPropertyReadOnly
            // metadata: MPropertySortPriority "-90"
            CUtlString m_group; // 0x_            
            // metadata: MPropertyReadOnly
            // metadata: MPropertySortPriority "-90"
            source2sdk::modellib::AnimParamID m_id; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertySuppressField
            // metadata: MPropertyAutoRebuildOnChange
            CUtlString m_componentName; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertySuppressField
            bool m_bNetworkingRequested; // 0x_            
            // metadata: MPropertySuppressField
            bool m_bIsReferenced; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimParameterBase, m_name) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimParameterBase, m_sComment) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimParameterBase, m_group) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimParameterBase, m_id) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimParameterBase, m_componentName) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimParameterBase, m_bNetworkingRequested) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimParameterBase, m_bIsReferenced) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimParameterBase) == 0x_);
    };
};
