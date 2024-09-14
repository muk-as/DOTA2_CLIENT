#pragma once
#include "source2sdk/modellib/CBoneConstraintBase.hpp"
#include "source2sdk/modellib/CBoneConstraintPoseSpaceMorph__Input_t.hpp"
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
    // Size: 0xa8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CBoneConstraintPoseSpaceMorph : public modellib::CBoneConstraintBase
    {
    public:
        CUtlString m_sBoneName; // 0x28        
        CUtlString m_sAttachmentName; // 0x30        
        // m_outputMorph has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_outputMorph;
        char m_outputMorph[0x18]; // 0x38        
        // m_inputList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::CBoneConstraintPoseSpaceMorph__Input_t> m_inputList;
        char m_inputList[0x18]; // 0x50        
        bool m_bClamp; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x69[0x3f];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBoneConstraintPoseSpaceMorph because it is not a standard-layout class
    static_assert(sizeof(CBoneConstraintPoseSpaceMorph) == 0xa8);
};
