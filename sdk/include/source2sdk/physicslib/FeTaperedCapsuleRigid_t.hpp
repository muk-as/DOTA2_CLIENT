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
    // Size: 0x30
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeTaperedCapsuleRigid_t
    {
    public:
        fltx4 vSphere[2]; // 0x0        
        uint16_t nNode; // 0x20        
        uint16_t nCollisionMask; // 0x22        
        uint16_t nVertexMapIndex; // 0x24        
        uint16_t nFlags; // 0x26        
        [[maybe_unused]] std::uint8_t pad_0x28[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeTaperedCapsuleRigid_t, vSphere) == 0x0);
    static_assert(offsetof(FeTaperedCapsuleRigid_t, nNode) == 0x20);
    static_assert(offsetof(FeTaperedCapsuleRigid_t, nCollisionMask) == 0x22);
    static_assert(offsetof(FeTaperedCapsuleRigid_t, nVertexMapIndex) == 0x24);
    static_assert(offsetof(FeTaperedCapsuleRigid_t, nFlags) == 0x26);
    
    static_assert(sizeof(FeTaperedCapsuleRigid_t) == 0x30);
};
