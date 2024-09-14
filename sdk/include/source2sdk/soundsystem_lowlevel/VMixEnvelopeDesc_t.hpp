#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0xc
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VMixEnvelopeDesc_t
    {
    public:
        float m_flAttackTimeMS; // 0x0        
        float m_flHoldTimeMS; // 0x4        
        float m_flReleaseTimeMS; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VMixEnvelopeDesc_t, m_flAttackTimeMS) == 0x0);
    static_assert(offsetof(VMixEnvelopeDesc_t, m_flHoldTimeMS) == 0x4);
    static_assert(offsetof(VMixEnvelopeDesc_t, m_flReleaseTimeMS) == 0x8);
    
    static_assert(sizeof(VMixEnvelopeDesc_t) == 0xc);
};
