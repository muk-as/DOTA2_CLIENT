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
    struct VMixFreeverbDesc_t
    {
    public:
        float m_flRoomSize; // 0x0        
        float m_flDamp; // 0x4        
        float m_flWidth; // 0x8        
        float m_flLateReflections; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VMixFreeverbDesc_t, m_flRoomSize) == 0x0);
    static_assert(offsetof(VMixFreeverbDesc_t, m_flDamp) == 0x4);
    static_assert(offsetof(VMixFreeverbDesc_t, m_flWidth) == 0x8);
    static_assert(offsetof(VMixFreeverbDesc_t, m_flLateReflections) == 0xc);
    
    static_assert(sizeof(VMixFreeverbDesc_t) == 0x10);
};
