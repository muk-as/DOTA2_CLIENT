#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/CMotionNode.hpp"
#include "source2sdk/animgraphlib/TagSpan_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMotionNodeSequence : public source2sdk::animgraphlib::CMotionNode
        {
        public:
            // m_tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::TagSpan_t> m_tags;
            char m_tags[0x_]; // 0x_            
            source2sdk::animationsystem::HSequence m_hSequence; // 0x_            
            float m_flPlaybackSpeed; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMotionNodeSequence because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CMotionNodeSequence) == 0x_);
    };
};
