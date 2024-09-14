#pragma once
#include "source2sdk/smartprops/CSmartPropAttributeCoordinateSpace.hpp"
#include "source2sdk/smartprops/CSmartPropAttributeDirection.hpp"
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
    // Size: 0xd8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Save Direction Vector"
    // static metadata: MPropertyDescription "Save the specified direction vector to a specified variable, in the requested coordinate space"
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_SaveDirection : public smartprops::CSmartPropOperation
    {
    public:
        // metadata: MPropertyDescription "Specifies which direction vector to save."
        smartprops::CSmartPropAttributeDirection m_DirectionVector; // 0x50        
        // metadata: MPropertyDescription "Specifies the coordinate space of the saved position value."
        smartprops::CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // 0x90        
        // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
        CUtlString m_VariableName; // 0xd0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_SaveDirection because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_SaveDirection) == 0xd8);
};
