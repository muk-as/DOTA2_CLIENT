#pragma once
#include "source2sdk/physicslib/RnCapsule_t.hpp"
#include "source2sdk/physicslib/RnShapeDesc_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x38
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct RnCapsuleDesc_t : public physicslib::RnShapeDesc_t
    {
    public:
        physicslib::RnCapsule_t m_Capsule; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x34[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in RnCapsuleDesc_t because it is not a standard-layout class
    static_assert(sizeof(RnCapsuleDesc_t) == 0x38);
};
