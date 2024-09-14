#pragma once
#include "source2sdk/animgraphlib/CMotionNode.hpp"
#include "source2sdk/animgraphlib/CParamSpanUpdater.hpp"
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
    // Standard-layout class: true
    // Size: 0x58
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CMotionGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        animgraphlib::CParamSpanUpdater m_paramSpans; // 0x10        
        // m_tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::TagSpan_t> m_tags;
        char m_tags[0x18]; // 0x28        
        // m_pRootNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSmartPtr<animgraphlib::CMotionNode> m_pRootNode;
        char m_pRootNode[0x8]; // 0x40        
        int32_t m_nParameterCount; // 0x48        
        int32_t m_nConfigStartIndex; // 0x4c        
        int32_t m_nConfigCount; // 0x50        
        bool m_bLoop; // 0x54        
        [[maybe_unused]] std::uint8_t pad_0x55[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMotionGraph, m_paramSpans) == 0x10);
    static_assert(offsetof(CMotionGraph, m_tags) == 0x28);
    static_assert(offsetof(CMotionGraph, m_pRootNode) == 0x40);
    static_assert(offsetof(CMotionGraph, m_nParameterCount) == 0x48);
    static_assert(offsetof(CMotionGraph, m_nConfigStartIndex) == 0x4c);
    static_assert(offsetof(CMotionGraph, m_nConfigCount) == 0x50);
    static_assert(offsetof(CMotionGraph, m_bLoop) == 0x54);
    
    static_assert(sizeof(CMotionGraph) == 0x58);
};
