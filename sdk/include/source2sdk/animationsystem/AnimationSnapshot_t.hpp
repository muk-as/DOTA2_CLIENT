#pragma once
#include "source2sdk/animationsystem/AnimationSnapshotBase_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x120
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct AnimationSnapshot_t : public animationsystem::AnimationSnapshotBase_t
    {
    public:
        int32_t m_nEntIndex; // 0x110        
        [[maybe_unused]] std::uint8_t pad_0x114[0x4]; // 0x114
        CUtlString m_modelName; // 0x118        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in AnimationSnapshot_t because it is not a standard-layout class
    static_assert(sizeof(AnimationSnapshot_t) == 0x120);
};
