#pragma once
#include "source2sdk/animationsystem/AnimationDecodeDebugDumpElement_t.hpp"
#include "source2sdk/animationsystem/AnimationSnapshotType_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x110
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct AnimationSnapshotBase_t
    {
    public:
        float m_flRealTime; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0xc]; // 0x4
        matrix3x4a_t m_rootToWorld; // 0x10        
        bool m_bBonesInWorldSpace; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x41[0x7]; // 0x41
        // m_boneSetupMask has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_boneSetupMask;
        char m_boneSetupMask[0x18]; // 0x48        
        // m_boneTransforms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<matrix3x4a_t> m_boneTransforms;
        char m_boneTransforms[0x18]; // 0x60        
        // m_flexControllers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_flexControllers;
        char m_flexControllers[0x18]; // 0x78        
        animationsystem::AnimationSnapshotType_t m_SnapshotType; // 0x90        
        bool m_bHasDecodeDump; // 0x94        
        [[maybe_unused]] std::uint8_t pad_0x95[0x3]; // 0x95
        animationsystem::AnimationDecodeDebugDumpElement_t m_DecodeDump; // 0x98        
        [[maybe_unused]] std::uint8_t pad_0x108[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AnimationSnapshotBase_t, m_flRealTime) == 0x0);
    static_assert(offsetof(AnimationSnapshotBase_t, m_rootToWorld) == 0x10);
    static_assert(offsetof(AnimationSnapshotBase_t, m_bBonesInWorldSpace) == 0x40);
    static_assert(offsetof(AnimationSnapshotBase_t, m_boneSetupMask) == 0x48);
    static_assert(offsetof(AnimationSnapshotBase_t, m_boneTransforms) == 0x60);
    static_assert(offsetof(AnimationSnapshotBase_t, m_flexControllers) == 0x78);
    static_assert(offsetof(AnimationSnapshotBase_t, m_SnapshotType) == 0x90);
    static_assert(offsetof(AnimationSnapshotBase_t, m_bHasDecodeDump) == 0x94);
    static_assert(offsetof(AnimationSnapshotBase_t, m_DecodeDump) == 0x98);
    
    static_assert(sizeof(AnimationSnapshotBase_t) == 0x110);
};
