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
    // Size: 0xd0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Transform: Translate"
    // static metadata: MPropertyDescription "Apply a position offset to the current transform."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_Translate : public smartprops::CSmartPropTransformOperation
    {
    public:
        // metadata: MPropertyDescription "Local space position translation to apply to the current transform"
        CSmartPropAttributeVector m_vPosition; // 0x50        
        // metadata: MPropertyDescription "Specifies the coordinate space of the specified position value."
        smartprops::CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // 0x90        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_Translate because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_Translate) == 0xd0);
};
