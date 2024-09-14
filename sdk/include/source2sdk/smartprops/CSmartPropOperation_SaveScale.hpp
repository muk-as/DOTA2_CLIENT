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
    // static metadata: MPropertyFriendlyName "Save Current Scale"
    // static metadata: MPropertyDescription "Save the current scale factor to a specified variable."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_SaveScale : public smartprops::CSmartPropOperation
    {
    public:
        // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
        CUtlString m_VariableName; // 0x50        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_SaveScale because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_SaveScale) == 0x58);
};
