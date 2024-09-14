#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VPhysXRange_t
    {
    public:
        float m_flMin; // 0x0        
        float m_flMax; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VPhysXRange_t, m_flMin) == 0x0);
    static_assert(offsetof(VPhysXRange_t, m_flMax) == 0x4);
    
    static_assert(sizeof(VPhysXRange_t) == 0x8);
};
