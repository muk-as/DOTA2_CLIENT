#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x68
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct Dop26_t
    {
    public:
        float m_flSupport[26]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(Dop26_t, m_flSupport) == 0x0);
    
    static_assert(sizeof(Dop26_t) == 0x68);
};
