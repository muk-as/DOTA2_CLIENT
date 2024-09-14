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
    struct FeBoxRigid_t
    {
    public:
        CTransform tmFrame2; // 0x0        
        uint16_t nNode; // 0x20        
        uint16_t nCollisionMask; // 0x22        
        Vector vSize; // 0x24        
        uint16_t nVertexMapIndex; // 0x30        
        uint16_t nFlags; // 0x32        
        [[maybe_unused]] std::uint8_t pad_0x34[0xc];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeBoxRigid_t, tmFrame2) == 0x0);
    static_assert(offsetof(FeBoxRigid_t, nNode) == 0x20);
    static_assert(offsetof(FeBoxRigid_t, nCollisionMask) == 0x22);
    static_assert(offsetof(FeBoxRigid_t, vSize) == 0x24);
    static_assert(offsetof(FeBoxRigid_t, nVertexMapIndex) == 0x30);
    static_assert(offsetof(FeBoxRigid_t, nFlags) == 0x32);
    
    static_assert(sizeof(FeBoxRigid_t) == 0x40);
};
