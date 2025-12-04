#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/AnimationDecodeDebugDumpElement_t.hpp"
#include "source2sdk/animationsystem/AnimationProcessingType_t.hpp"

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
        struct AnimationDecodeDebugDump_t
        {
        public:
            source2sdk::animationsystem::AnimationProcessingType_t m_processingType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_elems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::AnimationDecodeDebugDumpElement_t> m_elems;
            char m_elems[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::AnimationDecodeDebugDump_t, m_processingType) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::AnimationDecodeDebugDump_t, m_elems) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::AnimationDecodeDebugDump_t) == 0x_);
    };
};
