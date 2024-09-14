#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseRequirement.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x50
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MCellForDomain "BaseDomain"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo
    // static metadata: MPropertyFriendlyName "Limit Count"
    // static metadata: MPropertyDescription "Skip this node after the limit. Check Type does not apply, the limit will always be checked."
    // static metadata: MPulseRequirementPass
    #pragma pack(push, 1)
    class CPulseCell_LimitCount : public pulse_runtime_lib::CPulseCell_BaseRequirement
    {
    public:
        // metadata: MPropertyFlattenIntoParentRow
        int32_t m_nLimitCount; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x4c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_LimitCount because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_LimitCount) == 0x50);
};
