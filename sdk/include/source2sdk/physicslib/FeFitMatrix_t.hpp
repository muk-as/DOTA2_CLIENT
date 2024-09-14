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
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x40
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeFitMatrix_t
    {
    public:
        CTransform bone; // 0x0        
        Vector vCenter; // 0x20        
        uint16_t nEnd; // 0x2c        
        uint16_t nNode; // 0x2e        
        uint16_t nBeginDynamic; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x32[0xe];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeFitMatrix_t, bone) == 0x0);
    static_assert(offsetof(FeFitMatrix_t, vCenter) == 0x20);
    static_assert(offsetof(FeFitMatrix_t, nEnd) == 0x2c);
    static_assert(offsetof(FeFitMatrix_t, nNode) == 0x2e);
    static_assert(offsetof(FeFitMatrix_t, nBeginDynamic) == 0x30);
    
    static_assert(sizeof(FeFitMatrix_t) == 0x40);
};
