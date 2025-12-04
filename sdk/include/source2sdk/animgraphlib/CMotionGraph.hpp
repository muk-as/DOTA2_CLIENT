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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMotionGraph
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::CParamSpanUpdater m_paramSpans; // 0x_            
            // m_tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::TagSpan_t> m_tags;
            char m_tags[0x_]; // 0x_            
            // m_pRootNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSmartPtr<source2sdk::animgraphlib::CMotionNode> m_pRootNode;
            char m_pRootNode[0x_]; // 0x_            
            std::int32_t m_nParameterCount; // 0x_            
            std::int32_t m_nConfigStartIndex; // 0x_            
            std::int32_t m_nConfigCount; // 0x_            
            bool m_bLoop; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraph, m_paramSpans) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraph, m_tags) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraph, m_pRootNode) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraph, m_nParameterCount) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraph, m_nConfigStartIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraph, m_nConfigCount) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraph, m_bLoop) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CMotionGraph) == 0x_);
    };
};
