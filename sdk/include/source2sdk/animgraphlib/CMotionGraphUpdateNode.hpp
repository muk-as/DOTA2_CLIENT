#pragma once
#include "source2sdk/animgraphlib/CLeafUpdateNode.hpp"
#include "source2sdk/animgraphlib/CMotionGraph.hpp"
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
    // Size: 0x68
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CMotionGraphUpdateNode : public animgraphlib::CLeafUpdateNode
    {
    public:
        // m_pMotionGraph has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSmartPtr<animgraphlib::CMotionGraph> m_pMotionGraph;
        char m_pMotionGraph[0x8]; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x60[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMotionGraphUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CMotionGraphUpdateNode) == 0x68);
};
