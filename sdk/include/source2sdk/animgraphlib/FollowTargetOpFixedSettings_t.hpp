#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
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
    struct FollowTargetOpFixedSettings_t
    {
    public:
        int32_t m_boneIndex; // 0x0        
        bool m_bBoneTarget; // 0x4        
        [[maybe_unused]] std::uint8_t pad_0x05[0x3]; // 0x5
        int32_t m_boneTargetIndex; // 0x8        
        bool m_bWorldCoodinateTarget; // 0xc        
        bool m_bMatchTargetOrientation; // 0xd        
        [[maybe_unused]] std::uint8_t pad_0x0e[0x2];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FollowTargetOpFixedSettings_t, m_boneIndex) == 0x0);
    static_assert(offsetof(FollowTargetOpFixedSettings_t, m_bBoneTarget) == 0x4);
    static_assert(offsetof(FollowTargetOpFixedSettings_t, m_boneTargetIndex) == 0x8);
    static_assert(offsetof(FollowTargetOpFixedSettings_t, m_bWorldCoodinateTarget) == 0xc);
    static_assert(offsetof(FollowTargetOpFixedSettings_t, m_bMatchTargetOrientation) == 0xd);
    
    static_assert(sizeof(FollowTargetOpFixedSettings_t) == 0x10);
};
