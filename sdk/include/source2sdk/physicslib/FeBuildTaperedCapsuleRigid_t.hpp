#pragma once
#include "source2sdk/physicslib/FeTaperedCapsuleRigid_t.hpp"
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
    // Size: 0x40
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeBuildTaperedCapsuleRigid_t : public physicslib::FeTaperedCapsuleRigid_t
    {
    public:
        int32_t m_nPriority; // 0x30        
        uint32_t m_nVertexMapHash; // 0x34        
        [[maybe_unused]] std::uint8_t pad_0x38[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in FeBuildTaperedCapsuleRigid_t because it is not a standard-layout class
    static_assert(sizeof(FeBuildTaperedCapsuleRigid_t) == 0x40);
};
