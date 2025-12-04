#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropAttributeCoordinateSpace.hpp"
#include "source2sdk/smartprops/CSmartPropOperation.hpp"

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
        // static metadata: MPropertyFriendlyName "Project Vector"
        // static metadata: MPropertyDescription "Project Vector A onto Vector B"
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropOperation_ComputeProjectVector3D : public source2sdk::smartprops::CSmartPropOperation
        {
        public:
            // metadata: MPropertyFriendlyName "Output Variable"
            // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
            CUtlString m_OutputVariableName; // 0x_            
            // metadata: MPropertyDescription "Specifies the coordinate space that vector should be returned in."
            source2sdk::smartprops::CSmartPropAttributeCoordinateSpace m_OutputCoordinateSpace; // 0x_            
            // metadata: MPropertyGroupName "+Vector A"
            // metadata: MPropertyFriendlyName "Vector A"
            CSmartPropAttributeVector m_InputVectorA; // 0x_            
            // metadata: MPropertyGroupName "+Vector A"
            // metadata: MPropertyDescription "Specifies the coordinate space of vector A."
            source2sdk::smartprops::CSmartPropAttributeCoordinateSpace m_CoordinateSpaceA; // 0x_            
            // metadata: MPropertyGroupName "+Vector B"
            // metadata: MPropertyFriendlyName "Vector B"
            CSmartPropAttributeVector m_InputVectorB; // 0x_            
            // metadata: MPropertyGroupName "+Vector B"
            // metadata: MPropertyDescription "Specifies the coordinate space of posivectortion B."
            source2sdk::smartprops::CSmartPropAttributeCoordinateSpace m_CoordinateSpaceB; // 0x_            
            // metadata: MPropertyFriendlyName "Projection to plane"
            // metadata: MPropertyDescription "Interpret Vector B as plane normal."
            CSmartPropAttributeBool m_bPlane; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropOperation_ComputeProjectVector3D because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropOperation_ComputeProjectVector3D) == 0x_);
    };
};
