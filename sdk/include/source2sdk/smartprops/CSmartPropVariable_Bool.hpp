#pragma once
#include "source2sdk/smartprops/CSmartPropVariable.hpp"
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
    // static metadata: MPropertyFriendlyName "Boolean"
    #pragma pack(push, 1)
    class CSmartPropVariable_Bool : public smartprops::CSmartPropVariable
    {
    public:
        bool m_DefaultValue; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x29[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropVariable_Bool because it is not a standard-layout class
    static_assert(sizeof(CSmartPropVariable_Bool) == 0x30);
};
