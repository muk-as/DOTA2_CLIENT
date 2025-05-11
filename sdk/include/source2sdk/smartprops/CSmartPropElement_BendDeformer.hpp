#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropElement_Deformer.hpp"

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
        // Size: 0x260
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Bend Deformer"
        // static metadata: MPropertyDescription "Creates a bend deformer that is applied to child elements. The deformation bends the local space x-axis around the local space z-axis. The Angles property can be used to rotate the local axis to change the direction of deformation."
        #pragma pack(push, 1)
        class CSmartPropElement_BendDeformer : public source2sdk::smartprops::CSmartPropElement_Deformer
        {
        public:
            // metadata: MPropertyFriendlyName "Deformation Enabled"
            // metadata: MPropertyDescription "Should the deformation be applied. If disabled the children will still be placed, but will not be deformed. Esentially making the element behave as a group."
            CSmartPropAttributeBool m_bDeformationEnabled; // 0xa0            
            // metadata: MPropertyFriendlyName "Origin"
            // metadata: MPropertyDescription "A local offset to apply to the base volume of the deformer that will not apply to its children."
            CSmartPropAttributeVector m_vOrigin; // 0xe0            
            // metadata: MPropertyFriendlyName "Angles"
            // metadata: MPropertyDescription "A local rotation to apply to apply the base volume of the deformer that will not apply to its children. This can be used to alter the direction of the deformation."
            CSmartPropAttributeAngles m_vAngles; // 0x120            
            // metadata: MPropertyFriendlyName "Dimensions"
            // metadata: MPropertyDescription "Size of the base volume to be deformed."
            CSmartPropAttributeVector m_vSize; // 0x160            
            // metadata: MPropertyFriendlyName "Bend Angle"
            // metadata: MPropertyDescription "Bend amount to apply, specified in degrees. Bend occurs along the local x-axis and bends around the local z-axis"
            CSmartPropAttributeFloat m_flBendAngle; // 0x1a0            
            // metadata: MPropertyFriendlyName "Bend Point"
            // metadata: MPropertyDescription "[ 0, 1 ] Value specifying the location along the local x-axis the bend will occur around"
            CSmartPropAttributeFloat m_flBendPoint; // 0x1e0            
            // metadata: MPropertyFriendlyName "Bend Radius"
            // metadata: MPropertyDescription "Radius of the bend. If 0 the radius will be computed automatically to preserve the length of the inner edge of the x-axis. If a non-zero value is specified then the inner edge will maintain this radius, but its length will change."
            CSmartPropAttributeFloat m_flBendRadius; // 0x220            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropElement_BendDeformer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropElement_BendDeformer) == 0x260);
    };
};
