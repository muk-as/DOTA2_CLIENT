#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: vphysics2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::vphysics2
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct constraint_axislimit_t
    {
    public:
        float flMinRotation; // 0x0        
        float flMaxRotation; // 0x4        
        float flMotorTargetAngSpeed; // 0x8        
        float flMotorMaxTorque; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(constraint_axislimit_t, flMinRotation) == 0x0);
    static_assert(offsetof(constraint_axislimit_t, flMaxRotation) == 0x4);
    static_assert(offsetof(constraint_axislimit_t, flMotorTargetAngSpeed) == 0x8);
    static_assert(offsetof(constraint_axislimit_t, flMotorMaxTorque) == 0xc);
    
    static_assert(sizeof(constraint_axislimit_t) == 0x10);
};
