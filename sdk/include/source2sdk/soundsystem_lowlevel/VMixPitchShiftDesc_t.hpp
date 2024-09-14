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
    // Size: 0x10
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VMixPitchShiftDesc_t
    {
    public:
        int32_t m_nGrainSampleCount; // 0x0        
        float m_flPitchShift; // 0x4        
        int32_t m_nQuality; // 0x8        
        int32_t m_nProcType; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VMixPitchShiftDesc_t, m_nGrainSampleCount) == 0x0);
    static_assert(offsetof(VMixPitchShiftDesc_t, m_flPitchShift) == 0x4);
    static_assert(offsetof(VMixPitchShiftDesc_t, m_nQuality) == 0x8);
    static_assert(offsetof(VMixPitchShiftDesc_t, m_nProcType) == 0xc);
    
    static_assert(sizeof(VMixPitchShiftDesc_t) == 0x10);
};
