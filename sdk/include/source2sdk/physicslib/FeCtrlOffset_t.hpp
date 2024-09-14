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
    // Size: 0x10
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeCtrlOffset_t
    {
    public:
        Vector vOffset; // 0x0        
        uint16_t nCtrlParent; // 0xc        
        uint16_t nCtrlChild; // 0xe        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeCtrlOffset_t, vOffset) == 0x0);
    static_assert(offsetof(FeCtrlOffset_t, nCtrlParent) == 0xc);
    static_assert(offsetof(FeCtrlOffset_t, nCtrlChild) == 0xe);
    
    static_assert(sizeof(FeCtrlOffset_t) == 0x10);
};
