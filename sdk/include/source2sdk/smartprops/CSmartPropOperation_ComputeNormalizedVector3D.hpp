#pragma once
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
    // static metadata: MPropertyFriendlyName "Normalize Vector"
    // static metadata: MPropertyDescription "Normalize the value of a 3d vector."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_ComputeNormalizedVector3D : public smartprops::CSmartPropOperation
    {
    public:
        // metadata: MPropertyFriendlyName "Output Variable"
        // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
        CUtlString m_OutputVariableName; // 0x50        
        CSmartPropAttributeVector m_InputVector; // 0x58        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_ComputeNormalizedVector3D because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_ComputeNormalizedVector3D) == 0x98);
};
