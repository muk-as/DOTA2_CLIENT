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
    // static metadata: MPropertyFriendlyName "Vector 2D"
    #pragma pack(push, 1)
    class CSmartPropVariable_Vector2D : public smartprops::CSmartPropVariable
    {
    public:
        Vector2D m_DefaultValue; // 0x28        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropVariable_Vector2D because it is not a standard-layout class
    static_assert(sizeof(CSmartPropVariable_Vector2D) == 0x30);
};
