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
    // Size: 0x98
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Save Current Surface Normal"
    // static metadata: MPropertyDescription "Save the current surface normal to a specified variable in the requested coordinate space"
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_SaveSurfaceNormal : public smartprops::CSmartPropOperation
    {
    public:
        // metadata: MPropertyDescription "Specifies the coordinate space of the saved position value."
        smartprops::CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // 0x50        
        // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
        CUtlString m_VariableName; // 0x90        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_SaveSurfaceNormal because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_SaveSurfaceNormal) == 0x98);
};
