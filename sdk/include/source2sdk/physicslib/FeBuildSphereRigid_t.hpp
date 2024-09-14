#pragma once
#include "source2sdk/physicslib/FeSphereRigid_t.hpp"
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
    // Size: 0x30
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeBuildSphereRigid_t : public physicslib::FeSphereRigid_t
    {
    public:
        int32_t m_nPriority; // 0x20        
        uint32_t m_nVertexMapHash; // 0x24        
        [[maybe_unused]] std::uint8_t pad_0x28[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in FeBuildSphereRigid_t because it is not a standard-layout class
    static_assert(sizeof(FeBuildSphereRigid_t) == 0x30);
};
