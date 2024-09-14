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
    // Size: 0xd0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Transform: Random Rotation"
    // static metadata: MPropertyDescription "Apply a random rotation to the current transform."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_RandomRotation : public smartprops::CSmartPropTransformOperation
    {
    public:
        // metadata: MPropertyDescription "Minimum rotation range"
        CSmartPropAttributeAngles m_vRandomRotationMin; // 0x50        
        // metadata: MPropertyDescription "Maximum rotation range"
        CSmartPropAttributeAngles m_vRandomRotationMax; // 0x90        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_RandomRotation because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_RandomRotation) == 0xd0);
};
