#pragma once
#include "source2sdk/physicslib/FeBoxRigid_t.hpp"
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
    // Standard-layout class: false
    // Size: 0x50
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeBuildBoxRigid_t : public physicslib::FeBoxRigid_t
    {
    public:
        int32_t m_nPriority; // 0x40        
        uint32_t m_nVertexMapHash; // 0x44        
        [[maybe_unused]] std::uint8_t pad_0x48[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in FeBuildBoxRigid_t because it is not a standard-layout class
    static_assert(sizeof(FeBuildBoxRigid_t) == 0x50);
};
