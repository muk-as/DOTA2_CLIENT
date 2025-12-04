#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CVectorQuantizer.hpp"
#include "source2sdk/animgraphlib/SampleCode.hpp"

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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMotionSearchNode
        {
        public:
            // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CMotionSearchNode*> m_children;
            char m_children[0x_]; // 0x_            
            source2sdk::animgraphlib::CVectorQuantizer m_quantizer; // 0x_            
            // m_sampleCodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlVector<source2sdk::animgraphlib::SampleCode>> m_sampleCodes;
            char m_sampleCodes[0x_]; // 0x_            
            // m_sampleIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlVector<std::int32_t>> m_sampleIndices;
            char m_sampleIndices[0x_]; // 0x_            
            // m_selectableSamples has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_selectableSamples;
            char m_selectableSamples[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CMotionSearchNode, m_children) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionSearchNode, m_quantizer) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionSearchNode, m_sampleCodes) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionSearchNode, m_sampleIndices) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionSearchNode, m_selectableSamples) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CMotionSearchNode) == 0x_);
    };
};
