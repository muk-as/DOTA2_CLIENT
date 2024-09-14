#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x14
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class VelocitySampler
    {
    public:
        Vector m_prevSample; // 0x0        
        entity2::GameTime_t m_fPrevSampleTime; // 0xc        
        float m_fIdealSampleRate; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VelocitySampler, m_prevSample) == 0x0);
    static_assert(offsetof(VelocitySampler, m_fPrevSampleTime) == 0xc);
    static_assert(offsetof(VelocitySampler, m_fIdealSampleRate) == 0x10);
    
    static_assert(sizeof(VelocitySampler) == 0x14);
};
