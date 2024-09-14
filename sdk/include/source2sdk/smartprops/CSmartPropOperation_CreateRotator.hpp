#pragma once
#include "source2sdk/smartprops/CSmartPropAttributeCoordinateSpace.hpp"
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
    // Size: 0x260
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Create Rotator"
    // static metadata: MPropertyDescription "Create a rotator that will be displayed at the current location, allowing the user to manipulate a rotation around an axis. The rotation value can be applied to the current transform as well as saved to a variable."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_CreateRotator : public smartprops::CSmartPropTransformOperation
    {
    public:
        // metadata: MPropertyFriendlyName "Name"
        // metadata: MPropertyDescription "Name used to identify the rotator. Must be unique within the parent element."
        CUtlString m_Name; // 0x50        
        // metadata: MPropertyDescription "Axis around which the rotation will occur"
        CSmartPropAttributeVector m_vRotationAxis; // 0x58        
        // metadata: MPropertyDescription "Coordinate space the axis of rotation is specified in."
        smartprops::CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // 0x98        
        // metadata: MPropertyDescription "Radius at which the rotator handle should be displayed."
        CSmartPropAttributeFloat m_flDisplayRadius; // 0xd8        
        // metadata: MPropertyDescription "Should the rotation be applied to the current transform."
        CSmartPropAttributeBool m_bApplyToCurrentTransform; // 0x118        
        // metadata: MPropertyDescription "Specifies the number of degrees the rotation should snap to. If set to 0, then the rotation snapping will be controlled by the rotation snapping in Hammer."
        CSmartPropAttributeFloat m_flSnappingIncrement; // 0x158        
        // metadata: MPropertyFriendlyName "Enforce Limits"
        // metadata: MPropertyDescription "If enabled, the minimum and maximum rotation angles will be used to limit the range of the rotation."
        CSmartPropAttributeBool m_bEnforceLimits; // 0x198        
        // metadata: MPropertyReadonlyExpr
        // metadata: MPropertyFriendlyName "Minimum Angle"
        // metadata: MPropertyDescription "Specifies the minimum angle limit in degrees"
        CSmartPropAttributeFloat m_flMinAngle; // 0x1d8        
        // metadata: MPropertyReadonlyExpr
        // metadata: MPropertyFriendlyName "Minimum Angle"
        // metadata: MPropertyDescription "Specifies the minimum angle limit in degrees"
        CSmartPropAttributeFloat m_flMaxAngle; // 0x218        
        // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
        // metadata: MPropertyDescription "Specifies a float variable to which the rotation value should be output. The variable only receives the rotation around the axis, the axis of rotation does not affect this output."
        CUtlString m_OutputVariable; // 0x258        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_CreateRotator because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_CreateRotator) == 0x260);
};
