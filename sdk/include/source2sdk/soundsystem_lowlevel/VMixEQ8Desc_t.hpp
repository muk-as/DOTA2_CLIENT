#pragma once
#include "source2sdk/soundsystem_lowlevel/VMixFilterDesc_t.hpp"
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
    // Size: 0x80
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VMixEQ8Desc_t
    {
    public:
        soundsystem_lowlevel::VMixFilterDesc_t m_stages[8]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VMixEQ8Desc_t, m_stages) == 0x0);
    
    static_assert(sizeof(VMixEQ8Desc_t) == 0x80);
};
