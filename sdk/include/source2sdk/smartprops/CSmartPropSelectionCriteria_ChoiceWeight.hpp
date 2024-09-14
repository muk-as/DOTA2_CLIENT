#pragma once
#include "source2sdk/smartprops/CSmartPropSelectionCriteria.hpp"
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
    // Size: 0x88
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataComponentValidGrandParents
    // static metadata: MPropertyFriendlyName "Choice Weight"
    // static metadata: MPropertyDescription "Specifies a weighting value which affects that likelyhood of selecting this element which picking a choice."
    #pragma pack(push, 1)
    class CSmartPropSelectionCriteria_ChoiceWeight : public smartprops::CSmartPropSelectionCriteria
    {
    public:
        // metadata: MPropertyDescription "Relative weight of this choice, higher weighted choices are more likely to be selected."
        CSmartPropAttributeFloat m_flWeight; // 0x48        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropSelectionCriteria_ChoiceWeight because it is not a standard-layout class
    static_assert(sizeof(CSmartPropSelectionCriteria_ChoiceWeight) == 0x88);
};
