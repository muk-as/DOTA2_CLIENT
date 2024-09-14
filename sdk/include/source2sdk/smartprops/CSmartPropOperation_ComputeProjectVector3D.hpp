#pragma once
#include "source2sdk/smartprops/CSmartPropAttributeCoordinateSpace.hpp"
#include "source2sdk/smartprops/CSmartPropOperation.hpp"
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
    // static metadata: MPropertyFriendlyName "Project Vector"
    // static metadata: MPropertyDescription "Project Vector A onto Vector B"
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_ComputeProjectVector3D : public smartprops::CSmartPropOperation
    {
    public:
        // metadata: MPropertyFriendlyName "Output Variable"
        // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
        CUtlString m_OutputVariableName; // 0x50        
        // metadata: MPropertyDescription "Specifies the coordinate space that vector should be returned in."
        smartprops::CSmartPropAttributeCoordinateSpace m_OutputCoordinateSpace; // 0x58        
        // metadata: MPropertyGroupName "+Vector A"
        // metadata: MPropertyFriendlyName "Vector A"
        CSmartPropAttributeVector m_InputVectorA; // 0x98        
        // metadata: MPropertyGroupName "+Vector A"
        // metadata: MPropertyDescription "Specifies the coordinate space of vector A."
        smartprops::CSmartPropAttributeCoordinateSpace m_CoordinateSpaceA; // 0xd8        
        // metadata: MPropertyGroupName "+Vector B"
        // metadata: MPropertyFriendlyName "Vector B"
        CSmartPropAttributeVector m_InputVectorB; // 0x118        
        // metadata: MPropertyGroupName "+Vector B"
        // metadata: MPropertyDescription "Specifies the coordinate space of posivectortion B."
        smartprops::CSmartPropAttributeCoordinateSpace m_CoordinateSpaceB; // 0x158        
        // metadata: MPropertyFriendlyName "Projection to plane"
        // metadata: MPropertyDescription "Interpret Vector B as plane normal."
        CSmartPropAttributeBool m_bPlane; // 0x198        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_ComputeProjectVector3D because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_ComputeProjectVector3D) == 0x1d8);
};
