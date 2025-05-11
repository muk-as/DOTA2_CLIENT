#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        #pragma pack(push, 1)
        struct CBoneConstraintPoseSpaceBone_Input_t
        {
        public:
            Vector m_inputValue; // 0x0            
            uint8_t _pad000c[0x4]; // 0xc
            // m_outputTransformList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CTransform> m_outputTransformList;
            char m_outputTransformList[0x18]; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CBoneConstraintPoseSpaceBone_Input_t, m_inputValue) == 0x0);
        static_assert(offsetof(source2sdk::modellib::CBoneConstraintPoseSpaceBone_Input_t, m_outputTransformList) == 0x10);
        
        static_assert(sizeof(source2sdk::modellib::CBoneConstraintPoseSpaceBone_Input_t) == 0x28);
    };
};
