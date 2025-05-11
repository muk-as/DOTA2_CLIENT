#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CLeafUpdateNode.hpp"
#include "source2sdk/animgraphlib/TagSpan_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
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
        class CCycleControlClipUpdateNode : public source2sdk::animgraphlib::CLeafUpdateNode
        {
        public:
            uint8_t _pad0058[0x8]; // 0x58
            // m_tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::TagSpan_t> m_tags;
            char m_tags[0x18]; // 0x60            
            uint8_t _pad0078[0x4]; // 0x78
            source2sdk::animationsystem::HSequence m_hSequence; // 0x7c            
            float m_duration; // 0x80            
            source2sdk::animgraphlib::AnimValueSource m_valueSource; // 0x84            
            source2sdk::animgraphlib::CAnimParamHandle m_paramIndex; // 0x88            
            uint8_t _pad008a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCycleControlClipUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CCycleControlClipUpdateNode) == 0x90);
    };
};
