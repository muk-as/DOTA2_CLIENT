#pragma once
#include "source2sdk/animgraphlib/CLeafUpdateNode.hpp"
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
    // Standard-layout class: false
    // Size: 0x78
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSequenceUpdateNodeBase : public animgraphlib::CLeafUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x58[0x14]; // 0x58
        float m_playbackSpeed; // 0x6c        
        bool m_bLoop; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0x71[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSequenceUpdateNodeBase because it is not a standard-layout class
    static_assert(sizeof(CSequenceUpdateNodeBase) == 0x78);
};
