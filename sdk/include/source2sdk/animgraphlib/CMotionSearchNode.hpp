#pragma once
#include "source2sdk/animgraphlib/CVectorQuantizer.hpp"
#include "source2sdk/animgraphlib/SampleCode.hpp"
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
    // Size: 0x80
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CMotionSearchNode
    {
    public:
        // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::CMotionSearchNode*> m_children;
        char m_children[0x18]; // 0x0        
        animgraphlib::CVectorQuantizer m_quantizer; // 0x18        
        // m_sampleCodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlVector<animgraphlib::SampleCode>> m_sampleCodes;
        char m_sampleCodes[0x18]; // 0x38        
        // m_sampleIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlVector<int32_t>> m_sampleIndices;
        char m_sampleIndices[0x18]; // 0x50        
        // m_selectableSamples has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_selectableSamples;
        char m_selectableSamples[0x18]; // 0x68        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMotionSearchNode, m_children) == 0x0);
    static_assert(offsetof(CMotionSearchNode, m_quantizer) == 0x18);
    static_assert(offsetof(CMotionSearchNode, m_sampleCodes) == 0x38);
    static_assert(offsetof(CMotionSearchNode, m_sampleIndices) == 0x50);
    static_assert(offsetof(CMotionSearchNode, m_selectableSamples) == 0x68);
    
    static_assert(sizeof(CMotionSearchNode) == 0x80);
};
