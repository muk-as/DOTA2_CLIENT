#pragma once
#include "source2sdk/animgraphlib/CMotionSearchNode.hpp"
#include "source2sdk/animgraphlib/CProductQuantizer.hpp"
#include "source2sdk/animgraphlib/MotionDBIndex.hpp"
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
    // Size: 0xb8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CMotionSearchDB
    {
    public:
        animgraphlib::CMotionSearchNode m_rootNode; // 0x0        
        animgraphlib::CProductQuantizer m_residualQuantizer; // 0x80        
        // m_codeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::MotionDBIndex> m_codeIndices;
        char m_codeIndices[0x18]; // 0xa0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMotionSearchDB, m_rootNode) == 0x0);
    static_assert(offsetof(CMotionSearchDB, m_residualQuantizer) == 0x80);
    static_assert(offsetof(CMotionSearchDB, m_codeIndices) == 0xa0);
    
    static_assert(sizeof(CMotionSearchDB) == 0xb8);
};
