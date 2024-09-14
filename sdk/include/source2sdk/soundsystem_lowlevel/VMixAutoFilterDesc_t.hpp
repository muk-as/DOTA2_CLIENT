#pragma once
#include "source2sdk/soundsystem_lowlevel/VMixFilterDesc_t.hpp"
#include "source2sdk/soundsystem_lowlevel/VMixLFOShape_t.hpp"
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
    // Size: 0x2c
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VMixAutoFilterDesc_t
    {
    public:
        float m_flEnvelopeAmount; // 0x0        
        float m_flAttackTimeMS; // 0x4        
        float m_flReleaseTimeMS; // 0x8        
        soundsystem_lowlevel::VMixFilterDesc_t m_filter; // 0xc        
        float m_flLFOAmount; // 0x1c        
        float m_flLFORate; // 0x20        
        float m_flPhase; // 0x24        
        soundsystem_lowlevel::VMixLFOShape_t m_nLFOShape; // 0x28        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VMixAutoFilterDesc_t, m_flEnvelopeAmount) == 0x0);
    static_assert(offsetof(VMixAutoFilterDesc_t, m_flAttackTimeMS) == 0x4);
    static_assert(offsetof(VMixAutoFilterDesc_t, m_flReleaseTimeMS) == 0x8);
    static_assert(offsetof(VMixAutoFilterDesc_t, m_filter) == 0xc);
    static_assert(offsetof(VMixAutoFilterDesc_t, m_flLFOAmount) == 0x1c);
    static_assert(offsetof(VMixAutoFilterDesc_t, m_flLFORate) == 0x20);
    static_assert(offsetof(VMixAutoFilterDesc_t, m_flPhase) == 0x24);
    static_assert(offsetof(VMixAutoFilterDesc_t, m_nLFOShape) == 0x28);
    
    static_assert(sizeof(VMixAutoFilterDesc_t) == 0x2c);
};
