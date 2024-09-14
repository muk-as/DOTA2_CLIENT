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
    // Size: 0x18
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct SkeletonBoneBounds_t
    {
    public:
        Vector m_vecCenter; // 0x0        
        Vector m_vecSize; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(SkeletonBoneBounds_t, m_vecCenter) == 0x0);
    static_assert(offsetof(SkeletonBoneBounds_t, m_vecSize) == 0xc);
    
    static_assert(sizeof(SkeletonBoneBounds_t) == 0x18);
};
