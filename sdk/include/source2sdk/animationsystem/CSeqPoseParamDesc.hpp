#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSeqPoseParamDesc
        {
        public:
            CBufferString m_sName; // 0x_            
            float m_flStart; // 0x_            
            float m_flEnd; // 0x_            
            float m_flLoop; // 0x_            
            bool m_bLooping; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CSeqPoseParamDesc, m_sName) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqPoseParamDesc, m_flStart) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqPoseParamDesc, m_flEnd) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqPoseParamDesc, m_flLoop) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqPoseParamDesc, m_bLooping) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CSeqPoseParamDesc) == 0x_);
    };
};
