#pragma once
#include "source2sdk/smartprops/CSmartPropTransformOperation.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1d8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Create Locator"
    // static metadata: MPropertyDescription "Create a locator with the current transform. The locator may optionally be configurable, so that its transform can be modified in Hammer."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_CreateLocator : public smartprops::CSmartPropTransformOperation
    {
    public:
        // metadata: MPropertyFriendlyName "Name"
        // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Locator )"
        // metadata: MPropertyDescription "Name of the locator. This can be used to reference the locator in this element or its children. If the locator is configurable, the locator will be identified by this name in Hammer."
        CUtlString m_LocatorName; // 0x50        
        // metadata: MPropertyDescription "Offset of the locator relative to the current transform. This allows the locator to be created at an offset location without applying that offset to the current transform."
        CSmartPropAttributeVector m_vOffset; // 0x58        
        // metadata: MPropertyDescription "Scale to apply only to the locator model"
        CSmartPropAttributeFloat m_flDisplayScale; // 0x98        
        // metadata: MPropertyDescription "Controls whether or not the locator can be edited in a smart prop configuration. If enabled an editable locator will appear when the smart prop is placed in Hammer. Any changes to that locator will modify the current transform."
        CSmartPropAttributeBool m_bConfigurable; // 0xd8        
        // metadata: MPropertyReadonlyExpr
        // metadata: MPropertyGroupName "Configuration"
        CSmartPropAttributeBool m_bAllowTranslation; // 0x118        
        // metadata: MPropertyReadonlyExpr
        // metadata: MPropertyGroupName "Configuration"
        CSmartPropAttributeBool m_bAllowRotation; // 0x158        
        // metadata: MPropertyReadonlyExpr
        // metadata: MPropertyGroupName "Configuration"
        // metadata: MPropertyDescription "Controls whether or not the configuration of the locator can include scale. If enabled scale can be applied to the editable locator in Hammer. If disabled the scale will not be editable and the current scale will be used."
        CSmartPropAttributeBool m_bAllowScale; // 0x198        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_CreateLocator because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_CreateLocator) == 0x1d8);
};
