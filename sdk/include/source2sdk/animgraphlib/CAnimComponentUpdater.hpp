#pragma once
#include "source2sdk/animgraphlib/AnimNodeNetworkMode.hpp"
#include "source2sdk/modellib/AnimComponentID.hpp"
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
    // Size: 0x30
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimComponentUpdater
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x18]; // 0x0
        CUtlString m_name; // 0x18        
        modellib::AnimComponentID m_id; // 0x20        
        animgraphlib::AnimNodeNetworkMode m_networkMode; // 0x24        
        bool m_bStartEnabled; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x29[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimComponentUpdater, m_name) == 0x18);
    static_assert(offsetof(CAnimComponentUpdater, m_id) == 0x20);
    static_assert(offsetof(CAnimComponentUpdater, m_networkMode) == 0x24);
    static_assert(offsetof(CAnimComponentUpdater, m_bStartEnabled) == 0x28);
    
    static_assert(sizeof(CAnimComponentUpdater) == 0x30);
};
