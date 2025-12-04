#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/CAnimDecoder.hpp"
#include "source2sdk/animationsystem/CAnimDesc.hpp"
#include "source2sdk/animationsystem/CAnimFrameSegment.hpp"

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
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimData
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CBufferString m_name; // 0x_            
            // m_animArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimDesc> m_animArray;
            char m_animArray[0x_]; // 0x_            
            // m_decoderArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimDecoder> m_decoderArray;
            char m_decoderArray[0x_]; // 0x_            
            std::int32_t m_nMaxUniqueFrameIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_segmentArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimFrameSegment> m_segmentArray;
            char m_segmentArray[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimData, m_name) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimData, m_animArray) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimData, m_decoderArray) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimData, m_nMaxUniqueFrameIndex) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimData, m_segmentArray) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimData) == 0x_);
    };
};
