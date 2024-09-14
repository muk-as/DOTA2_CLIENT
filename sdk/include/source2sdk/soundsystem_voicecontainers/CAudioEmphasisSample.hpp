#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAudioEmphasisSample
    {
    public:
        float m_flTime; // 0x0        
        float m_flValue; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAudioEmphasisSample, m_flTime) == 0x0);
    static_assert(offsetof(CAudioEmphasisSample, m_flValue) == 0x4);
    
    static_assert(sizeof(CAudioEmphasisSample) == 0x8);
};
