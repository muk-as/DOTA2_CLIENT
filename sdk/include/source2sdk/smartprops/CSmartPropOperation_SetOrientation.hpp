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
    // Size: 0x190
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Transform: Set Orientation"
    // static metadata: MPropertyDescription "Set the current orientation from a specified forward and up vector."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_SetOrientation : public smartprops::CSmartPropTransformOperation
    {
    public:
        // metadata: MPropertyGroupName "+Forward"
        CSmartPropAttributeVector m_vForwardVector; // 0x50        
        // metadata: MPropertyGroupName "+Forward"
        // metadata: MPropertyDescription "Specifies the coordinate space the forward direction is being specified in"
        smartprops::CSmartPropAttributeCoordinateSpace m_ForwardDirectionSpace; // 0x90        
        // metadata: MPropertyGroupName "+Up"
        CSmartPropAttributeVector m_vUpVector; // 0xd0        
        // metadata: MPropertyGroupName "+Up"
        // metadata: MPropertyDescription "Specifies the coordinate space the up direction is being specified in"
        smartprops::CSmartPropAttributeCoordinateSpace m_UpDirectionSpace; // 0x110        
        // metadata: MPropertyDescription "If the specified vectors are not orthogonal, normally the up vector will be adjusted to make it orthogonal to the forward vector. If prioritize up is true, then the forward vector will be adjusted to be orthogonal to the specified up vector instead."
        CSmartPropAttributeBool m_bPrioritizeUp; // 0x150        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_SetOrientation because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_SetOrientation) == 0x190);
};
