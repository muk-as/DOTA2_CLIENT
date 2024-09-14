#pragma once
#include "source2sdk/animgraphlib/CAnimUpdateNodeRef.hpp"
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
    // Size: 0x18
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CStateNodeStateData
    {
    public:
        animgraphlib::CAnimUpdateNodeRef m_pChild; // 0x0        
        // start of bitfield block at 0x10
        uint8_t m_bExclusiveRootMotion: 1;
        uint8_t m_bExclusiveRootMotionFirstFrame: 1;
        // end of bitfield block // 2 bits
        [[maybe_unused]] std::uint8_t pad_0x11[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CStateNodeStateData, m_pChild) == 0x0);
    // Cannot assert offset of bitfield CStateNodeStateData::m_bExclusiveRootMotion
    // Cannot assert offset of bitfield CStateNodeStateData::m_bExclusiveRootMotionFirstFrame
    
    static_assert(sizeof(CStateNodeStateData) == 0x18);
};
