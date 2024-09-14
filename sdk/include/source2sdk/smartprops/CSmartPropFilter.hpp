#pragma once
#include "source2sdk/smartprops/CSmartPropModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x50
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataNodeTintColor
    #pragma pack(push, 1)
    class CSmartPropFilter : public smartprops::CSmartPropModifier
    {
    public:
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CSmartPropFilter) == 0x50);
};
