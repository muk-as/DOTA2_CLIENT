#pragma once
#include "source2sdk/animgraphlib/CBlendCurve.hpp"
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
    // Size: 0x1c
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CStateNodeTransitionData
    {
    public:
        animgraphlib::CBlendCurve m_curve; // 0x0        
        // m_blendDuration has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimValue<float> m_blendDuration;
        char m_blendDuration[0x8]; // 0x8        
        // m_resetCycleValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimValue<float> m_resetCycleValue;
        char m_resetCycleValue[0x8]; // 0x10        
        // start of bitfield block at 0x18
        uint8_t m_bReset: 1;
        uint8_t m_resetCycleOption: 3;
        // end of bitfield block // 4 bits
        [[maybe_unused]] std::uint8_t pad_0x19[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CStateNodeTransitionData, m_curve) == 0x0);
    static_assert(offsetof(CStateNodeTransitionData, m_blendDuration) == 0x8);
    static_assert(offsetof(CStateNodeTransitionData, m_resetCycleValue) == 0x10);
    // Cannot assert offset of bitfield CStateNodeTransitionData::m_bReset
    // Cannot assert offset of bitfield CStateNodeTransitionData::m_resetCycleOption
    
    static_assert(sizeof(CStateNodeTransitionData) == 0x1c);
};
