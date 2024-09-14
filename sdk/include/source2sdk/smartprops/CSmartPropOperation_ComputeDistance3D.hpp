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
    // Size: 0x198
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Distance"
    // static metadata: MPropertyDescription "Compute the distance between two 3D points"
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_ComputeDistance3D : public smartprops::CSmartPropOperation
    {
    public:
        // metadata: MPropertyFriendlyName "Output Variable"
        // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
        CUtlString m_OutputVariableName; // 0x50        
        // metadata: MPropertyDescription "Specifies the coordinate space the distance should be computed in. The scale of the coordinate space may affect the distance value."
        smartprops::CSmartPropAttributeCoordinateSpace m_OutputCoordinateSpace; // 0x58        
        // metadata: MPropertyGroupName "+Position A"
        // metadata: MPropertyFriendlyName "Position A"
        CSmartPropAttributeVector m_InputPositionA; // 0x98        
        // metadata: MPropertyGroupName "+Position A"
        // metadata: MPropertyDescription "Specifies the coordinate space of position A."
        smartprops::CSmartPropAttributeCoordinateSpace m_CoordinateSpaceA; // 0xd8        
        // metadata: MPropertyGroupName "+Position B"
        // metadata: MPropertyFriendlyName "Position B"
        CSmartPropAttributeVector m_InputPositionB; // 0x118        
        // metadata: MPropertyGroupName "+Position B"
        // metadata: MPropertyDescription "Specifies the coordinate space of position B."
        smartprops::CSmartPropAttributeCoordinateSpace m_CoordinateSpaceB; // 0x158        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_ComputeDistance3D because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_ComputeDistance3D) == 0x198);
};
