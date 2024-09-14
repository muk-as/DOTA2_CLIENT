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
    // Size: 0x28
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VMixVocoderDesc_t
    {
    public:
        int32_t m_nBandCount; // 0x0        
        float m_flBandwidth; // 0x4        
        float m_fldBModGain; // 0x8        
        float m_flFreqRangeStart; // 0xc        
        float m_flFreqRangeEnd; // 0x10        
        float m_fldBUnvoicedGain; // 0x14        
        float m_flAttackTimeMS; // 0x18        
        float m_flReleaseTimeMS; // 0x1c        
        int32_t m_nDebugBand; // 0x20        
        bool m_bPeakMode; // 0x24        
        [[maybe_unused]] std::uint8_t pad_0x25[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VMixVocoderDesc_t, m_nBandCount) == 0x0);
    static_assert(offsetof(VMixVocoderDesc_t, m_flBandwidth) == 0x4);
    static_assert(offsetof(VMixVocoderDesc_t, m_fldBModGain) == 0x8);
    static_assert(offsetof(VMixVocoderDesc_t, m_flFreqRangeStart) == 0xc);
    static_assert(offsetof(VMixVocoderDesc_t, m_flFreqRangeEnd) == 0x10);
    static_assert(offsetof(VMixVocoderDesc_t, m_fldBUnvoicedGain) == 0x14);
    static_assert(offsetof(VMixVocoderDesc_t, m_flAttackTimeMS) == 0x18);
    static_assert(offsetof(VMixVocoderDesc_t, m_flReleaseTimeMS) == 0x1c);
    static_assert(offsetof(VMixVocoderDesc_t, m_nDebugBand) == 0x20);
    static_assert(offsetof(VMixVocoderDesc_t, m_bPeakMode) == 0x24);
    
    static_assert(sizeof(VMixVocoderDesc_t) == 0x28);
};
