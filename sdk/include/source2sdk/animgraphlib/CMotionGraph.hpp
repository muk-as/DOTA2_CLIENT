#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CMotionNode.hpp"
#include "source2sdk/animgraphlib/CParamSpanUpdater.hpp"
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
            uint8_t _pad0000[0x10]; // 0x0
            source2sdk::animgraphlib::CParamSpanUpdater m_paramSpans; // 0x10            
            // m_tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::TagSpan_t> m_tags;
            char m_tags[0x18]; // 0x28            
            // m_pRootNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSmartPtr<source2sdk::animgraphlib::CMotionNode> m_pRootNode;
            char m_pRootNode[0x8]; // 0x40            
            std::int32_t m_nParameterCount; // 0x48            
            std::int32_t m_nConfigStartIndex; // 0x4c            
            std::int32_t m_nConfigCount; // 0x50            
            bool m_bLoop; // 0x54            
            uint8_t _pad0055[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraph, m_paramSpans) == 0x10);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraph, m_tags) == 0x28);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraph, m_pRootNode) == 0x40);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraph, m_nParameterCount) == 0x48);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraph, m_nConfigStartIndex) == 0x4c);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraph, m_nConfigCount) == 0x50);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraph, m_bLoop) == 0x54);
        
        static_assert(sizeof(source2sdk::animgraphlib::CMotionGraph) == 0x58);
    };
};
