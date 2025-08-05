#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CBoneConstraintBase.hpp"
#include "source2sdk/modellib/CBoneConstraintPoseSpaceMorph_Input_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBoneConstraintPoseSpaceMorph : public source2sdk::modellib::CBoneConstraintBase
        {
        public:
            CUtlString m_sBoneName; // 0x20            
            CUtlString m_sAttachmentName; // 0x28            
            // m_outputMorph has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_outputMorph;
            char m_outputMorph[0x18]; // 0x30            
            // m_inputList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::CBoneConstraintPoseSpaceMorph_Input_t> m_inputList;
            char m_inputList[0x18]; // 0x48            
            bool m_bClamp; // 0x60            
            uint8_t _pad0061[0x3f];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBoneConstraintPoseSpaceMorph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::modellib::CBoneConstraintPoseSpaceMorph) == 0xa0);
    };
};
