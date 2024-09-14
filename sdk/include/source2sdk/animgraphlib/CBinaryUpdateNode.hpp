#pragma once
#include "source2sdk/animgraphlib/BinaryNodeTiming.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeBase.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x88
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CBinaryUpdateNode : public animgraphlib::CAnimUpdateNodeBase
    {
    public:
        animgraphlib::CAnimUpdateNodeRef m_pChild1; // 0x58        
        animgraphlib::CAnimUpdateNodeRef m_pChild2; // 0x68        
        animgraphlib::BinaryNodeTiming m_timingBehavior; // 0x78        
        float m_flTimingBlend; // 0x7c        
        bool m_bResetChild1; // 0x80        
        bool m_bResetChild2; // 0x81        
        [[maybe_unused]] std::uint8_t pad_0x82[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBinaryUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CBinaryUpdateNode) == 0x88);
};
