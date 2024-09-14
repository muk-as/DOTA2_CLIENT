#pragma once
#include "source2sdk/smartprops/CSmartPropFilter.hpp"
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
    // static metadata: MPropertyFriendlyName "Filter: Probability"
    // static metadata: MPropertyDescription "Causes the parent element to only be evaluated with a specified random probability."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropFilter_Probability : public smartprops::CSmartPropFilter
    {
    public:
        // metadata: MPropertyDescription "0.0 to 1.0 value indicating the probability of this element being evaluated. Where a value of 0 means the element will never be evaluated and 1.0 means it will always be evaluated"
        CSmartPropAttributeFloat m_flProbability; // 0x50        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropFilter_Probability because it is not a standard-layout class
    static_assert(sizeof(CSmartPropFilter_Probability) == 0x90);
};
