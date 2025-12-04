#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/CAnimEncodeDifference.hpp"
#include "source2sdk/animationsystem/CAnimFrameBlockAnim.hpp"

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
        class CAnimEncodedFrames
        {
        public:
            CBufferString m_fileName; // 0x_            
            std::int32_t m_nFrames; // 0x_            
            std::int32_t m_nFramesPerBlock; // 0x_            
            // m_frameblockArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimFrameBlockAnim> m_frameblockArray;
            char m_frameblockArray[0x_]; // 0x_            
            source2sdk::animationsystem::CAnimEncodeDifference m_usageDifferences; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimEncodedFrames, m_fileName) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEncodedFrames, m_nFrames) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEncodedFrames, m_nFramesPerBlock) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEncodedFrames, m_frameblockArray) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEncodedFrames, m_usageDifferences) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimEncodedFrames) == 0x_);
    };
};
