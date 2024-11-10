#pragma once
#include "source2sdk/animlib/CNmParameterizedBlendNode__CDefinition.hpp"
#include "source2sdk/animlib/CNmParameterizedBlendNode__Parameterization_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x90
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmBlend1DNode__CDefinition : public animlib::CNmParameterizedBlendNode__CDefinition
    {
    public:
        animlib::CNmParameterizedBlendNode__Parameterization_t m_parameterization; // 0x40        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmBlend1DNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmBlend1DNode__CDefinition) == 0x90);
};
