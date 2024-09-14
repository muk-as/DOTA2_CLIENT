#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CLeafUpdateNode.hpp"
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
    // Size: 0x90
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCycleControlClipUpdateNode : public animgraphlib::CLeafUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x58[0x8]; // 0x58
        // m_tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::TagSpan_t> m_tags;
        char m_tags[0x18]; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x78[0x4]; // 0x78
        animationsystem::HSequence m_hSequence; // 0x7c        
        float m_duration; // 0x80        
        animgraphlib::AnimValueSource m_valueSource; // 0x84        
        animgraphlib::CAnimParamHandle m_paramIndex; // 0x88        
        [[maybe_unused]] std::uint8_t pad_0x8a[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCycleControlClipUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CCycleControlClipUpdateNode) == 0x90);
};
