#pragma once
#include "source2sdk/soundsystem_lowlevel/VMixPannerType_t.hpp"
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
    // Size: 0x8
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VMixPannerDesc_t
    {
    public:
        soundsystem_lowlevel::VMixPannerType_t m_type; // 0x0        
        float m_flStrength; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VMixPannerDesc_t, m_type) == 0x0);
    static_assert(offsetof(VMixPannerDesc_t, m_flStrength) == 0x4);
    
    static_assert(sizeof(VMixPannerDesc_t) == 0x8);
};
