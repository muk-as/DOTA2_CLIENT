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
    // Size: 0x58
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Save State"
    // static metadata: MPropertyDescription "Save the current state, allowing it to be restored at a later state."
    // static metadata: MVDataNodeTintColor
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_SaveState : public smartprops::CSmartPropOperation
    {
    public:
        // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( SavedState )"
        // metadata: MPropertyDescription "Name to assign to the saved state, the save state can be restored later using this name."
        CUtlString m_StateName; // 0x50        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_SaveState because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_SaveState) == 0x58);
};
