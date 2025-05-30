#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropElement.hpp"
namespace source2sdk
{
    namespace smartprops
    {
        struct CSmartPropElement;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Group"
        // static metadata: MPropertyDescription "A group of elements that will all be evaulated."
        // static metadata: MVDataOutlinerLabelExpr
        #pragma pack(push, 1)
        class CSmartPropElement_Group : public source2sdk::smartprops::CSmartPropElement
        {
        public:
            // metadata: MPropertyFriendlyName "Children"
            // metadata: MPropertyDescription "List of child elements which will appear if this element appears"
            // metadata: MVDataPromoteField
            // m_Children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::smartprops::CSmartPropElement*> m_Children;
            char m_Children[0x18]; // 0x80            
            // metadata: MPropertyFriendlyName "Label"
            // metadata: MPropertyDescription "Optional text that will appear in the outliner to help organize Smart Prop elements and communicate their purpose to other users."
            CUtlString m_sLabel; // 0x98            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropElement_Group because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropElement_Group) == 0xa0);
    };
};
