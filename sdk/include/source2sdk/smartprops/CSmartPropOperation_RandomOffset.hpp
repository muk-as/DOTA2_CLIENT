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
    // static metadata: MPropertyFriendlyName "Transform: Random Offset"
    // static metadata: MPropertyDescription "Apply a random position offset to the current transform."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_RandomOffset : public smartprops::CSmartPropTransformOperation
    {
    public:
        // metadata: MPropertyDescription "Minimum random position offset"
        CSmartPropAttributeVector m_vRandomPositionMin; // 0x50        
        // metadata: MPropertyDescription "Maximum random position offset"
        CSmartPropAttributeVector m_vRandomPositionMax; // 0x90        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_RandomOffset because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_RandomOffset) == 0xd0);
};
