#pragma once
#include "source2sdk/vphysics2/constraint_axislimit_t.hpp"
#include "source2sdk/vphysics2/constraint_breakableparams_t.hpp"
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
    // Size: 0x40
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct constraint_hingeparams_t
    {
    public:
        Vector worldPosition; // 0x0        
        Vector worldAxisDirection; // 0xc        
        vphysics2::constraint_axislimit_t hingeAxis; // 0x18        
        vphysics2::constraint_breakableparams_t constraint; // 0x28        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(constraint_hingeparams_t, worldPosition) == 0x0);
    static_assert(offsetof(constraint_hingeparams_t, worldAxisDirection) == 0xc);
    static_assert(offsetof(constraint_hingeparams_t, hingeAxis) == 0x18);
    static_assert(offsetof(constraint_hingeparams_t, constraint) == 0x28);
    
    static_assert(sizeof(constraint_hingeparams_t) == 0x40);
};
