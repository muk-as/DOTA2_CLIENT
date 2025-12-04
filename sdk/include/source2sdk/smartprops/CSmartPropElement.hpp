#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace smartprops
    {
        struct CSmartPropModifier;
    };
};
namespace source2sdk
{
    namespace smartprops
    {
        struct CSmartPropSelectionCriteria;
    };
};

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataBase
        // static metadata: MVDataNodeType "1"
        // static metadata: MVDataAnonymousNode
        // static metadata: MPropertyFriendlyName "Smart Prop Element"
        // static metadata: MVDataOutlinerLabelExpr
        #pragma pack(push, 1)
        class CSmartPropElement
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertySuppressField
            // metadata: MVDataUniqueMonotonicInt "_editor/next_element_id"
            std::int32_t m_nElementID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MVDataEnableKey
            // metadata: MPropertyDescription "Is this element enabled? If not enabled, this element will not be evaluted and will have no effect on the result."
            // metadata: MPropertySortPriority "10"
            CSmartPropAttributeBool m_bEnabled; // 0x_            
            // metadata: MPropertyFriendlyName "Label"
            // metadata: MPropertyDescription "Optional text that will appear in the outliner to help organize Smart Prop elements and communicate their purpose to other users."
            CUtlString m_sLabel; // 0x_            
            // metadata: MPropertyFriendlyName "Selection Criteria"
            // metadata: MVDataPromoteField
            // m_SelectionCriteria has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::smartprops::CSmartPropSelectionCriteria*> m_SelectionCriteria;
            char m_SelectionCriteria[0x_]; // 0x_            
            // metadata: MPropertyFriendlyName "Modifiers"
            // metadata: MVDataPromoteField
            // m_Modifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::smartprops::CSmartPropModifier*> m_Modifiers;
            char m_Modifiers[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::smartprops::CSmartPropElement, m_nElementID) == 0x_);
        static_assert(offsetof(source2sdk::smartprops::CSmartPropElement, m_bEnabled) == 0x_);
        static_assert(offsetof(source2sdk::smartprops::CSmartPropElement, m_sLabel) == 0x_);
        static_assert(offsetof(source2sdk::smartprops::CSmartPropElement, m_SelectionCriteria) == 0x_);
        static_assert(offsetof(source2sdk::smartprops::CSmartPropElement, m_Modifiers) == 0x_);
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropElement) == 0x_);
    };
};
