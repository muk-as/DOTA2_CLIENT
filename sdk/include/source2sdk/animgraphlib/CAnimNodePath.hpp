#pragma once
#include "source2sdk/modellib/AnimNodeID.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x30
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimNodePath
    {
    public:
        modellib::AnimNodeID m_path[11]; // 0x0        
        int32_t m_nCount; // 0x2c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimNodePath, m_path) == 0x0);
    static_assert(offsetof(CAnimNodePath, m_nCount) == 0x2c);
    
    static_assert(sizeof(CAnimNodePath) == 0x30);
};
