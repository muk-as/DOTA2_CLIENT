#pragma once
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
    // Size: 0x90
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Transform: Rotate"
    // static metadata: MPropertyDescription "Apply a rotation to the current transform."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_Rotate : public smartprops::CSmartPropTransformOperation
    {
    public:
        // metadata: MPropertyDescription "Local space rotation (in degrees) to apply to the current transform"
        CSmartPropAttributeAngles m_vRotation; // 0x50        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_Rotate because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_Rotate) == 0x90);
};
