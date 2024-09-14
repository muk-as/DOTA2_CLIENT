#pragma once
#include "source2sdk/smartprops/CSmartPropVariable.hpp"
#include "source2sdk/smartprops/SmartPropPathPositions_t.hpp"
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
    // Size: 0x30
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Path Positions"
    // static metadata: MPropertyDescription "Specifies the set of positions that are valid for path placement."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropVariable_PathPositions : public smartprops::CSmartPropVariable
    {
    public:
        smartprops::SmartPropPathPositions_t m_DefaultValue; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropVariable_PathPositions because it is not a standard-layout class
    static_assert(sizeof(CSmartPropVariable_PathPositions) == 0x30);
};
