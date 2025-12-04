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
        // static metadata: MPropertyFriendlyName "Transform: Rotate Towards"
        // static metadata: MPropertyDescription "Apply a rotation to the current transform according to the alignment of two points."
        // static metadata: MVDataClassGroup
        // static metadata: MVDataExperimentalNodeSet
        #pragma pack(push, 1)
        class CSmartPropOperation_RotateTowards : public source2sdk::smartprops::CSmartPropTransformOperation
        {
        public:
            // metadata: MPropertyDescription "Position of origin point."
            CSmartPropAttributeVector m_vOriginPos; // 0x_            
            // metadata: MPropertyDescription "position of target point."
            CSmartPropAttributeVector m_vTargetPos; // 0x_            
            // metadata: MPropertyDescription "position of up point."
            CSmartPropAttributeVector m_vUpPos; // 0x_            
            // metadata: MPropertyDescription "Coefficient to modulate the rotation"
            CSmartPropAttributeFloat m_flWeight; // 0x_            
            // metadata: MPropertyGroupName "Input Coordinate Space"
            // metadata: MPropertyDescription "Space in which the origin position is defined."
            source2sdk::smartprops::CSmartPropAttributeCoordinateSpace m_OriginSpace; // 0x_            
            // metadata: MPropertyGroupName "Input Coordinate Space"
            // metadata: MPropertyDescription "Space in which the target position is defined."
            source2sdk::smartprops::CSmartPropAttributeCoordinateSpace m_TargetSpace; // 0x_            
            // metadata: MPropertyGroupName "Input Coordinate Space"
            // metadata: MPropertyDescription "Space in which the up target is defined."
            source2sdk::smartprops::CSmartPropAttributeCoordinateSpace m_UpSpace; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropOperation_RotateTowards because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropOperation_RotateTowards) == 0x_);
    };
};
