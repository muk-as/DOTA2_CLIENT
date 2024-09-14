#pragma once
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
    // Size: 0x58
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CEditableMotionGraph : public animgraphlib::CMotionGraph
    {
    public:
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CEditableMotionGraph) == 0x58);
};
