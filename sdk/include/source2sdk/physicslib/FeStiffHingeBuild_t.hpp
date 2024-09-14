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
    // Size: 0x1c
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeStiffHingeBuild_t
    {
    public:
        float flMaxAngle; // 0x0        
        float flStrength; // 0x4        
        float flMotionBias[3]; // 0x8        
        uint16_t nNode[3]; // 0x14        
        [[maybe_unused]] std::uint8_t pad_0x1a[0x2];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeStiffHingeBuild_t, flMaxAngle) == 0x0);
    static_assert(offsetof(FeStiffHingeBuild_t, flStrength) == 0x4);
    static_assert(offsetof(FeStiffHingeBuild_t, flMotionBias) == 0x8);
    static_assert(offsetof(FeStiffHingeBuild_t, nNode) == 0x14);
    
    static_assert(sizeof(FeStiffHingeBuild_t) == 0x1c);
};
