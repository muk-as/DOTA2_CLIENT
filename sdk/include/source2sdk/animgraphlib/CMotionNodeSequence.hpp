#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/CMotionNode.hpp"
#include "source2sdk/animgraphlib/TagSpan_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x48
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CMotionNodeSequence : public animgraphlib::CMotionNode
    {
    public:
        // m_tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::TagSpan_t> m_tags;
        char m_tags[0x18]; // 0x28        
        animationsystem::HSequence m_hSequence; // 0x40        
        float m_flPlaybackSpeed; // 0x44        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMotionNodeSequence because it is not a standard-layout class
    static_assert(sizeof(CMotionNodeSequence) == 0x48);
};
