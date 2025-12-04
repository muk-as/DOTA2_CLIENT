#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/AnimationDecodeDebugDumpElement_t.hpp"
#include "source2sdk/animationsystem/AnimationSnapshotType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AnimationSnapshotBase_t
        {
        public:
            float m_flRealTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            matrix3x4a_t m_rootToWorld; // 0x_            
            bool m_bBonesInWorldSpace; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_boneSetupMask has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_boneSetupMask;
            char m_boneSetupMask[0x_]; // 0x_            
            // m_boneTransforms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<matrix3x4a_t> m_boneTransforms;
            char m_boneTransforms[0x_]; // 0x_            
            // m_flexControllers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flexControllers;
            char m_flexControllers[0x_]; // 0x_            
            source2sdk::animationsystem::AnimationSnapshotType_t m_SnapshotType; // 0x_            
            bool m_bHasDecodeDump; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animationsystem::AnimationDecodeDebugDumpElement_t m_DecodeDump; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::AnimationSnapshotBase_t, m_flRealTime) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::AnimationSnapshotBase_t, m_rootToWorld) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::AnimationSnapshotBase_t, m_bBonesInWorldSpace) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::AnimationSnapshotBase_t, m_boneSetupMask) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::AnimationSnapshotBase_t, m_boneTransforms) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::AnimationSnapshotBase_t, m_flexControllers) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::AnimationSnapshotBase_t, m_SnapshotType) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::AnimationSnapshotBase_t, m_bHasDecodeDump) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::AnimationSnapshotBase_t, m_DecodeDump) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::AnimationSnapshotBase_t) == 0x_);
    };
};
