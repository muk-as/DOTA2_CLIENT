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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Group"
        // static metadata: MPropertyDescription "A group of elements that will all be evaulated."
        #pragma pack(push, 1)
        class CSmartPropElement_Group : public source2sdk::smartprops::CSmartPropElement
        {
        public:
            // metadata: MPropertyFriendlyName "Children"
            // metadata: MPropertyDescription "List of child elements which will appear if this element appears"
            // metadata: MVDataPromoteField
            // m_Children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::smartprops::CSmartPropElement*> m_Children;
            char m_Children[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropElement_Group because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropElement_Group) == 0x_);
    };
};
