#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropAttributeChoiceSelectionMode.hpp"
#include "source2sdk/smartprops/CSmartPropElement_Group.hpp"
#include "source2sdk/smartprops/ConfigurationHandleShape_t.hpp"

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
        // Size: 0x228
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Select Single Child"
        // static metadata: MPropertyDescription "An element which selects a single choice from its set of child choices."
        #pragma pack(push, 1)
        class CSmartPropElement_PickOne : public source2sdk::smartprops::CSmartPropElement_Group
        {
        public:
            // metadata: MPropertyDescription "Specifies how the initial selection of a choice should be handled."
            source2sdk::smartprops::CSmartPropAttributeChoiceSelectionMode m_SelectionMode; // 0xa0            
            // metadata: MPropertyFriendlyName "Specific Child"
            // metadata: MPropertyDescription "Specifies the index of the child to pick."
            // metadata: MPropertySuppressExpr "( m_SelectionMode != SPECIFIC )"
            CSmartPropAttributeInt m_SpecificChildIndex; // 0xe0            
            // metadata: MPropertyDescription "Should a control to select the specific choice be shown when this prop is placed in Hammer."
            CSmartPropAttributeBool m_bConfigurable; // 0x120            
            // metadata: MPropertyGroupName "Handle Settings"
            // metadata: MPropertyReadonlyExpr
            // metadata: MPropertyDescription "Specifies an offset in the local space of the element to apply to the configuration handle."
            CSmartPropAttributeVector m_vHandleOffset; // 0x160            
            // metadata: MPropertyGroupName "Handle Settings"
            // metadata: MPropertyReadonlyExpr
            // metadata: MPropertyDescription "Color to use to display the configuration handle."
            CSmartPropAttributeColor m_HandleColor; // 0x1a0            
            // metadata: MPropertyGroupName "Handle Settings"
            // metadata: MPropertyReadonlyExpr
            // metadata: MPropertyDescription "Size of the configuration handle."
            CSmartPropAttributeInt m_HandleSize; // 0x1e0            
            // metadata: MPropertyGroupName "Handle Settings"
            // metadata: MPropertyReadonlyExpr
            // metadata: MPropertyDescription "Shape of the configuration handle to display."
            source2sdk::smartprops::ConfigurationHandleShape_t m_HandleShape; // 0x220            
            uint8_t _pad0224[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropElement_PickOne because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropElement_PickOne) == 0x228);
    };
};
