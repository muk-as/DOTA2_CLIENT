#pragma once
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
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
    // Size: 0x78
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CWayPointHelperUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x68[0x4]; // 0x68
        float m_flStartCycle; // 0x6c        
        float m_flEndCycle; // 0x70        
        bool m_bOnlyGoals; // 0x74        
        bool m_bPreventOvershoot; // 0x75        
        bool m_bPreventUndershoot; // 0x76        
        [[maybe_unused]] std::uint8_t pad_0x77[0x1];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CWayPointHelperUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CWayPointHelperUpdateNode) == 0x78);
};
