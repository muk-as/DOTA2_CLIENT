#pragma once
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
    // Size: 0xd0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Restore State"
    // static metadata: MPropertyDescription "Replace the current state with a previously saved state."
    // static metadata: MVDataNodeTintColor
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_RestoreState : public smartprops::CSmartPropOperation
    {
    public:
        // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( SavedState )"
        // metadata: MPropertyDescription "Name of the previously saved state to restore"
        CSmartPropAttributeStateName m_StateName; // 0x50        
        // metadata: MPropertyDescription "If true, the parent element will be discarded there is no state with the specified name. If false, and there is no state with the specified name then no changes are made."
        CSmartPropAttributeBool m_bDiscardIfUknown; // 0x90        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_RestoreState because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_RestoreState) == 0xd0);
};
