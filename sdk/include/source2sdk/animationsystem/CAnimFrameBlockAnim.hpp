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
        class CAnimFrameBlockAnim
        {
        public:
            std::int32_t m_nStartFrame; // 0x_            
            std::int32_t m_nEndFrame; // 0x_            
            // m_segmentIndexArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_segmentIndexArray;
            char m_segmentIndexArray[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimFrameBlockAnim, m_nStartFrame) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimFrameBlockAnim, m_nEndFrame) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimFrameBlockAnim, m_segmentIndexArray) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimFrameBlockAnim) == 0x_);
    };
};
