#pragma once
#include "source2sdk/animlib/CNmVectorValueNode__CDefinition.hpp"
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
    // Size: 0x18
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmVectorCreateNode__CDefinition : public animlib::CNmVectorValueNode__CDefinition
    {
    public:
        int16_t m_inputVectorValueNodeIdx; // 0x10        
        int16_t m_inputValueXNodeIdx; // 0x12        
        int16_t m_inputValueYNodeIdx; // 0x14        
        int16_t m_inputValueZNodeIdx; // 0x16        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmVectorCreateNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmVectorCreateNode__CDefinition) == 0x18);
};
