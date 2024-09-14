#pragma once
#include "source2sdk/animgraphlib/AnimNodeNetworkMode.hpp"
#include "source2sdk/animgraphlib/CAnimNodePath.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x58
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimUpdateNodeBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x18]; // 0x0
        animgraphlib::CAnimNodePath m_nodePath; // 0x18        
        animgraphlib::AnimNodeNetworkMode m_networkMode; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x4c[0x4]; // 0x4c
        CUtlString m_name; // 0x50        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimUpdateNodeBase, m_nodePath) == 0x18);
    static_assert(offsetof(CAnimUpdateNodeBase, m_networkMode) == 0x48);
    static_assert(offsetof(CAnimUpdateNodeBase, m_name) == 0x50);
    
    static_assert(sizeof(CAnimUpdateNodeBase) == 0x58);
};
