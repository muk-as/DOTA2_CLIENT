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
    // static metadata: MPropertyFriendlyName "Transform: Random Scale"
    // static metadata: MPropertyDescription "Apply a random scale to the current transform."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_RandomScale : public smartprops::CSmartPropTransformOperation
    {
    public:
        // metadata: MPropertyDescription "Minimum scale range"
        CSmartPropAttributeFloat m_flRandomScaleMin; // 0x50        
        // metadata: MPropertyDescription "Maximum scale range"
        CSmartPropAttributeFloat m_flRandomScaleMax; // 0x90        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_RandomScale because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_RandomScale) == 0xd0);
};
