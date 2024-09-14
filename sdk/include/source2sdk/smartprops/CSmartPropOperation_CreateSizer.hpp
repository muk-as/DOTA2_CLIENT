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
    // Size: 0x3c8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Create Sizer"
    // static metadata: MPropertyDescription "Create a sizer that will be displayed at the current location, allowing the user to manipulate the specified set of size values."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_CreateSizer : public smartprops::CSmartPropTransformOperation
    {
    public:
        // metadata: MPropertyFriendlyName "Name"
        // metadata: MPropertyDescription "Name used to identify the sizer. Must be unique within the paraent element."
        CUtlString m_Name; // 0x50        
        // metadata: MPropertyFriendlyName "Display Model"
        // metadata: MPropertyDescription "If enabled a model will be displayed at the position of the sizer that can be used to select the sizer in Hammer."
        CSmartPropAttributeBool m_bDisplayModel; // 0x58        
        // metadata: MPropertyGroupName "X-Axis Size"
        CSmartPropAttributeFloat m_flInitialMinX; // 0x98        
        // metadata: MPropertyGroupName "X-Axis Size"
        CSmartPropAttributeFloat m_flInitialMaxX; // 0xd8        
        // metadata: MPropertyGroupName "X-Axis Size"
        CSmartPropAttributeFloat m_flConstraintMinX; // 0x118        
        // metadata: MPropertyGroupName "X-Axis Size"
        CSmartPropAttributeFloat m_flConstraintMaxX; // 0x158        
        // metadata: MPropertyGroupName "X-Axis Size"
        // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
        CUtlString m_OutputVariableMinX; // 0x198        
        // metadata: MPropertyGroupName "X-Axis Size"
        // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
        CUtlString m_OutputVariableMaxX; // 0x1a0        
        // metadata: MPropertyGroupName "Y-Axis Size"
        CSmartPropAttributeFloat m_flInitialMinY; // 0x1a8        
        // metadata: MPropertyGroupName "Y-Axis Size"
        CSmartPropAttributeFloat m_flInitialMaxY; // 0x1e8        
        // metadata: MPropertyGroupName "Y-Axis Size"
        CSmartPropAttributeFloat m_flConstraintMinY; // 0x228        
        // metadata: MPropertyGroupName "Y-Axis Size"
        CSmartPropAttributeFloat m_flConstraintMaxY; // 0x268        
        // metadata: MPropertyGroupName "Y-Axis Size"
        // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
        CUtlString m_OutputVariableMinY; // 0x2a8        
        // metadata: MPropertyGroupName "Y-Axis Size"
        // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
        CUtlString m_OutputVariableMaxY; // 0x2b0        
        // metadata: MPropertyGroupName "Z-Axis Size"
        CSmartPropAttributeFloat m_flInitialMinZ; // 0x2b8        
        // metadata: MPropertyGroupName "Z-Axis Size"
        CSmartPropAttributeFloat m_flInitialMaxZ; // 0x2f8        
        // metadata: MPropertyGroupName "Z-Axis Size"
        CSmartPropAttributeFloat m_flConstraintMinZ; // 0x338        
        // metadata: MPropertyGroupName "Z-Axis Size"
        CSmartPropAttributeFloat m_flConstraintMaxZ; // 0x378        
        // metadata: MPropertyGroupName "Z-Axis Size"
        // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
        CUtlString m_OutputVariableMinZ; // 0x3b8        
        // metadata: MPropertyGroupName "Z-Axis Size"
        // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
        CUtlString m_OutputVariableMaxZ; // 0x3c0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_CreateSizer because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_CreateSizer) == 0x3c8);
};
