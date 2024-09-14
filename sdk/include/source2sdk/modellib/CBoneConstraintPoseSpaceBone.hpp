#pragma once
#include "source2sdk/modellib/CBaseConstraint.hpp"
#include "source2sdk/modellib/CBoneConstraintPoseSpaceBone__Input_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
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
    class CBoneConstraintPoseSpaceBone : public modellib::CBaseConstraint
    {
    public:
        // m_inputList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::CBoneConstraintPoseSpaceBone__Input_t> m_inputList;
        char m_inputList[0x18]; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x80[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBoneConstraintPoseSpaceBone because it is not a standard-layout class
    static_assert(sizeof(CBoneConstraintPoseSpaceBone) == 0x90);
};
