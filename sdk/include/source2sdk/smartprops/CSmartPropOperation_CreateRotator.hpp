#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropAttributeCoordinateSpace.hpp"
#include "source2sdk/smartprops/CSmartPropTransformOperation.hpp"

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
        // static metadata: MPropertyFriendlyName "Create Rotator"
        // static metadata: MPropertyDescription "Create a rotator that will be displayed at the current location, allowing the user to manipulate a rotation around an axis. The rotation value can be applied to the current transform as well as saved to a variable."
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropOperation_CreateRotator : public source2sdk::smartprops::CSmartPropTransformOperation
        {
        public:
            // metadata: MPropertyFriendlyName "Name"
            // metadata: MPropertyDescription "Name used to identify the rotator. Must be unique within the parent element."
            CUtlString m_Name; // 0x_            
            // metadata: MPropertyDescription "Offset of the rotator relative to the current transform. This allows the rotator to be created at an offset location without applying that offset to the current transform."
            CSmartPropAttributeVector m_vOffset; // 0x_            
            // metadata: MPropertyDescription "Axis around which the rotation will occur"
            CSmartPropAttributeVector m_vRotationAxis; // 0x_            
            // metadata: MPropertyDescription "Coordinate space the axis of rotation is specified in."
            source2sdk::smartprops::CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // 0x_            
            // metadata: MPropertyDescription "Radius at which the rotator handle should be displayed."
            CSmartPropAttributeFloat m_flDisplayRadius; // 0x_            
            // metadata: MPropertyDescription "Color to display the rotator handle with."
            CSmartPropAttributeColor m_DisplayColor; // 0x_            
            // metadata: MPropertyDescription "Should the rotation be applied to the current transform."
            CSmartPropAttributeBool m_bApplyToCurrentTransform; // 0x_            
            // metadata: MPropertyDescription "Specifies the number of degrees the rotation should snap to. If set to 0, then the rotation snapping will be controlled by the rotation snapping in Hammer."
            CSmartPropAttributeFloat m_flSnappingIncrement; // 0x_            
            // metadata: MPropertyDescription "Specifies the angle the rotator should be set to initially."
            CSmartPropAttributeFloat m_flInitialAngle; // 0x_            
            // metadata: MPropertyFriendlyName "Enforce Limits"
            // metadata: MPropertyDescription "If enabled, the minimum and maximum rotation angles will be used to limit the range of the rotation."
            CSmartPropAttributeBool m_bEnforceLimits; // 0x_            
            // metadata: MPropertyReadonlyExpr
            // metadata: MPropertyFriendlyName "Minimum Angle"
            // metadata: MPropertyDescription "Specifies the minimum angle limit in degrees"
            CSmartPropAttributeFloat m_flMinAngle; // 0x_            
            // metadata: MPropertyReadonlyExpr
            // metadata: MPropertyFriendlyName "Maximum Angle"
            // metadata: MPropertyDescription "Specifies the minimum angle limit in degrees"
            CSmartPropAttributeFloat m_flMaxAngle; // 0x_            
            // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
            // metadata: MPropertyDescription "Specifies a float variable to which the rotation value should be output. The variable only receives the rotation around the axis, the axis of rotation does not affect this output."
            CUtlString m_OutputVariable; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropOperation_CreateRotator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropOperation_CreateRotator) == 0x_);
    };
};
